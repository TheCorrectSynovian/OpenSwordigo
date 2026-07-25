/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029E61C
 * Mangled: _ZThn24_N5Caver32SkellyMonsterControllerComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::SkellyMonsterControllerComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3EF0  Caver::SkellyMonsterControllerComponent::Update(float)
 *
 * Referenced strings: 2
 *   insn=0x000000000029E61C string=0x000000000029E620 "4V"
 *   insn=0x000000000029E620 string=0x00000000001F3EF0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SkellyMonsterControllerComponent::Update(
        Caver::SkellyMonsterControllerComponent *this,
        float a2)
{
  return Caver::SkellyMonsterControllerComponent::Update(
           (Caver::SkellyMonsterControllerComponent *)((char *)this - 24),
           a2);
}

