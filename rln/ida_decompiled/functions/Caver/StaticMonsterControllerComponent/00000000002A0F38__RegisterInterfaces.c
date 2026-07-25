/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A0F38
 * Mangled: _ZN5Caver32StaticMonsterControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::StaticMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x00000000002A0F80  Caver::StaticMonsterControllerComponent::className(void)
 *
 * Referenced strings: 8
 *   insn=0x00000000002A0F40 string=0x00000000002A0F44 """"
 *   insn=0x00000000002A0F44 string=0x00000000002A0F48 "B"
 *   insn=0x00000000002A0F48 string=0x00000000002A0FD8 " ""
 *   insn=0x00000000002A0F50 string=0x00000000002A0F54 "SJ"
 *   insn=0x00000000002A0F54 string=0x00000000002A0F58 """"
 *   insn=0x00000000002A0F54 string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002A0F58 string=0x00000000002A0F5C "B"
 *   insn=0x00000000002A0F64 string=0x00000000002A0F68 "NJ"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StaticMonsterControllerComponent::RegisterInterfaces(
        Caver::StaticMonsterControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::StaticMonsterControllerComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::MonsterControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

