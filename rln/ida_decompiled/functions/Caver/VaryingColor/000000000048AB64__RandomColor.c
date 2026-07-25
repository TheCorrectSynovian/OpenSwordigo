/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048AB64
 * Mangled: _ZNK5Caver12VaryingColor11RandomColorEv
 * Demangled: Caver::VaryingColor::RandomColor(void)
 *
 * Callers: 1
 *   0x00000000001F5D50  Caver::VaryingColor::RandomColor(void)
 *
 * Callees: 2
 *   0x00000000001F41A0  Caver::FloatColor::FromHSLA(float,float,float,float)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *
 * Referenced strings: 26
 *   insn=0x000000000048AB84 string=0x000000000048AB88 ","
 *   insn=0x000000000048ABA0 string=0x00000000001FCE30 "0'"
 *   insn=0x000000000048ABA4 string=0x000000000048ABA8 ""
 *   insn=0x000000000048ABB8 string=0x000000000048ABBC " "
 *   insn=0x000000000048ABC4 string=0x000000000048ABC8 "@ "
 *   insn=0x000000000048ABC8 string=0x000000000048ABCC ") "
 *   insn=0x000000000048ABE0 string=0x000000000048ABE4 ""
 *   insn=0x000000000048ABF4 string=0x000000000048ABF8 " "
 *   insn=0x000000000048AC00 string=0x000000000048AC04 "@ "
 *   insn=0x000000000048AC04 string=0x000000000048AC08 ")) "
 *   insn=0x000000000048AC1C string=0x000000000048AC20 ""
 *   insn=0x000000000048AC30 string=0x000000000048AC34 " "
 *   insn=0x000000000048AC3C string=0x000000000048AC40 "@ "
 *   insn=0x000000000048AC40 string=0x000000000048AC44 "J) "
 *   insn=0x000000000048AC4C string=0x000000000048AC50 "-"
 *   insn=0x000000000048AC50 string=0x000000000048AC54 "w"
 *   insn=0x000000000048AC58 string=0x000000000048AC5C ""
 *   insn=0x000000000048AC70 string=0x000000000048AC74 "!"
 *   insn=0x000000000048AC7C string=0x000000000048AC80 "` "
 *   insn=0x000000000048AC80 string=0x000000000048AC84 "`) "
 *   insn=0x000000000048AC8C string=0x000000000048AC90 "h!"
 *   insn=0x000000000048AC98 string=0x000000000048AC9C "!"
 *   insn=0x000000000048AC9C string=0x000000000048ACA0 "B"
 *   insn=0x000000000048ACA0 string=0x000000000048ACA4 "c"
 *   insn=0x000000000048ACB8 string=0x000000000048ACBC "9"
 *   insn=0x000000000048ACBC string=0x00000000001F41A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__usercall Caver::VaryingColor::RandomColor@<X0>(Caver::VaryingColor *this@<X0>, __int64 *a2@<X8>)
{
  float *v2; // x20
  float v3; // s11
  float v4; // s8
  float v5; // s9
  float v6; // s10

  v2 = (float *)this;
  v3 = *((float *)this + 3);
  v4 = *(float *)this;
  v5 = *((float *)this + 1);
  v6 = *((float *)this + 2);
  if ( *((float *)this + 4) > 0.0001 )
  {
    this = (Caver::VaryingColor *)Caver::fastrandom(this);
    v4 = v4 + (float)(v2[4] * (float)((float)((float)(int)this / (float)Caver::FASTRANDOM_MAX) + -0.5));
  }
  if ( v2[5] > 0.0001 )
  {
    this = (Caver::VaryingColor *)Caver::fastrandom(this);
    v5 = v5 + (float)(v2[5] * (float)((float)((float)(int)this / (float)Caver::FASTRANDOM_MAX) + -0.5));
  }
  if ( v2[6] > 0.0001 )
  {
    this = (Caver::VaryingColor *)Caver::fastrandom(this);
    v6 = v6 + (float)(v2[6] * (float)((float)((float)(int)this / (float)Caver::FASTRANDOM_MAX) + -0.5));
  }
  if ( v2[7] > 0.0001 )
  {
    this = (Caver::VaryingColor *)Caver::fastrandom(this);
    v3 = fmaxf(
           fminf(v3 + (float)(v2[7] * (float)((float)((float)(int)this / (float)Caver::FASTRANDOM_MAX) + -0.5)), 1.0),
           0.0);
  }
  return Caver::FloatColor::FromHSLA(a2, this, v4, v5, v6, v3);
}

