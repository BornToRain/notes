#include "fast_pimpl.hpp"

#include <iostream>

class Demo::Impl {
public:
  explicit Impl() { name = "demo_impl"; }
  ~Impl() = default;
  void Run() { std::cout << name << "\n"; }

private:
  std::string name;
};

Demo::Demo() {
  static_assert(sizeof(Impl) <= sizeof(storage_), "存储对象字节空间不够");
  new (&storage_) Impl();
}

Demo::~Demo() { std::destroy_at(GetImpl()); }

Demo::Impl *Demo::GetImpl() {
  return std::launder(reinterpret_cast<Demo::Impl *>(&storage_));
}

void Demo::Run() { GetImpl()->Run(); }

int main(int, char **) {
  Demo demo;
  demo.Run();

  return 0;
}