/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class DOtherSideJNI */

#ifndef _Included_DOtherSideJNI
#define _Included_DOtherSideJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     DOtherSideJNI
 * Method:    qapplication_create
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_DOtherSideJNI_qapplication_1create
  (JNIEnv *, jclass);

/*
 * Class:     DOtherSideJNI
 * Method:    qapplication_exec
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_DOtherSideJNI_qapplication_1exec
  (JNIEnv *, jclass);

/*
 * Class:     DOtherSideJNI
 * Method:    qapplication_quit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_DOtherSideJNI_qapplication_1quit
  (JNIEnv *, jclass);

/*
 * Class:     DOtherSideJNI
 * Method:    qapplication_delete
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_DOtherSideJNI_qapplication_1delete
  (JNIEnv *, jclass);

/*
 * Class:     DOtherSideJNI
 * Method:    qqmlapplicationengine_create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_DOtherSideJNI_qqmlapplicationengine_1create
  (JNIEnv *, jclass);

/*
 * Class:     DOtherSideJNI
 * Method:    qqmlapplicationengine_load_url
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_DOtherSideJNI_qqmlapplicationengine_1load_1url
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     DOtherSideJNI
 * Method:    qqmlapplicationengine_addImportPath
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_DOtherSideJNI_qqmlapplicationengine_1addImportPath
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     DOtherSideJNI
 * Method:    qqmlapplicationengine_rootContext
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_DOtherSideJNI_qqmlapplicationengine_1rootContext
  (JNIEnv *, jclass, jlong);

/*
 * Class:     DOtherSideJNI
 * Method:    qqmlapplicationengine_delete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_DOtherSideJNI_qqmlapplicationengine_1delete
  (JNIEnv *, jclass, jlong);

/*
 * Class:     DOtherSideJNI
 * Method:    qqmlcontext_setContextProperty
 * Signature: (JLjava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_DOtherSideJNI_qqmlcontext_1setContextProperty
  (JNIEnv *, jclass, jlong, jstring, jlong);

/*
 * Class:     DOtherSideJNI
 * Method:    qurl_create
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_DOtherSideJNI_qurl_1create
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     DOtherSideJNI
 * Method:    qurl_isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_DOtherSideJNI_qurl_1isValid
  (JNIEnv *, jclass, jlong);

/*
 * Class:     DOtherSideJNI
 * Method:    qurl_toString
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_DOtherSideJNI_qurl_1toString
  (JNIEnv *, jclass, jlong);

/*
 * Class:     DOtherSideJNI
 * Method:    qurl_delete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_DOtherSideJNI_qurl_1delete
  (JNIEnv *, jclass, jlong);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_DOtherSideJNI_qvariant_1create
  (JNIEnv *, jclass);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_create_int
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_DOtherSideJNI_qvariant_1create_1int
  (JNIEnv *, jclass, jint);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_create_bool
 * Signature: (Z)J
 */
JNIEXPORT jlong JNICALL Java_DOtherSideJNI_qvariant_1create_1bool
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_create_string
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_DOtherSideJNI_qvariant_1create_1string
  (JNIEnv *, jclass, jstring);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_create_qvariant
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_DOtherSideJNI_qvariant_1create_1qvariant
  (JNIEnv *, jclass, jlong);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_create_float
 * Signature: (F)J
 */
JNIEXPORT jlong JNICALL Java_DOtherSideJNI_qvariant_1create_1float
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_create_double
 * Signature: (D)J
 */
JNIEXPORT jlong JNICALL Java_DOtherSideJNI_qvariant_1create_1double
  (JNIEnv *, jclass, jdouble);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_setInt
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_DOtherSideJNI_qvariant_1setInt
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_setBool
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_DOtherSideJNI_qvariant_1setBool
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_setFloat
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_DOtherSideJNI_qvariant_1setFloat
  (JNIEnv *, jclass, jlong, jfloat);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_setDouble
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_DOtherSideJNI_qvariant_1setDouble
  (JNIEnv *, jclass, jlong, jdouble);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_setString
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_DOtherSideJNI_qvariant_1setString
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_setQObject
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_DOtherSideJNI_qvariant_1setQObject
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_isNull
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_DOtherSideJNI_qvariant_1isNull
  (JNIEnv *, jclass, jlong);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_delete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_DOtherSideJNI_qvariant_1delete
  (JNIEnv *, jclass, jlong);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_toInt
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_DOtherSideJNI_qvariant_1toInt
  (JNIEnv *, jclass, jlong);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_toBool
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_DOtherSideJNI_qvariant_1toBool
  (JNIEnv *, jclass, jlong);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_toString
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_DOtherSideJNI_qvariant_1toString
  (JNIEnv *, jclass, jlong);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_toFloat
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_DOtherSideJNI_qvariant_1toFloat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_toDouble
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_DOtherSideJNI_qvariant_1toDouble
  (JNIEnv *, jclass, jlong);

/*
 * Class:     DOtherSideJNI
 * Method:    qvariant_toQObject
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_DOtherSideJNI_qvariant_1toQObject
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
