#pragma once

#include <cstddef>

class Demo {
public:
  explicit Demo();
  ~Demo();
  Demo(const Demo &) = delete;
  Demo &operator=(const Demo &) = delete;

  void Run();

private:
  alignas(std::max_align_t) std::byte storage_[24];
  class Impl;
  Impl *GetImpl();
};