
/*
 * Copyright © 2012 - 2014 Intel Corporatio
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __OCL_AS_H__
#define __OCL_AS_H__
#include "ocl_types.h"

OVERLOADABLE uchar as_uchar(char v);
OVERLOADABLE char as_char(uchar v);
OVERLOADABLE ushort as_ushort(short v);
OVERLOADABLE char2 as_char2(short v);
OVERLOADABLE uchar2 as_uchar2(short v);
OVERLOADABLE half as_half(short v);
OVERLOADABLE short as_short(ushort v);
OVERLOADABLE char2 as_char2(ushort v);
OVERLOADABLE uchar2 as_uchar2(ushort v);
OVERLOADABLE half as_half(ushort v);
OVERLOADABLE short as_short(char2 v);
OVERLOADABLE ushort as_ushort(char2 v);
OVERLOADABLE uchar2 as_uchar2(char2 v);
OVERLOADABLE half as_half(char2 v);
OVERLOADABLE short as_short(uchar2 v);
OVERLOADABLE ushort as_ushort(uchar2 v);
OVERLOADABLE char2 as_char2(uchar2 v);
OVERLOADABLE half as_half(uchar2 v);
OVERLOADABLE short as_short(half v);
OVERLOADABLE ushort as_ushort(half v);
OVERLOADABLE char2 as_char2(half v);
OVERLOADABLE uchar2 as_uchar2(half v);
OVERLOADABLE uint as_uint(int v);
OVERLOADABLE short2 as_short2(int v);
OVERLOADABLE ushort2 as_ushort2(int v);
OVERLOADABLE char3 as_char3(int v);
OVERLOADABLE char4 as_char4(int v);
OVERLOADABLE uchar3 as_uchar3(int v);
OVERLOADABLE uchar4 as_uchar4(int v);
OVERLOADABLE float as_float(int v);
OVERLOADABLE half2 as_half2(int v);
OVERLOADABLE int as_int(uint v);
OVERLOADABLE short2 as_short2(uint v);
OVERLOADABLE ushort2 as_ushort2(uint v);
OVERLOADABLE char3 as_char3(uint v);
OVERLOADABLE char4 as_char4(uint v);
OVERLOADABLE uchar3 as_uchar3(uint v);
OVERLOADABLE uchar4 as_uchar4(uint v);
OVERLOADABLE float as_float(uint v);
OVERLOADABLE half2 as_half2(uint v);
OVERLOADABLE int as_int(short2 v);
OVERLOADABLE uint as_uint(short2 v);
OVERLOADABLE ushort2 as_ushort2(short2 v);
OVERLOADABLE char3 as_char3(short2 v);
OVERLOADABLE char4 as_char4(short2 v);
OVERLOADABLE uchar3 as_uchar3(short2 v);
OVERLOADABLE uchar4 as_uchar4(short2 v);
OVERLOADABLE float as_float(short2 v);
OVERLOADABLE half2 as_half2(short2 v);
OVERLOADABLE int as_int(ushort2 v);
OVERLOADABLE uint as_uint(ushort2 v);
OVERLOADABLE short2 as_short2(ushort2 v);
OVERLOADABLE char3 as_char3(ushort2 v);
OVERLOADABLE char4 as_char4(ushort2 v);
OVERLOADABLE uchar3 as_uchar3(ushort2 v);
OVERLOADABLE uchar4 as_uchar4(ushort2 v);
OVERLOADABLE float as_float(ushort2 v);
OVERLOADABLE half2 as_half2(ushort2 v);
OVERLOADABLE int as_int(char3 v);
OVERLOADABLE uint as_uint(char3 v);
OVERLOADABLE short2 as_short2(char3 v);
OVERLOADABLE ushort2 as_ushort2(char3 v);
OVERLOADABLE uchar3 as_uchar3(char3 v);
OVERLOADABLE uchar4 as_uchar4(char3 v);
OVERLOADABLE float as_float(char3 v);
OVERLOADABLE half2 as_half2(char3 v);
OVERLOADABLE int as_int(char4 v);
OVERLOADABLE uint as_uint(char4 v);
OVERLOADABLE short2 as_short2(char4 v);
OVERLOADABLE ushort2 as_ushort2(char4 v);
OVERLOADABLE uchar3 as_uchar3(char4 v);
OVERLOADABLE uchar4 as_uchar4(char4 v);
OVERLOADABLE float as_float(char4 v);
OVERLOADABLE half2 as_half2(char4 v);
OVERLOADABLE int as_int(uchar3 v);
OVERLOADABLE uint as_uint(uchar3 v);
OVERLOADABLE short2 as_short2(uchar3 v);
OVERLOADABLE ushort2 as_ushort2(uchar3 v);
OVERLOADABLE char3 as_char3(uchar3 v);
OVERLOADABLE char4 as_char4(uchar3 v);
OVERLOADABLE float as_float(uchar3 v);
OVERLOADABLE half2 as_half2(uchar3 v);
OVERLOADABLE int as_int(uchar4 v);
OVERLOADABLE uint as_uint(uchar4 v);
OVERLOADABLE short2 as_short2(uchar4 v);
OVERLOADABLE ushort2 as_ushort2(uchar4 v);
OVERLOADABLE char3 as_char3(uchar4 v);
OVERLOADABLE char4 as_char4(uchar4 v);
OVERLOADABLE float as_float(uchar4 v);
OVERLOADABLE half2 as_half2(uchar4 v);
OVERLOADABLE int as_int(float v);
OVERLOADABLE uint as_uint(float v);
OVERLOADABLE short2 as_short2(float v);
OVERLOADABLE ushort2 as_ushort2(float v);
OVERLOADABLE char3 as_char3(float v);
OVERLOADABLE char4 as_char4(float v);
OVERLOADABLE uchar3 as_uchar3(float v);
OVERLOADABLE uchar4 as_uchar4(float v);
OVERLOADABLE half2 as_half2(float v);
OVERLOADABLE int as_int(half2 v);
OVERLOADABLE uint as_uint(half2 v);
OVERLOADABLE short2 as_short2(half2 v);
OVERLOADABLE ushort2 as_ushort2(half2 v);
OVERLOADABLE char3 as_char3(half2 v);
OVERLOADABLE char4 as_char4(half2 v);
OVERLOADABLE uchar3 as_uchar3(half2 v);
OVERLOADABLE uchar4 as_uchar4(half2 v);
OVERLOADABLE float as_float(half2 v);
OVERLOADABLE ulong as_ulong(long v);
OVERLOADABLE int2 as_int2(long v);
OVERLOADABLE uint2 as_uint2(long v);
OVERLOADABLE short3 as_short3(long v);
OVERLOADABLE short4 as_short4(long v);
OVERLOADABLE ushort3 as_ushort3(long v);
OVERLOADABLE ushort4 as_ushort4(long v);
OVERLOADABLE char8 as_char8(long v);
OVERLOADABLE uchar8 as_uchar8(long v);
OVERLOADABLE double as_double(long v);
OVERLOADABLE float2 as_float2(long v);
OVERLOADABLE half3 as_half3(long v);
OVERLOADABLE half4 as_half4(long v);
OVERLOADABLE long as_long(ulong v);
OVERLOADABLE int2 as_int2(ulong v);
OVERLOADABLE uint2 as_uint2(ulong v);
OVERLOADABLE short3 as_short3(ulong v);
OVERLOADABLE short4 as_short4(ulong v);
OVERLOADABLE ushort3 as_ushort3(ulong v);
OVERLOADABLE ushort4 as_ushort4(ulong v);
OVERLOADABLE char8 as_char8(ulong v);
OVERLOADABLE uchar8 as_uchar8(ulong v);
OVERLOADABLE double as_double(ulong v);
OVERLOADABLE float2 as_float2(ulong v);
OVERLOADABLE half3 as_half3(ulong v);
OVERLOADABLE half4 as_half4(ulong v);
OVERLOADABLE long as_long(int2 v);
OVERLOADABLE ulong as_ulong(int2 v);
OVERLOADABLE uint2 as_uint2(int2 v);
OVERLOADABLE short3 as_short3(int2 v);
OVERLOADABLE short4 as_short4(int2 v);
OVERLOADABLE ushort3 as_ushort3(int2 v);
OVERLOADABLE ushort4 as_ushort4(int2 v);
OVERLOADABLE char8 as_char8(int2 v);
OVERLOADABLE uchar8 as_uchar8(int2 v);
OVERLOADABLE double as_double(int2 v);
OVERLOADABLE float2 as_float2(int2 v);
OVERLOADABLE half3 as_half3(int2 v);
OVERLOADABLE half4 as_half4(int2 v);
OVERLOADABLE long as_long(uint2 v);
OVERLOADABLE ulong as_ulong(uint2 v);
OVERLOADABLE int2 as_int2(uint2 v);
OVERLOADABLE short3 as_short3(uint2 v);
OVERLOADABLE short4 as_short4(uint2 v);
OVERLOADABLE ushort3 as_ushort3(uint2 v);
OVERLOADABLE ushort4 as_ushort4(uint2 v);
OVERLOADABLE char8 as_char8(uint2 v);
OVERLOADABLE uchar8 as_uchar8(uint2 v);
OVERLOADABLE double as_double(uint2 v);
OVERLOADABLE float2 as_float2(uint2 v);
OVERLOADABLE half3 as_half3(uint2 v);
OVERLOADABLE half4 as_half4(uint2 v);
OVERLOADABLE long as_long(short3 v);
OVERLOADABLE ulong as_ulong(short3 v);
OVERLOADABLE int2 as_int2(short3 v);
OVERLOADABLE uint2 as_uint2(short3 v);
OVERLOADABLE ushort3 as_ushort3(short3 v);
OVERLOADABLE ushort4 as_ushort4(short3 v);
OVERLOADABLE char8 as_char8(short3 v);
OVERLOADABLE uchar8 as_uchar8(short3 v);
OVERLOADABLE double as_double(short3 v);
OVERLOADABLE float2 as_float2(short3 v);
OVERLOADABLE half3 as_half3(short3 v);
OVERLOADABLE half4 as_half4(short3 v);
OVERLOADABLE long as_long(short4 v);
OVERLOADABLE ulong as_ulong(short4 v);
OVERLOADABLE int2 as_int2(short4 v);
OVERLOADABLE uint2 as_uint2(short4 v);
OVERLOADABLE ushort3 as_ushort3(short4 v);
OVERLOADABLE ushort4 as_ushort4(short4 v);
OVERLOADABLE char8 as_char8(short4 v);
OVERLOADABLE uchar8 as_uchar8(short4 v);
OVERLOADABLE double as_double(short4 v);
OVERLOADABLE float2 as_float2(short4 v);
OVERLOADABLE half3 as_half3(short4 v);
OVERLOADABLE half4 as_half4(short4 v);
OVERLOADABLE long as_long(ushort3 v);
OVERLOADABLE ulong as_ulong(ushort3 v);
OVERLOADABLE int2 as_int2(ushort3 v);
OVERLOADABLE uint2 as_uint2(ushort3 v);
OVERLOADABLE short3 as_short3(ushort3 v);
OVERLOADABLE short4 as_short4(ushort3 v);
OVERLOADABLE char8 as_char8(ushort3 v);
OVERLOADABLE uchar8 as_uchar8(ushort3 v);
OVERLOADABLE double as_double(ushort3 v);
OVERLOADABLE float2 as_float2(ushort3 v);
OVERLOADABLE half3 as_half3(ushort3 v);
OVERLOADABLE half4 as_half4(ushort3 v);
OVERLOADABLE long as_long(ushort4 v);
OVERLOADABLE ulong as_ulong(ushort4 v);
OVERLOADABLE int2 as_int2(ushort4 v);
OVERLOADABLE uint2 as_uint2(ushort4 v);
OVERLOADABLE short3 as_short3(ushort4 v);
OVERLOADABLE short4 as_short4(ushort4 v);
OVERLOADABLE char8 as_char8(ushort4 v);
OVERLOADABLE uchar8 as_uchar8(ushort4 v);
OVERLOADABLE double as_double(ushort4 v);
OVERLOADABLE float2 as_float2(ushort4 v);
OVERLOADABLE half3 as_half3(ushort4 v);
OVERLOADABLE half4 as_half4(ushort4 v);
OVERLOADABLE long as_long(char8 v);
OVERLOADABLE ulong as_ulong(char8 v);
OVERLOADABLE int2 as_int2(char8 v);
OVERLOADABLE uint2 as_uint2(char8 v);
OVERLOADABLE short3 as_short3(char8 v);
OVERLOADABLE short4 as_short4(char8 v);
OVERLOADABLE ushort3 as_ushort3(char8 v);
OVERLOADABLE ushort4 as_ushort4(char8 v);
OVERLOADABLE uchar8 as_uchar8(char8 v);
OVERLOADABLE double as_double(char8 v);
OVERLOADABLE float2 as_float2(char8 v);
OVERLOADABLE half3 as_half3(char8 v);
OVERLOADABLE half4 as_half4(char8 v);
OVERLOADABLE long as_long(uchar8 v);
OVERLOADABLE ulong as_ulong(uchar8 v);
OVERLOADABLE int2 as_int2(uchar8 v);
OVERLOADABLE uint2 as_uint2(uchar8 v);
OVERLOADABLE short3 as_short3(uchar8 v);
OVERLOADABLE short4 as_short4(uchar8 v);
OVERLOADABLE ushort3 as_ushort3(uchar8 v);
OVERLOADABLE ushort4 as_ushort4(uchar8 v);
OVERLOADABLE char8 as_char8(uchar8 v);
OVERLOADABLE double as_double(uchar8 v);
OVERLOADABLE float2 as_float2(uchar8 v);
OVERLOADABLE half3 as_half3(uchar8 v);
OVERLOADABLE half4 as_half4(uchar8 v);
OVERLOADABLE long as_long(double v);
OVERLOADABLE ulong as_ulong(double v);
OVERLOADABLE int2 as_int2(double v);
OVERLOADABLE uint2 as_uint2(double v);
OVERLOADABLE short3 as_short3(double v);
OVERLOADABLE short4 as_short4(double v);
OVERLOADABLE ushort3 as_ushort3(double v);
OVERLOADABLE ushort4 as_ushort4(double v);
OVERLOADABLE char8 as_char8(double v);
OVERLOADABLE uchar8 as_uchar8(double v);
OVERLOADABLE float2 as_float2(double v);
OVERLOADABLE half3 as_half3(double v);
OVERLOADABLE half4 as_half4(double v);
OVERLOADABLE long as_long(float2 v);
OVERLOADABLE ulong as_ulong(float2 v);
OVERLOADABLE int2 as_int2(float2 v);
OVERLOADABLE uint2 as_uint2(float2 v);
OVERLOADABLE short3 as_short3(float2 v);
OVERLOADABLE short4 as_short4(float2 v);
OVERLOADABLE ushort3 as_ushort3(float2 v);
OVERLOADABLE ushort4 as_ushort4(float2 v);
OVERLOADABLE char8 as_char8(float2 v);
OVERLOADABLE uchar8 as_uchar8(float2 v);
OVERLOADABLE double as_double(float2 v);
OVERLOADABLE half3 as_half3(float2 v);
OVERLOADABLE half4 as_half4(float2 v);
OVERLOADABLE long as_long(half3 v);
OVERLOADABLE ulong as_ulong(half3 v);
OVERLOADABLE int2 as_int2(half3 v);
OVERLOADABLE uint2 as_uint2(half3 v);
OVERLOADABLE short3 as_short3(half3 v);
OVERLOADABLE short4 as_short4(half3 v);
OVERLOADABLE ushort3 as_ushort3(half3 v);
OVERLOADABLE ushort4 as_ushort4(half3 v);
OVERLOADABLE char8 as_char8(half3 v);
OVERLOADABLE uchar8 as_uchar8(half3 v);
OVERLOADABLE double as_double(half3 v);
OVERLOADABLE float2 as_float2(half3 v);
OVERLOADABLE long as_long(half4 v);
OVERLOADABLE ulong as_ulong(half4 v);
OVERLOADABLE int2 as_int2(half4 v);
OVERLOADABLE uint2 as_uint2(half4 v);
OVERLOADABLE short3 as_short3(half4 v);
OVERLOADABLE short4 as_short4(half4 v);
OVERLOADABLE ushort3 as_ushort3(half4 v);
OVERLOADABLE ushort4 as_ushort4(half4 v);
OVERLOADABLE char8 as_char8(half4 v);
OVERLOADABLE uchar8 as_uchar8(half4 v);
OVERLOADABLE double as_double(half4 v);
OVERLOADABLE float2 as_float2(half4 v);
OVERLOADABLE ulong2 as_ulong2(long2 v);
OVERLOADABLE int3 as_int3(long2 v);
OVERLOADABLE int4 as_int4(long2 v);
OVERLOADABLE uint3 as_uint3(long2 v);
OVERLOADABLE uint4 as_uint4(long2 v);
OVERLOADABLE short8 as_short8(long2 v);
OVERLOADABLE ushort8 as_ushort8(long2 v);
OVERLOADABLE char16 as_char16(long2 v);
OVERLOADABLE uchar16 as_uchar16(long2 v);
OVERLOADABLE double2 as_double2(long2 v);
OVERLOADABLE float3 as_float3(long2 v);
OVERLOADABLE float4 as_float4(long2 v);
OVERLOADABLE half8 as_half8(long2 v);
OVERLOADABLE long2 as_long2(ulong2 v);
OVERLOADABLE int3 as_int3(ulong2 v);
OVERLOADABLE int4 as_int4(ulong2 v);
OVERLOADABLE uint3 as_uint3(ulong2 v);
OVERLOADABLE uint4 as_uint4(ulong2 v);
OVERLOADABLE short8 as_short8(ulong2 v);
OVERLOADABLE ushort8 as_ushort8(ulong2 v);
OVERLOADABLE char16 as_char16(ulong2 v);
OVERLOADABLE uchar16 as_uchar16(ulong2 v);
OVERLOADABLE double2 as_double2(ulong2 v);
OVERLOADABLE float3 as_float3(ulong2 v);
OVERLOADABLE float4 as_float4(ulong2 v);
OVERLOADABLE half8 as_half8(ulong2 v);
OVERLOADABLE long2 as_long2(int3 v);
OVERLOADABLE ulong2 as_ulong2(int3 v);
OVERLOADABLE uint3 as_uint3(int3 v);
OVERLOADABLE uint4 as_uint4(int3 v);
OVERLOADABLE short8 as_short8(int3 v);
OVERLOADABLE ushort8 as_ushort8(int3 v);
OVERLOADABLE char16 as_char16(int3 v);
OVERLOADABLE uchar16 as_uchar16(int3 v);
OVERLOADABLE double2 as_double2(int3 v);
OVERLOADABLE float3 as_float3(int3 v);
OVERLOADABLE float4 as_float4(int3 v);
OVERLOADABLE half8 as_half8(int3 v);
OVERLOADABLE long2 as_long2(int4 v);
OVERLOADABLE ulong2 as_ulong2(int4 v);
OVERLOADABLE uint3 as_uint3(int4 v);
OVERLOADABLE uint4 as_uint4(int4 v);
OVERLOADABLE short8 as_short8(int4 v);
OVERLOADABLE ushort8 as_ushort8(int4 v);
OVERLOADABLE char16 as_char16(int4 v);
OVERLOADABLE uchar16 as_uchar16(int4 v);
OVERLOADABLE double2 as_double2(int4 v);
OVERLOADABLE float3 as_float3(int4 v);
OVERLOADABLE float4 as_float4(int4 v);
OVERLOADABLE half8 as_half8(int4 v);
OVERLOADABLE long2 as_long2(uint3 v);
OVERLOADABLE ulong2 as_ulong2(uint3 v);
OVERLOADABLE int3 as_int3(uint3 v);
OVERLOADABLE int4 as_int4(uint3 v);
OVERLOADABLE short8 as_short8(uint3 v);
OVERLOADABLE ushort8 as_ushort8(uint3 v);
OVERLOADABLE char16 as_char16(uint3 v);
OVERLOADABLE uchar16 as_uchar16(uint3 v);
OVERLOADABLE double2 as_double2(uint3 v);
OVERLOADABLE float3 as_float3(uint3 v);
OVERLOADABLE float4 as_float4(uint3 v);
OVERLOADABLE half8 as_half8(uint3 v);
OVERLOADABLE long2 as_long2(uint4 v);
OVERLOADABLE ulong2 as_ulong2(uint4 v);
OVERLOADABLE int3 as_int3(uint4 v);
OVERLOADABLE int4 as_int4(uint4 v);
OVERLOADABLE short8 as_short8(uint4 v);
OVERLOADABLE ushort8 as_ushort8(uint4 v);
OVERLOADABLE char16 as_char16(uint4 v);
OVERLOADABLE uchar16 as_uchar16(uint4 v);
OVERLOADABLE double2 as_double2(uint4 v);
OVERLOADABLE float3 as_float3(uint4 v);
OVERLOADABLE float4 as_float4(uint4 v);
OVERLOADABLE half8 as_half8(uint4 v);
OVERLOADABLE long2 as_long2(short8 v);
OVERLOADABLE ulong2 as_ulong2(short8 v);
OVERLOADABLE int3 as_int3(short8 v);
OVERLOADABLE int4 as_int4(short8 v);
OVERLOADABLE uint3 as_uint3(short8 v);
OVERLOADABLE uint4 as_uint4(short8 v);
OVERLOADABLE ushort8 as_ushort8(short8 v);
OVERLOADABLE char16 as_char16(short8 v);
OVERLOADABLE uchar16 as_uchar16(short8 v);
OVERLOADABLE double2 as_double2(short8 v);
OVERLOADABLE float3 as_float3(short8 v);
OVERLOADABLE float4 as_float4(short8 v);
OVERLOADABLE half8 as_half8(short8 v);
OVERLOADABLE long2 as_long2(ushort8 v);
OVERLOADABLE ulong2 as_ulong2(ushort8 v);
OVERLOADABLE int3 as_int3(ushort8 v);
OVERLOADABLE int4 as_int4(ushort8 v);
OVERLOADABLE uint3 as_uint3(ushort8 v);
OVERLOADABLE uint4 as_uint4(ushort8 v);
OVERLOADABLE short8 as_short8(ushort8 v);
OVERLOADABLE char16 as_char16(ushort8 v);
OVERLOADABLE uchar16 as_uchar16(ushort8 v);
OVERLOADABLE double2 as_double2(ushort8 v);
OVERLOADABLE float3 as_float3(ushort8 v);
OVERLOADABLE float4 as_float4(ushort8 v);
OVERLOADABLE half8 as_half8(ushort8 v);
OVERLOADABLE long2 as_long2(char16 v);
OVERLOADABLE ulong2 as_ulong2(char16 v);
OVERLOADABLE int3 as_int3(char16 v);
OVERLOADABLE int4 as_int4(char16 v);
OVERLOADABLE uint3 as_uint3(char16 v);
OVERLOADABLE uint4 as_uint4(char16 v);
OVERLOADABLE short8 as_short8(char16 v);
OVERLOADABLE ushort8 as_ushort8(char16 v);
OVERLOADABLE uchar16 as_uchar16(char16 v);
OVERLOADABLE double2 as_double2(char16 v);
OVERLOADABLE float3 as_float3(char16 v);
OVERLOADABLE float4 as_float4(char16 v);
OVERLOADABLE half8 as_half8(char16 v);
OVERLOADABLE long2 as_long2(uchar16 v);
OVERLOADABLE ulong2 as_ulong2(uchar16 v);
OVERLOADABLE int3 as_int3(uchar16 v);
OVERLOADABLE int4 as_int4(uchar16 v);
OVERLOADABLE uint3 as_uint3(uchar16 v);
OVERLOADABLE uint4 as_uint4(uchar16 v);
OVERLOADABLE short8 as_short8(uchar16 v);
OVERLOADABLE ushort8 as_ushort8(uchar16 v);
OVERLOADABLE char16 as_char16(uchar16 v);
OVERLOADABLE double2 as_double2(uchar16 v);
OVERLOADABLE float3 as_float3(uchar16 v);
OVERLOADABLE float4 as_float4(uchar16 v);
OVERLOADABLE half8 as_half8(uchar16 v);
OVERLOADABLE long2 as_long2(double2 v);
OVERLOADABLE ulong2 as_ulong2(double2 v);
OVERLOADABLE int3 as_int3(double2 v);
OVERLOADABLE int4 as_int4(double2 v);
OVERLOADABLE uint3 as_uint3(double2 v);
OVERLOADABLE uint4 as_uint4(double2 v);
OVERLOADABLE short8 as_short8(double2 v);
OVERLOADABLE ushort8 as_ushort8(double2 v);
OVERLOADABLE char16 as_char16(double2 v);
OVERLOADABLE uchar16 as_uchar16(double2 v);
OVERLOADABLE float3 as_float3(double2 v);
OVERLOADABLE float4 as_float4(double2 v);
OVERLOADABLE half8 as_half8(double2 v);
OVERLOADABLE long2 as_long2(float3 v);
OVERLOADABLE ulong2 as_ulong2(float3 v);
OVERLOADABLE int3 as_int3(float3 v);
OVERLOADABLE int4 as_int4(float3 v);
OVERLOADABLE uint3 as_uint3(float3 v);
OVERLOADABLE uint4 as_uint4(float3 v);
OVERLOADABLE short8 as_short8(float3 v);
OVERLOADABLE ushort8 as_ushort8(float3 v);
OVERLOADABLE char16 as_char16(float3 v);
OVERLOADABLE uchar16 as_uchar16(float3 v);
OVERLOADABLE double2 as_double2(float3 v);
OVERLOADABLE half8 as_half8(float3 v);
OVERLOADABLE long2 as_long2(float4 v);
OVERLOADABLE ulong2 as_ulong2(float4 v);
OVERLOADABLE int3 as_int3(float4 v);
OVERLOADABLE int4 as_int4(float4 v);
OVERLOADABLE uint3 as_uint3(float4 v);
OVERLOADABLE uint4 as_uint4(float4 v);
OVERLOADABLE short8 as_short8(float4 v);
OVERLOADABLE ushort8 as_ushort8(float4 v);
OVERLOADABLE char16 as_char16(float4 v);
OVERLOADABLE uchar16 as_uchar16(float4 v);
OVERLOADABLE double2 as_double2(float4 v);
OVERLOADABLE half8 as_half8(float4 v);
OVERLOADABLE long2 as_long2(half8 v);
OVERLOADABLE ulong2 as_ulong2(half8 v);
OVERLOADABLE int3 as_int3(half8 v);
OVERLOADABLE int4 as_int4(half8 v);
OVERLOADABLE uint3 as_uint3(half8 v);
OVERLOADABLE uint4 as_uint4(half8 v);
OVERLOADABLE short8 as_short8(half8 v);
OVERLOADABLE ushort8 as_ushort8(half8 v);
OVERLOADABLE char16 as_char16(half8 v);
OVERLOADABLE uchar16 as_uchar16(half8 v);
OVERLOADABLE double2 as_double2(half8 v);
OVERLOADABLE float3 as_float3(half8 v);
OVERLOADABLE float4 as_float4(half8 v);
OVERLOADABLE ulong3 as_ulong3(long3 v);
OVERLOADABLE ulong4 as_ulong4(long3 v);
OVERLOADABLE int8 as_int8(long3 v);
OVERLOADABLE uint8 as_uint8(long3 v);
OVERLOADABLE short16 as_short16(long3 v);
OVERLOADABLE ushort16 as_ushort16(long3 v);
OVERLOADABLE double3 as_double3(long3 v);
OVERLOADABLE double4 as_double4(long3 v);
OVERLOADABLE float8 as_float8(long3 v);
OVERLOADABLE half16 as_half16(long3 v);
OVERLOADABLE ulong3 as_ulong3(long4 v);
OVERLOADABLE ulong4 as_ulong4(long4 v);
OVERLOADABLE int8 as_int8(long4 v);
OVERLOADABLE uint8 as_uint8(long4 v);
OVERLOADABLE short16 as_short16(long4 v);
OVERLOADABLE ushort16 as_ushort16(long4 v);
OVERLOADABLE double3 as_double3(long4 v);
OVERLOADABLE double4 as_double4(long4 v);
OVERLOADABLE float8 as_float8(long4 v);
OVERLOADABLE half16 as_half16(long4 v);
OVERLOADABLE long3 as_long3(ulong3 v);
OVERLOADABLE long4 as_long4(ulong3 v);
OVERLOADABLE int8 as_int8(ulong3 v);
OVERLOADABLE uint8 as_uint8(ulong3 v);
OVERLOADABLE short16 as_short16(ulong3 v);
OVERLOADABLE ushort16 as_ushort16(ulong3 v);
OVERLOADABLE double3 as_double3(ulong3 v);
OVERLOADABLE double4 as_double4(ulong3 v);
OVERLOADABLE float8 as_float8(ulong3 v);
OVERLOADABLE half16 as_half16(ulong3 v);
OVERLOADABLE long3 as_long3(ulong4 v);
OVERLOADABLE long4 as_long4(ulong4 v);
OVERLOADABLE int8 as_int8(ulong4 v);
OVERLOADABLE uint8 as_uint8(ulong4 v);
OVERLOADABLE short16 as_short16(ulong4 v);
OVERLOADABLE ushort16 as_ushort16(ulong4 v);
OVERLOADABLE double3 as_double3(ulong4 v);
OVERLOADABLE double4 as_double4(ulong4 v);
OVERLOADABLE float8 as_float8(ulong4 v);
OVERLOADABLE half16 as_half16(ulong4 v);
OVERLOADABLE long3 as_long3(int8 v);
OVERLOADABLE long4 as_long4(int8 v);
OVERLOADABLE ulong3 as_ulong3(int8 v);
OVERLOADABLE ulong4 as_ulong4(int8 v);
OVERLOADABLE uint8 as_uint8(int8 v);
OVERLOADABLE short16 as_short16(int8 v);
OVERLOADABLE ushort16 as_ushort16(int8 v);
OVERLOADABLE double3 as_double3(int8 v);
OVERLOADABLE double4 as_double4(int8 v);
OVERLOADABLE float8 as_float8(int8 v);
OVERLOADABLE half16 as_half16(int8 v);
OVERLOADABLE long3 as_long3(uint8 v);
OVERLOADABLE long4 as_long4(uint8 v);
OVERLOADABLE ulong3 as_ulong3(uint8 v);
OVERLOADABLE ulong4 as_ulong4(uint8 v);
OVERLOADABLE int8 as_int8(uint8 v);
OVERLOADABLE short16 as_short16(uint8 v);
OVERLOADABLE ushort16 as_ushort16(uint8 v);
OVERLOADABLE double3 as_double3(uint8 v);
OVERLOADABLE double4 as_double4(uint8 v);
OVERLOADABLE float8 as_float8(uint8 v);
OVERLOADABLE half16 as_half16(uint8 v);
OVERLOADABLE long3 as_long3(short16 v);
OVERLOADABLE long4 as_long4(short16 v);
OVERLOADABLE ulong3 as_ulong3(short16 v);
OVERLOADABLE ulong4 as_ulong4(short16 v);
OVERLOADABLE int8 as_int8(short16 v);
OVERLOADABLE uint8 as_uint8(short16 v);
OVERLOADABLE ushort16 as_ushort16(short16 v);
OVERLOADABLE double3 as_double3(short16 v);
OVERLOADABLE double4 as_double4(short16 v);
OVERLOADABLE float8 as_float8(short16 v);
OVERLOADABLE half16 as_half16(short16 v);
OVERLOADABLE long3 as_long3(ushort16 v);
OVERLOADABLE long4 as_long4(ushort16 v);
OVERLOADABLE ulong3 as_ulong3(ushort16 v);
OVERLOADABLE ulong4 as_ulong4(ushort16 v);
OVERLOADABLE int8 as_int8(ushort16 v);
OVERLOADABLE uint8 as_uint8(ushort16 v);
OVERLOADABLE short16 as_short16(ushort16 v);
OVERLOADABLE double3 as_double3(ushort16 v);
OVERLOADABLE double4 as_double4(ushort16 v);
OVERLOADABLE float8 as_float8(ushort16 v);
OVERLOADABLE half16 as_half16(ushort16 v);
OVERLOADABLE long3 as_long3(double3 v);
OVERLOADABLE long4 as_long4(double3 v);
OVERLOADABLE ulong3 as_ulong3(double3 v);
OVERLOADABLE ulong4 as_ulong4(double3 v);
OVERLOADABLE int8 as_int8(double3 v);
OVERLOADABLE uint8 as_uint8(double3 v);
OVERLOADABLE short16 as_short16(double3 v);
OVERLOADABLE ushort16 as_ushort16(double3 v);
OVERLOADABLE float8 as_float8(double3 v);
OVERLOADABLE half16 as_half16(double3 v);
OVERLOADABLE long3 as_long3(double4 v);
OVERLOADABLE long4 as_long4(double4 v);
OVERLOADABLE ulong3 as_ulong3(double4 v);
OVERLOADABLE ulong4 as_ulong4(double4 v);
OVERLOADABLE int8 as_int8(double4 v);
OVERLOADABLE uint8 as_uint8(double4 v);
OVERLOADABLE short16 as_short16(double4 v);
OVERLOADABLE ushort16 as_ushort16(double4 v);
OVERLOADABLE float8 as_float8(double4 v);
OVERLOADABLE half16 as_half16(double4 v);
OVERLOADABLE long3 as_long3(float8 v);
OVERLOADABLE long4 as_long4(float8 v);
OVERLOADABLE ulong3 as_ulong3(float8 v);
OVERLOADABLE ulong4 as_ulong4(float8 v);
OVERLOADABLE int8 as_int8(float8 v);
OVERLOADABLE uint8 as_uint8(float8 v);
OVERLOADABLE short16 as_short16(float8 v);
OVERLOADABLE ushort16 as_ushort16(float8 v);
OVERLOADABLE double3 as_double3(float8 v);
OVERLOADABLE double4 as_double4(float8 v);
OVERLOADABLE half16 as_half16(float8 v);
OVERLOADABLE long3 as_long3(half16 v);
OVERLOADABLE long4 as_long4(half16 v);
OVERLOADABLE ulong3 as_ulong3(half16 v);
OVERLOADABLE ulong4 as_ulong4(half16 v);
OVERLOADABLE int8 as_int8(half16 v);
OVERLOADABLE uint8 as_uint8(half16 v);
OVERLOADABLE short16 as_short16(half16 v);
OVERLOADABLE ushort16 as_ushort16(half16 v);
OVERLOADABLE double3 as_double3(half16 v);
OVERLOADABLE double4 as_double4(half16 v);
OVERLOADABLE float8 as_float8(half16 v);
OVERLOADABLE ulong8 as_ulong8(long8 v);
OVERLOADABLE int16 as_int16(long8 v);
OVERLOADABLE uint16 as_uint16(long8 v);
OVERLOADABLE double8 as_double8(long8 v);
OVERLOADABLE float16 as_float16(long8 v);
OVERLOADABLE long8 as_long8(ulong8 v);
OVERLOADABLE int16 as_int16(ulong8 v);
OVERLOADABLE uint16 as_uint16(ulong8 v);
OVERLOADABLE double8 as_double8(ulong8 v);
OVERLOADABLE float16 as_float16(ulong8 v);
OVERLOADABLE long8 as_long8(int16 v);
OVERLOADABLE ulong8 as_ulong8(int16 v);
OVERLOADABLE uint16 as_uint16(int16 v);
OVERLOADABLE double8 as_double8(int16 v);
OVERLOADABLE float16 as_float16(int16 v);
OVERLOADABLE long8 as_long8(uint16 v);
OVERLOADABLE ulong8 as_ulong8(uint16 v);
OVERLOADABLE int16 as_int16(uint16 v);
OVERLOADABLE double8 as_double8(uint16 v);
OVERLOADABLE float16 as_float16(uint16 v);
OVERLOADABLE long8 as_long8(double8 v);
OVERLOADABLE ulong8 as_ulong8(double8 v);
OVERLOADABLE int16 as_int16(double8 v);
OVERLOADABLE uint16 as_uint16(double8 v);
OVERLOADABLE float16 as_float16(double8 v);
OVERLOADABLE long8 as_long8(float16 v);
OVERLOADABLE ulong8 as_ulong8(float16 v);
OVERLOADABLE int16 as_int16(float16 v);
OVERLOADABLE uint16 as_uint16(float16 v);
OVERLOADABLE double8 as_double8(float16 v);
OVERLOADABLE ulong16 as_ulong16(long16 v);
OVERLOADABLE double16 as_double16(long16 v);
OVERLOADABLE long16 as_long16(ulong16 v);
OVERLOADABLE double16 as_double16(ulong16 v);
OVERLOADABLE long16 as_long16(double16 v);
OVERLOADABLE ulong16 as_ulong16(double16 v);
#endif /* __OCL_AS_H__ */
