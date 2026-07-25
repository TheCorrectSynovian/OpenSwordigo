/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C5978
 * Mangled: _ZN5Caver24SwingableWeaponComponent13SetControllerEPNS_34SwingableWeaponControllerComponentE
 * Demangled: Caver::SwingableWeaponComponent::SetController(Caver::SwingableWeaponControllerComponent *)
 *
 * Callers: 1
 *   0x00000000001FB2F0  Caver::SwingableWeaponComponent::SetController(Caver::SwingableWeaponControllerComponent *)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingableWeaponComponent::SetController(
        __int64 this,
        Caver::SwingableWeaponControllerComponent *a2)
{
  *(_QWORD *)(this + 112) = a2;
  return this;
}

