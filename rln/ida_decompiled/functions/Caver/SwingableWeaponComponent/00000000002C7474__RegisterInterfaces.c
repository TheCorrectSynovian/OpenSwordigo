/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C7474
 * Mangled: _ZN5Caver24SwingableWeaponComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::SwingableWeaponComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000029EB14  Caver::SwingableWeaponComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002C7480 string=0x00000000002C7484 "B"
 *   insn=0x00000000002C7484 string=0x000000000029EB14 "@""
 *   insn=0x00000000002C7490 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingableWeaponComponent::RegisterInterfaces(
        Caver::SwingableWeaponComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::SwingableWeaponComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

