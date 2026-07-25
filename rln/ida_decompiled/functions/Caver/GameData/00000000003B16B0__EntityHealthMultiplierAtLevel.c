/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B16B0
 * Mangled: _ZN5Caver8GameData29EntityHealthMultiplierAtLevelEi
 * Demangled: Caver::GameData::EntityHealthMultiplierAtLevel(int)
 *
 * Callers: 1
 *   0x00000000001FCF90  Caver::GameData::EntityHealthMultiplierAtLevel(int)
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x00000000003B16BC string=0x00000000003B16C0 "c!"
 *   insn=0x00000000003B16C4 string=0x00000000003B16C8 "c( "
 *   insn=0x00000000003B16C8 string=0x00000000003B16CC "?"
 *   insn=0x00000000003B16CC string=0x00000000003B16D0 "b""
 *   insn=0x00000000003B16D4 string=0x00000000003B16D8 "A!"
 *   insn=0x00000000003B16D8 string=0x00000000003B16DC " H "
 *   insn=0x00000000003B16E4 string=0x00000000003B16E8 "A!"
 *   insn=0x00000000003B16E8 string=0x00000000003B16EC "?"
 *   insn=0x00000000003B16EC string=0x00000000003B16F0 "!"
 *   insn=0x00000000003B16F0 string=0x00000000003B16F4 " H "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::GameData::EntityHealthMultiplierAtLevel(Caver::GameData *this, int a2)
{
  float v2; // s2
  float v4; // s1

  v2 = (float)((float)((float)(a2 - 1) * 0.5) + 1.0) * 7.5;
  if ( a2 <= 3 )
    return fmaxf(v2 * 0.5, 1.0);
  v4 = v2 * 0.75;
  if ( a2 != 4 )
    v4 = (float)((float)((float)(a2 - 1) * 0.5) + 1.0) * 7.5;
  return fmaxf(v4, 1.0);
}

