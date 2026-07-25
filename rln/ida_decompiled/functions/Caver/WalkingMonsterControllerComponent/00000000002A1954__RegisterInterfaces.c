/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A1954
 * Mangled: _ZN5Caver33WalkingMonsterControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::WalkingMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x00000000002A199C  Caver::WalkingMonsterControllerComponent::className(void)
 *
 * Referenced strings: 7
 *   insn=0x00000000002A195C string=0x00000000002A1960 """"
 *   insn=0x00000000002A1960 string=0x00000000002A1964 "B|F"
 *   insn=0x00000000002A1964 string=0x00000000002A19F4 " ""
 *   insn=0x00000000002A1970 string=0x00000000002A1974 """"
 *   insn=0x00000000002A1970 string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002A1974 string=0x00000000002A1978 "B"
 *   insn=0x00000000002A1994 string=0x00000000002A1998 "Nz"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WalkingMonsterControllerComponent::RegisterInterfaces(
        Caver::WalkingMonsterControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::WalkingMonsterControllerComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::MonsterControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

