/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027FE44
 * Mangled: _ZN5Caver22PhysicsObjectComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::PhysicsObjectComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002618B0  Caver::PhysicsObjectComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000027FE4C string=0x000000000027FE50 ""#"
 *   insn=0x000000000027FE50 string=0x000000000027FE54 "BpG"
 *   insn=0x000000000027FE60 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PhysicsObjectComponent::RegisterInterfaces(
        Caver::PhysicsObjectComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::PhysicsObjectComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

