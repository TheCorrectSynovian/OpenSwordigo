/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029E998
 * Mangled: _ZN5Caver32SkellyMonsterControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::SkellyMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x000000000029EB08  Caver::SkellyMonsterControllerComponent::Interface(void)
 *
 * Referenced strings: 7
 *   insn=0x000000000029E9A0 string=0x000000000029E9A4 """"
 *   insn=0x000000000029E9A4 string=0x000000000029E9A8 "B"
 *   insn=0x000000000029E9A8 string=0x000000000029EB08 " ""
 *   insn=0x000000000029E9B4 string=0x000000000029E9B8 "B""
 *   insn=0x000000000029E9B4 string=0x00000000001F38A0 "P'"
 *   insn=0x000000000029E9B8 string=0x000000000029E9BC "B"
 *   insn=0x000000000029E9D8 string=0x000000000029E9DC "="
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkellyMonsterControllerComponent::RegisterInterfaces(
        Caver::SkellyMonsterControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::SkellyMonsterControllerComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::MonsterControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

