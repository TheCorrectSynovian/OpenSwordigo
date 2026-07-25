/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBDE0
 * Mangled: ._ZN5Caver24SwingableWeaponComponent15UpdateTransformERKNS_7Matrix4E
 * Demangled: Caver::SwingableWeaponComponent::UpdateTransform(Caver::Matrix4 const&)
 *
 * Callers: 2
 *   0x00000000002C528C  Caver::SwingableWeaponComponent::Prepare(void)
 *   0x00000000002C911C  Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform(void)
 *
 * Callees: 1
 *   0x00000000002C5630  Caver::SwingableWeaponComponent::UpdateTransform(Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBDE8 string=0x00000000001FBDEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SwingableWeaponComponent::UpdateTransform(
        Caver::SwingableWeaponComponent *this,
        const Caver::Matrix4 *a2)
{
  return _ZN5Caver24SwingableWeaponComponent15UpdateTransformERKNS_7Matrix4E(this, a2);
}

