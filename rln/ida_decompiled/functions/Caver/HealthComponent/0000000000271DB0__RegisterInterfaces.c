/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000271DB0
 * Mangled: _ZN5Caver15HealthComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::HealthComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *
 * Referenced strings: 4
 *   insn=0x0000000000271DBC string=0x0000000000271DC0 "B(B"
 *   insn=0x0000000000271DC0 string=0x000000000021C13C "@&"
 *   insn=0x0000000000271DCC string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000271DDC string=0x0000000000271DE0 "<9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HealthComponent::RegisterInterfaces(
        Caver::HealthComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::HealthComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

