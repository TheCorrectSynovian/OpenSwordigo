/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000295170
 * Mangled: _ZN5Caver34BouncingMonsterControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::BouncingMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x00000000002951B8  Caver::BouncingMonsterControllerComponent::className(void)
 *
 * Referenced strings: 4
 *   insn=0x000000000029517C string=0x0000000000295180 "B4B"
 *   insn=0x000000000029518C string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000295190 string=0x0000000000295194 "B"
 *   insn=0x00000000002951B0 string=0x00000000002951B4 "G"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BouncingMonsterControllerComponent::RegisterInterfaces(
        Caver::BouncingMonsterControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::BouncingMonsterControllerComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::MonsterControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

