/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBD70
 * Mangled: ._ZN5Caver15HealthComponentC2Ev
 * Demangled: Caver::HealthComponent::HealthComponent(void)
 *
 * Callers: 2
 *   0x000000000024FC38  Caver::HealthComponent::Create(void)
 *   0x0000000000348B6C  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *
 * Callees: 1
 *   0x000000000026F9B4  Caver::HealthComponent::HealthComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBD78 string=0x00000000001FBD7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HealthComponent::HealthComponent(Caver::HealthComponent *this)
{
  return _ZN5Caver15HealthComponentC2Ev(this);
}

