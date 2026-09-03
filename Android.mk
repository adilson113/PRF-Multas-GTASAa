LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := PRFMultas

LOCAL_SRC_FILES := src/main.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/include

LOCAL_CPPFLAGS += -std=c++17

LOCAL_LDLIBS := -llog -ldl -landroid

include $(BUILD_SHARED_LIBRARY)
