package com.paipeng.testjni;

/**
 * Created by paipeng on 18/02/16.
 */
public class JniInterface {
    static {
        System.loadLibrary("hello-jni");
    }
    public native String stringFromJNI();
}
