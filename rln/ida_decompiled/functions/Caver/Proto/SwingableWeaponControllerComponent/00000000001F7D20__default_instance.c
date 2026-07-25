/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7D20
 * Mangled: ._ZN5Caver5Proto34SwingableWeaponControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::SwingableWeaponControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002C7DAC  Caver::SwingableWeaponControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA8CC  Caver::Proto::SwingableWeaponControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7D28 string=0x00000000001F7D2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::SwingableWeaponControllerComponent::default_instance(
        Caver::Proto::SwingableWeaponControllerComponent *this)
{
  return _ZN5Caver5Proto34SwingableWeaponControllerComponent16default_instanceEv(this);
}

