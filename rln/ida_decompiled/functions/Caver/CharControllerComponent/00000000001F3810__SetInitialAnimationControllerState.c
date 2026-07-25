/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3810
 * Mangled: ._ZN5Caver23CharControllerComponent34SetInitialAnimationControllerStateEv
 * Demangled: Caver::CharControllerComponent::SetInitialAnimationControllerState(void)
 *
 * Callers: 2
 *   0x000000000025D078  Caver::CharControllerComponent::Swing(void)
 *   0x000000000025F148  Caver::CharControllerComponent::Pickup(Caver::SceneObject *,bool)
 *
 * Callees: 1
 *   0x000000000025EF40  Caver::CharControllerComponent::SetInitialAnimationControllerState(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3818 string=0x00000000001F381C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::SetInitialAnimationControllerState(
        Caver::CharControllerComponent *this)
{
  return _ZN5Caver23CharControllerComponent34SetInitialAnimationControllerStateEv(this);
}

