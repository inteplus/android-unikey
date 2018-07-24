#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_foomum_minhtri_unikeyboard_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++. I am Android-Unikey";
    return env->NewStringUTF(hello.c_str());
}
