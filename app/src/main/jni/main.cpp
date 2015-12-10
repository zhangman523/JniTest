//
// Created by 张曼 on 15/12/10.
//

#include "com_code_jnitest_AndroidJni.h"

JNIEXPORT jstring JNICALL Java_com_code_jnitest_AndroidJni_hello
        (JNIEnv *env, jobject thiz) {
    return (*env).NewStringUTF("This just a test for Android Studio NDK JNI developer!");
}

JNIEXPORT jint JNICALL Java_com_code_jnitest_AndroidJni_plus
        (JNIEnv *env, jobject, jint i, jint j) {
    return i + j;
}