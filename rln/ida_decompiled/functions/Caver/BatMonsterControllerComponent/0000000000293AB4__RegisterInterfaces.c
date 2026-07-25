/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000293AB4
 * Mangled: _ZN5Caver29BatMonsterControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::BatMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000293D9C  Caver::BatMonsterControllerComponent::Interface(void)
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *
 * Referenced strings: 5
 *   insn=0x0000000000293AC0 string=0x0000000000293AC4 "BdC"
 *   insn=0x0000000000293ACC string=0x0000000000293AD0 "t"
 *   insn=0x0000000000293AD0 string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000293AD4 string=0x0000000000293AD8 "B"
 *   insn=0x0000000000293AE0 string=0x0000000000293AE4 "o"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BatMonsterControllerComponent::RegisterInterfaces(
        Caver::BatMonsterControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::BatMonsterControllerComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::MonsterControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

