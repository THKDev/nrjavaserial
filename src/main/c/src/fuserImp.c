#include "gnu_io_CommPortIdentifier.h"

JNIEXPORT jstring JNICALL Java_gnu_io_CommPortIdentifier_native_1psmisc_1report_1owner (JNIEnv *env, jobject obj, jstring arg)
{
    return (*env)->NewStringUTF(env, "Unknown Application");
}
