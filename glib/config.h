/*
 * Autogenerated by the Meson build system.
 * Do not edit, your changes will be lost.
 */

#pragma once

#define ALIGNOF_GUINT32 4

#define ALIGNOF_GUINT64 8

#define ALIGNOF_UNSIGNED_LONG 4

#define BROKEN_POLL

#define DBL_EXPBIT0_BIT 20

#define DBL_EXPBIT0_WORD 1

#define DLL_EXPORT

#define ENABLE_NLS 1

#define EXEEXT ".exe"

#define GETTEXT_PACKAGE "glib20"

#define GLIB_BINARY_AGE 6403

#define GLIB_INTERFACE_AGE 3

#define GLIB_LOCALE_DIR "c:/share/locale"

#define GLIB_MAJOR_VERSION 2

#define GLIB_MICRO_VERSION 3

#define GLIB_MINOR_VERSION 64

#define HAVE_BIND_TEXTDOMAIN_CODESET

#undef HAVE_C99_SNPRINTF

#undef HAVE_C99_VSNPRINTF

#define HAVE_DCGETTEXT 1

#define HAVE_FLOAT_H 1

#define HAVE_GETTEXT 1

#define HAVE_IF_INDEXTONAME 1

#define HAVE_IF_NAMETOINDEX 1

#define HAVE_INTMAX_T 1

#define HAVE_INTTYPES_H 1

#define HAVE_INTTYPES_H_WITH_UINTMAX 1

#define HAVE_LIMITS_H 1

#define HAVE_LOCALE_H 1

#define HAVE_LONG_DOUBLE 1

#define HAVE_LONG_LONG 1

#define HAVE_MALLOC_H 1

#define HAVE_MBRTOWC 1

#define HAVE_MEMORY_H 1

#undef HAVE_PROC_SELF_CMDLINE

#define HAVE_PTRDIFF_T 1

#define HAVE_SIG_ATOMIC_T 1

#define HAVE_SNPRINTF 1

#define HAVE_STDINT_H 1

#define HAVE_STDINT_H_WITH_UINTMAX 1

#define HAVE_STDLIB_H 1

#define HAVE_STRCASECMP 1
#define strcasecmp _stricmp

#define HAVE_STRING_H 1

#define HAVE_STRNCASECMP 1
#define strncasecmp _strnicmp

#define HAVE_STRNLEN 1

#define HAVE_SYS_STAT_H 1

#define HAVE_SYS_TYPES_H 1

#undef HAVE_UNIX98_PRINTF

#define HAVE_VASPRINTF 1

#define HAVE_WCHAR_H 1

#define HAVE_WCHAR_T 1

#define HAVE_WCRTOMB 1

#define HAVE_WCSLEN 1

#define HAVE_WCSNLEN 1

#define HAVE_WINT_T 1

#define NEED_PRINTF_DIRECTIVE_A 1

#define NEED_PRINTF_DOUBLE 1

#define NEED_PRINTF_ENOMEM 1

#define NEED_PRINTF_FLAG_GROUPING 1

#define NEED_PRINTF_LONG_DOUBLE 1

#define PACKAGE_BUGREPORT "https://gitlab.gnome.org/GNOME/glib/issues/new"

#define PACKAGE_NAME "glib"

#define PACKAGE_STRING "glib 2.64.3"

#define PACKAGE_TARNAME "glib"

#define PACKAGE_URL ""

#define PACKAGE_VERSION "2.64.3"

#define SIZEOF_CHAR 1

#define SIZEOF_INT 4

#define SIZEOF_LONG 4

#define SIZEOF_LONG_LONG 8

#define SIZEOF_SHORT 2

#define SIZEOF_SIZE_T 4

#define SIZEOF_SSIZE_T 4

#define SIZEOF_VOID_P 4

#define SIZEOF_WCHAR_T 2

#define THREADS_WIN32 1

#undef USE_SYSTEM_PCRE

#undef USE_SYSTEM_PRINTF

#define _GLIB_EXTERN __declspec(dllexport) extern

#define _GNU_SOURCE 1

#define _WIN32_WINNT 0x0601

#define gl_extern_inline 
/* Please see the Gnulib manual for how to use these macros.

   Suppress extern inline with HP-UX cc, as it appears to be broken; see
   <https://lists.gnu.org/r/bug-texinfo/2013-02/msg00030.html>.

   Suppress extern inline with Sun C in standards-conformance mode, as it
   mishandles inline functions that call each other.  E.g., for 'inline void f
   (void) { } inline void g (void) { f (); }', c99 incorrectly complains
   'reference to static identifier "f" in extern inline function'.
   This bug was observed with Sun C 5.12 SunOS_i386 2011/11/16.

   Suppress extern inline (with or without __attribute__ ((__gnu_inline__)))
   on configurations that mistakenly use 'static inline' to implement
   functions or macros in standard C headers like <ctype.h>.  For example,
   if isdigit is mistakenly implemented via a static inline function,
   a program containing an extern inline function that calls isdigit
   may not work since the C standard prohibits extern inline functions
   from calling static functions.  This bug is known to occur on:

     OS X 10.8 and earlier; see:
     https://lists.gnu.org/r/bug-gnulib/2012-12/msg00023.html

     DragonFly; see
     http://muscles.dragonflybsd.org/bulk/bleeding-edge-potential/latest-per-pkg/ah-tty-0.3.12.log

     FreeBSD; see:
     https://lists.gnu.org/r/bug-gnulib/2014-07/msg00104.html

   OS X 10.9 has a macro __header_inline indicating the bug is fixed for C and
   for clang but remains for g++; see <https://trac.macports.org/ticket/41033>.
   Assume DragonFly and FreeBSD will be similar.  */
#if (((defined __APPLE__ && defined __MACH__) \
      || defined __DragonFly__ || defined __FreeBSD__) \
     && (defined __header_inline \
         ? (defined __cplusplus && defined __GNUC_STDC_INLINE__ \
            && ! defined __clang__) \
         : ((! defined _DONT_USE_CTYPE_INLINE_ \
             && (defined __GNUC__ || defined __cplusplus)) \
            || (defined _FORTIFY_SOURCE && 0 < _FORTIFY_SOURCE \
                && defined __GNUC__ && ! defined __cplusplus))))
# define _GL_EXTERN_INLINE_STDHEADER_BUG
#endif
#if ((__GNUC__ \
      ? defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__ \
      : (199901L <= __STDC_VERSION__ \
         && !defined __HP_cc \
         && !defined __PGI \
         && !(defined __SUNPRO_C && __STDC__))) \
     && !defined _GL_EXTERN_INLINE_STDHEADER_BUG)
# define _GL_INLINE inline
# define _GL_EXTERN_INLINE extern inline
# define _GL_EXTERN_INLINE_IN_USE
#elif (2 < __GNUC__ + (7 <= __GNUC_MINOR__) && !defined __STRICT_ANSI__ \
       && !defined _GL_EXTERN_INLINE_STDHEADER_BUG)
# if defined __GNUC_GNU_INLINE__ && __GNUC_GNU_INLINE__
   /* __gnu_inline__ suppresses a GCC 4.2 diagnostic.  */
#  define _GL_INLINE extern inline __attribute__ ((__gnu_inline__)) __attribute__ ((always_inline))
# else
#  define _GL_INLINE extern inline
# endif
# define _GL_EXTERN_INLINE extern
# define _GL_EXTERN_INLINE_IN_USE
#else
# define _GL_INLINE static _GL_UNUSED
# define _GL_EXTERN_INLINE static _GL_UNUSED
#endif

/* In GCC 4.6 (inclusive) to 5.1 (exclusive),
   suppress bogus "no previous prototype for 'FOO'"
   and "no previous declaration for 'FOO'" diagnostics,
   when FOO is an inline function in the header; see
   <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=54113> and
   <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=63877>.  */
#if __GNUC__ == 4 && 6 <= __GNUC_MINOR__
# if defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__
#  define _GL_INLINE_HEADER_CONST_PRAGMA
# else
#  define _GL_INLINE_HEADER_CONST_PRAGMA \
     _Pragma ("GCC diagnostic ignored \"-Wsuggest-attribute=const\"")
# endif
# define _GL_INLINE_HEADER_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wmissing-prototypes\"") \
    _Pragma ("GCC diagnostic ignored \"-Wmissing-declarations\"") \
    _GL_INLINE_HEADER_CONST_PRAGMA
# define _GL_INLINE_HEADER_END \
    _Pragma ("GCC diagnostic pop")
#else
# define _GL_INLINE_HEADER_BEGIN
# define _GL_INLINE_HEADER_END
#endif


#define gl_unused 
/* Define as a marker that can be attached to declarations that might not
    be used.  This helps to reduce warnings, such as from
    GCC -Wunused-parameter.  */
#if __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)
# define _GL_UNUSED __attribute__ ((__unused__))
#else
# define _GL_UNUSED
#endif


