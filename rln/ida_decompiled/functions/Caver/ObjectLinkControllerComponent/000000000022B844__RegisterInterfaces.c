/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022B844
 * Mangled: _ZN5Caver29ObjectLinkControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::ObjectLinkControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000022B880  Caver::ObjectLinkControllerComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x000000000022B850 string=0x000000000022B854 "B"
 *   insn=0x000000000022B860 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ObjectLinkControllerComponent::RegisterInterfaces(
        Caver::ObjectLinkControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ObjectLinkControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

