//
// Created by Pai Peng on 18/02/16.
//

#ifndef TESTJNI_TEST2_H
#define TESTJNI_TEST2_H
#include <jni.h>


#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jstring JNICALL Java_com_paipeng_testjni_JniInterface_stringFromJNI
        (JNIEnv *env);
#ifdef __cplusplus
}
#endif
#endif //TESTJNI_TEST2_H
