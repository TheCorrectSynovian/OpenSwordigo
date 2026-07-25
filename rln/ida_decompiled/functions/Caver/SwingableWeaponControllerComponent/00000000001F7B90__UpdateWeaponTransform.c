/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7B90
 * Mangled: ._ZN5Caver34SwingableWeaponControllerComponent21UpdateWeaponTransformEv
 * Demangled: Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform(void)
 *
 * Callers: 3
 *   0x000000000025DC80  Caver::CharControllerComponent::HandleMessage(int,void *)
 *   0x00000000002C91E8  Caver::SwingableWeaponControllerComponent::Update(float)
 *   0x00000000002C927C  `non-virtual thunk to'Caver::SwingableWeaponControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000002C911C  Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7B98 string=0x00000000001F7B9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform(
        Caver::SwingableWeaponControllerComponent *this)
{
  return _ZN5Caver34SwingableWeaponControllerComponent21UpdateWeaponTransformEv(this);
}

