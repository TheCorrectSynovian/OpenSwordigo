/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203270
 * Mangled: ._ZN5Caver19HeroEntityComponent15AddSafePositionEv
 * Demangled: Caver::HeroEntityComponent::AddSafePosition(void)
 *
 * Callers: 2
 *   0x000000000027267C  Caver::HeroEntityComponent::Prepare(void)
 *   0x000000000027359C  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *
 * Callees: 1
 *   0x0000000000272780  Caver::HeroEntityComponent::AddSafePosition(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203278 string=0x000000000020327C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HeroEntityComponent::AddSafePosition(Caver::HeroEntityComponent *this)
{
  return _ZN5Caver19HeroEntityComponent15AddSafePositionEv(this);
}

