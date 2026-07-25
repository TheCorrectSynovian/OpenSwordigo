/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AFA40
 * Mangled: _Z24C_Matrix4Vector3ArrayMuliPKffiS0_iPf
 * Demangled: C_Matrix4Vector3ArrayMul(int,float const*,float,int,float const*,int,float *)
 *
 * Callers: 1
 *   0x00000000001F7C10  C_Matrix4Vector3ArrayMul(int,float const*,float,int,float const*,int,float *)
 *
 * Callees: 0
 *
 * Referenced strings: 22
 *   insn=0x00000000004AFA40 string=0x00000000004AFA44 "k"
 *   insn=0x00000000004AFA44 string=0x00000000004AFA48 "08@"
 *   insn=0x00000000004AFA48 string=0x00000000004AFA4C "'"
 *   insn=0x00000000004AFA4C string=0x00000000004AFA50 "!"
 *   insn=0x00000000004AFA50 string=0x00000000004AFA54 ""@"
 *   insn=0x00000000004AFA54 string=0x00000000004AFA58 "#@"
 *   insn=0x00000000004AFA58 string=0x00000000004AFA5C "$"
 *   insn=0x00000000004AFA5C string=0x00000000004AFA60 "%"
 *   insn=0x00000000004AFA60 string=0x00000000004AFA64 "&(@"
 *   insn=0x00000000004AFA64 string=0x00000000004AFA68 "H|@"
 *   insn=0x00000000004AFA78 string=0x00000000004AFA7C "k"
 *   insn=0x00000000004AFA7C string=0x00000000004AFA80 "p"
 *   insn=0x00000000004AFA80 string=0x00000000004AFA84 "r"
 *   insn=0x00000000004AFA88 string=0x00000000004AFA8C "k"
 *   insn=0x00000000004AFA8C string=0x00000000004AFA90 "3"
 *   insn=0x00000000004AFA90 string=0x00000000004AFA94 "t"
 *   insn=0x00000000004AFA94 string=0x00000000004AFA98 "P0"
 *   insn=0x00000000004AFA9C string=0x00000000004AFAA0 "s"
 *   insn=0x00000000004AFAAC string=0x00000000004AFAB0 "q"
 *   insn=0x00000000004AFABC string=0x00000000004AFAC0 "Q"
 *   insn=0x00000000004AFAC0 string=0x00000000004AFAC4 "P"
 *   insn=0x00000000004AFAC4 string=0x00000000004AFAC8 "J"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall C_Matrix4Vector3ArrayMul(
        __int64 result,
        float32x2_t *a2,
        float a3,
        int a4,
        const float *a5,
        int a6,
        float *a7)
{
  float32x2_t v7; // d1
  float v8; // s2
  float32x2_t v9; // d3
  float v10; // s4
  float32x2_t v11; // d5
  float v12; // s6
  float *v13; // x10
  float32x2_t v14; // d7
  float v15; // s0
  const float *v16; // x11
  float v17; // s16
  float v18; // s17
  float v19; // s18

  if ( (int)result >= 1 )
  {
    v7.n64_u64[0] = a2->n64_u64[0];
    v8 = a2[1].n64_f32[0];
    v9.n64_u64[0] = a2[2].n64_u64[0];
    v10 = a2[3].n64_f32[0];
    v11.n64_u64[0] = a2[4].n64_u64[0];
    v12 = a2[5].n64_f32[0];
    v13 = a7 + 2;
    v14.n64_u64[0] = vmul_n_f32(a2[6], a3).n64_u64[0];
    v15 = a2[7].n64_f32[0] * a3;
    v16 = a5 + 1;
    do
    {
      v17 = *(v16 - 1);
      v18 = *v16;
      v19 = v16[1];
      result = (unsigned int)(result - 1);
      v16 = (const float *)((char *)v16 + a4);
      *((float32x2_t *)v13 - 1) = vadd_f32(
                                    v14,
                                    vadd_f32(vadd_f32(vmul_n_f32(v7, v17), vmul_n_f32(v9, v18)), vmul_n_f32(v11, v19)));
      *v13 = v15 + (float)((float)((float)(v8 * v17) + (float)(v10 * v18)) + (float)(v12 * v19));
      v13 = (float *)((char *)v13 + a6);
    }
    while ( (_DWORD)result );
  }
  return result;
}

