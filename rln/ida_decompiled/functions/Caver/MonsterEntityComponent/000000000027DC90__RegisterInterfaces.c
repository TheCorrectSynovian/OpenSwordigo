/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027DC90
 * Mangled: _ZN5Caver22MonsterEntityComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::MonsterEntityComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000026168C  Caver::EntityComponent::Interface(void)
 *   0x0000000000274FA8  Caver::MonsterEntityComponent::Interface(void)
 *
 * Referenced strings: 6
 *   insn=0x000000000027DC98 string=0x000000000027DC9C ""#"
 *   insn=0x000000000027DC9C string=0x000000000027DCA0 "B"
 *   insn=0x000000000027DCAC string=0x000000000027DCB0 "B#"
 *   insn=0x000000000027DCAC string=0x00000000001F38A0 "P'"
 *   insn=0x000000000027DCB0 string=0x000000000027DCB4 "B0F"
 *   insn=0x000000000027DCB4 string=0x000000000026168C " $"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MonsterEntityComponent::RegisterInterfaces(
        Caver::MonsterEntityComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::MonsterEntityComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::EntityComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

