/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002266A0
 * Mangled: _ZN5Caver14ModelComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::ModelComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000215678  Caver::ModelComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002266AC string=0x00000000002266B0 "B0D"
 *   insn=0x00000000002266B8 string=0x00000000002266BC "y4"
 *   insn=0x00000000002266BC string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ModelComponent::RegisterInterfaces(Caver::ModelComponent *this, Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ModelComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

