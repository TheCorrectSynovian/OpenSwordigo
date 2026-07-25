/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000510314
 * Mangled: _Z17TransformCPODDataR8CPODDataS0_iP11PVRTMATRIXfPfS3_ib
 * Demangled: TransformCPODData(CPODData &,CPODData &,int,PVRTMATRIXf *,float *,float *,int,bool)
 *
 * Callers: 1
 *   0x00000000001F5530  TransformCPODData(CPODData &,CPODData &,int,PVRTMATRIXf *,float *,float *,int,bool)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9340  PVRTVertexRead(PVRTVECTOR4f *,void const*,EPVRTDataType,int)
 *   0x00000000001FA690  .sqrt
 *   0x00000000001FEAA0  PVRTVertexWrite(void *,EPVRTDataType,int,PVRTVECTOR4f const*)
 *
 * Referenced strings: 40
 *   insn=0x0000000000510330 string=0x0000000000510334 "["
 *   insn=0x0000000000510334 string=0x0000000000510338 "h"
 *   insn=0x0000000000510364 string=0x0000000000510504 "h"
 *   insn=0x0000000000510374 string=0x0000000000510378 "}"
 *   insn=0x0000000000510378 string=0x000000000051037C "!"
 *   insn=0x0000000000510380 string=0x00000000001F9340 "0'"
 *   insn=0x0000000000510388 string=0x000000000051038C "_"
 *   insn=0x0000000000510394 string=0x0000000000510398 "\t"
 *   insn=0x0000000000510398 string=0x000000000051039C "\n!"
 *   insn=0x000000000051039C string=0x00000000005103A0 "1"
 *   insn=0x00000000005103A4 string=0x00000000005103A8 "#"
 *   insn=0x00000000005103A8 string=0x00000000005103AC "D"
 *   insn=0x00000000005103AC string=0x00000000005103B0 "e"
 *   insn=0x00000000005103BC string=0x00000000005103C0 "&G@"
 *   insn=0x00000000005103C0 string=0x00000000005103C4 ""
 *   insn=0x00000000005103C8 string=0x00000000005103CC ")}@"
 *   insn=0x00000000005103D0 string=0x00000000005103D4 "&A@m'EAm"
 *   insn=0x00000000005103D4 string=0x00000000005103D8 "'EAm"
 *   insn=0x00000000005103E0 string=0x00000000005103E4 "P"
 *   insn=0x00000000005103E4 string=0x00000000005103E8 "q"
 *   insn=0x00000000005103F0 string=0x00000000005103F4 "'EBm"
 *   insn=0x0000000000510404 string=0x0000000000510408 "'ECm"
 *   insn=0x0000000000510410 string=0x0000000000510414 ""
 *   insn=0x0000000000510420 string=0x0000000000510424 ""
 *   insn=0x000000000051043C string=0x0000000000510440 ")"
 *   insn=0x0000000000510494 string=0x0000000000510498 "B""
 *   insn=0x000000000051049C string=0x00000000005104A0 "!!"
 *   insn=0x00000000005104A8 string=0x00000000005104AC " "
 *   insn=0x00000000005104B0 string=0x00000000005104B4 "g"
 *   insn=0x00000000005104B4 string=0x00000000005104B8 " "
 *   insn=0x00000000005104B8 string=0x00000000005104BC "u"
 *   insn=0x00000000005104BC string=0x00000000001FA690 "0'"
 *   insn=0x00000000005104C4 string=0x00000000005104C8 "@"
 *   insn=0x00000000005104CC string=0x00000000005104D0 "!"
 *   insn=0x00000000005104D8 string=0x00000000005104DC "  "
 *   insn=0x00000000005104F0 string=0x00000000005104F4 ")}"
 *   insn=0x00000000005104FC string=0x0000000000510500 "h"
 *   insn=0x000000000051050C string=0x0000000000510510 "!"
 *   insn=0x0000000000510510 string=0x0000000000510534 "g"
 *   insn=0x0000000000510534 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall TransformCPODData(
        __int64 result,
        __int64 a2,
        __int64 a3,
        float32x4_t *a4,
        float *a5,
        const float *a6,
        int a7,
        char a8)
{
  const float *v13; // x8
  const float *v14; // x9
  const float *v15; // x10
  const float *v16; // x11
  float32x2_t v17; // d2
  float32x2_t v18; // d3
  float32x2_t v19; // d4
  float32x2_t v20; // d5
  __int64 v21; // x8
  float32x4_t v22; // q0
  float32x2_t v23; // d1
  float v24; // t1
  float32x2_t *v25; // x9
  float32x2_t v26; // d7
  float v27; // s2
  float v28; // s0
  float v29; // [xsp+0h] [xbp-80h] BYREF
  float v30; // [xsp+4h] [xbp-7Ch] BYREF
  float v31; // [xsp+8h] [xbp-78h] BYREF
  float v32; // [xsp+Ch] [xbp-74h] BYREF
  float32x4_t v33; // [xsp+10h] [xbp-70h]
  __int64 v34; // [xsp+28h] [xbp-58h]

  v34 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_DWORD *)(result + 4) )
  {
    PVRTVertexRead();
    v33 = 0u;
    if ( a7 )
    {
      if ( a7 < 1 )
      {
        v23.n64_u32[0] = 0;
        v27 = 0.0;
        v22.n128_u32[0] = 0;
        if ( (a8 & 1) == 0 )
          return PVRTVertexWrite();
      }
      else
      {
        v13 = &v29;
        v14 = &v30;
        v15 = &v31;
        v16 = &v32;
        v17.n64_u64[0] = vld1_dup_f32(v13).n64_u64[0];
        v18.n64_u64[0] = vld1_dup_f32(v14).n64_u64[0];
        v19.n64_u64[0] = vld1_dup_f32(v15).n64_u64[0];
        v20.n64_u64[0] = vld1_dup_f32(v16).n64_u64[0];
        v21 = (unsigned int)a7;
        v22.n128_u64[0] = 0;
        v23.n64_u64[0] = 0;
        do
        {
          v24 = *a5++;
          --v21;
          v25 = (float32x2_t *)&a4[4 * (__int64)(int)v24];
          v26.n64_u64[0] = vld1_dup_f32(a6++).n64_u64[0];
          v22.n128_u64[0] = vadd_f32(
                              (float32x2_t)v22.n128_u64[0],
                              vmul_f32(
                                vadd_f32(
                                  vadd_f32(
                                    vadd_f32(vmul_f32((float32x2_t)v25->n64_u64[0], v17), vmul_f32(v25[2], v18)),
                                    vmul_f32(v25[4], v19)),
                                  vmul_f32(v25[6], v20)),
                                v26)).n64_u64[0];
          v23.n64_u64[0] = vadd_f32(
                             vmul_f32(
                               vadd_f32(
                                 vadd_f32(vadd_f32(vmul_f32(v17, v25[1]), vmul_f32(v18, v25[3])), vmul_f32(v19, v25[5])),
                                 vmul_f32(v20, v25[7])),
                               v26),
                             v23).n64_u64[0];
        }
        while ( v21 );
        v27 = v22.n128_f32[1];
        v33.n128_u64[0] = v22.n128_u64[0];
        *(float32x2_t *)&v33.n128_i8[8] = v23;
        if ( (a8 & 1) == 0 )
          return PVRTVertexWrite();
      }
    }
    else
    {
      v22 = vaddq_f32(
              vaddq_f32(vaddq_f32(vmulq_n_f32(*a4, v29), vmulq_n_f32(a4[1], v30)), vmulq_n_f32(a4[2], v31)),
              vmulq_n_f32(a4[3], v32));
      v33 = v22;
      v27 = v22.n128_f32[1];
      v23.n64_u32[0] = v22.n128_u32[2];
      if ( (a8 & 1) == 0 )
        return PVRTVertexWrite();
    }
    v28 = 1.0
        / sqrt((float)((float)((float)(v22.n128_f32[0] * v22.n128_f32[0]) + (float)(v27 * v27))
                     + (float)(v23.n64_f32[0] * v23.n64_f32[0])));
    v33.n128_u64[0] = vmul_n_f32((float32x2_t)v33.n128_u64[0], v28).n64_u64[0];
    v33.n128_f32[2] = v33.n128_f32[2] * v28;
    return PVRTVertexWrite();
  }
  return result;
}

