/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023124C
 * Mangled: _ZN5Caver15PortalComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::PortalComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002314D0  Caver::PortalComponent::Interface(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000231258 string=0x000000000023125C "BtD"
 *   insn=0x0000000000231268 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PortalComponent::RegisterInterfaces(
        Caver::PortalComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::PortalComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

