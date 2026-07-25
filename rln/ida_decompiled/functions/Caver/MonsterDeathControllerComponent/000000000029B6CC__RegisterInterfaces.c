/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029B6CC
 * Mangled: _ZN5Caver31MonsterDeathControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::MonsterDeathControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000027DE24  Caver::MonsterDeathControllerComponent::Interface(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000029B6D4 string=0x000000000029B6D8 "B""
 *   insn=0x000000000029B6D8 string=0x000000000029B6DC "BPE"
 *   insn=0x000000000029B6DC string=0x000000000027DE24 "@#"
 *   insn=0x000000000029B6E4 string=0x000000000029B6E8 "n`"
 *   insn=0x000000000029B6E8 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MonsterDeathControllerComponent::RegisterInterfaces(
        Caver::MonsterDeathControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::MonsterDeathControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

