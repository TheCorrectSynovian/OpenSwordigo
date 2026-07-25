/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283908
 * Mangled: _ZN5Caver22HookshotTrailComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::HookshotTrailComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002839C8  Caver::HookshotTrailComponent::Interface(void)
 *   0x00000000002839D4  Caver::GlowComponent::Interface(void)
 *
 * Referenced strings: 4
 *   insn=0x0000000000283914 string=0x0000000000283918 "B"
 *   insn=0x0000000000283924 string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000283928 string=0x000000000028392C "B"
 *   insn=0x0000000000283948 string=0x000000000028394C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HookshotTrailComponent::RegisterInterfaces(
        Caver::HookshotTrailComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::HookshotTrailComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::GlowComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

