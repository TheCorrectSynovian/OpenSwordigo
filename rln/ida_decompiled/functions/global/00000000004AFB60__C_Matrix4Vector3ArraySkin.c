/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AFB60
 * Mangled: _Z25C_Matrix4Vector3ArraySkiniPKffiPKiiS0_iPf
 * Demangled: C_Matrix4Vector3ArraySkin(int,float const*,float,int,int const*,int,float const*,int,float *)
 *
 * Callers: 1
 *   0x00000000001F9130  C_Matrix4Vector3ArraySkin(int,float const*,float,int,int const*,int,float const*,int,float *)
 *
 * Callees: 0
 *
 * Referenced strings: 14
 *   insn=0x00000000004AFB60 string=0x00000000004AFB64 ""
 *   insn=0x00000000004AFB64 string=0x00000000004AFB68 "H|@"
 *   insn=0x00000000004AFB7C string=0x00000000004AFB80 "m"
 *   insn=0x00000000004AFB80 string=0x00000000004AFB84 "b"
 *   insn=0x00000000004AFB84 string=0x00000000004AFB88 "d"
 *   insn=0x00000000004AFB88 string=0x00000000004AFB8C "c"
 *   insn=0x00000000004AFB8C string=0x00000000004AFB90 "-"
 *   insn=0x00000000004AFBA8 string=0x00000000004AFBAC "B'"
 *   insn=0x00000000004AFBB4 string=0x00000000004AFBB8 "c1"
 *   insn=0x00000000004AFBBC string=0x00000000004AFBC0 "B(#"
 *   insn=0x00000000004AFBD4 string=0x00000000004AFBD8 "#"
 *   insn=0x00000000004AFBDC string=0x00000000004AFBE0 "B($"
 *   insn=0x00000000004AFBE4 string=0x00000000004AFBE8 "B(&"
 *   insn=0x00000000004AFBE8 string=0x00000000004AFBEC "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall C_Matrix4Vector3ArraySkin(
        __int64 result,
        const float *a2,
        double a3,
        int a4,
        const int *a5,
        int a6,
        const float *a7,
        int a8,
        float *a9)
{
  float32x2_t v9; // d1
  const float *v10; // x11
  float *v11; // x12
  __int64 v12; // x13
  float v13; // s2
  float v14; // s4
  float32x2_t *v15; // x13
  unsigned __int64 v16; // d3
  float v17; // s2

  if ( (int)result >= 1 )
  {
    v9.n64_u64[0] = vdup_lane_s32(*(int32x2_t *)&a3, 0).n64_u64[0];
    v10 = a7 + 1;
    v11 = a9 + 2;
    do
    {
      v12 = *a5;
      v13 = *(v10 - 1);
      v14 = v10[1];
      a5 = (const int *)((char *)a5 + a4);
      v15 = (float32x2_t *)&a2[16 * v12];
      v16 = vadd_f32(
              vadd_f32(
                vadd_f32(vmul_n_f32((float32x2_t)v15->n64_u64[0], v13), vmul_n_f32(v15[2], *v10)),
                vmul_n_f32(v15[4], v14)),
              vmul_f32(v9, v15[6])).n64_u64[0];
      v17 = (float)((float)((float)(v13 * v15[1].n64_f32[0]) + (float)(*v10 * v15[3].n64_f32[0]))
                  + (float)(v14 * v15[5].n64_f32[0]))
          + (float)(v15[7].n64_f32[0] * *(float *)&a3);
      v10 = (const float *)((char *)v10 + a6);
      result = (unsigned int)(result - 1);
      *((_QWORD *)v11 - 1) = v16;
      *v11 = v17;
      v11 = (float *)((char *)v11 + a8);
    }
    while ( (_DWORD)result );
  }
  return result;
}

