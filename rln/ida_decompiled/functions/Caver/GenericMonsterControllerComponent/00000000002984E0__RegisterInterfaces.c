/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002984E0
 * Mangled: _ZN5Caver33GenericMonsterControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::GenericMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x0000000000298528  Caver::GenericMonsterControllerComponent::className(void)
 *
 * Referenced strings: 7
 *   insn=0x00000000002984E8 string=0x00000000002984EC "b""
 *   insn=0x00000000002984EC string=0x00000000002984F0 "B"
 *   insn=0x00000000002984F0 string=0x0000000000298580 "`""
 *   insn=0x00000000002984FC string=0x0000000000298500 "b""
 *   insn=0x00000000002984FC string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000298500 string=0x0000000000298504 "B"
 *   insn=0x0000000000298520 string=0x0000000000298524 "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GenericMonsterControllerComponent::RegisterInterfaces(
        Caver::GenericMonsterControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::GenericMonsterControllerComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::MonsterControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

