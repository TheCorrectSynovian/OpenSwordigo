/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026F7D4
 * Mangled: _ZN5Caver19EntityInfoComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::EntityInfoComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000026F808  Caver::EntityInfoComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000026F7E0 string=0x000000000026F7E4 "B"
 *   insn=0x000000000026F7EC string=0x000000000026F7F0 ","
 *   insn=0x000000000026F7F0 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityInfoComponent::RegisterInterfaces(
        Caver::EntityInfoComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::EntityInfoComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

