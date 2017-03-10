#include <jni.h>
#include <string>
#include "math_lib.h"


#ifdef __cplusplus
extern "C" {
#endif


JNIEXPORT jstring JNICALL
Java_com_zhangwx_cmakeforjni_NativeLibrary_stringFromJNI(JNIEnv *env, jobject instance) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

JNIEXPORT jint JNICALL
Java_com_zhangwx_cmakeforjni_NativeLibrary_getTypeValue(JNIEnv *env, jobject instance, jint type) {

    JniMath *jniMath = new JniMath();
    return jniMath->getValue(type);

}


#ifdef __cplusplus
}
#endif
