# ppa源

```shell
sudo add-apt-repository ppa:ubuntu-toolchain-r/test
```

# 替换国内代理

修改 /etc/apt/sources.list.d/ubuntu-toolchain-r-ubuntu-test-focal.list 下面需要代理的仓库地址，将 http://ppa.launchpad.net 换成 https://launchpad.proxy.ustclug.org

# 安装13

```shell
sudo apt install g++-13 gcc-13 -y
```

# 设定优先级,支持环境多gcc版本

ubuntu20默认是9

```shell
sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-9 9
sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-13 13

sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-9 9
sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-13 13
```

# 验证版本
```shell
gcc -v
g++ -v
```

# clang同理
```shell
sudo apt install clang-18 -y
```

# 设定优先级,支持环境多clang版本

```shell
sudo update-alternatives --install /usr/bin/clang++ clang++ /usr/bin/clang++-12 12
sudo update-alternatives --install /usr/bin/clang++ clang++ /usr/bin/clang++-18 18

sudo update-alternatives --install /usr/bin/clang clang /usr/bin/clang-12 12
sudo update-alternatives --install /usr/bin/clang clang /usr/bin/clang-18 18
```

# (可选)clang-tidy/clang-format
校验和格式化
```shell
sudo apt install clang-tidy-18 clang-format-18 -y
```

# 设定优先级,支持环境多clang-tidy/clang-format版本

```shell
sudo update-alternatives --install /usr/bin/clang-tidy clang-tidy /usr/bin/clang-tidy-12 12
sudo update-alternatives --install /usr/bin/clang-tidy clang-tidy /usr/bin/clang-tidy-18 18

sudo update-alternatives --install /usr/bin/clang-format clang-format /usr/bin/clang-format-12 12
sudo update-alternatives --install /usr/bin/clang-format clang-format /usr/bin/clang-format-18 18
```

# clangd同理
```shell
sudo apt install clangd-18 -y
```

# 设定优先级,支持环境多clangd版本
```shell
sudo update-alternatives --install /usr/bin/clangd clangd /usr/bin/clangd-12 12
sudo update-alternatives --install /usr/bin/clangd clangd /usr/bin/clangd-18 18


```



