/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF140
 * Mangled: ._ZN5Caver26MonsterControllerComponent7PrepareEv
 * Demangled: Caver::MonsterControllerComponent::Prepare(void)
 *
 * Callers: 4
 *   0x0000000000294798  Caver::BouncingMonsterControllerComponent::Prepare(void)
 *   0x0000000000295E40  Caver::ChargingMonsterControllerComponent::Prepare(void)
 *   0x0000000000297364  Caver::GenericMonsterControllerComponent::Prepare(void)
 *   0x000000000029C6EC  Caver::ShootingMonsterControllerComponent::Prepare(void)
 *
 * Callees: 1
 *   0x00000000002999FC  Caver::MonsterControllerComponent::Prepare(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF148 string=0x00000000001FF14C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MonsterControllerComponent::Prepare(Caver::MonsterControllerComponent *this)
{
  return _ZN5Caver26MonsterControllerComponent7PrepareEv(this);
}

