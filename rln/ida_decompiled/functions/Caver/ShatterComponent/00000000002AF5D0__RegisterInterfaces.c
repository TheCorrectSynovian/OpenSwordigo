/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AF5D0
 * Mangled: _ZN5Caver16ShatterComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::ShatterComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002560E8  Caver::ShatterComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002AF5DC string=0x00000000002AF5E0 "B"
 *   insn=0x00000000002AF5EC string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002AF5FC string=0x00000000002AF600 "4C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShatterComponent::RegisterInterfaces(
        Caver::ShatterComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ShatterComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

