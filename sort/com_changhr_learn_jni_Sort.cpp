#include <jni.h>

#include "com_changhr_learn_jni_Sort.h"
#include "sort.h"
#include "sortAlgorithm.h"
using namespace std;

/*
 * Class:     com_changhr_learn_jni_Sort
 * Method:    selectionSort
 * Signature: ([II)V
 */
JNIEXPORT jintArray JNICALL Java_com_changhr_learn_jni_Sort_selectionSort
(JNIEnv *env, jobject obj, jintArray arr, jint n)
{
    jint* carr;
    carr = env->GetIntArrayElements(arr, false);

    if (carr == NULL) {
        return 0;
	}

    selectionSort(carr, n);
    //selectionSortJ(carr, n);

    env->ReleaseIntArrayElements(arr, carr, 0);

    return arr;
}

/*
 * Class:     com_changhr_learn_jni_Sort
 * Method:    selectionSort
 * Signature: ([FI)[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_changhr_learn_jni_Sort_selectionSort___3FI
(JNIEnv *env, jobject obj, jfloatArray arr, jint n) {
    jfloat* carr;
    carr = env->GetFloatArrayElements(arr, false);

    if (carr == NULL) {
        return 0;
    }

    selectionSort(carr, n);

    env->ReleaseFloatArrayElements(arr, carr, 0);

    return arr;
}
