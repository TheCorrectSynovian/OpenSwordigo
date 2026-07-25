/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000256048
 * Mangled: _ZN5Caver24BreakableObjectComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::BreakableObjectComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000256084  Caver::BreakableObjectComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000256054 string=0x0000000000256058 "B"
 *   insn=0x0000000000256064 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BreakableObjectComponent::RegisterInterfaces(
        Caver::BreakableObjectComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::BreakableObjectComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

