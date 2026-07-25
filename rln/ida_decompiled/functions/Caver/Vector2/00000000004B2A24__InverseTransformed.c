/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B2A24
 * Mangled: _ZNK5Caver7Vector218InverseTransformedERKS0_ff
 * Demangled: Caver::Vector2::InverseTransformed(Caver::Vector2 const&,float,float)
 *
 * Callers: 1
 *   0x00000000001F8F90  Caver::Vector2::InverseTransformed(Caver::Vector2 const&,float,float)
 *
 * Callees: 2
 *   0x00000000001FF1F0  .cosf
 *   0x0000000000203C70  .sinf
 *
 * Referenced strings: 18
 *   insn=0x00000000004B2A3C string=0x00000000004B2A40 "("
 *   insn=0x00000000004B2A48 string=0x00000000004B2A4C """
 *   insn=0x00000000004B2A54 string=0x00000000004B2A58 "\t"
 *   insn=0x00000000004B2A58 string=0x00000000004B2A5C " "
 *   insn=0x00000000004B2A5C string=0x00000000004B2A60 """
 *   insn=0x00000000004B2A64 string=0x00000000004B2A68 "K"
 *   insn=0x00000000004B2A68 string=0x00000000004B2A6C "b"
 *   insn=0x00000000004B2A80 string=0x00000000004B2A84 " A!"
 *   insn=0x00000000004B2A80 string=0x00000000004B2ABC "b."
 *   insn=0x00000000004B2A88 string=0x00000000004B2A8C "yD"
 *   insn=0x00000000004B2A8C string=0x00000000004B2A90 "\n"
 *   insn=0x00000000004B2A90 string=0x00000000004B2A94 " "
 *   insn=0x00000000004B2A9C string=0x00000000004B2AA0 "B\t+"
 *   insn=0x00000000004B2AA4 string=0x00000000004B2AA8 "C\t#"
 *   insn=0x00000000004B2AA8 string=0x00000000004B2AAC "!8""
 *   insn=0x00000000004B2AB0 string=0x00000000004B2AB4 "k( "
 *   insn=0x00000000004B2AB4 string=0x00000000004B2AB8 """
 *   insn=0x00000000004B2AE0 string=0x00000000004B2AE4 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::Vector2::InverseTransformed(
        float32x2_t *this@<X0>,
        float32x2_t *a2@<X1>,
        float a3@<S0>,
        float a4@<S1>,
        __int64 a5@<X8>)
{
  float v8; // s0
  unsigned __int64 v9; // d2
  float v10; // s11
  float v11; // s10
  float v12; // s0
  float v13; // s1
  float v14; // [xsp+0h] [xbp-40h]

  v8 = fabsf(a3);
  v9 = vsub_f32((float32x2_t)this->n64_u64[0], (float32x2_t)a2->n64_u64[0]).n64_u64[0];
  v10 = *((float *)&v9 + 1);
  *(_QWORD *)a5 = v9;
  if ( v8 > 0.0001 )
  {
    if ( v8 >= 0.00001 )
    {
      v14 = *(float *)&v9;
      v11 = sinf(-a3);
      v12 = cosf(a3);
      v13 = (float)(v12 * v14) - (float)(v11 * v10);
      v10 = (float)(v11 * v14) + (float)(v12 * v10);
      *(float *)&v9 = v13;
    }
    *(_DWORD *)a5 = v9;
    *(float *)(a5 + 4) = v10;
  }
  if ( fabsf(a4 + -1.0) > 0.0001 )
  {
    *(float *)a5 = (float)(1.0 / a4) * *(float *)&v9;
    *(float *)(a5 + 4) = (float)(1.0 / a4) * v10;
  }
}

