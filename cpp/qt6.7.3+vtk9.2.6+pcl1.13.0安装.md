# qt6

```shell
sudo apt install libxcb-cursor-dev
```

# vtk9.2.6

pcl1.13.0版本需要 *<vtkMuteLock.h>*,9.2.6往后版本已经删除.往前版本又不兼容gcc-13/clang-18.

```shell
git clone -b v9.2.0 --recursive https://gitlab.kitware.com/vtk/vtk.git ~/vtk

cd ~/vtk && mkdir build && cd build
ccmake -G Ninja ..
```

弹出页面按c生成,*VTK_GROUP_ENABLE_Qt*选YES.接着按c继续生成,报错后e返回修改如图.
*Qt6QmlTools_DIR*路径补上,*VTK_QT_VERSION*改为6,按c生成后q退出.
![image](1.png)


```shell
cmake .
cmake --build .
# 如果需要安装到非/usr/local/目录下,需要指定CMAKE_INSTALL_PREFIX=xxx
cmake --install .
```

# pcl1.13.0

```shell
git clone -b 1.13.0 https://github.com/PointCloudLibrary/pcl.git ~/pcl

cd ~/pcl && mkdir build && cd build
cmake -G Ninja -DCMAKE_BUILD_TYPE=Release ..
# 数字量力而行
make -j6
# 如果需要安装到非/usr/local/目录下,需要指定CMAKE_INSTALL_PREFIX=xxx
sudo make install
```