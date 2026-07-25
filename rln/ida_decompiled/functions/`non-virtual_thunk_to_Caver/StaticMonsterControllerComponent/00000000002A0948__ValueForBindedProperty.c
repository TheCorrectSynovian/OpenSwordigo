/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A0948
 * Mangled: _ZThn16_N5Caver32StaticMonsterControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::StaticMonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA990  Caver::MonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002A094C string=0x00000000001FA990 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::StaticMonsterControllerComponent::ValueForBindedProperty(
        Caver::StaticMonsterControllerComponent *this,
        int a2)
{
  return Caver::MonsterControllerComponent::ValueForBindedProperty(
           (Caver::StaticMonsterControllerComponent *)((char *)this - 16),
           a2);
}

