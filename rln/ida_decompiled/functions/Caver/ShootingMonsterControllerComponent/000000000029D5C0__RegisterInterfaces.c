/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029D5C0
 * Mangled: _ZN5Caver34ShootingMonsterControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::ShootingMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x000000000029D608  Caver::ShootingMonsterControllerComponent::className(void)
 *
 * Referenced strings: 7
 *   insn=0x000000000029D5C8 string=0x000000000029D5CC "B""
 *   insn=0x000000000029D5CC string=0x000000000029D5D0 "BTF"
 *   insn=0x000000000029D5D0 string=0x000000000029D660 "@""
 *   insn=0x000000000029D5DC string=0x000000000029D5E0 "B""
 *   insn=0x000000000029D5DC string=0x00000000001F38A0 "P'"
 *   insn=0x000000000029D5E0 string=0x000000000029D5E4 "B"
 *   insn=0x000000000029D600 string=0x000000000029D604 "3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShootingMonsterControllerComponent::RegisterInterfaces(
        Caver::ShootingMonsterControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ShootingMonsterControllerComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::MonsterControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

