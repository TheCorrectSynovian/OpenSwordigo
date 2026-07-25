/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF380
 * Mangled: ._ZN5Caver19HeroEntityComponent19ResetToSafePositionEv
 * Demangled: Caver::HeroEntityComponent::ResetToSafePosition(void)
 *
 * Callers: 1
 *   0x000000000034A76C  Caver::GameSceneController::HandleFall(void)
 *
 * Callees: 1
 *   0x0000000000273CA4  Caver::HeroEntityComponent::TargetObject(boost::intrusive_ptr<Caver::SceneObject> const&,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF388 string=0x00000000001FF38C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::HeroEntityComponent::ResetToSafePosition(Caver::HeroEntityComponent *this)
{
  JUMPOUT(0x273E50);
}

