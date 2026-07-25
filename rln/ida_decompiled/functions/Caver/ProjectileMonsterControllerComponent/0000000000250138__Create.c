/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250138
 * Mangled: _ZN5Caver36ProjectileMonsterControllerComponent6CreateEv
 * Demangled: Caver::ProjectileMonsterControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000002500F8  Caver::ShootingMonsterControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F4560  Caver::ProjectileMonsterControllerComponent::ProjectileMonsterControllerComponent(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000250178  Caver::BatMonsterControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000250144 string=0x0000000000250148 "&"
 *   insn=0x0000000000250148 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000250150 string=0x00000000001F4560 "P'"
 *   insn=0x0000000000250168 string=0x000000000025016C "Q"
 *   insn=0x000000000025016C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ProjectileMonsterControllerComponent *__fastcall Caver::ProjectileMonsterControllerComponent::Create(
        Caver::ProjectileMonsterControllerComponent *this)
{
  Caver::ProjectileMonsterControllerComponent *v1; // x19

  v1 = (Caver::ProjectileMonsterControllerComponent *)operator new(0xD0u);
  Caver::ProjectileMonsterControllerComponent::ProjectileMonsterControllerComponent(v1);
  return v1;
}

