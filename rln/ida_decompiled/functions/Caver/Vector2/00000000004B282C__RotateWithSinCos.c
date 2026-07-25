/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B282C
 * Mangled: _ZN5Caver7Vector216RotateWithSinCosEff
 * Demangled: Caver::Vector2::RotateWithSinCos(float,float)
 *
 * Callers: 1
 *   0x00000000001FBA10  Caver::Vector2::RotateWithSinCos(float,float)
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x00000000004B2834 string=0x00000000004B2838 "` ""
 *   insn=0x00000000004B283C string=0x00000000004B2840 "(  "
 *   insn=0x00000000004B2840 string=0x00000000004B2844 "M"
 *   insn=0x00000000004B284C string=0x00000000004B2850 "D!"
 *   insn=0x00000000004B2850 string=0x00000000004B2854 "e "
 *   insn=0x00000000004B2854 string=0x00000000004B2858 "@ "
 *   insn=0x00000000004B2858 string=0x00000000004B285C "a!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::Vector2::RotateWithSinCos(Caver::Vector2 *this, float result, float a3)
{
  float v3; // s3
  float v4; // s2

  if ( fabsf(result) >= 0.00001 || a3 <= 0.0 )
  {
    v3 = *((float *)this + 1);
    v4 = (float)(*(float *)this * a3) - (float)(v3 * result);
    result = (float)(*(float *)this * result) + (float)(v3 * a3);
    *(float *)this = v4;
    *((float *)this + 1) = result;
  }
  return result;
}

