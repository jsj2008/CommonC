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
 Optional defines: These defines affect your code, not internals. For any internal optionals see the functions further below.
 CC_DEBUG : Enables some debug information.
 CC_NO_LOG : Disables all logging.
 CC_NO_ASSERT : Disables all assertions.
 */

//Other public headers not included here are typically just for internal use/not of much interest outside of the framework itself.
#ifndef Common_Platform_h
#define Common_Platform_h

#include <CommonC/Platform.h>
#include <CommonC/Extensions.h>
#include <CommonC/Generics.h>

#include <CommonC/Types.h>
#include <CommonC/DebugTypes.h>

#include <CommonC/Allocator.h>
#include <CommonC/MemoryAllocation.h>

#include <CommonC/Logging.h>
#include <CommonC/Assertion.h>
#include <CommonC/CustomFormatSpecifiers.h>
#include <CommonC/CustomInputFilters.h>

#include <CommonC/SystemInfo.h>
#include <CommonC/ProcessInfo.h>

#include <CommonC/Maths.h>
#include <CommonC/BitTricks.h>
#include <CommonC/Random.h>
#include <CommonC/Vector.h>

#include <CommonC/LinkedList.h>

#endif
