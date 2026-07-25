/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B28E0
 * Mangled: _ZNK5Caver7Vector218RotatedAroundPointEfRKS0_
 * Demangled: Caver::Vector2::RotatedAroundPoint(float,Caver::Vector2 const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF1F0  .cosf
 *   0x0000000000203C70  .sinf
 *
 * Referenced strings: 13
 *   insn=0x00000000004B28F4 string=0x00000000004B28F8 ""
 *   insn=0x00000000004B290C string=0x00000000004B2910 "8!"
 *   insn=0x00000000004B2918 string=0x00000000004B291C "j8""
 *   insn=0x00000000004B2920 string=0x00000000004B2954 "`)!"
 *   insn=0x00000000004B2928 string=0x00000000004B292C "\t"
 *   insn=0x00000000004B2930 string=0x00000000004B2934 "/2"
 *   insn=0x00000000004B2938 string=0x00000000004B293C "c\t "
 *   insn=0x00000000004B293C string=0x00000000004B2940 "D\t)"
 *   insn=0x00000000004B2940 string=0x00000000004B2944 "e\t)"
 *   insn=0x00000000004B2944 string=0x00000000004B2948 "@\t "
 *   insn=0x00000000004B2948 string=0x00000000004B294C "k8$"
 *   insn=0x00000000004B2954 string=0x00000000004B2958 "A)""
 *   insn=0x00000000004B2958 string=0x00000000004B295C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::Vector2::RotatedAroundPoint@<S0>(
        Caver::Vector2 *this@<X0>,
        float a2@<S0>,
        const Caver::Vector2 *a3@<X1>,
        float *a4@<X8>)
{
  float v7; // s1
  float v8; // s2
  float v9; // s11
  float v10; // s10
  float v11; // s9
  float v12; // s0
  float v13; // s5
  float result; // s0

  v7 = *(float *)a3;
  v8 = *((float *)a3 + 1);
  v9 = *(float *)this - *(float *)a3;
  v10 = *((float *)this + 1) - v8;
  if ( fabsf(a2) >= 0.00001 )
  {
    v11 = sinf(a2);
    v12 = cosf(a2);
    v7 = *(float *)a3;
    v8 = *((float *)a3 + 1);
    v13 = v9 * v11;
    v9 = (float)(v9 * v12) - (float)(v10 * v11);
    v10 = v13 + (float)(v10 * v12);
  }
  result = v9 + v7;
  *a4 = v9 + v7;
  a4[1] = v10 + v8;
  return result;
}

