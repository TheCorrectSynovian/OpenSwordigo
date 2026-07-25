/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B27B0
 * Mangled: _ZN5Caver7Vector29NormalizeEv
 * Demangled: Caver::Vector2::Normalize(void)
 *
 * Callers: 1
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *
 * Callees: 1
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 13
 *   insn=0x00000000004B27BC string=0x00000000004B27C0 "`"
 *   insn=0x00000000004B27C4 string=0x00000000004B27C8 "!!"
 *   insn=0x00000000004B27CC string=0x00000000004B27D0 " "
 *   insn=0x00000000004B27D4 string=0x00000000004B27D8 "g"
 *   insn=0x00000000004B27D8 string=0x00000000004B27DC " "
 *   insn=0x00000000004B27DC string=0x00000000004B27E0 "T+"
 *   insn=0x00000000004B27E0 string=0x00000000001FD530 "0'"
 *   insn=0x00000000004B27EC string=0x00000000004B27F0 ""
 *   insn=0x00000000004B27F0 string=0x00000000004B27F4 "a"
 *   insn=0x00000000004B27F8 string=0x00000000004B27FC "@"
 *   insn=0x00000000004B2800 string=0x00000000004B2804 "a"
 *   insn=0x00000000004B280C string=0x00000000004B281C "`"
 *   insn=0x00000000004B2814 string=0x00000000004B2818 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__fastcall Caver::Vector2::Normalize(float *this)
{
  float v1; // s0
  float v2; // s3
  float v3; // s0
  float v4; // s0

  v1 = sqrtf((float)(*this * *this) + (float)(this[1] * this[1]));
  if ( v1 <= 0.0001 )
  {
    v4 = 0.0;
    *this = 1.0;
  }
  else
  {
    v2 = this[1];
    v3 = 1.0 / v1;
    *this = v3 * *this;
    v4 = v3 * v2;
  }
  this[1] = v4;
  return this;
}

