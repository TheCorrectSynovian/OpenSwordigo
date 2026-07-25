/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000223720
 * Mangled: _ZN5Caver14LightComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::LightComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002237C0  Caver::LightComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000022372C string=0x0000000000223730 "BLA"
 *   insn=0x0000000000223738 string=0x000000000022373C "Y@"
 *   insn=0x000000000022373C string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LightComponent::RegisterInterfaces(Caver::LightComponent *this, Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::LightComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

