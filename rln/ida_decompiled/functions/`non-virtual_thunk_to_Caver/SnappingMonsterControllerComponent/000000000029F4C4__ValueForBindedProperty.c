/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029F4C4
 * Mangled: _ZThn16_N5Caver34SnappingMonsterControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::SnappingMonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA990  Caver::MonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x000000000029F4C4 string=0x000000000029F4C8 "2m"
 *   insn=0x000000000029F4C8 string=0x00000000001FA990 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SnappingMonsterControllerComponent::ValueForBindedProperty(
        Caver::SnappingMonsterControllerComponent *this,
        int a2)
{
  return Caver::MonsterControllerComponent::ValueForBindedProperty(
           (Caver::SnappingMonsterControllerComponent *)((char *)this - 16),
           a2);
}

