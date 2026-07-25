/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4E20
 * Mangled: ._ZN5Caver5Proto24SwingableWeaponComponent16default_instanceEv
 * Demangled: Caver::Proto::SwingableWeaponComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002C42CC  Caver::SwingableWeaponComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA898  Caver::Proto::SwingableWeaponComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4E28 string=0x00000000001F4E2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::SwingableWeaponComponent::default_instance(
        Caver::Proto::SwingableWeaponComponent *this)
{
  return _ZN5Caver5Proto24SwingableWeaponComponent16default_instanceEv(this);
}

