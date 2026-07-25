/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029C158
 * Mangled: _ZN5Caver36ProjectileMonsterControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::ProjectileMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x000000000029C1A0  Caver::ProjectileMonsterControllerComponent::className(void)
 *
 * Referenced strings: 7
 *   insn=0x000000000029C160 string=0x000000000029C164 "B""
 *   insn=0x000000000029C164 string=0x000000000029C168 "B"
 *   insn=0x000000000029C168 string=0x000000000029C1F8 "@""
 *   insn=0x000000000029C174 string=0x000000000029C178 "B""
 *   insn=0x000000000029C174 string=0x00000000001F38A0 "P'"
 *   insn=0x000000000029C178 string=0x000000000029C17C "B"
 *   insn=0x000000000029C198 string=0x000000000029C19C "M"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProjectileMonsterControllerComponent::RegisterInterfaces(
        Caver::ProjectileMonsterControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ProjectileMonsterControllerComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::MonsterControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

