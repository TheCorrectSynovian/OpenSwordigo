/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027AE4C
 * Mangled: _ZN5Caver13ManaComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::ManaComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000271E54  Caver::ManaComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000027AE54 string=0x000000000027AE58 "b#"
 *   insn=0x000000000027AE58 string=0x000000000027AE5C "BXE"
 *   insn=0x000000000027AE68 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ManaComponent::RegisterInterfaces(Caver::ManaComponent *this, Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ManaComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

