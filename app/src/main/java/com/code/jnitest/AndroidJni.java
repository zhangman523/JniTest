
package com.code.jnitest;

/**
 * Created by zhangman on 15/12/10 11:58.
 *
 * @author 张曼
 */
public class AndroidJni {

    static {
        System.loadLibrary("main");
    }

    public native String hello();

    public native int plus(int i, int j);
}
