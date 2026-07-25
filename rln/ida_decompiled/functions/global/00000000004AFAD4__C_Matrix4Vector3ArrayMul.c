/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AFAD4
 * Mangled: _Z24C_Matrix4Vector3ArrayMuliPKfiS0_iPf
 * Demangled: C_Matrix4Vector3ArrayMul(int,float const*,int,float const*,int,float *)
 *
 * Callers: 1
 *   0x00000000001F9A10  C_Matrix4Vector3ArrayMul(int,float const*,int,float const*,int,float *)
 *
 * Callees: 0
 *
 * Referenced strings: 22
 *   insn=0x00000000004AFAD4 string=0x00000000004AFAD8 "+"
 *   insn=0x00000000004AFAD8 string=0x00000000004AFADC " "
 *   insn=0x00000000004AFADC string=0x00000000004AFAE0 "!@"
 *   insn=0x00000000004AFAE0 string=0x00000000004AFAE4 ""@"
 *   insn=0x00000000004AFAE4 string=0x00000000004AFAE8 "#"
 *   insn=0x00000000004AFAE8 string=0x00000000004AFAEC "$"
 *   insn=0x00000000004AFAEC string=0x00000000004AFAF0 "%(@"
 *   insn=0x00000000004AFAF0 string=0x00000000004AFAF4 "&8@"
 *   insn=0x00000000004AFAF4 string=0x00000000004AFAF8 "'"
 *   insn=0x00000000004AFAF8 string=0x00000000004AFAFC "H|@"
 *   insn=0x00000000004AFB04 string=0x00000000004AFB08 "k "
 *   insn=0x00000000004AFB08 string=0x00000000004AFB0C "pE"
 *   insn=0x00000000004AFB0C string=0x00000000004AFB10 "r"
 *   insn=0x00000000004AFB14 string=0x00000000004AFB18 "k"
 *   insn=0x00000000004AFB1C string=0x00000000004AFB20 "T"
 *   insn=0x00000000004AFB20 string=0x00000000004AFB24 "00"
 *   insn=0x00000000004AFB24 string=0x00000000004AFB28 "q1"
 *   insn=0x00000000004AFB28 string=0x00000000004AFB2C "s"
 *   insn=0x00000000004AFB38 string=0x00000000004AFB3C "q"
 *   insn=0x00000000004AFB48 string=0x00000000004AFB4C "Q"
 *   insn=0x00000000004AFB4C string=0x00000000004AFB50 "P"
 *   insn=0x00000000004AFB50 string=0x00000000004AFB54 "J"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall C_Matrix4Vector3ArrayMul(
        __int64 result,
        float32x2_t *a2,
        int a3,
        const float *a4,
        int a5,
        float *a6)
{
  float32x2_t v6; // d0
  float v7; // s1
  float32x2_t v8; // d2
  float v9; // s3
  float32x2_t v10; // d4
  float v11; // s5
  float v12; // s6
  float32x2_t v13; // d7
  float *v14; // x10
  float *v15; // x11
  float v16; // s16
  float v17; // s17
  float v18; // s18

  if ( (int)result >= 1 )
  {
    v6.n64_u64[0] = a2->n64_u64[0];
    v7 = a2[1].n64_f32[0];
    v8.n64_u64[0] = a2[2].n64_u64[0];
    v9 = a2[3].n64_f32[0];
    v10.n64_u64[0] = a2[4].n64_u64[0];
    v11 = a2[5].n64_f32[0];
    v12 = a2[7].n64_f32[0];
    v13.n64_u64[0] = a2[6].n64_u64[0];
    v14 = a6 + 2;
    v15 = (float *)(a4 + 2);
    do
    {
      v16 = *(v15 - 2);
      v17 = *(v15 - 1);
      v18 = *v15;
      result = (unsigned int)(result - 1);
      v15 = (float *)((char *)v15 + a3);
      *((float32x2_t *)v14 - 1) = vadd_f32(
                                    v13,
                                    vadd_f32(vadd_f32(vmul_n_f32(v6, v16), vmul_n_f32(v8, v17)), vmul_n_f32(v10, v18)));
      *v14 = v12 + (float)((float)((float)(v7 * v16) + (float)(v9 * v17)) + (float)(v11 * v18));
      v14 = (float *)((char *)v14 + a5);
    }
    while ( (_DWORD)result );
  }
  return result;
}

