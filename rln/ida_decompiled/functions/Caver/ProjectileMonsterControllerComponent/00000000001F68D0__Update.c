/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F68D0
 * Mangled: ._ZN5Caver36ProjectileMonsterControllerComponent6UpdateEf
 * Demangled: Caver::ProjectileMonsterControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x000000000029C034  `non-virtual thunk to'Caver::ProjectileMonsterControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000029BF64  Caver::ProjectileMonsterControllerComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F68D8 string=0x00000000001F68DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProjectileMonsterControllerComponent::Update(
        Caver::ProjectileMonsterControllerComponent *this,
        float a2)
{
  return _ZN5Caver36ProjectileMonsterControllerComponent6UpdateEf(this, a2);
}

