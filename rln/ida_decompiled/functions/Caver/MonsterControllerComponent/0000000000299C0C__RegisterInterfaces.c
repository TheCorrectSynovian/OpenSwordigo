/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000299C0C
 * Mangled: _ZN5Caver26MonsterControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::MonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x0000000000299C14 string=0x0000000000299C18 "b""
 *   insn=0x0000000000299C18 string=0x0000000000299C1C "B"
 *   insn=0x0000000000299C28 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MonsterControllerComponent::RegisterInterfaces(
        Caver::MonsterControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::MonsterControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

