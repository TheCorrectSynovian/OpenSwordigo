/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023F310
 * Mangled: _ZN5Caver23TextureMappingComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::TextureMappingComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000023F344  Caver::TextureMappingComponent::className(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000023F318 string=0x000000000023F31C "B%"
 *   insn=0x000000000023F31C string=0x000000000023F320 "B"
 *   insn=0x000000000023F320 string=0x000000000023F39C "@%"
 *   insn=0x000000000023F328 string=0x000000000023F32C "]"
 *   insn=0x000000000023F32C string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TextureMappingComponent::RegisterInterfaces(
        Caver::TextureMappingComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::TextureMappingComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

