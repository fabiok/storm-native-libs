/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.9
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA


#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__)) 
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__)) 
# else
#   define SWIGUNUSED 
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif 
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED 
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif 
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else

/*  Errors in SWIG */
#define  SWIG_UnknownError    	   -1 
#define  SWIG_IOError        	   -2 
#define  SWIG_RuntimeError   	   -3 
#define  SWIG_IndexError     	   -4 
#define  SWIG_TypeError      	   -5 
#define  SWIG_DivisionByZero 	   -6 
#define  SWIG_OverflowError  	   -7 
#define  SWIG_SyntaxError    	   -8 
#define  SWIG_ValueError     	   -9 
#define  SWIG_SystemError    	   -10
#define  SWIG_AttributeError 	   -11
#define  SWIG_MemoryError    	   -12 
#define  SWIG_NullReferenceError   -13




#include <string>


// these typemaps work only with C++
#ifndef __cplusplus
#error "pass_vector_by_value.i typemaps can only be used within C++ code!"
#endif


#include <vector>  // std::vector


#if 0 || 0


// prototype for Int[] --> std::vector<gid_t> conversion
int SWIG_JavaVectorInInt (JNIEnv *jenv, jint **jarr, 
                                  std::vector<gid_t> *output_container, 
                                  jintArray input);
// prototypes for std::vector<gid_t> --> Int[] conversion
void SWIG_JavaVectorArgoutInt (JNIEnv *jenv, jint *jarr, 
                                       std::vector<gid_t> &input_container,
                                       jintArray input);
jintArray SWIG_JavaVectorOutInt (JNIEnv *jenv, 
                                              std::vector<gid_t> &input_container,
                                              jsize sz);


#else
#ifndef JAVA_TYPEMAP_CONTAINER_APPEND
#define JAVA_TYPEMAP_CONTAINER_APPEND(gid_t) (*output_container).push_back((*jarr)[i])
#endif 


  // Int[] (jint##Array) --> std::vector<gid_t> 
int SWIG_JavaVectorInInt (JNIEnv *jenv, jint **jarr, 
                                  std::vector<gid_t> *output_container, 
                                  jintArray input) 
{
  if (!input) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null array");
    return 0;
  }
  jsize sz;
  sz = jenv->GetArrayLength(input);
  *jarr = jenv->GetIntArrayElements(input, 0);
  if (!*jarr)
    return 0; 
 try {
   // *output_container =  new std::vector<gid_t>;
   (*output_container).reserve(sz);
 }
 catch (std::bad_alloc err) {
    SWIG_JavaThrowException(jenv, SWIG_JavaOutOfMemoryError, 
                            "std::vector allocation failed");
    return 0;
 }
 for (int i=0; i<sz; i++)
    JAVA_TYPEMAP_CONTAINER_APPEND(gid_t);
  return 1;
}

  // std::vector<gid_t> --> jint[]
void SWIG_JavaVectorArgoutInt (JNIEnv *jenv, jint *jarr, 
                                       std::vector<gid_t> &input_container,
                                       jintArray input) 
{
  jsize sz = jenv->GetArrayLength(input);
  jint *jarrptr = jarr; 
  std::vector<gid_t>::const_iterator elt = input_container.begin();
  while (elt != input_container.end()) {
    if (0 == sz--)
      // bail out if no more space in Java array
      // XXX: should throw exception?
      break;
    *jarrptr++ = (jint) *elt;
    ++elt;
  }
  jenv->ReleaseIntArrayElements(input, jarr, 0);
}

// std::vector<gid_t> --> jint[]
jintArray SWIG_JavaVectorOutInt (JNIEnv *jenv, 
                                              std::vector<gid_t> &input_container, 
                                              jsize sz) 
{
  jintArray jresult = jenv->NewIntArray(sz);
  if (!jresult)
    return NULL;
  jint *arr = jenv->GetIntArrayElements(jresult, 0);
  if (!arr)
    return NULL;
  jint *jarrptr = arr; 
  std::vector<gid_t>::const_iterator elt = input_container.begin();
  while (elt != input_container.end()) {
    if (0 == sz--)
      // bail out if no more space in Java array
      // XXX: should throw exception?
      break;
    *jarrptr++ = (jint) *elt;
    ++elt;
  }
  jenv->ReleaseIntArrayElements(jresult, arr, 0);
  return jresult;
}


#endif


SWIGINTERN void SWIG_JavaException(JNIEnv *jenv, int code, const char *msg) {
  SWIG_JavaExceptionCodes exception_code = SWIG_JavaUnknownError;
  switch(code) {
  case SWIG_MemoryError:
    exception_code = SWIG_JavaOutOfMemoryError;
    break;
  case SWIG_IOError:
    exception_code = SWIG_JavaIOException;
    break;
  case SWIG_SystemError:
  case SWIG_RuntimeError:
    exception_code = SWIG_JavaRuntimeException;
    break;
  case SWIG_OverflowError:
  case SWIG_IndexError:
    exception_code = SWIG_JavaIndexOutOfBoundsException;
    break;
  case SWIG_DivisionByZero:
    exception_code = SWIG_JavaArithmeticException;
    break;
  case SWIG_SyntaxError:
  case SWIG_ValueError:
  case SWIG_TypeError:
    exception_code = SWIG_JavaIllegalArgumentException;
    break;
  case SWIG_UnknownError:
  default:
    exception_code = SWIG_JavaUnknownError;
    break;
  }
  SWIG_JavaThrowException(jenv, exception_code, msg);
}


#include <stdexcept>


#include "fs_errors.hpp"


#include "gpfs31_acl.hpp"


struct SWIG_null_deleter {
  void operator() (void const *) const {
  }
};
#define SWIG_NO_NULL_DELETER_0 , SWIG_null_deleter()
#define SWIG_NO_NULL_DELETER_1
#define SWIG_NO_NULL_DELETER_SWIG_POINTER_NEW
#define SWIG_NO_NULL_DELETER_SWIG_POINTER_OWN


#include "gpfs.hpp"


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_it_grid_storm_filesystem_swig_gpfsapi_1interfaceJNI_new_1gpfs31_1acl(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  gpfs31_acl *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (gpfs31_acl *)new gpfs31_acl();
  
  *(std::tr1::shared_ptr<  gpfs31_acl > **)&jresult = result ? new std::tr1::shared_ptr<  gpfs31_acl >(result SWIG_NO_NULL_DELETER_1) : 0;
  
  return jresult;
}


SWIGEXPORT void JNICALL Java_it_grid_storm_filesystem_swig_gpfsapi_1interfaceJNI_gpfs31_1acl_1load_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jboolean jarg3) {
  gpfs31_acl *arg1 = (gpfs31_acl *) 0 ;
  std::string *arg2 = 0 ;
  bool arg3 ;
  std::tr1::shared_ptr< gpfs31_acl > *smartarg1 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  
  smartarg1 = *(std::tr1::shared_ptr<  gpfs31_acl > **)&jarg1;
  arg1 = (gpfs31_acl *)(smartarg1 ? smartarg1->get() : 0); 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  arg3 = jarg3 ? true : false; 
  try {
    (arg1)->load((std::string const &)*arg2,arg3);
  }
  catch(fs::error &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ fs::error exception thrown");
    return ; 
  }
  catch(fs::invalid_path &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ fs::invalid_path exception thrown");
    return ; 
  }
  catch(fs::permission_denied &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ fs::permission_denied exception thrown");
    return ; 
  }
  catch(fs::acl_not_supported &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ fs::acl_not_supported exception thrown");
    return ; 
  }
  catch(std::exception &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ std::exception exception thrown");
    return ; 
  }
  
}


SWIGEXPORT void JNICALL Java_it_grid_storm_filesystem_swig_gpfsapi_1interfaceJNI_gpfs31_1acl_1load_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  gpfs31_acl *arg1 = (gpfs31_acl *) 0 ;
  std::string *arg2 = 0 ;
  std::tr1::shared_ptr< gpfs31_acl > *smartarg1 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  
  smartarg1 = *(std::tr1::shared_ptr<  gpfs31_acl > **)&jarg1;
  arg1 = (gpfs31_acl *)(smartarg1 ? smartarg1->get() : 0); 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  try {
    (arg1)->load((std::string const &)*arg2);
  }
  catch(fs::error &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ fs::error exception thrown");
    return ; 
  }
  catch(fs::invalid_path &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ fs::invalid_path exception thrown");
    return ; 
  }
  catch(fs::permission_denied &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ fs::permission_denied exception thrown");
    return ; 
  }
  catch(fs::acl_not_supported &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ fs::acl_not_supported exception thrown");
    return ; 
  }
  catch(std::exception &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ std::exception exception thrown");
    return ; 
  }
  
}


SWIGEXPORT void JNICALL Java_it_grid_storm_filesystem_swig_gpfsapi_1interfaceJNI_gpfs31_1acl_1enforce(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  gpfs31_acl *arg1 = (gpfs31_acl *) 0 ;
  std::string *arg2 = 0 ;
  std::tr1::shared_ptr< gpfs31_acl const > *smartarg1 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  
  smartarg1 = *(std::tr1::shared_ptr< const gpfs31_acl > **)&jarg1;
  arg1 = (gpfs31_acl *)(smartarg1 ? smartarg1->get() : 0); 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  try {
    ((gpfs31_acl const *)arg1)->enforce((std::string const &)*arg2);
  }
  catch(fs::error &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ fs::error exception thrown");
    return ; 
  }
  catch(fs::invalid_path &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ fs::invalid_path exception thrown");
    return ; 
  }
  catch(fs::permission_denied &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ fs::permission_denied exception thrown");
    return ; 
  }
  catch(fs::acl_not_supported &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ fs::acl_not_supported exception thrown");
    return ; 
  }
  catch(std::exception &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ std::exception exception thrown");
    return ; 
  }
  
}


SWIGEXPORT void JNICALL Java_it_grid_storm_filesystem_swig_gpfsapi_1interfaceJNI_delete_1gpfs31_1acl(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  gpfs31_acl *arg1 = (gpfs31_acl *) 0 ;
  std::tr1::shared_ptr< gpfs31_acl > *smartarg1 = 0 ;
  
  (void)jenv;
  (void)jcls;
  
  smartarg1 = *(std::tr1::shared_ptr<  gpfs31_acl > **)&jarg1;
  arg1 = (gpfs31_acl *)(smartarg1 ? smartarg1->get() : 0); 
  (void)arg1; delete smartarg1;
}


SWIGEXPORT jlong JNICALL Java_it_grid_storm_filesystem_swig_gpfsapi_1interfaceJNI_new_1gpfs(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jlong jresult = 0 ;
  std::string *arg1 = 0 ;
  fs::gpfs *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  if(!jarg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg1_pstr = (const char *)jenv->GetStringUTFChars(jarg1, 0); 
  if (!arg1_pstr) return 0;
  std::string arg1_str(arg1_pstr);
  arg1 = &arg1_str;
  jenv->ReleaseStringUTFChars(jarg1, arg1_pstr); 
  try {
    result = (fs::gpfs *)new fs::gpfs((std::string const &)*arg1);
  }
  catch(fs::wrong_filesystem_type &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ fs::wrong_filesystem_type exception thrown");
    return 0; 
  }
  catch(fs::error &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ fs::error exception thrown");
    return 0; 
  }
  
  *(fs::gpfs **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_it_grid_storm_filesystem_swig_gpfsapi_1interfaceJNI_gpfs_1prealloc(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jlong jarg3) {
  fs::gpfs *arg1 = (fs::gpfs *) 0 ;
  std::string *arg2 = 0 ;
  alloc_size_t arg3 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(fs::gpfs **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  arg3 = (alloc_size_t)jarg3; 
  try {
    (arg1)->prealloc((std::string const &)*arg2,arg3);
  }
  catch(fs::error &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ fs::error exception thrown");
    return ; 
  }
  
}


SWIGEXPORT jlong JNICALL Java_it_grid_storm_filesystem_swig_gpfsapi_1interfaceJNI_gpfs_1get_1exact_1size(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jlong jresult = 0 ;
  fs::gpfs *arg1 = (fs::gpfs *) 0 ;
  std::string *arg2 = 0 ;
  size_t result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(fs::gpfs **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  try {
    result = (size_t)(arg1)->get_exact_size((std::string const &)*arg2);
  }
  catch(fs::error &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ fs::error exception thrown");
    return 0; 
  }
  catch(std::logic_error &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ std::logic_error exception thrown");
    return 0; 
  }
  
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_it_grid_storm_filesystem_swig_gpfsapi_1interfaceJNI_gpfs_1get_1exact_1last_1modification_1time(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jlong jresult = 0 ;
  fs::gpfs *arg1 = (fs::gpfs *) 0 ;
  std::string *arg2 = 0 ;
  time_t result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(fs::gpfs **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  try {
    result = (time_t)(arg1)->get_exact_last_modification_time((std::string const &)*arg2);
  }
  catch(fs::error &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ fs::error exception thrown");
    return 0; 
  }
  
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_it_grid_storm_filesystem_swig_gpfsapi_1interfaceJNI_gpfs_1truncate_1file(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jlong jarg3) {
  jint jresult = 0 ;
  fs::gpfs *arg1 = (fs::gpfs *) 0 ;
  std::string *arg2 = 0 ;
  size_t arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(fs::gpfs **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  arg3 = (size_t)jarg3; 
  try {
    result = (int)(arg1)->truncate_file((std::string const &)*arg2,arg3);
  }
  catch(fs::error &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ fs::error exception thrown");
    return 0; 
  }
  
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_it_grid_storm_filesystem_swig_gpfsapi_1interfaceJNI_gpfs_1get_1number_1of_1blocks(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jlong jresult = 0 ;
  fs::gpfs *arg1 = (fs::gpfs *) 0 ;
  std::string *arg2 = 0 ;
  size_t result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(fs::gpfs **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  result = (size_t)(arg1)->get_number_of_blocks((std::string const &)*arg2);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_it_grid_storm_filesystem_swig_gpfsapi_1interfaceJNI_gpfs_1new_1acl(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  fs::gpfs *arg1 = (fs::gpfs *) 0 ;
  fs::fs_acl_ptr result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(fs::gpfs **)&jarg1; 
  try {
    result = ((fs::gpfs const *)arg1)->new_acl();
  }
  catch(fs::error &_e) {
    (void)_e;
    SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException, "C++ fs::error exception thrown");
    return 0; 
  }
  
  *(fs::fs_acl_ptr **)&jresult = result ? new fs::fs_acl_ptr(result) : 0; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_it_grid_storm_filesystem_swig_gpfsapi_1interfaceJNI_delete_1gpfs(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  fs::gpfs *arg1 = (fs::gpfs *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(fs::gpfs **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_it_grid_storm_filesystem_swig_gpfsapi_1interfaceJNI_gpfs31_1acl_1SWIGSmartPtrUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    std::tr1::shared_ptr< gpfs31_acl > *argp1;
    (void)jenv;
    (void)jcls;
    argp1 = *(std::tr1::shared_ptr< gpfs31_acl > **)&jarg1;
    *(std::tr1::shared_ptr< posixfs_acl > **)&baseptr = argp1 ? new std::tr1::shared_ptr< posixfs_acl >(*argp1) : 0;
    return baseptr;
}

SWIGEXPORT jlong JNICALL Java_it_grid_storm_filesystem_swig_gpfsapi_1interfaceJNI_gpfs_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(fs::genericfs **)&baseptr = *(fs::gpfs **)&jarg1;
    return baseptr;
}

#ifdef __cplusplus
}
#endif
