
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:32 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_ARB_point_parameters__
#define __GLUX_GL_ARB_point_parameters__

GLUX_NEW_PLUGIN(GL_ARB_point_parameters);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_POINT_SIZE_MIN_ARB
#  define GL_POINT_SIZE_MIN_ARB 0x8126
#endif
#ifndef GL_POINT_SIZE_MAX_ARB
#  define GL_POINT_SIZE_MAX_ARB 0x8127
#endif
#ifndef GL_POINT_FADE_THRESHOLD_SIZE_ARB
#  define GL_POINT_FADE_THRESHOLD_SIZE_ARB 0x8128
#endif
#ifndef GL_POINT_DISTANCE_ATTENUATION_ARB
#  define GL_POINT_DISTANCE_ATTENUATION_ARB 0x8129
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glPointParameterfARB
typedef void (APIENTRYP PFNGLUXPOINTPARAMETERFARBPROC) (GLenum pname, GLfloat param);
#endif
#ifndef __GLUX__GLFCT_glPointParameterfvARB
typedef void (APIENTRYP PFNGLUXPOINTPARAMETERFVARBPROC) (GLenum pname, const GLfloat *params);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glPointParameterfARB
extern PFNGLUXPOINTPARAMETERFARBPROC glPointParameterfARB;
#endif
#ifndef __GLUX__GLFCT_glPointParameterfvARB
extern PFNGLUXPOINTPARAMETERFVARBPROC glPointParameterfvARB;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------