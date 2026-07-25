/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022CB80
 * Mangled: _ZN5Caver27OverlayTargetArrowComponent19ImplementsInterfaceEl
 * Demangled: Caver::OverlayTargetArrowComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000022B9F4  Caver::OverlayComponent::className(void)
 *   0x000000000022CBF8  Caver::OverlayTargetArrowComponent::className(void)
 *
 * Referenced strings: 4
 *   insn=0x000000000022CB80 string=0x000000000022CB84 ""
 *   insn=0x000000000022CB88 string=0x000000000022CB8C ")"
 *   insn=0x000000000022CB8C string=0x000000000022CB90 "?"
 *   insn=0x000000000022CB94 string=0x000000000022CB98 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayTargetArrowComponent::ImplementsInterface(
        Caver::OverlayTargetArrowComponent *this,
        _QWORD (*a2)(Caver::OverlayComponent *__hidden this))
{
  return (a2 == Caver::OverlayTargetArrowComponent::Interface)
       | (unsigned int)(a2 == Caver::OverlayComponent::Interface);
}

