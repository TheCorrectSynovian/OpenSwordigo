/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000292E58
 * Mangled: _ZN5Caver15AttackComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::AttackComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000292E8C  Caver::AttackComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000292E64 string=0x0000000000292E68 "B"
 *   insn=0x0000000000292E74 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AttackComponent::RegisterInterfaces(
        Caver::AttackComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::AttackComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

