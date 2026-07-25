/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B124C
 * Mangled: _ZN5Caver19SimpleGlowComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::SimpleGlowComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002839D4  Caver::GlowComponent::Interface(void)
 *   0x00000000002B12BC  Caver::SimpleGlowComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002B1258 string=0x00000000002B125C "Bh@"
 *   insn=0x00000000002B1268 string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002B126C string=0x00000000002B1270 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SimpleGlowComponent::RegisterInterfaces(
        Caver::SimpleGlowComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::SimpleGlowComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::GlowComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

