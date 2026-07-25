/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000298F98
 * Mangled: _ZN5Caver33LeapingMonsterControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::LeapingMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x0000000000299108  Caver::LeapingMonsterControllerComponent::Interface(void)
 *
 * Referenced strings: 8
 *   insn=0x0000000000298FA0 string=0x0000000000298FA4 "b""
 *   insn=0x0000000000298FA4 string=0x0000000000298FA8 "B"
 *   insn=0x0000000000298FA8 string=0x0000000000299108 "`""
 *   insn=0x0000000000298FB0 string=0x0000000000298FB4 ";j"
 *   insn=0x0000000000298FB4 string=0x0000000000298FB8 "b""
 *   insn=0x0000000000298FB4 string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000298FB8 string=0x0000000000298FBC "B"
 *   insn=0x0000000000298FC4 string=0x0000000000298FC8 "6j"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LeapingMonsterControllerComponent::RegisterInterfaces(
        Caver::LeapingMonsterControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::LeapingMonsterControllerComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::MonsterControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

