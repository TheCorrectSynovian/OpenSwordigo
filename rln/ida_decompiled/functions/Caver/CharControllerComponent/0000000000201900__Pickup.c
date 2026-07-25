/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201900
 * Mangled: ._ZN5Caver23CharControllerComponent6PickupEPNS_11SceneObjectEb
 * Demangled: Caver::CharControllerComponent::Pickup(Caver::SceneObject *,bool)
 *
 * Callers: 5
 *   0x0000000000260514  sub_260514
 *   0x00000000002605C0  sub_2605C0
 *   0x0000000000285EF8  Caver::MagicBombComponent::Cast(void)
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *
 * Callees: 1
 *   0x000000000025F148  Caver::CharControllerComponent::Pickup(Caver::SceneObject *,bool)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201908 string=0x000000000020190C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::Pickup(
        Caver::CharControllerComponent *this,
        Caver::SceneObject *a2,
        bool a3)
{
  return _ZN5Caver23CharControllerComponent6PickupEPNS_11SceneObjectEb(this, a2, a3);
}

