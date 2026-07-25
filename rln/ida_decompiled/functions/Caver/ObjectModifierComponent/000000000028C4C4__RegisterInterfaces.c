/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028C4C4
 * Mangled: _ZN5Caver23ObjectModifierComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::ObjectModifierComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000271E48  Caver::ObjectModifierComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000028C4D0 string=0x000000000028C4D4 "B"
 *   insn=0x000000000028C4E0 string=0x00000000001F38A0 "P'"
 *   insn=0x000000000028C4F0 string=0x000000000028C4F4 "w"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ObjectModifierComponent::RegisterInterfaces(
        Caver::ObjectModifierComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ObjectModifierComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

