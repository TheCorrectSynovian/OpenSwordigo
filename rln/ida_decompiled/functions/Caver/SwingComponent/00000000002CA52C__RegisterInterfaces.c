/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CA52C
 * Mangled: _ZN5Caver14SwingComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::SwingComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000261334  Caver::SwingComponent::Interface(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002CA538 string=0x00000000002CA53C "B"
 *   insn=0x00000000002CA53C string=0x0000000000261334 " $"
 *   insn=0x00000000002CA548 string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002CA558 string=0x00000000002CA55C "]"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingComponent::RegisterInterfaces(Caver::SwingComponent *this, Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::SwingComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

