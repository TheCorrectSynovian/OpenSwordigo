/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029BEDC
 * Mangled: _ZN5Caver36ProjectileMonsterControllerComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ProjectileMonsterControllerComponent::InitWithComponent(Caver::ProjectileMonsterControllerComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4020  Caver::MonsterControllerComponent::InitWithComponent(Caver::MonsterControllerComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x000000000029BEDC string=0x00000000001F4020 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ProjectileMonsterControllerComponent::InitWithComponent()
{
  Caver::MonsterControllerComponent::InitWithComponent();
}

