/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029C034
 * Mangled: _ZThn24_N5Caver36ProjectileMonsterControllerComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::ProjectileMonsterControllerComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F68D0  Caver::ProjectileMonsterControllerComponent::Update(float)
 *
 * Referenced strings: 2
 *   insn=0x000000000029C034 string=0x000000000029C038 "&j"
 *   insn=0x000000000029C038 string=0x00000000001F68D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ProjectileMonsterControllerComponent::Update(
        Caver::ProjectileMonsterControllerComponent *this,
        float a2)
{
  return Caver::ProjectileMonsterControllerComponent::Update(
           (Caver::ProjectileMonsterControllerComponent *)((char *)this - 24),
           a2);
}

