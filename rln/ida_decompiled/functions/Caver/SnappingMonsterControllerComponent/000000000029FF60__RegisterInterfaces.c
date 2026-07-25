/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029FF60
 * Mangled: _ZN5Caver34SnappingMonsterControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::SnappingMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x00000000002A00D0  Caver::SnappingMonsterControllerComponent::Interface(void)
 *
 * Referenced strings: 8
 *   insn=0x000000000029FF68 string=0x000000000029FF6C "B""
 *   insn=0x000000000029FF6C string=0x000000000029FF70 "B"
 *   insn=0x000000000029FF70 string=0x00000000002A00D0 " ""
 *   insn=0x000000000029FF78 string=0x000000000029FF7C "IN"
 *   insn=0x000000000029FF7C string=0x000000000029FF80 """"
 *   insn=0x000000000029FF7C string=0x00000000001F38A0 "P'"
 *   insn=0x000000000029FF80 string=0x000000000029FF84 "B"
 *   insn=0x000000000029FF8C string=0x000000000029FF90 "DN"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SnappingMonsterControllerComponent::RegisterInterfaces(
        Caver::SnappingMonsterControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::SnappingMonsterControllerComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::MonsterControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

