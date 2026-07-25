/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3EF0
 * Mangled: ._ZN5Caver32SkellyMonsterControllerComponent6UpdateEf
 * Demangled: Caver::SkellyMonsterControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x000000000029E61C  `non-virtual thunk to'Caver::SkellyMonsterControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000029E128  Caver::SkellyMonsterControllerComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3EF8 string=0x00000000001F3EFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkellyMonsterControllerComponent::Update(
        Caver::SkellyMonsterControllerComponent *this,
        float a2)
{
  return _ZN5Caver32SkellyMonsterControllerComponent6UpdateEf(this, a2);
}

