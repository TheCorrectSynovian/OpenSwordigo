/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C9434
 * Mangled: _ZN5Caver34SwingableWeaponControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::SwingableWeaponControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000261410  Caver::SwingableWeaponControllerComponent::Interface(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002C9440 string=0x00000000002C9444 "BPD"
 *   insn=0x00000000002C9450 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingableWeaponControllerComponent::RegisterInterfaces(
        Caver::SwingableWeaponControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::SwingableWeaponControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

