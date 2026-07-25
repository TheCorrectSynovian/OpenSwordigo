/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023DCA0
 * Mangled: _ZN5Caver19TextBubbleComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::TextBubbleComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000022B9F4  Caver::OverlayComponent::className(void)
 *   0x000000000023DCF0  Caver::TextBubbleComponent::className(void)
 *
 * Referenced strings: 7
 *   insn=0x000000000023DCA8 string=0x000000000023DCAC ""%"
 *   insn=0x000000000023DCAC string=0x000000000023DCB0 "B"
 *   insn=0x000000000023DCB0 string=0x000000000023DD48 " %"
 *   insn=0x000000000023DCBC string=0x000000000023DCC0 "B%"
 *   insn=0x000000000023DCBC string=0x00000000001F38A0 "P'"
 *   insn=0x000000000023DCC0 string=0x000000000023DCC4 "B"
 *   insn=0x000000000023DCE0 string=0x000000000023DCE4 "{\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TextBubbleComponent::RegisterInterfaces(
        Caver::TextBubbleComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::TextBubbleComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::OverlayComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

