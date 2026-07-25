/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027BB20
 * Mangled: _ZThn16_N5Caver22MonsterEntityComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::MonsterEntityComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201820  Caver::MonsterEntityComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x000000000027BB20 string=0x000000000027BB24 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MonsterEntityComponent::ValueForBindedProperty(
        Caver::MonsterEntityComponent *this,
        int a2)
{
  return Caver::MonsterEntityComponent::ValueForBindedProperty((Caver::MonsterEntityComponent *)((char *)this - 16), a2);
}

