# 定义当前模块路径(必须在文件开头，只需要定义一次)
LOCAL_PATH := ${call my-dir}

# 清空当前环境变量(LOCAL_PATH 除外)
include ${CLEAR_VARS}

# 当前模块名(这里会生成libnative-lib.so)
LOCAL_MODULE := native-lib

# 当前模块包含的源代码文件
LOCAL_SRC_FILES := native-lib.cpp

# 编译成一个共享库
include $(BUILD_SHARED_LIBRARY)