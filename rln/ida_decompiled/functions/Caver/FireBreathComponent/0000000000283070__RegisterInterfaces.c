/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283070
 * Mangled: _ZN5Caver19FireBreathComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::FireBreathComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002821FC  Caver::SpellComponent::Interface(void)
 *   0x00000000002831F0  Caver::FireBreathComponent::Interface(void)
 *
 * Referenced strings: 4
 *   insn=0x000000000028307C string=0x0000000000283080 "BD"
 *   insn=0x000000000028308C string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000283090 string=0x0000000000283094 "B4D"
 *   insn=0x0000000000283094 string=0x00000000002821FC " #"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FireBreathComponent::RegisterInterfaces(
        Caver::FireBreathComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::FireBreathComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::SpellComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

