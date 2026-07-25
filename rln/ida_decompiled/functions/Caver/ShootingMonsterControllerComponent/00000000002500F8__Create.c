/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002500F8
 * Mangled: _ZN5Caver34ShootingMonsterControllerComponent6CreateEv
 * Demangled: Caver::ShootingMonsterControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000002500B8  Caver::StaticMonsterControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200B30  Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(void)
 *   0x0000000000250138  Caver::ProjectileMonsterControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x0000000000250104 string=0x0000000000250108 "6"
 *   insn=0x0000000000250108 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000250128 string=0x000000000025012C "a"
 *   insn=0x000000000025012C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ShootingMonsterControllerComponent *__fastcall Caver::ShootingMonsterControllerComponent::Create(
        Caver::ShootingMonsterControllerComponent *this)
{
  Caver::ShootingMonsterControllerComponent *v1; // x19

  v1 = (Caver::ShootingMonsterControllerComponent *)operator new(0x128u);
  Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(v1);
  return v1;
}

