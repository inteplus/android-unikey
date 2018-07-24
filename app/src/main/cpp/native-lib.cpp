#include <jni.h>
#include <string>
#include "unikey.h"

extern "C" JNIEXPORT jstring

JNICALL
Java_com_foomum_minhtri_unikeyboard_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    UnikeySetup();
    std::string hello = "Hello from C++. I am Android-Unikey. I have loaded Unikey. Now I am realeasing it.";
    UnikeyCleanup();
    return env->NewStringUTF(hello.c_str());
}
