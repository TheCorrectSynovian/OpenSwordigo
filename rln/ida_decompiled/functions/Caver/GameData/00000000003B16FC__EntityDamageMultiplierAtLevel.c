/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B16FC
 * Mangled: _ZN5Caver8GameData29EntityDamageMultiplierAtLevelEi
 * Demangled: Caver::GameData::EntityDamageMultiplierAtLevel(int)
 *
 * Callers: 1
 *   0x00000000001F90C0  Caver::GameData::EntityDamageMultiplierAtLevel(int)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000003B1704 string=0x00000000003B1708 " "
 *   insn=0x00000000003B1708 string=0x00000000003B170C "?D"
 *   insn=0x00000000003B1710 string=0x00000000003B1714 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::GameData::EntityDamageMultiplierAtLevel(Caver::GameData *this, int a2)
{
  float result; // s0

  result = 1.0;
  if ( a2 > 11 )
    result = 2.0;
  if ( a2 > 17 )
    return 4.0;
  return result;
}

