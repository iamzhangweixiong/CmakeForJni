package com.zhangwx.cmakeforjni;

/**
 * Created by Administrator on 2017/3/9.
 */

public class NativeLibrary {

    static {
        System.loadLibrary("native-lib");
    }

    public native String stringFromJNI();

    public native int getTypeValue(int type);
}
