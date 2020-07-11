#include <jni.h>
#include <string>
int test(){
    return 12;
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_taxiao_cn_ndk_MainActivity_stringFromJNI(JNIEnv *env, jobject thiz) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jint JNICALL
Java_com_taxiao_cn_ndk_MainActivity_intFromJNI(JNIEnv *env, jobject thiz) {
    return test();
}