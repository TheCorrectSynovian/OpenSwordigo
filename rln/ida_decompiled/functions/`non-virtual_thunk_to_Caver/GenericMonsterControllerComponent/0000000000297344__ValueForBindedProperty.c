/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000297344
 * Mangled: _ZThn16_N5Caver33GenericMonsterControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::GenericMonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA990  Caver::MonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000297348 string=0x00000000001FA990 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GenericMonsterControllerComponent::ValueForBindedProperty(
        Caver::GenericMonsterControllerComponent *this,
        int a2)
{
  return Caver::MonsterControllerComponent::ValueForBindedProperty(
           (Caver::GenericMonsterControllerComponent *)((char *)this - 16),
           a2);
}

