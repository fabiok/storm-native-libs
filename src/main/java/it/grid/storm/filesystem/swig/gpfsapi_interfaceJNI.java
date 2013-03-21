/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.9
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package it.grid.storm.filesystem.swig;

public class gpfsapi_interfaceJNI {

  static {
    try {
      System.loadLibrary("gpfsapi_interface");
    } catch (UnsatisfiedLinkError e) {
	  final String libfile 
			= "'" + System.mapLibraryName("gpfsapi_interface") + "'";
	  final org.slf4j.Logger log 
			= org.slf4j.LoggerFactory.getLogger(gpfsapi_interfaceJNI.class);
      log.error("Native code library " + libfile
				 + " failed to load: " + e.getMessage());
	  // give some informational details, may be useful when debugging
	  final String ldpath = System.getProperty("java.library.path");
	  if (null != ldpath) 
	    log.info("Java VM searched for " + libfile 
            + "in java.library.path: " + ldpath);
   	  else
		log.info("Java VM library search path is null!");
      log.info("Add the library location to the environment variable LD_LIBRARY_PATH or to the Java property java.library.path");
	  throw new UnsatisfiedLinkError("Native code library " + libfile
				 + " failed to load: " + e.getMessage());
    }
  }

  public final static native long new_gpfs31_acl();
  public final static native void gpfs31_acl_load__SWIG_0(long jarg1, gpfs31_acl jarg1_, String jarg2, boolean jarg3);
  public final static native void gpfs31_acl_load__SWIG_1(long jarg1, gpfs31_acl jarg1_, String jarg2);
  public final static native void gpfs31_acl_enforce(long jarg1, gpfs31_acl jarg1_, String jarg2);
  public final static native void delete_gpfs31_acl(long jarg1);
  public final static native String quota_info_fileset_name_get(long jarg1, quota_info jarg1_);
  public final static native int quota_info_fileset_id_get(long jarg1, quota_info jarg1_);
  public final static native long quota_info_block_usage_get(long jarg1, quota_info jarg1_);
  public final static native long quota_info_block_hard_limit_get(long jarg1, quota_info jarg1_);
  public final static native long quota_info_block_soft_limit_get(long jarg1, quota_info jarg1_);
  public final static native long new_quota_info();
  public final static native void delete_quota_info(long jarg1);
  public final static native long new_gpfs(String jarg1);
  public final static native void gpfs_prealloc(long jarg1, gpfs jarg1_, String jarg2, long jarg3);
  public final static native long gpfs_get_exact_size(long jarg1, gpfs jarg1_, String jarg2);
  public final static native long gpfs_get_exact_last_modification_time(long jarg1, gpfs jarg1_, String jarg2);
  public final static native int gpfs_truncate_file(long jarg1, gpfs jarg1_, String jarg2, long jarg3);
  public final static native long gpfs_get_number_of_blocks(long jarg1, gpfs jarg1_, String jarg2);
  public final static native boolean gpfs_is_quota_enabled(long jarg1, gpfs jarg1_, String jarg2);
  public final static native long gpfs_get_fileset_quota_info(long jarg1, gpfs jarg1_, String jarg2);
  public final static native long gpfs_new_acl(long jarg1, gpfs jarg1_);
  public final static native void delete_gpfs(long jarg1);
  public final static native long gpfs31_acl_SWIGSmartPtrUpcast(long jarg1);
  public final static native long gpfs_SWIGUpcast(long jarg1);
}
