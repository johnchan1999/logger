#!/bin/bash

# 打印当前工作目录
echo $(pwd)

# 定义 ROOT_PATH 为当前工作目录的上一级目录
ROOT_PATH=..
echo $ROOT_PATH

# 定义 BUILD_PATH 为 ROOT_PATH 下的 build 目录
BUILD_PATH=${ROOT_PATH}/build
echo $BUILD_PATH

# 检查 BUILD_PATH 是否不存在
if [ ! -d "$BUILD_PATH" ]; then
    mkdir -p "$BUILD_PATH"
else
    cd "$BUILD_PATH"
    make clean
fi

# 切换到 BUILD_PATH 目录
cd "$BUILD_PATH"

# 运行 cmake 和 make
cmake ..
make -j$(nproc)
