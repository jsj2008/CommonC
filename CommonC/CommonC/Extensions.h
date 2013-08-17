/*
 *  Copyright (c) 2013, Stefan Johnson
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without modification,
 *  are permitted provided that the following conditions are met:
 *
 *  1. Redistributions of source code must retain the above copyright notice, this list
 *     of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright notice, this
 *     list of conditions and the following disclaimer in the documentation and/or other
 *     materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 No guarantee to portability with these defines. If unsupported it will just lack that functionality.
 
 Function extensions:
 CC_FORCE_INLINE: Forces the funtion to be inlined
 CC_NO_INLINE: Forces the function not to be inlined
 CC_DEPRECATED: Marks the function as deprecated
 CC_WARN_UNUSED_RESULT: Warn when the return result is unused
 CC_FORMAT_PRINTF(fmt, args): Treats the function usage as if the format and arguments followed that of printf's, and so will give warnings appropriately. fmt = index of the format string, args = the index of the arguments
 CC_FORMAT_SCANF(fmt, args): Treats the function usage as if the format and arguments followed that of scanf's, and so will give warnings appropriately. fmt = index of the format string, args = the index of the arguments
 CC_PURE_FUNCTION: Marks the function as having no side effects. Can help the compiler with optimization.
 CC_CONSTANT_FUNCTION: A more strict version of CC_PURE_FUNCTION, it does not allow pointer arguments or global variable access.
 
 Optional usage:
 CC_SUPPORT_BLOCKS(...): Allows for code specific to blocks to be used.
 */

#ifndef CommonC_Extensions_h
#define CommonC_Extensions_h

#include <CommonC/Platform.h>


#if CC_COMPILER_CLANG
#else
#endif


#if CC_COMPILER_CLANG || CC_COMPILER_GCC
#define CC_FORCE_INLINE inline __attribute__((always_inline))
#define CC_NO_INLINE __attribute__((noinline))
#define CC_DEPRECATED __attribute__((deprecated))
#define CC_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#define CC_FORMAT_PRINTF(fmt, args) __attribute__((format(printf, fmt, args)))
#define CC_FORMAT_SCANF(fmt, args) __attribute__((format(scanf, fmt, args)))
#define CC_PURE_FUNCTION __attribute__((pure))
#define CC_CONSTANT_FUNCTION __attribute__((const))
#define CC_LIKELY(e) __builtin_expect(!!(e), 1)
#define CC_UNLIKELY(e) __builtin_expect(!!(e), 0)
#else
#define CC_FORCE_INLINE inline
#define CC_NO_INLINE
#define CC_DEPRECATED
#define CC_WARN_UNUSED_RESULT
#define CC_FORMAT_PRINTF(fmt, args)
#define CC_FORMAT_SCANF(fmt, args)
#define CC_PURE_FUNCTION
#define CC_CONSTANT_FUNCTION
#define CC_LIKELY(e)
#define CC_UNLIKELY(e)
#endif


#if __BLOCKS__
#define CC_SUPPORT_BLOCKS(...) __VA_ARGS__
#else
#define CC_SUPPORT_BLOCKS(...)
#endif

#endif
