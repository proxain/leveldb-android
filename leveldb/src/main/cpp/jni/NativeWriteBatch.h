/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_github_hf_leveldb_implementation_NativeWriteBatch */

#ifndef _Included_com_github_hf_leveldb_implementation_NativeWriteBatch
#define _Included_com_github_hf_leveldb_implementation_NativeWriteBatch
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_github_hf_leveldb_implementation_NativeWriteBatch
 * Method:    ncreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_github_hf_leveldb_implementation_NativeWriteBatch_nativeCreate
  (JNIEnv  __unused *, jclass __unused);

/*
 * Class:     com_github_hf_leveldb_implementation_NativeWriteBatch
 * Method:    nput
 * Signature: (J[B[B)V
 */
JNIEXPORT void JNICALL Java_com_github_hf_leveldb_implementation_NativeWriteBatch_nativePut
  (JNIEnv *, jclass __unused, jlong, jbyteArray, jbyteArray);

/*
 * Class:     com_github_hf_leveldb_implementation_NativeWriteBatch
 * Method:    ndelete
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL Java_com_github_hf_leveldb_implementation_NativeWriteBatch_nativeDelete
  (JNIEnv *, jclass __unused, jlong, jbyteArray);

/*
 * Class:     com_github_hf_leveldb_implementation_NativeWriteBatch
 * Method:    nclose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_github_hf_leveldb_implementation_NativeWriteBatch_nativeClose
  (JNIEnv  __unused *, jclass __unused, jlong);

#ifdef __cplusplus
}
#endif
#endif
