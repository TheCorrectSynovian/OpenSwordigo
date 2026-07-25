/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028F8BC
 * Mangled: _ZN5Caver14SkillComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::SkillComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000028F8F8  Caver::SkillComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000028F8C8 string=0x000000000028F8CC "BpG"
 *   insn=0x000000000028F8D8 string=0x00000000001F38A0 "P'"
 *   insn=0x000000000028F8E8 string=0x000000000028F8EC "y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkillComponent::RegisterInterfaces(Caver::SkillComponent *this, Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::SkillComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

