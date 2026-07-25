/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000296EB8
 * Mangled: _ZN5Caver34ChargingMonsterControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::ChargingMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x0000000000296F00  Caver::ChargingMonsterControllerComponent::className(void)
 *
 * Referenced strings: 7
 *   insn=0x0000000000296EC0 string=0x0000000000296EC4 "b""
 *   insn=0x0000000000296EC4 string=0x0000000000296EC8 "BtF"
 *   insn=0x0000000000296EC8 string=0x0000000000296F58 "`""
 *   insn=0x0000000000296ED0 string=0x0000000000296ED4 "sr"
 *   insn=0x0000000000296ED4 string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000296ED8 string=0x0000000000296EDC "B"
 *   insn=0x0000000000296EE4 string=0x0000000000296EE8 "nr"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ChargingMonsterControllerComponent::RegisterInterfaces(
        Caver::ChargingMonsterControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ChargingMonsterControllerComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::MonsterControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

