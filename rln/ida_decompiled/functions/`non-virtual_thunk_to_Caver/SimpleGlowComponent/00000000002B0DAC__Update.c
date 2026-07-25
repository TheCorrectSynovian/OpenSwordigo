/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B0DAC
 * Mangled: _ZThn24_N5Caver19SimpleGlowComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::SimpleGlowComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203C70  .sinf
 *
 * Referenced strings: 27
 *   insn=0x00000000002B0DC0 string=0x00000000002B0DC4 "a"
 *   insn=0x00000000002B0DC0 string=0x00000000005883D0 "\n"
 *   insn=0x00000000002B0DC8 string=0x00000000002B0DCC "  ""
 *   insn=0x00000000002B0DD0 string=0x00000000002B0DD4 "b"
 *   insn=0x00000000002B0DD4 string=0x00000000002B0DD8 "@  "
 *   insn=0x00000000002B0DDC string=0x00000000002B0DE0 "c"
 *   insn=0x00000000002B0DE0 string=0x00000000002B0DE4 "D8 "
 *   insn=0x00000000002B0DE4 string=0x00000000002B0DE8 "d"
 *   insn=0x00000000002B0DE8 string=0x00000000002B0DEC "!8#"
 *   insn=0x00000000002B0DEC string=0x00000000002B0DF0 "!"
 *   insn=0x00000000002B0DF0 string=0x00000000002B0DF4 "  "
 *   insn=0x00000000002B0DF4 string=0x00000000002B0DF8 "`( "
 *   insn=0x00000000002B0DF8 string=0x00000000002B0DFC "`"
 *   insn=0x00000000002B0DFC string=0x00000000002B0E00 " "
 *   insn=0x00000000002B0E04 string=0x00000000002B0E08 "a"
 *   insn=0x00000000002B0E04 string=0x0000000000583734 "o"
 *   insn=0x00000000002B0E0C string=0x00000000002B0E10 "  ""
 *   insn=0x00000000002B0E10 string=0x00000000002B0E14 "m"
 *   insn=0x00000000002B0E14 string=0x00000000002B0E18 "b"
 *   insn=0x00000000002B0E24 string=0x00000000002B0E28 "$"
 *   insn=0x00000000002B0E28 string=0x00000000002B0E2C "@( "
 *   insn=0x00000000002B0E2C string=0x00000000002B0E30 "`"
 *   insn=0x00000000002B0E38 string=0x00000000002B0E3C "h"
 *   insn=0x00000000002B0E60 string=0x00000000002B0E64 " 8 "
 *   insn=0x00000000002B0E64 string=0x00000000002B0E68 "`"
 *   insn=0x00000000002B0E74 string=0x00000000002B0E78 "a"
 *   insn=0x00000000002B0E78 string=0x00000000002B0E7C "`b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::SimpleGlowComponent::Update(Caver::SimpleGlowComponent *this, float a2)
{
  float v2; // s1
  float v3; // s2
  float v4; // s3
  float v5; // s1
  float v6; // s0
  float v7; // s8
  float v8; // s0

  v2 = *((float *)this + 48);
  if ( v2 <= -0.01 )
  {
    v5 = *((float *)this + 46);
    if ( v5 > 0.001 )
    {
      v6 = *((float *)this + 47) + a2;
      *((float *)this + 47) = v6;
      v7 = *((float *)this + 45);
      v8 = (float)(v6 / v5) * 6.28318531 + -1.57079633;
      *((float *)this + 44) = 1.0 - (float)(v7 * (float)((float)(sinf(v8) * 0.5) + 0.5));
    }
  }
  else
  {
    v3 = *((float *)this + 49);
    if ( v3 <= a2 )
    {
      *((float *)this + 44) = v2;
      *((_QWORD *)this + 24) = 3212836864LL;
    }
    else
    {
      v4 = *((float *)this + 44);
      *((float *)this + 49) = v3 - a2;
      *((float *)this + 44) = v4 + (float)((float)((float)(v2 - v4) / v3) * a2);
    }
  }
}

