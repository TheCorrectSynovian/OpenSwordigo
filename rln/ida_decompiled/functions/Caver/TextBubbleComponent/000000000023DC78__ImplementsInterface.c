/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023DC78
 * Mangled: _ZN5Caver19TextBubbleComponent19ImplementsInterfaceEl
 * Demangled: Caver::TextBubbleComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000022B9F4  Caver::OverlayComponent::className(void)
 *   0x000000000023DCF0  Caver::TextBubbleComponent::className(void)
 *
 * Referenced strings: 6
 *   insn=0x000000000023DC78 string=0x000000000023DC7C ""
 *   insn=0x000000000023DC7C string=0x000000000023DC80 "I%"
 *   insn=0x000000000023DC7C string=0x000000000023DD48 " %"
 *   insn=0x000000000023DC80 string=0x000000000023DC84 ")"
 *   insn=0x000000000023DC84 string=0x000000000023DC88 "?"
 *   insn=0x000000000023DC8C string=0x000000000023DC90 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TextBubbleComponent::ImplementsInterface(
        Caver::TextBubbleComponent *this,
        _QWORD (*a2)(Caver::OverlayComponent *__hidden this))
{
  return (a2 == Caver::TextBubbleComponent::Interface) | (unsigned int)(a2 == Caver::OverlayComponent::Interface);
}

