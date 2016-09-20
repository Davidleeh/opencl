/*
 * Copyright © 2012 - 2014 Intel Corporation
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
#ifndef __OCL_MATH_H__
#define __OCL_MATH_H__

#include "ocl_types.h"

OVERLOADABLE float cospi(float x);
OVERLOADABLE float cosh(float x);
OVERLOADABLE float acos(float x);
OVERLOADABLE float acospi(float x);
OVERLOADABLE float acosh(float x);
OVERLOADABLE float sinpi(float x);
OVERLOADABLE float sinh(float x);
OVERLOADABLE float asin(float x);
OVERLOADABLE float asinpi(float x);
OVERLOADABLE float asinh(float x);
OVERLOADABLE float tanpi(float x);
OVERLOADABLE float tanh(float x);
OVERLOADABLE float atan(float x);
OVERLOADABLE float atan2(float y, float x);
OVERLOADABLE float atan2pi(float y, float x);
OVERLOADABLE float atanpi(float x);
OVERLOADABLE float atanh(float x);
OVERLOADABLE float cbrt(float x);
OVERLOADABLE float rint(float x);
OVERLOADABLE float copysign(float x, float y);
OVERLOADABLE float erf(float x);
OVERLOADABLE float erfc(float x);
OVERLOADABLE float fmod (float x, float y);
OVERLOADABLE float remainder(float x, float p);
OVERLOADABLE float ldexp(float x, int n);
OVERLOADABLE float powr(float x, float y);
OVERLOADABLE float pow(float x, float y);
//no pow, we use powr instead
OVERLOADABLE float fabs(float x);
OVERLOADABLE float trunc(float x);
OVERLOADABLE float round(float x);
OVERLOADABLE float floor(float x);
OVERLOADABLE float ceil(float x);
OVERLOADABLE float log(float x);
OVERLOADABLE float log2(float x);
OVERLOADABLE float log10(float x);
OVERLOADABLE float exp(float x);
OVERLOADABLE float exp10(float x);
OVERLOADABLE float expm1(float x);
OVERLOADABLE float fmin(float a, float b);
OVERLOADABLE float fmax(float a, float b);
OVERLOADABLE float fma(float a, float b, float c);
OVERLOADABLE float fdim(float x, float y);
OVERLOADABLE float maxmag(float x, float y);
OVERLOADABLE float minmag(float x, float y);
OVERLOADABLE float exp2(float x);
OVERLOADABLE float mad(float a, float b, float c);
OVERLOADABLE float sin(float x);
OVERLOADABLE float cos(float x);
OVERLOADABLE float tan(float x);
OVERLOADABLE float tgamma(float x);
OVERLOADABLE float lgamma(float x);
OVERLOADABLE float lgamma_r(float x, global int *signgamp);
OVERLOADABLE float lgamma_r(float x, local int *signgamp);
OVERLOADABLE float lgamma_r(float x, private int *signgamp);
OVERLOADABLE float log1p(float x);
OVERLOADABLE float logb(float x);
OVERLOADABLE int ilogb(float x);
OVERLOADABLE float nan(uint code);
OVERLOADABLE float sincos(float x, global float *cosval);
OVERLOADABLE float sincos(float x, local float *cosval);
OVERLOADABLE float sincos(float x, private float *cosval);
OVERLOADABLE float sqrt(float x);
OVERLOADABLE float rsqrt(float x);
OVERLOADABLE float frexp(float x, global int *exp);
OVERLOADABLE float frexp(float x, local int *exp);
OVERLOADABLE float frexp(float x, private int *exp);
OVERLOADABLE float nextafter(float x, float y);
OVERLOADABLE float modf(float x, global float *i);
OVERLOADABLE float modf(float x, local float *i);
OVERLOADABLE float modf(float x, private float *i);
OVERLOADABLE float hypot(float x, float y);
OVERLOADABLE float fract(float x, global float *p);
OVERLOADABLE float fract(float x, local float *p);
OVERLOADABLE float fract(float x, private float *p);
OVERLOADABLE float remquo(float x, float y, global int *quo);
OVERLOADABLE float remquo(float x, float y, local int *quo);
OVERLOADABLE float remquo(float x, float y, private int *quo);
OVERLOADABLE float pown(float x, int n);
OVERLOADABLE float rootn(float x, int n);

// native
OVERLOADABLE float native_cos(float x);
OVERLOADABLE float native_divide(float x, float y);
OVERLOADABLE float native_exp(float x);
OVERLOADABLE float native_exp2(float x);
OVERLOADABLE float native_exp10(float x);
OVERLOADABLE float native_log(float x);
OVERLOADABLE float native_log2(float x);
OVERLOADABLE float native_log10(float x);
OVERLOADABLE float native_powr(float x, float y);
OVERLOADABLE float native_recip(float x);
OVERLOADABLE float native_rsqrt(float x);
OVERLOADABLE float native_sin(float x);
OVERLOADABLE float native_sqrt(float x);
OVERLOADABLE float native_tan(float x);


// Half float version.
OVERLOADABLE half cospi(half x);
OVERLOADABLE half cosh(half x);
OVERLOADABLE half acos(half x);
OVERLOADABLE half acospi(half x);
OVERLOADABLE half acosh(half x);
OVERLOADABLE half sinpi(half x);
OVERLOADABLE half sinh(half x);
OVERLOADABLE half asin(half x);
OVERLOADABLE half asinpi(half x);
OVERLOADABLE half asinh(half x);
OVERLOADABLE half tanpi(half x);
OVERLOADABLE half tanh(half x);
OVERLOADABLE half atan(half x);
OVERLOADABLE half atan2(half y, half x);
OVERLOADABLE half atan2pi(half y, half x);
OVERLOADABLE half atanpi(half x);
OVERLOADABLE half atanh(half x);
OVERLOADABLE half cbrt(half x);
OVERLOADABLE half rint(half x);
OVERLOADABLE half copysign(half x, half y);
OVERLOADABLE half erf(half x);
OVERLOADABLE half erfc(half x);
OVERLOADABLE half fmod (half x, half y);
OVERLOADABLE half remainder(half x, half p);
OVERLOADABLE half ldexp(half x, int n);
OVERLOADABLE half powr(half x, half y);
OVERLOADABLE half pow(half x, half y);
//no pow, we use powr instead
OVERLOADABLE half fabs(half x);
OVERLOADABLE half trunc(half x);
OVERLOADABLE half round(half x);
OVERLOADABLE half floor(half x);
OVERLOADABLE half ceil(half x);
OVERLOADABLE half log(half x);
OVERLOADABLE half log2(half x);
OVERLOADABLE half log10(half x);
OVERLOADABLE half exp(half x);
OVERLOADABLE half exp10(half x);
OVERLOADABLE half expm1(half x);
OVERLOADABLE half fmin(half a, half b);
OVERLOADABLE half fmax(half a, half b);
OVERLOADABLE half fma(half a, half b, half c);
OVERLOADABLE half fdim(half x, half y);
OVERLOADABLE half maxmag(half x, half y);
OVERLOADABLE half minmag(half x, half y);
OVERLOADABLE half exp2(half x);
OVERLOADABLE half mad(half a, half b, half c);
OVERLOADABLE half sin(half x);
OVERLOADABLE half cos(half x);
OVERLOADABLE half tan(half x);
OVERLOADABLE half tgamma(half x);
OVERLOADABLE half lgamma(half x);
OVERLOADABLE half lgamma_r(half x, global int *signgamp);
OVERLOADABLE half lgamma_r(half x, local int *signgamp);
OVERLOADABLE half lgamma_r(half x, private int *signgamp);
OVERLOADABLE half log1p(half x);
OVERLOADABLE half logb(half x);
OVERLOADABLE int ilogb(half x);
OVERLOADABLE half nan(ushort code);
OVERLOADABLE half sincos(half x, global half *cosval);
OVERLOADABLE half sincos(half x, local half *cosval);
OVERLOADABLE half sincos(half x, private half *cosval);
OVERLOADABLE half sqrt(half x);
OVERLOADABLE half rsqrt(half x);
OVERLOADABLE half frexp(half x, global int *exp);
OVERLOADABLE half frexp(half x, local int *exp);
OVERLOADABLE half frexp(half x, private int *exp);
OVERLOADABLE half nextafter(half x, half y);
OVERLOADABLE half modf(half x, global half *i);
OVERLOADABLE half modf(half x, local half *i);
OVERLOADABLE half modf(half x, private half *i);
OVERLOADABLE half hypot(half x, half y);
OVERLOADABLE half fract(half x, global half *p);
OVERLOADABLE half fract(half x, local half *p);
OVERLOADABLE half fract(half x, private half *p);
OVERLOADABLE half remquo(half x, half y, global int *quo);
OVERLOADABLE half remquo(half x, half y, local int *quo);
OVERLOADABLE half remquo(half x, half y, private int *quo);
OVERLOADABLE half pown(half x, int n);
OVERLOADABLE half rootn(half x, int n);

// native half
OVERLOADABLE half native_cos(half x);
OVERLOADABLE half native_divide(half x, half y);
OVERLOADABLE half native_exp(half x);
OVERLOADABLE half native_exp2(half x);
OVERLOADABLE half native_exp10(half x);
OVERLOADABLE half native_log(half x);
OVERLOADABLE half native_log2(half x);
OVERLOADABLE half native_log10(half x);
OVERLOADABLE half native_powr(half x, half y);
OVERLOADABLE half native_recip(half x);
OVERLOADABLE half native_rsqrt(half x);
OVERLOADABLE half native_sin(half x);
OVERLOADABLE half native_sqrt(half x);
OVERLOADABLE half native_tan(half x);


// half accuracy
#define half_cos cos
#define half_divide native_divide
#define half_exp native_exp
#define half_exp2 native_exp2
#define half_exp10 native_exp10
#define half_log native_log
#define half_log2 native_log2
#define half_log10 native_log10
#define half_powr powr
#define half_recip native_recip
#define half_rsqrt native_rsqrt
#define half_sin sin
#define half_sqrt native_sqrt
#define half_tan tan
//Begin from this part is autogenerated.
//Don't modify it manually.
//math builtin functions
//gentype acos (gentype)

OVERLOADABLE float2 acos (float2 param0);
OVERLOADABLE float3 acos (float3 param0);
OVERLOADABLE float4 acos (float4 param0);
OVERLOADABLE float8 acos (float8 param0);
OVERLOADABLE float16 acos (float16 param0);
OVERLOADABLE half2 acos (half2 param0);
OVERLOADABLE half3 acos (half3 param0);
OVERLOADABLE half4 acos (half4 param0);
OVERLOADABLE half8 acos (half8 param0);
OVERLOADABLE half16 acos (half16 param0);

//gentype acosh (gentype)

OVERLOADABLE float2 acosh (float2 param0);
OVERLOADABLE float3 acosh (float3 param0);
OVERLOADABLE float4 acosh (float4 param0);
OVERLOADABLE float8 acosh (float8 param0);
OVERLOADABLE float16 acosh (float16 param0);
OVERLOADABLE half2 acosh (half2 param0);
OVERLOADABLE half3 acosh (half3 param0);
OVERLOADABLE half4 acosh (half4 param0);
OVERLOADABLE half8 acosh (half8 param0);
OVERLOADABLE half16 acosh (half16 param0);

//gentype acospi (gentype x)

OVERLOADABLE float2 acospi (float2 param0);
OVERLOADABLE float3 acospi (float3 param0);
OVERLOADABLE float4 acospi (float4 param0);
OVERLOADABLE float8 acospi (float8 param0);
OVERLOADABLE float16 acospi (float16 param0);
OVERLOADABLE half2 acospi (half2 param0);
OVERLOADABLE half3 acospi (half3 param0);
OVERLOADABLE half4 acospi (half4 param0);
OVERLOADABLE half8 acospi (half8 param0);
OVERLOADABLE half16 acospi (half16 param0);

//gentype asin (gentype)

OVERLOADABLE float2 asin (float2 param0);
OVERLOADABLE float3 asin (float3 param0);
OVERLOADABLE float4 asin (float4 param0);
OVERLOADABLE float8 asin (float8 param0);
OVERLOADABLE float16 asin (float16 param0);
OVERLOADABLE half2 asin (half2 param0);
OVERLOADABLE half3 asin (half3 param0);
OVERLOADABLE half4 asin (half4 param0);
OVERLOADABLE half8 asin (half8 param0);
OVERLOADABLE half16 asin (half16 param0);

//gentype asinh (gentype)

OVERLOADABLE float2 asinh (float2 param0);
OVERLOADABLE float3 asinh (float3 param0);
OVERLOADABLE float4 asinh (float4 param0);
OVERLOADABLE float8 asinh (float8 param0);
OVERLOADABLE float16 asinh (float16 param0);
OVERLOADABLE half2 asinh (half2 param0);
OVERLOADABLE half3 asinh (half3 param0);
OVERLOADABLE half4 asinh (half4 param0);
OVERLOADABLE half8 asinh (half8 param0);
OVERLOADABLE half16 asinh (half16 param0);

//gentype asinpi (gentype x)

OVERLOADABLE float2 asinpi (float2 param0);
OVERLOADABLE float3 asinpi (float3 param0);
OVERLOADABLE float4 asinpi (float4 param0);
OVERLOADABLE float8 asinpi (float8 param0);
OVERLOADABLE float16 asinpi (float16 param0);
OVERLOADABLE half2 asinpi (half2 param0);
OVERLOADABLE half3 asinpi (half3 param0);
OVERLOADABLE half4 asinpi (half4 param0);
OVERLOADABLE half8 asinpi (half8 param0);
OVERLOADABLE half16 asinpi (half16 param0);

//gentype atan (gentype y_over_x)

OVERLOADABLE float2 atan (float2 param0);
OVERLOADABLE float3 atan (float3 param0);
OVERLOADABLE float4 atan (float4 param0);
OVERLOADABLE float8 atan (float8 param0);
OVERLOADABLE float16 atan (float16 param0);
OVERLOADABLE half2 atan (half2 param0);
OVERLOADABLE half3 atan (half3 param0);
OVERLOADABLE half4 atan (half4 param0);
OVERLOADABLE half8 atan (half8 param0);
OVERLOADABLE half16 atan (half16 param0);

//gentype atan2 (gentype y, gentype x)

OVERLOADABLE float2 atan2 (float2 param0, float2 param1);
OVERLOADABLE float3 atan2 (float3 param0, float3 param1);
OVERLOADABLE float4 atan2 (float4 param0, float4 param1);
OVERLOADABLE float8 atan2 (float8 param0, float8 param1);
OVERLOADABLE float16 atan2 (float16 param0, float16 param1);
OVERLOADABLE half2 atan2 (half2 param0, half2 param1);
OVERLOADABLE half3 atan2 (half3 param0, half3 param1);
OVERLOADABLE half4 atan2 (half4 param0, half4 param1);
OVERLOADABLE half8 atan2 (half8 param0, half8 param1);
OVERLOADABLE half16 atan2 (half16 param0, half16 param1);

//gentype atanh (gentype)

OVERLOADABLE float2 atanh (float2 param0);
OVERLOADABLE float3 atanh (float3 param0);
OVERLOADABLE float4 atanh (float4 param0);
OVERLOADABLE float8 atanh (float8 param0);
OVERLOADABLE float16 atanh (float16 param0);
OVERLOADABLE half2 atanh (half2 param0);
OVERLOADABLE half3 atanh (half3 param0);
OVERLOADABLE half4 atanh (half4 param0);
OVERLOADABLE half8 atanh (half8 param0);
OVERLOADABLE half16 atanh (half16 param0);

//gentype atanpi (gentype x)

OVERLOADABLE float2 atanpi (float2 param0);
OVERLOADABLE float3 atanpi (float3 param0);
OVERLOADABLE float4 atanpi (float4 param0);
OVERLOADABLE float8 atanpi (float8 param0);
OVERLOADABLE float16 atanpi (float16 param0);
OVERLOADABLE half2 atanpi (half2 param0);
OVERLOADABLE half3 atanpi (half3 param0);
OVERLOADABLE half4 atanpi (half4 param0);
OVERLOADABLE half8 atanpi (half8 param0);
OVERLOADABLE half16 atanpi (half16 param0);

//gentype atan2pi (gentype y, gentype x)

OVERLOADABLE float2 atan2pi (float2 param0, float2 param1);
OVERLOADABLE float3 atan2pi (float3 param0, float3 param1);
OVERLOADABLE float4 atan2pi (float4 param0, float4 param1);
OVERLOADABLE float8 atan2pi (float8 param0, float8 param1);
OVERLOADABLE float16 atan2pi (float16 param0, float16 param1);
OVERLOADABLE half2 atan2pi (half2 param0, half2 param1);
OVERLOADABLE half3 atan2pi (half3 param0, half3 param1);
OVERLOADABLE half4 atan2pi (half4 param0, half4 param1);
OVERLOADABLE half8 atan2pi (half8 param0, half8 param1);
OVERLOADABLE half16 atan2pi (half16 param0, half16 param1);

//gentype cbrt (gentype)

OVERLOADABLE float2 cbrt (float2 param0);
OVERLOADABLE float3 cbrt (float3 param0);
OVERLOADABLE float4 cbrt (float4 param0);
OVERLOADABLE float8 cbrt (float8 param0);
OVERLOADABLE float16 cbrt (float16 param0);
OVERLOADABLE half2 cbrt (half2 param0);
OVERLOADABLE half3 cbrt (half3 param0);
OVERLOADABLE half4 cbrt (half4 param0);
OVERLOADABLE half8 cbrt (half8 param0);
OVERLOADABLE half16 cbrt (half16 param0);

//gentype ceil (gentype)

OVERLOADABLE float2 ceil (float2 param0);
OVERLOADABLE float3 ceil (float3 param0);
OVERLOADABLE float4 ceil (float4 param0);
OVERLOADABLE float8 ceil (float8 param0);
OVERLOADABLE float16 ceil (float16 param0);
OVERLOADABLE half2 ceil (half2 param0);
OVERLOADABLE half3 ceil (half3 param0);
OVERLOADABLE half4 ceil (half4 param0);
OVERLOADABLE half8 ceil (half8 param0);
OVERLOADABLE half16 ceil (half16 param0);

//gentype copysign (gentype x, gentype y)

OVERLOADABLE float2 copysign (float2 param0, float2 param1);
OVERLOADABLE float3 copysign (float3 param0, float3 param1);
OVERLOADABLE float4 copysign (float4 param0, float4 param1);
OVERLOADABLE float8 copysign (float8 param0, float8 param1);
OVERLOADABLE float16 copysign (float16 param0, float16 param1);
OVERLOADABLE half2 copysign (half2 param0, half2 param1);
OVERLOADABLE half3 copysign (half3 param0, half3 param1);
OVERLOADABLE half4 copysign (half4 param0, half4 param1);
OVERLOADABLE half8 copysign (half8 param0, half8 param1);
OVERLOADABLE half16 copysign (half16 param0, half16 param1);

//gentype cos (gentype)

OVERLOADABLE float2 cos (float2 param0);
OVERLOADABLE float3 cos (float3 param0);
OVERLOADABLE float4 cos (float4 param0);
OVERLOADABLE float8 cos (float8 param0);
OVERLOADABLE float16 cos (float16 param0);
OVERLOADABLE half2 cos (half2 param0);
OVERLOADABLE half3 cos (half3 param0);
OVERLOADABLE half4 cos (half4 param0);
OVERLOADABLE half8 cos (half8 param0);
OVERLOADABLE half16 cos (half16 param0);

//gentype cosh (gentype)

OVERLOADABLE float2 cosh (float2 param0);
OVERLOADABLE float3 cosh (float3 param0);
OVERLOADABLE float4 cosh (float4 param0);
OVERLOADABLE float8 cosh (float8 param0);
OVERLOADABLE float16 cosh (float16 param0);
OVERLOADABLE half2 cosh (half2 param0);
OVERLOADABLE half3 cosh (half3 param0);
OVERLOADABLE half4 cosh (half4 param0);
OVERLOADABLE half8 cosh (half8 param0);
OVERLOADABLE half16 cosh (half16 param0);

//gentype cospi (gentype x)

OVERLOADABLE float2 cospi (float2 param0);
OVERLOADABLE float3 cospi (float3 param0);
OVERLOADABLE float4 cospi (float4 param0);
OVERLOADABLE float8 cospi (float8 param0);
OVERLOADABLE float16 cospi (float16 param0);
OVERLOADABLE half2 cospi (half2 param0);
OVERLOADABLE half3 cospi (half3 param0);
OVERLOADABLE half4 cospi (half4 param0);
OVERLOADABLE half8 cospi (half8 param0);
OVERLOADABLE half16 cospi (half16 param0);

//gentype erfc (gentype)

OVERLOADABLE float2 erfc (float2 param0);
OVERLOADABLE float3 erfc (float3 param0);
OVERLOADABLE float4 erfc (float4 param0);
OVERLOADABLE float8 erfc (float8 param0);
OVERLOADABLE float16 erfc (float16 param0);
OVERLOADABLE half2 erfc (half2 param0);
OVERLOADABLE half3 erfc (half3 param0);
OVERLOADABLE half4 erfc (half4 param0);
OVERLOADABLE half8 erfc (half8 param0);
OVERLOADABLE half16 erfc (half16 param0);

//gentype erf (gentype)

OVERLOADABLE float2 erf (float2 param0);
OVERLOADABLE float3 erf (float3 param0);
OVERLOADABLE float4 erf (float4 param0);
OVERLOADABLE float8 erf (float8 param0);
OVERLOADABLE float16 erf (float16 param0);
OVERLOADABLE half2 erf (half2 param0);
OVERLOADABLE half3 erf (half3 param0);
OVERLOADABLE half4 erf (half4 param0);
OVERLOADABLE half8 erf (half8 param0);
OVERLOADABLE half16 erf (half16 param0);

//gentype exp (gentype x)

OVERLOADABLE float2 exp (float2 param0);
OVERLOADABLE float3 exp (float3 param0);
OVERLOADABLE float4 exp (float4 param0);
OVERLOADABLE float8 exp (float8 param0);
OVERLOADABLE float16 exp (float16 param0);
OVERLOADABLE half2 exp (half2 param0);
OVERLOADABLE half3 exp (half3 param0);
OVERLOADABLE half4 exp (half4 param0);
OVERLOADABLE half8 exp (half8 param0);
OVERLOADABLE half16 exp (half16 param0);

//gentype exp2 (gentype)

OVERLOADABLE float2 exp2 (float2 param0);
OVERLOADABLE float3 exp2 (float3 param0);
OVERLOADABLE float4 exp2 (float4 param0);
OVERLOADABLE float8 exp2 (float8 param0);
OVERLOADABLE float16 exp2 (float16 param0);
OVERLOADABLE half2 exp2 (half2 param0);
OVERLOADABLE half3 exp2 (half3 param0);
OVERLOADABLE half4 exp2 (half4 param0);
OVERLOADABLE half8 exp2 (half8 param0);
OVERLOADABLE half16 exp2 (half16 param0);

//gentype exp10 (gentype)

OVERLOADABLE float2 exp10 (float2 param0);
OVERLOADABLE float3 exp10 (float3 param0);
OVERLOADABLE float4 exp10 (float4 param0);
OVERLOADABLE float8 exp10 (float8 param0);
OVERLOADABLE float16 exp10 (float16 param0);
OVERLOADABLE half2 exp10 (half2 param0);
OVERLOADABLE half3 exp10 (half3 param0);
OVERLOADABLE half4 exp10 (half4 param0);
OVERLOADABLE half8 exp10 (half8 param0);
OVERLOADABLE half16 exp10 (half16 param0);

//gentype expm1 (gentype x)

OVERLOADABLE float2 expm1 (float2 param0);
OVERLOADABLE float3 expm1 (float3 param0);
OVERLOADABLE float4 expm1 (float4 param0);
OVERLOADABLE float8 expm1 (float8 param0);
OVERLOADABLE float16 expm1 (float16 param0);
OVERLOADABLE half2 expm1 (half2 param0);
OVERLOADABLE half3 expm1 (half3 param0);
OVERLOADABLE half4 expm1 (half4 param0);
OVERLOADABLE half8 expm1 (half8 param0);
OVERLOADABLE half16 expm1 (half16 param0);

//gentype fabs (gentype)

OVERLOADABLE float2 fabs (float2 param0);
OVERLOADABLE float3 fabs (float3 param0);
OVERLOADABLE float4 fabs (float4 param0);
OVERLOADABLE float8 fabs (float8 param0);
OVERLOADABLE float16 fabs (float16 param0);
OVERLOADABLE half2 fabs (half2 param0);
OVERLOADABLE half3 fabs (half3 param0);
OVERLOADABLE half4 fabs (half4 param0);
OVERLOADABLE half8 fabs (half8 param0);
OVERLOADABLE half16 fabs (half16 param0);

//gentype fdim (gentype x, gentype y)

OVERLOADABLE float2 fdim (float2 param0, float2 param1);
OVERLOADABLE float3 fdim (float3 param0, float3 param1);
OVERLOADABLE float4 fdim (float4 param0, float4 param1);
OVERLOADABLE float8 fdim (float8 param0, float8 param1);
OVERLOADABLE float16 fdim (float16 param0, float16 param1);
OVERLOADABLE half2 fdim (half2 param0, half2 param1);
OVERLOADABLE half3 fdim (half3 param0, half3 param1);
OVERLOADABLE half4 fdim (half4 param0, half4 param1);
OVERLOADABLE half8 fdim (half8 param0, half8 param1);
OVERLOADABLE half16 fdim (half16 param0, half16 param1);

//gentype floor (gentype)

OVERLOADABLE float2 floor (float2 param0);
OVERLOADABLE float3 floor (float3 param0);
OVERLOADABLE float4 floor (float4 param0);
OVERLOADABLE float8 floor (float8 param0);
OVERLOADABLE float16 floor (float16 param0);
OVERLOADABLE half2 floor (half2 param0);
OVERLOADABLE half3 floor (half3 param0);
OVERLOADABLE half4 floor (half4 param0);
OVERLOADABLE half8 floor (half8 param0);
OVERLOADABLE half16 floor (half16 param0);

//gentype fma (gentype a, gentype b, gentype c)

OVERLOADABLE float2 fma (float2 param0, float2 param1, float2 param2);
OVERLOADABLE float3 fma (float3 param0, float3 param1, float3 param2);
OVERLOADABLE float4 fma (float4 param0, float4 param1, float4 param2);
OVERLOADABLE float8 fma (float8 param0, float8 param1, float8 param2);
OVERLOADABLE float16 fma (float16 param0, float16 param1, float16 param2);
OVERLOADABLE half2 fma (half2 param0, half2 param1, half2 param2);
OVERLOADABLE half3 fma (half3 param0, half3 param1, half3 param2);
OVERLOADABLE half4 fma (half4 param0, half4 param1, half4 param2);
OVERLOADABLE half8 fma (half8 param0, half8 param1, half8 param2);
OVERLOADABLE half16 fma (half16 param0, half16 param1, half16 param2);

//gentype fmax (gentype x, gentype y)

OVERLOADABLE float2 fmax (float2 param0, float2 param1);
OVERLOADABLE float3 fmax (float3 param0, float3 param1);
OVERLOADABLE float4 fmax (float4 param0, float4 param1);
OVERLOADABLE float8 fmax (float8 param0, float8 param1);
OVERLOADABLE float16 fmax (float16 param0, float16 param1);
OVERLOADABLE half2 fmax (half2 param0, half2 param1);
OVERLOADABLE half3 fmax (half3 param0, half3 param1);
OVERLOADABLE half4 fmax (half4 param0, half4 param1);
OVERLOADABLE half8 fmax (half8 param0, half8 param1);
OVERLOADABLE half16 fmax (half16 param0, half16 param1);

//gentypef fmax (gentypef x, float y)

OVERLOADABLE float2 fmax (float2 param0, float param1);
OVERLOADABLE float3 fmax (float3 param0, float param1);
OVERLOADABLE float4 fmax (float4 param0, float param1);
OVERLOADABLE float8 fmax (float8 param0, float param1);
OVERLOADABLE float16 fmax (float16 param0, float param1);

//gentypeh fmax (gentypeh x, half y)

OVERLOADABLE half2 fmax (half2 param0, half param1);
OVERLOADABLE half3 fmax (half3 param0, half param1);
OVERLOADABLE half4 fmax (half4 param0, half param1);
OVERLOADABLE half8 fmax (half8 param0, half param1);
OVERLOADABLE half16 fmax (half16 param0, half param1);

//gentyped fmax (gentyped x, double y)


//gentype fmin (gentype x, gentype y)

OVERLOADABLE float2 fmin (float2 param0, float2 param1);
OVERLOADABLE float3 fmin (float3 param0, float3 param1);
OVERLOADABLE float4 fmin (float4 param0, float4 param1);
OVERLOADABLE float8 fmin (float8 param0, float8 param1);
OVERLOADABLE float16 fmin (float16 param0, float16 param1);
OVERLOADABLE half2 fmin (half2 param0, half2 param1);
OVERLOADABLE half3 fmin (half3 param0, half3 param1);
OVERLOADABLE half4 fmin (half4 param0, half4 param1);
OVERLOADABLE half8 fmin (half8 param0, half8 param1);
OVERLOADABLE half16 fmin (half16 param0, half16 param1);

//gentypef fmin (gentypef x, float y)

OVERLOADABLE float2 fmin (float2 param0, float param1);
OVERLOADABLE float3 fmin (float3 param0, float param1);
OVERLOADABLE float4 fmin (float4 param0, float param1);
OVERLOADABLE float8 fmin (float8 param0, float param1);
OVERLOADABLE float16 fmin (float16 param0, float param1);

//gentypeh fmin (gentypeh x, half y)

OVERLOADABLE half2 fmin (half2 param0, half param1);
OVERLOADABLE half3 fmin (half3 param0, half param1);
OVERLOADABLE half4 fmin (half4 param0, half param1);
OVERLOADABLE half8 fmin (half8 param0, half param1);
OVERLOADABLE half16 fmin (half16 param0, half param1);

//gentyped fmin (gentyped x, double y)


//gentype fmod (gentype x, gentype y)

OVERLOADABLE float2 fmod (float2 param0, float2 param1);
OVERLOADABLE float3 fmod (float3 param0, float3 param1);
OVERLOADABLE float4 fmod (float4 param0, float4 param1);
OVERLOADABLE float8 fmod (float8 param0, float8 param1);
OVERLOADABLE float16 fmod (float16 param0, float16 param1);
OVERLOADABLE half2 fmod (half2 param0, half2 param1);
OVERLOADABLE half3 fmod (half3 param0, half3 param1);
OVERLOADABLE half4 fmod (half4 param0, half4 param1);
OVERLOADABLE half8 fmod (half8 param0, half8 param1);
OVERLOADABLE half16 fmod (half16 param0, half16 param1);

//gentype fract (gentype x, __global gentype *iptr)

OVERLOADABLE float2 fract (float2 param0, __global float2 *param1);
OVERLOADABLE float3 fract (float3 param0, __global float3 *param1);
OVERLOADABLE float4 fract (float4 param0, __global float4 *param1);
OVERLOADABLE float8 fract (float8 param0, __global float8 *param1);
OVERLOADABLE float16 fract (float16 param0, __global float16 *param1);
OVERLOADABLE half2 fract (half2 param0, __global half2 *param1);
OVERLOADABLE half3 fract (half3 param0, __global half3 *param1);
OVERLOADABLE half4 fract (half4 param0, __global half4 *param1);
OVERLOADABLE half8 fract (half8 param0, __global half8 *param1);
OVERLOADABLE half16 fract (half16 param0, __global half16 *param1);

//gentype fract (gentype x, __local gentype *iptr)

OVERLOADABLE float2 fract (float2 param0, __local float2 *param1);
OVERLOADABLE float3 fract (float3 param0, __local float3 *param1);
OVERLOADABLE float4 fract (float4 param0, __local float4 *param1);
OVERLOADABLE float8 fract (float8 param0, __local float8 *param1);
OVERLOADABLE float16 fract (float16 param0, __local float16 *param1);
OVERLOADABLE half2 fract (half2 param0, __local half2 *param1);
OVERLOADABLE half3 fract (half3 param0, __local half3 *param1);
OVERLOADABLE half4 fract (half4 param0, __local half4 *param1);
OVERLOADABLE half8 fract (half8 param0, __local half8 *param1);
OVERLOADABLE half16 fract (half16 param0, __local half16 *param1);

//gentype fract (gentype x, __private gentype *iptr)

OVERLOADABLE float2 fract (float2 param0, __private float2 *param1);
OVERLOADABLE float3 fract (float3 param0, __private float3 *param1);
OVERLOADABLE float4 fract (float4 param0, __private float4 *param1);
OVERLOADABLE float8 fract (float8 param0, __private float8 *param1);
OVERLOADABLE float16 fract (float16 param0, __private float16 *param1);
OVERLOADABLE half2 fract (half2 param0, __private half2 *param1);
OVERLOADABLE half3 fract (half3 param0, __private half3 *param1);
OVERLOADABLE half4 fract (half4 param0, __private half4 *param1);
OVERLOADABLE half8 fract (half8 param0, __private half8 *param1);
OVERLOADABLE half16 fract (half16 param0, __private half16 *param1);

//floatn frexp (floatn x, __global intn *exp)

OVERLOADABLE float2 frexp (float2 param0, __global int2 *param1);
OVERLOADABLE float3 frexp (float3 param0, __global int3 *param1);
OVERLOADABLE float4 frexp (float4 param0, __global int4 *param1);
OVERLOADABLE float8 frexp (float8 param0, __global int8 *param1);
OVERLOADABLE float16 frexp (float16 param0, __global int16 *param1);

//floatn frexp (floatn x, __local intn *exp)

OVERLOADABLE float2 frexp (float2 param0, __local int2 *param1);
OVERLOADABLE float3 frexp (float3 param0, __local int3 *param1);
OVERLOADABLE float4 frexp (float4 param0, __local int4 *param1);
OVERLOADABLE float8 frexp (float8 param0, __local int8 *param1);
OVERLOADABLE float16 frexp (float16 param0, __local int16 *param1);

//floatn frexp (floatn x, __private intn *exp)

OVERLOADABLE float2 frexp (float2 param0, __private int2 *param1);
OVERLOADABLE float3 frexp (float3 param0, __private int3 *param1);
OVERLOADABLE float4 frexp (float4 param0, __private int4 *param1);
OVERLOADABLE float8 frexp (float8 param0, __private int8 *param1);
OVERLOADABLE float16 frexp (float16 param0, __private int16 *param1);

//float frexp (float x, __global int *exp)


//float frexp (float x, __local int *exp)


//float frexp (float x, __private int *exp)


//halfn frexp (halfn x, __global intn *exp)

OVERLOADABLE half2 frexp (half2 param0, __global int2 *param1);
OVERLOADABLE half3 frexp (half3 param0, __global int3 *param1);
OVERLOADABLE half4 frexp (half4 param0, __global int4 *param1);
OVERLOADABLE half8 frexp (half8 param0, __global int8 *param1);
OVERLOADABLE half16 frexp (half16 param0, __global int16 *param1);

//halfn frexp (halfn x, __local intn *exp)

OVERLOADABLE half2 frexp (half2 param0, __local int2 *param1);
OVERLOADABLE half3 frexp (half3 param0, __local int3 *param1);
OVERLOADABLE half4 frexp (half4 param0, __local int4 *param1);
OVERLOADABLE half8 frexp (half8 param0, __local int8 *param1);
OVERLOADABLE half16 frexp (half16 param0, __local int16 *param1);

//halfn frexp (halfn x, __private intn *exp)

OVERLOADABLE half2 frexp (half2 param0, __private int2 *param1);
OVERLOADABLE half3 frexp (half3 param0, __private int3 *param1);
OVERLOADABLE half4 frexp (half4 param0, __private int4 *param1);
OVERLOADABLE half8 frexp (half8 param0, __private int8 *param1);
OVERLOADABLE half16 frexp (half16 param0, __private int16 *param1);

//half frexp (half x, __global int *exp)


//half frexp (half x, __local int *exp)


//half frexp (half x, __private int *exp)


//doublen frexp (doublen x, __global intn *exp)


//doublen frexp (doublen x, __local intn *exp)


//doublen frexp (doublen x, __private intn *exp)


//double frexp (double x, __global int *exp)


//double frexp (double x, __local int *exp)


//double frexp (double x, __private int *exp)


//gentype hypot (gentype x, gentype y)

OVERLOADABLE float2 hypot (float2 param0, float2 param1);
OVERLOADABLE float3 hypot (float3 param0, float3 param1);
OVERLOADABLE float4 hypot (float4 param0, float4 param1);
OVERLOADABLE float8 hypot (float8 param0, float8 param1);
OVERLOADABLE float16 hypot (float16 param0, float16 param1);
OVERLOADABLE half2 hypot (half2 param0, half2 param1);
OVERLOADABLE half3 hypot (half3 param0, half3 param1);
OVERLOADABLE half4 hypot (half4 param0, half4 param1);
OVERLOADABLE half8 hypot (half8 param0, half8 param1);
OVERLOADABLE half16 hypot (half16 param0, half16 param1);

//intn ilogb (floatn x)

OVERLOADABLE int2 ilogb (float2 param0);
OVERLOADABLE int3 ilogb (float3 param0);
OVERLOADABLE int4 ilogb (float4 param0);
OVERLOADABLE int8 ilogb (float8 param0);
OVERLOADABLE int16 ilogb (float16 param0);

//int ilogb (float x)


//shortn ilogb (halfn x)

OVERLOADABLE short2 ilogb (half2 param0);
OVERLOADABLE short3 ilogb (half3 param0);
OVERLOADABLE short4 ilogb (half4 param0);
OVERLOADABLE short8 ilogb (half8 param0);
OVERLOADABLE short16 ilogb (half16 param0);

//short ilogb (half x)


//intn ilogb (doublen x)


//int ilogb (double x)


//floatn ldexp (floatn x, intn k)

OVERLOADABLE float2 ldexp (float2 param0, int2 param1);
OVERLOADABLE float3 ldexp (float3 param0, int3 param1);
OVERLOADABLE float4 ldexp (float4 param0, int4 param1);
OVERLOADABLE float8 ldexp (float8 param0, int8 param1);
OVERLOADABLE float16 ldexp (float16 param0, int16 param1);

//floatn ldexp (floatn x, int k)

OVERLOADABLE float2 ldexp (float2 param0, int param1);
OVERLOADABLE float3 ldexp (float3 param0, int param1);
OVERLOADABLE float4 ldexp (float4 param0, int param1);
OVERLOADABLE float8 ldexp (float8 param0, int param1);
OVERLOADABLE float16 ldexp (float16 param0, int param1);

//float ldexp (float x, int k)


//halfn ldexp (halfn x, intn k)

OVERLOADABLE half2 ldexp (half2 param0, int2 param1);
OVERLOADABLE half3 ldexp (half3 param0, int3 param1);
OVERLOADABLE half4 ldexp (half4 param0, int4 param1);
OVERLOADABLE half8 ldexp (half8 param0, int8 param1);
OVERLOADABLE half16 ldexp (half16 param0, int16 param1);

//halfn ldexp (halfn x, int k)

OVERLOADABLE half2 ldexp (half2 param0, int param1);
OVERLOADABLE half3 ldexp (half3 param0, int param1);
OVERLOADABLE half4 ldexp (half4 param0, int param1);
OVERLOADABLE half8 ldexp (half8 param0, int param1);
OVERLOADABLE half16 ldexp (half16 param0, int param1);

//half ldexp (half x, int k)


//doublen ldexp (doublen x, intn k)


//doublen ldexp (doublen x, int k)


//double ldexp (double x, int k)


//gentype lgamma (gentype x)

OVERLOADABLE float2 lgamma (float2 param0);
OVERLOADABLE float3 lgamma (float3 param0);
OVERLOADABLE float4 lgamma (float4 param0);
OVERLOADABLE float8 lgamma (float8 param0);
OVERLOADABLE float16 lgamma (float16 param0);
OVERLOADABLE half2 lgamma (half2 param0);
OVERLOADABLE half3 lgamma (half3 param0);
OVERLOADABLE half4 lgamma (half4 param0);
OVERLOADABLE half8 lgamma (half8 param0);
OVERLOADABLE half16 lgamma (half16 param0);

//floatn lgamma_r (floatn x, __global intn *signp)

OVERLOADABLE float2 lgamma_r (float2 param0, __global int2 *param1);
OVERLOADABLE float3 lgamma_r (float3 param0, __global int3 *param1);
OVERLOADABLE float4 lgamma_r (float4 param0, __global int4 *param1);
OVERLOADABLE float8 lgamma_r (float8 param0, __global int8 *param1);
OVERLOADABLE float16 lgamma_r (float16 param0, __global int16 *param1);

//floatn lgamma_r (floatn x, __local intn *signp)

OVERLOADABLE float2 lgamma_r (float2 param0, __local int2 *param1);
OVERLOADABLE float3 lgamma_r (float3 param0, __local int3 *param1);
OVERLOADABLE float4 lgamma_r (float4 param0, __local int4 *param1);
OVERLOADABLE float8 lgamma_r (float8 param0, __local int8 *param1);
OVERLOADABLE float16 lgamma_r (float16 param0, __local int16 *param1);

//floatn lgamma_r (floatn x, __private intn *signp)

OVERLOADABLE float2 lgamma_r (float2 param0, __private int2 *param1);
OVERLOADABLE float3 lgamma_r (float3 param0, __private int3 *param1);
OVERLOADABLE float4 lgamma_r (float4 param0, __private int4 *param1);
OVERLOADABLE float8 lgamma_r (float8 param0, __private int8 *param1);
OVERLOADABLE float16 lgamma_r (float16 param0, __private int16 *param1);

//float lgamma_r (float x, __global int *signp)


//float lgamma_r (float x, __local int *signp)


//float lgamma_r (float x,   __private int *signp)


//halfn lgamma_r (halfn x, __global intn *signp)

OVERLOADABLE half2 lgamma_r (half2 param0, __global int2 *param1);
OVERLOADABLE half3 lgamma_r (half3 param0, __global int3 *param1);
OVERLOADABLE half4 lgamma_r (half4 param0, __global int4 *param1);
OVERLOADABLE half8 lgamma_r (half8 param0, __global int8 *param1);
OVERLOADABLE half16 lgamma_r (half16 param0, __global int16 *param1);

//halfn lgamma_r (halfn x, __local intn *signp)

OVERLOADABLE half2 lgamma_r (half2 param0, __local int2 *param1);
OVERLOADABLE half3 lgamma_r (half3 param0, __local int3 *param1);
OVERLOADABLE half4 lgamma_r (half4 param0, __local int4 *param1);
OVERLOADABLE half8 lgamma_r (half8 param0, __local int8 *param1);
OVERLOADABLE half16 lgamma_r (half16 param0, __local int16 *param1);

//halfn lgamma_r (halfn x, __private intn *signp)

OVERLOADABLE half2 lgamma_r (half2 param0, __private int2 *param1);
OVERLOADABLE half3 lgamma_r (half3 param0, __private int3 *param1);
OVERLOADABLE half4 lgamma_r (half4 param0, __private int4 *param1);
OVERLOADABLE half8 lgamma_r (half8 param0, __private int8 *param1);
OVERLOADABLE half16 lgamma_r (half16 param0, __private int16 *param1);

//half lgamma_r (half x, __global int *signp)


//half lgamma_r (half x, __local int *signp)


//half lgamma_r (half x,   __private int *signp)


//gentype log (gentype)

OVERLOADABLE float2 log (float2 param0);
OVERLOADABLE float3 log (float3 param0);
OVERLOADABLE float4 log (float4 param0);
OVERLOADABLE float8 log (float8 param0);
OVERLOADABLE float16 log (float16 param0);
OVERLOADABLE half2 log (half2 param0);
OVERLOADABLE half3 log (half3 param0);
OVERLOADABLE half4 log (half4 param0);
OVERLOADABLE half8 log (half8 param0);
OVERLOADABLE half16 log (half16 param0);

//gentype log2 (gentype)

OVERLOADABLE float2 log2 (float2 param0);
OVERLOADABLE float3 log2 (float3 param0);
OVERLOADABLE float4 log2 (float4 param0);
OVERLOADABLE float8 log2 (float8 param0);
OVERLOADABLE float16 log2 (float16 param0);
OVERLOADABLE half2 log2 (half2 param0);
OVERLOADABLE half3 log2 (half3 param0);
OVERLOADABLE half4 log2 (half4 param0);
OVERLOADABLE half8 log2 (half8 param0);
OVERLOADABLE half16 log2 (half16 param0);

//gentype log10 (gentype)

OVERLOADABLE float2 log10 (float2 param0);
OVERLOADABLE float3 log10 (float3 param0);
OVERLOADABLE float4 log10 (float4 param0);
OVERLOADABLE float8 log10 (float8 param0);
OVERLOADABLE float16 log10 (float16 param0);
OVERLOADABLE half2 log10 (half2 param0);
OVERLOADABLE half3 log10 (half3 param0);
OVERLOADABLE half4 log10 (half4 param0);
OVERLOADABLE half8 log10 (half8 param0);
OVERLOADABLE half16 log10 (half16 param0);

//gentype log1p (gentype x)

OVERLOADABLE float2 log1p (float2 param0);
OVERLOADABLE float3 log1p (float3 param0);
OVERLOADABLE float4 log1p (float4 param0);
OVERLOADABLE float8 log1p (float8 param0);
OVERLOADABLE float16 log1p (float16 param0);
OVERLOADABLE half2 log1p (half2 param0);
OVERLOADABLE half3 log1p (half3 param0);
OVERLOADABLE half4 log1p (half4 param0);
OVERLOADABLE half8 log1p (half8 param0);
OVERLOADABLE half16 log1p (half16 param0);

//gentype logb (gentype x)

OVERLOADABLE float2 logb (float2 param0);
OVERLOADABLE float3 logb (float3 param0);
OVERLOADABLE float4 logb (float4 param0);
OVERLOADABLE float8 logb (float8 param0);
OVERLOADABLE float16 logb (float16 param0);
OVERLOADABLE half2 logb (half2 param0);
OVERLOADABLE half3 logb (half3 param0);
OVERLOADABLE half4 logb (half4 param0);
OVERLOADABLE half8 logb (half8 param0);
OVERLOADABLE half16 logb (half16 param0);

//gentype mad (gentype a, gentype b, gentype c)

OVERLOADABLE float2 mad (float2 param0, float2 param1, float2 param2);
OVERLOADABLE float3 mad (float3 param0, float3 param1, float3 param2);
OVERLOADABLE float4 mad (float4 param0, float4 param1, float4 param2);
OVERLOADABLE float8 mad (float8 param0, float8 param1, float8 param2);
OVERLOADABLE float16 mad (float16 param0, float16 param1, float16 param2);
OVERLOADABLE half2 mad (half2 param0, half2 param1, half2 param2);
OVERLOADABLE half3 mad (half3 param0, half3 param1, half3 param2);
OVERLOADABLE half4 mad (half4 param0, half4 param1, half4 param2);
OVERLOADABLE half8 mad (half8 param0, half8 param1, half8 param2);
OVERLOADABLE half16 mad (half16 param0, half16 param1, half16 param2);

//gentype maxmag (gentype x, gentype y)

OVERLOADABLE float2 maxmag (float2 param0, float2 param1);
OVERLOADABLE float3 maxmag (float3 param0, float3 param1);
OVERLOADABLE float4 maxmag (float4 param0, float4 param1);
OVERLOADABLE float8 maxmag (float8 param0, float8 param1);
OVERLOADABLE float16 maxmag (float16 param0, float16 param1);
OVERLOADABLE half2 maxmag (half2 param0, half2 param1);
OVERLOADABLE half3 maxmag (half3 param0, half3 param1);
OVERLOADABLE half4 maxmag (half4 param0, half4 param1);
OVERLOADABLE half8 maxmag (half8 param0, half8 param1);
OVERLOADABLE half16 maxmag (half16 param0, half16 param1);

//gentype minmag (gentype x, gentype y)

OVERLOADABLE float2 minmag (float2 param0, float2 param1);
OVERLOADABLE float3 minmag (float3 param0, float3 param1);
OVERLOADABLE float4 minmag (float4 param0, float4 param1);
OVERLOADABLE float8 minmag (float8 param0, float8 param1);
OVERLOADABLE float16 minmag (float16 param0, float16 param1);
OVERLOADABLE half2 minmag (half2 param0, half2 param1);
OVERLOADABLE half3 minmag (half3 param0, half3 param1);
OVERLOADABLE half4 minmag (half4 param0, half4 param1);
OVERLOADABLE half8 minmag (half8 param0, half8 param1);
OVERLOADABLE half16 minmag (half16 param0, half16 param1);

//gentype modf (gentype x, __global gentype *iptr)

OVERLOADABLE float2 modf (float2 param0, __global float2 *param1);
OVERLOADABLE float3 modf (float3 param0, __global float3 *param1);
OVERLOADABLE float4 modf (float4 param0, __global float4 *param1);
OVERLOADABLE float8 modf (float8 param0, __global float8 *param1);
OVERLOADABLE float16 modf (float16 param0, __global float16 *param1);
OVERLOADABLE half2 modf (half2 param0, __global half2 *param1);
OVERLOADABLE half3 modf (half3 param0, __global half3 *param1);
OVERLOADABLE half4 modf (half4 param0, __global half4 *param1);
OVERLOADABLE half8 modf (half8 param0, __global half8 *param1);
OVERLOADABLE half16 modf (half16 param0, __global half16 *param1);

//gentype modf (gentype x, __local gentype *iptr)

OVERLOADABLE float2 modf (float2 param0, __local float2 *param1);
OVERLOADABLE float3 modf (float3 param0, __local float3 *param1);
OVERLOADABLE float4 modf (float4 param0, __local float4 *param1);
OVERLOADABLE float8 modf (float8 param0, __local float8 *param1);
OVERLOADABLE float16 modf (float16 param0, __local float16 *param1);
OVERLOADABLE half2 modf (half2 param0, __local half2 *param1);
OVERLOADABLE half3 modf (half3 param0, __local half3 *param1);
OVERLOADABLE half4 modf (half4 param0, __local half4 *param1);
OVERLOADABLE half8 modf (half8 param0, __local half8 *param1);
OVERLOADABLE half16 modf (half16 param0, __local half16 *param1);

//gentype modf (gentype x, __private gentype *iptr)

OVERLOADABLE float2 modf (float2 param0, __private float2 *param1);
OVERLOADABLE float3 modf (float3 param0, __private float3 *param1);
OVERLOADABLE float4 modf (float4 param0, __private float4 *param1);
OVERLOADABLE float8 modf (float8 param0, __private float8 *param1);
OVERLOADABLE float16 modf (float16 param0, __private float16 *param1);
OVERLOADABLE half2 modf (half2 param0, __private half2 *param1);
OVERLOADABLE half3 modf (half3 param0, __private half3 *param1);
OVERLOADABLE half4 modf (half4 param0, __private half4 *param1);
OVERLOADABLE half8 modf (half8 param0, __private half8 *param1);
OVERLOADABLE half16 modf (half16 param0, __private half16 *param1);

//floatn nan (uintn nancode)

OVERLOADABLE float2 nan (uint2 param0);
OVERLOADABLE float3 nan (uint3 param0);
OVERLOADABLE float4 nan (uint4 param0);
OVERLOADABLE float8 nan (uint8 param0);
OVERLOADABLE float16 nan (uint16 param0);

//float nan (uint nancode)


//halfn nan (ushortn nancode)

OVERLOADABLE half2 nan (ushort2 param0);
OVERLOADABLE half3 nan (ushort3 param0);
OVERLOADABLE half4 nan (ushort4 param0);
OVERLOADABLE half8 nan (ushort8 param0);
OVERLOADABLE half16 nan (ushort16 param0);

//half nan (ushort nancode)


//doublen nan (ulongn nancode)


//double nan (ulong nancode)


//gentype nextafter (gentype x, gentype y)

OVERLOADABLE float2 nextafter (float2 param0, float2 param1);
OVERLOADABLE float3 nextafter (float3 param0, float3 param1);
OVERLOADABLE float4 nextafter (float4 param0, float4 param1);
OVERLOADABLE float8 nextafter (float8 param0, float8 param1);
OVERLOADABLE float16 nextafter (float16 param0, float16 param1);
OVERLOADABLE half2 nextafter (half2 param0, half2 param1);
OVERLOADABLE half3 nextafter (half3 param0, half3 param1);
OVERLOADABLE half4 nextafter (half4 param0, half4 param1);
OVERLOADABLE half8 nextafter (half8 param0, half8 param1);
OVERLOADABLE half16 nextafter (half16 param0, half16 param1);

//gentype pow (gentype x, gentype y)

OVERLOADABLE float2 pow (float2 param0, float2 param1);
OVERLOADABLE float3 pow (float3 param0, float3 param1);
OVERLOADABLE float4 pow (float4 param0, float4 param1);
OVERLOADABLE float8 pow (float8 param0, float8 param1);
OVERLOADABLE float16 pow (float16 param0, float16 param1);
OVERLOADABLE half2 pow (half2 param0, half2 param1);
OVERLOADABLE half3 pow (half3 param0, half3 param1);
OVERLOADABLE half4 pow (half4 param0, half4 param1);
OVERLOADABLE half8 pow (half8 param0, half8 param1);
OVERLOADABLE half16 pow (half16 param0, half16 param1);

//floatn pown (floatn x, intn y)

OVERLOADABLE float2 pown (float2 param0, int2 param1);
OVERLOADABLE float3 pown (float3 param0, int3 param1);
OVERLOADABLE float4 pown (float4 param0, int4 param1);
OVERLOADABLE float8 pown (float8 param0, int8 param1);
OVERLOADABLE float16 pown (float16 param0, int16 param1);

//float pown (float x, int y)


//halfn pown (halfn x, intn y)

OVERLOADABLE half2 pown (half2 param0, int2 param1);
OVERLOADABLE half3 pown (half3 param0, int3 param1);
OVERLOADABLE half4 pown (half4 param0, int4 param1);
OVERLOADABLE half8 pown (half8 param0, int8 param1);
OVERLOADABLE half16 pown (half16 param0, int16 param1);

//half pown (half x, int y)


//doublen pown (doublen x, intn y)


//double pown (double x, int y)


//gentype powr (gentype x, gentype y)

OVERLOADABLE float2 powr (float2 param0, float2 param1);
OVERLOADABLE float3 powr (float3 param0, float3 param1);
OVERLOADABLE float4 powr (float4 param0, float4 param1);
OVERLOADABLE float8 powr (float8 param0, float8 param1);
OVERLOADABLE float16 powr (float16 param0, float16 param1);
OVERLOADABLE half2 powr (half2 param0, half2 param1);
OVERLOADABLE half3 powr (half3 param0, half3 param1);
OVERLOADABLE half4 powr (half4 param0, half4 param1);
OVERLOADABLE half8 powr (half8 param0, half8 param1);
OVERLOADABLE half16 powr (half16 param0, half16 param1);

//gentype remainder (gentype x, gentype y)

OVERLOADABLE float2 remainder (float2 param0, float2 param1);
OVERLOADABLE float3 remainder (float3 param0, float3 param1);
OVERLOADABLE float4 remainder (float4 param0, float4 param1);
OVERLOADABLE float8 remainder (float8 param0, float8 param1);
OVERLOADABLE float16 remainder (float16 param0, float16 param1);
OVERLOADABLE half2 remainder (half2 param0, half2 param1);
OVERLOADABLE half3 remainder (half3 param0, half3 param1);
OVERLOADABLE half4 remainder (half4 param0, half4 param1);
OVERLOADABLE half8 remainder (half8 param0, half8 param1);
OVERLOADABLE half16 remainder (half16 param0, half16 param1);

//floatn remquo (floatn x, floatn y, __global intn *quo)

OVERLOADABLE float2 remquo (float2 param0, float2 param1, __global int2 *param2);
OVERLOADABLE float3 remquo (float3 param0, float3 param1, __global int3 *param2);
OVERLOADABLE float4 remquo (float4 param0, float4 param1, __global int4 *param2);
OVERLOADABLE float8 remquo (float8 param0, float8 param1, __global int8 *param2);
OVERLOADABLE float16 remquo (float16 param0, float16 param1, __global int16 *param2);

//floatn remquo (floatn x, floatn y, __local intn *quo)

OVERLOADABLE float2 remquo (float2 param0, float2 param1, __local int2 *param2);
OVERLOADABLE float3 remquo (float3 param0, float3 param1, __local int3 *param2);
OVERLOADABLE float4 remquo (float4 param0, float4 param1, __local int4 *param2);
OVERLOADABLE float8 remquo (float8 param0, float8 param1, __local int8 *param2);
OVERLOADABLE float16 remquo (float16 param0, float16 param1, __local int16 *param2);

//floatn remquo (floatn x, floatn y, __private intn *quo)

OVERLOADABLE float2 remquo (float2 param0, float2 param1, __private int2 *param2);
OVERLOADABLE float3 remquo (float3 param0, float3 param1, __private int3 *param2);
OVERLOADABLE float4 remquo (float4 param0, float4 param1, __private int4 *param2);
OVERLOADABLE float8 remquo (float8 param0, float8 param1, __private int8 *param2);
OVERLOADABLE float16 remquo (float16 param0, float16 param1, __private int16 *param2);

//float remquo (float x, float y, __global int *quo)


//float remquo (float x, float y, __local int *quo)


//float remquo (float x, float y, __private int *quo)


//halfn remquo (halfn x, halfn y, __global intn *quo)

OVERLOADABLE half2 remquo (half2 param0, half2 param1, __global int2 *param2);
OVERLOADABLE half3 remquo (half3 param0, half3 param1, __global int3 *param2);
OVERLOADABLE half4 remquo (half4 param0, half4 param1, __global int4 *param2);
OVERLOADABLE half8 remquo (half8 param0, half8 param1, __global int8 *param2);
OVERLOADABLE half16 remquo (half16 param0, half16 param1, __global int16 *param2);

//halfn remquo (halfn x, halfn y, __local intn *quo)

OVERLOADABLE half2 remquo (half2 param0, half2 param1, __local int2 *param2);
OVERLOADABLE half3 remquo (half3 param0, half3 param1, __local int3 *param2);
OVERLOADABLE half4 remquo (half4 param0, half4 param1, __local int4 *param2);
OVERLOADABLE half8 remquo (half8 param0, half8 param1, __local int8 *param2);
OVERLOADABLE half16 remquo (half16 param0, half16 param1, __local int16 *param2);

//halfn remquo (halfn x, halfn y, __private intn *quo)

OVERLOADABLE half2 remquo (half2 param0, half2 param1, __private int2 *param2);
OVERLOADABLE half3 remquo (half3 param0, half3 param1, __private int3 *param2);
OVERLOADABLE half4 remquo (half4 param0, half4 param1, __private int4 *param2);
OVERLOADABLE half8 remquo (half8 param0, half8 param1, __private int8 *param2);
OVERLOADABLE half16 remquo (half16 param0, half16 param1, __private int16 *param2);

//half remquo (half x, half y, __global int *quo)


//half remquo (half x, half y, __local int *quo)


//half remquo (half x, half y, __private int *quo)


//doublen remquo (doublen x, doublen y, __global intn *quo)


//doublen remquo (doublen x, doublen y, __local intn *quo)


//doublen remquo (doublen x, doublen y, __private intn *quo)


//double remquo (double x, double y, __global int *quo)


//double remquo (double x, double y, __local int *quo)


//double remquo (double x, double y, __private int *quo)


//gentype rint (gentype)

OVERLOADABLE float2 rint (float2 param0);
OVERLOADABLE float3 rint (float3 param0);
OVERLOADABLE float4 rint (float4 param0);
OVERLOADABLE float8 rint (float8 param0);
OVERLOADABLE float16 rint (float16 param0);
OVERLOADABLE half2 rint (half2 param0);
OVERLOADABLE half3 rint (half3 param0);
OVERLOADABLE half4 rint (half4 param0);
OVERLOADABLE half8 rint (half8 param0);
OVERLOADABLE half16 rint (half16 param0);

//floatn rootn (floatn x, intn y)

OVERLOADABLE float2 rootn (float2 param0, int2 param1);
OVERLOADABLE float3 rootn (float3 param0, int3 param1);
OVERLOADABLE float4 rootn (float4 param0, int4 param1);
OVERLOADABLE float8 rootn (float8 param0, int8 param1);
OVERLOADABLE float16 rootn (float16 param0, int16 param1);

//halfn rootn (halfn x, intn y)

OVERLOADABLE half2 rootn (half2 param0, int2 param1);
OVERLOADABLE half3 rootn (half3 param0, int3 param1);
OVERLOADABLE half4 rootn (half4 param0, int4 param1);
OVERLOADABLE half8 rootn (half8 param0, int8 param1);
OVERLOADABLE half16 rootn (half16 param0, int16 param1);

//doublen rootn (doublen x, intn y)


//doublen rootn (double x, int y)


//gentype round (gentype x)

OVERLOADABLE float2 round (float2 param0);
OVERLOADABLE float3 round (float3 param0);
OVERLOADABLE float4 round (float4 param0);
OVERLOADABLE float8 round (float8 param0);
OVERLOADABLE float16 round (float16 param0);
OVERLOADABLE half2 round (half2 param0);
OVERLOADABLE half3 round (half3 param0);
OVERLOADABLE half4 round (half4 param0);
OVERLOADABLE half8 round (half8 param0);
OVERLOADABLE half16 round (half16 param0);

//gentype rsqrt (gentype)

OVERLOADABLE float2 rsqrt (float2 param0);
OVERLOADABLE float3 rsqrt (float3 param0);
OVERLOADABLE float4 rsqrt (float4 param0);
OVERLOADABLE float8 rsqrt (float8 param0);
OVERLOADABLE float16 rsqrt (float16 param0);
OVERLOADABLE half2 rsqrt (half2 param0);
OVERLOADABLE half3 rsqrt (half3 param0);
OVERLOADABLE half4 rsqrt (half4 param0);
OVERLOADABLE half8 rsqrt (half8 param0);
OVERLOADABLE half16 rsqrt (half16 param0);

//gentype sin (gentype)

OVERLOADABLE float2 sin (float2 param0);
OVERLOADABLE float3 sin (float3 param0);
OVERLOADABLE float4 sin (float4 param0);
OVERLOADABLE float8 sin (float8 param0);
OVERLOADABLE float16 sin (float16 param0);
OVERLOADABLE half2 sin (half2 param0);
OVERLOADABLE half3 sin (half3 param0);
OVERLOADABLE half4 sin (half4 param0);
OVERLOADABLE half8 sin (half8 param0);
OVERLOADABLE half16 sin (half16 param0);

//gentype sincos (gentype x, __global gentype *cosval)

OVERLOADABLE float2 sincos (float2 param0, __global float2 *param1);
OVERLOADABLE float3 sincos (float3 param0, __global float3 *param1);
OVERLOADABLE float4 sincos (float4 param0, __global float4 *param1);
OVERLOADABLE float8 sincos (float8 param0, __global float8 *param1);
OVERLOADABLE float16 sincos (float16 param0, __global float16 *param1);
OVERLOADABLE half2 sincos (half2 param0, __global half2 *param1);
OVERLOADABLE half3 sincos (half3 param0, __global half3 *param1);
OVERLOADABLE half4 sincos (half4 param0, __global half4 *param1);
OVERLOADABLE half8 sincos (half8 param0, __global half8 *param1);
OVERLOADABLE half16 sincos (half16 param0, __global half16 *param1);

//gentype sincos (gentype x, __local gentype *cosval)

OVERLOADABLE float2 sincos (float2 param0, __local float2 *param1);
OVERLOADABLE float3 sincos (float3 param0, __local float3 *param1);
OVERLOADABLE float4 sincos (float4 param0, __local float4 *param1);
OVERLOADABLE float8 sincos (float8 param0, __local float8 *param1);
OVERLOADABLE float16 sincos (float16 param0, __local float16 *param1);
OVERLOADABLE half2 sincos (half2 param0, __local half2 *param1);
OVERLOADABLE half3 sincos (half3 param0, __local half3 *param1);
OVERLOADABLE half4 sincos (half4 param0, __local half4 *param1);
OVERLOADABLE half8 sincos (half8 param0, __local half8 *param1);
OVERLOADABLE half16 sincos (half16 param0, __local half16 *param1);

//gentype sincos (gentype x, __private gentype *cosval)

OVERLOADABLE float2 sincos (float2 param0, __private float2 *param1);
OVERLOADABLE float3 sincos (float3 param0, __private float3 *param1);
OVERLOADABLE float4 sincos (float4 param0, __private float4 *param1);
OVERLOADABLE float8 sincos (float8 param0, __private float8 *param1);
OVERLOADABLE float16 sincos (float16 param0, __private float16 *param1);
OVERLOADABLE half2 sincos (half2 param0, __private half2 *param1);
OVERLOADABLE half3 sincos (half3 param0, __private half3 *param1);
OVERLOADABLE half4 sincos (half4 param0, __private half4 *param1);
OVERLOADABLE half8 sincos (half8 param0, __private half8 *param1);
OVERLOADABLE half16 sincos (half16 param0, __private half16 *param1);

//gentype sinh (gentype)

OVERLOADABLE float2 sinh (float2 param0);
OVERLOADABLE float3 sinh (float3 param0);
OVERLOADABLE float4 sinh (float4 param0);
OVERLOADABLE float8 sinh (float8 param0);
OVERLOADABLE float16 sinh (float16 param0);
OVERLOADABLE half2 sinh (half2 param0);
OVERLOADABLE half3 sinh (half3 param0);
OVERLOADABLE half4 sinh (half4 param0);
OVERLOADABLE half8 sinh (half8 param0);
OVERLOADABLE half16 sinh (half16 param0);

//gentype sinpi (gentype x)

OVERLOADABLE float2 sinpi (float2 param0);
OVERLOADABLE float3 sinpi (float3 param0);
OVERLOADABLE float4 sinpi (float4 param0);
OVERLOADABLE float8 sinpi (float8 param0);
OVERLOADABLE float16 sinpi (float16 param0);
OVERLOADABLE half2 sinpi (half2 param0);
OVERLOADABLE half3 sinpi (half3 param0);
OVERLOADABLE half4 sinpi (half4 param0);
OVERLOADABLE half8 sinpi (half8 param0);
OVERLOADABLE half16 sinpi (half16 param0);

//gentype sqrt (gentype)

OVERLOADABLE float2 sqrt (float2 param0);
OVERLOADABLE float3 sqrt (float3 param0);
OVERLOADABLE float4 sqrt (float4 param0);
OVERLOADABLE float8 sqrt (float8 param0);
OVERLOADABLE float16 sqrt (float16 param0);
OVERLOADABLE half2 sqrt (half2 param0);
OVERLOADABLE half3 sqrt (half3 param0);
OVERLOADABLE half4 sqrt (half4 param0);
OVERLOADABLE half8 sqrt (half8 param0);
OVERLOADABLE half16 sqrt (half16 param0);

//gentype tan (gentype)

OVERLOADABLE float2 tan (float2 param0);
OVERLOADABLE float3 tan (float3 param0);
OVERLOADABLE float4 tan (float4 param0);
OVERLOADABLE float8 tan (float8 param0);
OVERLOADABLE float16 tan (float16 param0);
OVERLOADABLE half2 tan (half2 param0);
OVERLOADABLE half3 tan (half3 param0);
OVERLOADABLE half4 tan (half4 param0);
OVERLOADABLE half8 tan (half8 param0);
OVERLOADABLE half16 tan (half16 param0);

//gentype tanh (gentype)

OVERLOADABLE float2 tanh (float2 param0);
OVERLOADABLE float3 tanh (float3 param0);
OVERLOADABLE float4 tanh (float4 param0);
OVERLOADABLE float8 tanh (float8 param0);
OVERLOADABLE float16 tanh (float16 param0);
OVERLOADABLE half2 tanh (half2 param0);
OVERLOADABLE half3 tanh (half3 param0);
OVERLOADABLE half4 tanh (half4 param0);
OVERLOADABLE half8 tanh (half8 param0);
OVERLOADABLE half16 tanh (half16 param0);

//gentype tanpi (gentype x)

OVERLOADABLE float2 tanpi (float2 param0);
OVERLOADABLE float3 tanpi (float3 param0);
OVERLOADABLE float4 tanpi (float4 param0);
OVERLOADABLE float8 tanpi (float8 param0);
OVERLOADABLE float16 tanpi (float16 param0);
OVERLOADABLE half2 tanpi (half2 param0);
OVERLOADABLE half3 tanpi (half3 param0);
OVERLOADABLE half4 tanpi (half4 param0);
OVERLOADABLE half8 tanpi (half8 param0);
OVERLOADABLE half16 tanpi (half16 param0);

//gentype tgamma (gentype)

OVERLOADABLE float2 tgamma (float2 param0);
OVERLOADABLE float3 tgamma (float3 param0);
OVERLOADABLE float4 tgamma (float4 param0);
OVERLOADABLE float8 tgamma (float8 param0);
OVERLOADABLE float16 tgamma (float16 param0);
OVERLOADABLE half2 tgamma (half2 param0);
OVERLOADABLE half3 tgamma (half3 param0);
OVERLOADABLE half4 tgamma (half4 param0);
OVERLOADABLE half8 tgamma (half8 param0);
OVERLOADABLE half16 tgamma (half16 param0);

//gentype trunc (gentype)

OVERLOADABLE float2 trunc (float2 param0);
OVERLOADABLE float3 trunc (float3 param0);
OVERLOADABLE float4 trunc (float4 param0);
OVERLOADABLE float8 trunc (float8 param0);
OVERLOADABLE float16 trunc (float16 param0);
OVERLOADABLE half2 trunc (half2 param0);
OVERLOADABLE half3 trunc (half3 param0);
OVERLOADABLE half4 trunc (half4 param0);
OVERLOADABLE half8 trunc (half8 param0);
OVERLOADABLE half16 trunc (half16 param0);

//gentype native_cos (gentype x)

OVERLOADABLE float2 native_cos (float2 param0);
OVERLOADABLE float3 native_cos (float3 param0);
OVERLOADABLE float4 native_cos (float4 param0);
OVERLOADABLE float8 native_cos (float8 param0);
OVERLOADABLE float16 native_cos (float16 param0);
OVERLOADABLE half2 native_cos (half2 param0);
OVERLOADABLE half3 native_cos (half3 param0);
OVERLOADABLE half4 native_cos (half4 param0);
OVERLOADABLE half8 native_cos (half8 param0);
OVERLOADABLE half16 native_cos (half16 param0);

//gentype native_divide (gentype x, gentype y)

OVERLOADABLE float2 native_divide (float2 param0, float2 param1);
OVERLOADABLE float3 native_divide (float3 param0, float3 param1);
OVERLOADABLE float4 native_divide (float4 param0, float4 param1);
OVERLOADABLE float8 native_divide (float8 param0, float8 param1);
OVERLOADABLE float16 native_divide (float16 param0, float16 param1);
OVERLOADABLE half2 native_divide (half2 param0, half2 param1);
OVERLOADABLE half3 native_divide (half3 param0, half3 param1);
OVERLOADABLE half4 native_divide (half4 param0, half4 param1);
OVERLOADABLE half8 native_divide (half8 param0, half8 param1);
OVERLOADABLE half16 native_divide (half16 param0, half16 param1);

//gentype native_exp (gentype x)

OVERLOADABLE float2 native_exp (float2 param0);
OVERLOADABLE float3 native_exp (float3 param0);
OVERLOADABLE float4 native_exp (float4 param0);
OVERLOADABLE float8 native_exp (float8 param0);
OVERLOADABLE float16 native_exp (float16 param0);
OVERLOADABLE half2 native_exp (half2 param0);
OVERLOADABLE half3 native_exp (half3 param0);
OVERLOADABLE half4 native_exp (half4 param0);
OVERLOADABLE half8 native_exp (half8 param0);
OVERLOADABLE half16 native_exp (half16 param0);

//gentype native_exp2 (gentype x)

OVERLOADABLE float2 native_exp2 (float2 param0);
OVERLOADABLE float3 native_exp2 (float3 param0);
OVERLOADABLE float4 native_exp2 (float4 param0);
OVERLOADABLE float8 native_exp2 (float8 param0);
OVERLOADABLE float16 native_exp2 (float16 param0);
OVERLOADABLE half2 native_exp2 (half2 param0);
OVERLOADABLE half3 native_exp2 (half3 param0);
OVERLOADABLE half4 native_exp2 (half4 param0);
OVERLOADABLE half8 native_exp2 (half8 param0);
OVERLOADABLE half16 native_exp2 (half16 param0);

//gentype native_exp10 (gentype x)

OVERLOADABLE float2 native_exp10 (float2 param0);
OVERLOADABLE float3 native_exp10 (float3 param0);
OVERLOADABLE float4 native_exp10 (float4 param0);
OVERLOADABLE float8 native_exp10 (float8 param0);
OVERLOADABLE float16 native_exp10 (float16 param0);
OVERLOADABLE half2 native_exp10 (half2 param0);
OVERLOADABLE half3 native_exp10 (half3 param0);
OVERLOADABLE half4 native_exp10 (half4 param0);
OVERLOADABLE half8 native_exp10 (half8 param0);
OVERLOADABLE half16 native_exp10 (half16 param0);

//gentype native_log (gentype x)

OVERLOADABLE float2 native_log (float2 param0);
OVERLOADABLE float3 native_log (float3 param0);
OVERLOADABLE float4 native_log (float4 param0);
OVERLOADABLE float8 native_log (float8 param0);
OVERLOADABLE float16 native_log (float16 param0);
OVERLOADABLE half2 native_log (half2 param0);
OVERLOADABLE half3 native_log (half3 param0);
OVERLOADABLE half4 native_log (half4 param0);
OVERLOADABLE half8 native_log (half8 param0);
OVERLOADABLE half16 native_log (half16 param0);

//gentype native_log2 (gentype x)

OVERLOADABLE float2 native_log2 (float2 param0);
OVERLOADABLE float3 native_log2 (float3 param0);
OVERLOADABLE float4 native_log2 (float4 param0);
OVERLOADABLE float8 native_log2 (float8 param0);
OVERLOADABLE float16 native_log2 (float16 param0);
OVERLOADABLE half2 native_log2 (half2 param0);
OVERLOADABLE half3 native_log2 (half3 param0);
OVERLOADABLE half4 native_log2 (half4 param0);
OVERLOADABLE half8 native_log2 (half8 param0);
OVERLOADABLE half16 native_log2 (half16 param0);

//gentype native_log10 (gentype x)

OVERLOADABLE float2 native_log10 (float2 param0);
OVERLOADABLE float3 native_log10 (float3 param0);
OVERLOADABLE float4 native_log10 (float4 param0);
OVERLOADABLE float8 native_log10 (float8 param0);
OVERLOADABLE float16 native_log10 (float16 param0);
OVERLOADABLE half2 native_log10 (half2 param0);
OVERLOADABLE half3 native_log10 (half3 param0);
OVERLOADABLE half4 native_log10 (half4 param0);
OVERLOADABLE half8 native_log10 (half8 param0);
OVERLOADABLE half16 native_log10 (half16 param0);

//gentype native_powr (gentype x, gentype y)

OVERLOADABLE float2 native_powr (float2 param0, float2 param1);
OVERLOADABLE float3 native_powr (float3 param0, float3 param1);
OVERLOADABLE float4 native_powr (float4 param0, float4 param1);
OVERLOADABLE float8 native_powr (float8 param0, float8 param1);
OVERLOADABLE float16 native_powr (float16 param0, float16 param1);
OVERLOADABLE half2 native_powr (half2 param0, half2 param1);
OVERLOADABLE half3 native_powr (half3 param0, half3 param1);
OVERLOADABLE half4 native_powr (half4 param0, half4 param1);
OVERLOADABLE half8 native_powr (half8 param0, half8 param1);
OVERLOADABLE half16 native_powr (half16 param0, half16 param1);

//gentype native_recip (gentype x)

OVERLOADABLE float2 native_recip (float2 param0);
OVERLOADABLE float3 native_recip (float3 param0);
OVERLOADABLE float4 native_recip (float4 param0);
OVERLOADABLE float8 native_recip (float8 param0);
OVERLOADABLE float16 native_recip (float16 param0);
OVERLOADABLE half2 native_recip (half2 param0);
OVERLOADABLE half3 native_recip (half3 param0);
OVERLOADABLE half4 native_recip (half4 param0);
OVERLOADABLE half8 native_recip (half8 param0);
OVERLOADABLE half16 native_recip (half16 param0);

//gentype native_rsqrt (gentype x)

OVERLOADABLE float2 native_rsqrt (float2 param0);
OVERLOADABLE float3 native_rsqrt (float3 param0);
OVERLOADABLE float4 native_rsqrt (float4 param0);
OVERLOADABLE float8 native_rsqrt (float8 param0);
OVERLOADABLE float16 native_rsqrt (float16 param0);
OVERLOADABLE half2 native_rsqrt (half2 param0);
OVERLOADABLE half3 native_rsqrt (half3 param0);
OVERLOADABLE half4 native_rsqrt (half4 param0);
OVERLOADABLE half8 native_rsqrt (half8 param0);
OVERLOADABLE half16 native_rsqrt (half16 param0);

//gentype native_sin (gentype x)

OVERLOADABLE float2 native_sin (float2 param0);
OVERLOADABLE float3 native_sin (float3 param0);
OVERLOADABLE float4 native_sin (float4 param0);
OVERLOADABLE float8 native_sin (float8 param0);
OVERLOADABLE float16 native_sin (float16 param0);
OVERLOADABLE half2 native_sin (half2 param0);
OVERLOADABLE half3 native_sin (half3 param0);
OVERLOADABLE half4 native_sin (half4 param0);
OVERLOADABLE half8 native_sin (half8 param0);
OVERLOADABLE half16 native_sin (half16 param0);

//gentype native_sqrt (gentype x)

OVERLOADABLE float2 native_sqrt (float2 param0);
OVERLOADABLE float3 native_sqrt (float3 param0);
OVERLOADABLE float4 native_sqrt (float4 param0);
OVERLOADABLE float8 native_sqrt (float8 param0);
OVERLOADABLE float16 native_sqrt (float16 param0);
OVERLOADABLE half2 native_sqrt (half2 param0);
OVERLOADABLE half3 native_sqrt (half3 param0);
OVERLOADABLE half4 native_sqrt (half4 param0);
OVERLOADABLE half8 native_sqrt (half8 param0);
OVERLOADABLE half16 native_sqrt (half16 param0);

//gentype native_tan (gentype x)

OVERLOADABLE float2 native_tan (float2 param0);
OVERLOADABLE float3 native_tan (float3 param0);
OVERLOADABLE float4 native_tan (float4 param0);
OVERLOADABLE float8 native_tan (float8 param0);
OVERLOADABLE float16 native_tan (float16 param0);
OVERLOADABLE half2 native_tan (half2 param0);
OVERLOADABLE half3 native_tan (half3 param0);
OVERLOADABLE half4 native_tan (half4 param0);
OVERLOADABLE half8 native_tan (half8 param0);
OVERLOADABLE half16 native_tan (half16 param0);

#endif
