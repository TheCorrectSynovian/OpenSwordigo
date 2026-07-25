/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000267B54
 * Mangled: _ZN5Caver21EntityActionComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::EntityActionComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000267B88  Caver::EntityActionComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x0000000000267B60 string=0x0000000000267B64 "B"
 *   insn=0x0000000000267B6C string=0x0000000000267B70 "L/"
 *   insn=0x0000000000267B70 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityActionComponent::RegisterInterfaces(
        Caver::EntityActionComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::EntityActionComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

