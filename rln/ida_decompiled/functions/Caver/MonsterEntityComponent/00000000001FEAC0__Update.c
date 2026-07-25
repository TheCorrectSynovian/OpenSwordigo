/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEAC0
 * Mangled: ._ZN5Caver22MonsterEntityComponent6UpdateEf
 * Demangled: Caver::MonsterEntityComponent::Update(float)
 *
 * Callers: 1
 *   0x000000000027C110  `non-virtual thunk to'Caver::MonsterEntityComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000027BF1C  Caver::MonsterEntityComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEAC8 string=0x00000000001FEACC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MonsterEntityComponent::Update(Caver::MonsterEntityComponent *this, float a2)
{
  return _ZN5Caver22MonsterEntityComponent6UpdateEf(this, a2);
}

