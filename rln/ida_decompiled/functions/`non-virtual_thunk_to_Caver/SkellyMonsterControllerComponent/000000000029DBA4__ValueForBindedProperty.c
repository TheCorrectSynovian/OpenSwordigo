/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029DBA4
 * Mangled: _ZThn16_N5Caver32SkellyMonsterControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::SkellyMonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA990  Caver::MonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x000000000029DBA4 string=0x000000000029DBA8 "zs"
 *   insn=0x000000000029DBA8 string=0x00000000001FA990 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SkellyMonsterControllerComponent::ValueForBindedProperty(
        Caver::SkellyMonsterControllerComponent *this,
        int a2)
{
  return Caver::MonsterControllerComponent::ValueForBindedProperty(
           (Caver::SkellyMonsterControllerComponent *)((char *)this - 16),
           a2);
}

