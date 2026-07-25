/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201820
 * Mangled: ._ZN5Caver22MonsterEntityComponent22ValueForBindedPropertyEi
 * Demangled: Caver::MonsterEntityComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x000000000027BB20  `non-virtual thunk to'Caver::MonsterEntityComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x000000000027BADC  Caver::MonsterEntityComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000201824 string=0x000000000027BADC ")"
 *   insn=0x0000000000201828 string=0x000000000020182C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MonsterEntityComponent::ValueForBindedProperty(Caver::MonsterEntityComponent *this, int a2)
{
  return _ZN5Caver22MonsterEntityComponent22ValueForBindedPropertyEi(this, a2);
}

