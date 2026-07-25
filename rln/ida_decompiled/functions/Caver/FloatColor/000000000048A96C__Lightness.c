/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048A96C
 * Mangled: _ZNK5Caver10FloatColor9LightnessEv
 * Demangled: Caver::FloatColor::Lightness(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x000000000048A97C string=0x000000000048A980 " x "
 *   insn=0x000000000048A980 string=0x000000000048A984 "!h""
 *   insn=0x000000000048A988 string=0x000000000048A98C "`  "
 *   insn=0x000000000048A98C string=0x000000000048A990 "`L "
 *   insn=0x000000000048A990 string=0x000000000048A994 "` !"
 *   insn=0x000000000048A994 string=0x000000000048A998 "a"
 *   insn=0x000000000048A998 string=0x000000000048A99C "@  "
 *   insn=0x000000000048A99C string=0x000000000048A9A0 "@L "
 *   insn=0x000000000048A9A0 string=0x000000000048A9A4 "@ !"
 *   insn=0x000000000048A9A4 string=0x000000000048A9A8 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::FloatColor::Lightness(Caver::FloatColor *this)
{
  float v1; // s3
  float v2; // s0
  float v3; // s1
  float v4; // s2

  v1 = *((float *)this + 1);
  v2 = fminf(*(float *)this, 3.4028e38);
  v3 = fmaxf(*(float *)this, -3.4028e38);
  v4 = *((float *)this + 2);
  if ( v1 < v2 )
    v2 = *((float *)this + 1);
  if ( v1 > v3 )
    v3 = *((float *)this + 1);
  if ( v4 < v2 )
    v2 = *((float *)this + 2);
  if ( v4 > v3 )
    v3 = *((float *)this + 2);
  return (float)(v2 + v3) * 0.5;
}

