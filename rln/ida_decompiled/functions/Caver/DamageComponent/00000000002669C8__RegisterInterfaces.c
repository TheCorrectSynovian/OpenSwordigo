/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002669C8
 * Mangled: _ZN5Caver15DamageComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::DamageComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000021C148  Caver::DamageComponent::Interface(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002669D4 string=0x00000000002669D8 "BhF"
 *   insn=0x00000000002669D8 string=0x000000000021C148 "@&"
 *   insn=0x00000000002669E4 string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002669F4 string=0x00000000002669F8 "6f"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DamageComponent::RegisterInterfaces(
        Caver::DamageComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::DamageComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

