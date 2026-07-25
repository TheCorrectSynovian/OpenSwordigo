/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4560
 * Mangled: ._ZN5Caver36ProjectileMonsterControllerComponentC2Ev
 * Demangled: Caver::ProjectileMonsterControllerComponent::ProjectileMonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x0000000000250138  Caver::ProjectileMonsterControllerComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000029BE98  Caver::ProjectileMonsterControllerComponent::ProjectileMonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4568 string=0x00000000001F456C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProjectileMonsterControllerComponent::ProjectileMonsterControllerComponent(
        Caver::ProjectileMonsterControllerComponent *this)
{
  return _ZN5Caver36ProjectileMonsterControllerComponentC2Ev(this);
}

