/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3588
 * Mangled: _ZN5Caver13GlowComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::GlowComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002839D4  Caver::GlowComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002A3594 string=0x00000000002A3598 "B"
 *   insn=0x00000000002A35A4 string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002A35B4 string=0x00000000002A35B8 "Fs"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GlowComponent::RegisterInterfaces(Caver::GlowComponent *this, Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::GlowComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

