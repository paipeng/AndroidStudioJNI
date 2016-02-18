//
// Created by Pai Peng on 18/02/16.
//

#include "test2.h"

jstring JNICALL Java_com_paipeng_testjni_JniInterface_stringFromJNI
        (JNIEnv *env) {
    return (*env)->NewStringUTF(env, "Hello JNI world");
}