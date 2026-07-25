/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027C110
 * Mangled: _ZThn24_N5Caver22MonsterEntityComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::MonsterEntityComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEAC0  Caver::MonsterEntityComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x000000000027C110 string=0x000000000027C114 "k\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MonsterEntityComponent::Update(
        Caver::MonsterEntityComponent *this,
        float a2)
{
  return Caver::MonsterEntityComponent::Update((Caver::MonsterEntityComponent *)((char *)this - 24), a2);
}

