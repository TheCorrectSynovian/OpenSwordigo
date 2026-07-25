/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000239608
 * Mangled: _ZN5Caver14ShapeComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::ShapeComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000215A9C  Caver::ShapeComponent::Interface(void)
 *
 * Referenced strings: 4
 *   insn=0x0000000000239610 string=0x0000000000239614 "b%"
 *   insn=0x0000000000239614 string=0x0000000000239618 "B D"
 *   insn=0x0000000000239624 string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000239634 string=0x0000000000239638 "&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShapeComponent::RegisterInterfaces(Caver::ShapeComponent *this, Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ShapeComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

