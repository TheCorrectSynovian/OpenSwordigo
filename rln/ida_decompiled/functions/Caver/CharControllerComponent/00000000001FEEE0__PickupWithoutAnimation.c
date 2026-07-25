/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEEE0
 * Mangled: ._ZN5Caver23CharControllerComponent22PickupWithoutAnimationEv
 * Demangled: Caver::CharControllerComponent::PickupWithoutAnimation(void)
 *
 * Callers: 1
 *   0x000000000025F148  Caver::CharControllerComponent::Pickup(Caver::SceneObject *,bool)
 *
 * Callees: 1
 *   0x000000000025F148  Caver::CharControllerComponent::Pickup(Caver::SceneObject *,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEEE8 string=0x00000000001FEEEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CharControllerComponent::PickupWithoutAnimation(Caver::CharControllerComponent *this)
{
  JUMPOUT(0x25F940);
}

