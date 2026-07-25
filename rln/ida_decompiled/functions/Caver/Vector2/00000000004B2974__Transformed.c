/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B2974
 * Mangled: _ZNK5Caver7Vector211TransformedERKS0_ff
 * Demangled: Caver::Vector2::Transformed(Caver::Vector2 const&,float,float)
 *
 * Callers: 1
 *   0x00000000001FE880  Caver::Vector2::Transformed(Caver::Vector2 const&,float,float)
 *
 * Callees: 2
 *   0x00000000001FF1F0  .cosf
 *   0x0000000000203C70  .sinf
 *
 * Referenced strings: 13
 *   insn=0x00000000004B2994 string=0x00000000004B2998 ""
 *   insn=0x00000000004B29A0 string=0x00000000004B29A4 "K!"
 *   insn=0x00000000004B29A4 string=0x00000000004B29A8 "j!"
 *   insn=0x00000000004B29AC string=0x00000000004B29B0 "k*"
 *   insn=0x00000000004B29B0 string=0x00000000004B29B4 "-"
 *   insn=0x00000000004B29C4 string=0x00000000004B29F4 "k*"
 *   insn=0x00000000004B29CC string=0x00000000004B29D0 "\t"
 *   insn=0x00000000004B29DC string=0x00000000004B29E0 ""\t*"
 *   insn=0x00000000004B29E0 string=0x00000000004B29E4 "#\t+"
 *   insn=0x00000000004B29E8 string=0x00000000004B29EC "+8""
 *   insn=0x00000000004B29EC string=0x00000000004B29F0 "j( "
 *   insn=0x00000000004B2A04 string=0x00000000004B2A08 "`"
 *   insn=0x00000000004B2A10 string=0x00000000004B2A14 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::Vector2::Transformed@<S0>(
        Caver::Vector2 *this@<X0>,
        const Caver::Vector2 *a2@<X1>,
        float a3@<S0>,
        float a4@<S1>,
        float *a5@<X8>)
{
  float v7; // s0
  float v9; // s11
  float v10; // s10
  float v11; // s9
  float v12; // s0
  float v13; // s3
  float result; // s0

  v7 = fabsf(a3);
  v9 = *(float *)this * a4;
  v10 = *((float *)this + 1) * a4;
  *a5 = v9;
  a5[1] = v10;
  if ( v7 > 0.0001 )
  {
    if ( v7 >= 0.00001 )
    {
      v11 = sinf(a3);
      v12 = cosf(a3);
      v13 = v11 * v9;
      v9 = (float)(v12 * v9) - (float)(v11 * v10);
      v10 = v13 + (float)(v12 * v10);
    }
    *a5 = v9;
    a5[1] = v10;
  }
  *a5 = *(float *)a2 + v9;
  result = *((float *)a2 + 1) + v10;
  a5[1] = result;
  return result;
}

