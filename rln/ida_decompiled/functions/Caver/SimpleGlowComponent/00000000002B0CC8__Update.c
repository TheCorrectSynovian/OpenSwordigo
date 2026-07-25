/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B0CC8
 * Mangled: _ZN5Caver19SimpleGlowComponent6UpdateEf
 * Demangled: Caver::SimpleGlowComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203C70  .sinf
 *
 * Referenced strings: 27
 *   insn=0x00000000002B0CDC string=0x00000000002B0CE0 "a"
 *   insn=0x00000000002B0CDC string=0x00000000005883D0 "\n"
 *   insn=0x00000000002B0CE4 string=0x00000000002B0CE8 "  ""
 *   insn=0x00000000002B0CEC string=0x00000000002B0CF0 "b"
 *   insn=0x00000000002B0CF0 string=0x00000000002B0CF4 "@  "
 *   insn=0x00000000002B0CF8 string=0x00000000002B0CFC "c"
 *   insn=0x00000000002B0CFC string=0x00000000002B0D00 "D8 "
 *   insn=0x00000000002B0D00 string=0x00000000002B0D04 "d"
 *   insn=0x00000000002B0D04 string=0x00000000002B0D08 "!8#"
 *   insn=0x00000000002B0D08 string=0x00000000002B0D0C "!"
 *   insn=0x00000000002B0D0C string=0x00000000002B0D10 "  "
 *   insn=0x00000000002B0D10 string=0x00000000002B0D14 "`( "
 *   insn=0x00000000002B0D14 string=0x00000000002B0D18 "`"
 *   insn=0x00000000002B0D18 string=0x00000000002B0D1C " "
 *   insn=0x00000000002B0D20 string=0x00000000002B0D24 "a"
 *   insn=0x00000000002B0D20 string=0x0000000000583734 "o"
 *   insn=0x00000000002B0D28 string=0x00000000002B0D2C "  ""
 *   insn=0x00000000002B0D2C string=0x00000000002B0D30 "m"
 *   insn=0x00000000002B0D30 string=0x00000000002B0D34 "b"
 *   insn=0x00000000002B0D40 string=0x00000000002B0D44 "$"
 *   insn=0x00000000002B0D44 string=0x00000000002B0D48 "@( "
 *   insn=0x00000000002B0D48 string=0x00000000002B0D4C "`"
 *   insn=0x00000000002B0D54 string=0x00000000002B0D58 "h"
 *   insn=0x00000000002B0D7C string=0x00000000002B0D80 " 8 "
 *   insn=0x00000000002B0D80 string=0x00000000002B0D84 "`"
 *   insn=0x00000000002B0D90 string=0x00000000002B0D94 "a"
 *   insn=0x00000000002B0D94 string=0x00000000002B0D98 "`n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SimpleGlowComponent::Update(Caver::SimpleGlowComponent *this, float a2)
{
  float v2; // s1
  float v3; // s2
  float v4; // s3
  float v5; // s1
  float v6; // s0
  float v7; // s8
  float v8; // s0

  v2 = *((float *)this + 54);
  if ( v2 <= -0.01 )
  {
    v5 = *((float *)this + 52);
    if ( v5 > 0.001 )
    {
      v6 = *((float *)this + 53) + a2;
      *((float *)this + 53) = v6;
      v7 = *((float *)this + 51);
      v8 = (float)(v6 / v5) * 6.28318531 + -1.57079633;
      *((float *)this + 50) = 1.0 - (float)(v7 * (float)((float)(sinf(v8) * 0.5) + 0.5));
    }
  }
  else
  {
    v3 = *((float *)this + 55);
    if ( v3 <= a2 )
    {
      *((float *)this + 50) = v2;
      *((_QWORD *)this + 27) = 3212836864LL;
    }
    else
    {
      v4 = *((float *)this + 50);
      *((float *)this + 55) = v3 - a2;
      *((float *)this + 50) = v4 + (float)((float)((float)(v2 - v4) / v3) * a2);
    }
  }
}

