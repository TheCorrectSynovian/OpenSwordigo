/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000298DA0
 * Mangled: _ZN5Caver33LeapingMonsterControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::LeapingMonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA990  Caver::MonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000298DA0 string=0x00000000001FA990 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LeapingMonsterControllerComponent::ValueForBindedProperty(
        Caver::LeapingMonsterControllerComponent *this,
        int a2)
{
  return Caver::MonsterControllerComponent::ValueForBindedProperty(this, a2);
}

