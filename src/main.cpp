#include <android/log.h>

#define LOG_TAG "PRFMultas"

extern "C" void PRFMultasInit()
{
    __android_log_print(
        ANDROID_LOG_INFO,
        LOG_TAG,
        "PRF Multas Mod iniciado!"
    );
}
