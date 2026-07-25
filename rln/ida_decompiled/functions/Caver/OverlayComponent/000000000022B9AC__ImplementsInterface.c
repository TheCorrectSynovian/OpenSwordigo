/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022B9AC
 * Mangled: _ZN5Caver16OverlayComponent19ImplementsInterfaceEl
 * Demangled: Caver::OverlayComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000022B9F4  Caver::OverlayComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x000000000022B9AC string=0x000000000022B9B0 ""
 *   insn=0x000000000022B9B0 string=0x000000000022B9B4 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::OverlayComponent::ImplementsInterface(
        Caver::OverlayComponent *this,
        _QWORD (*a2)(Caver::OverlayComponent *__hidden this))
{
  return a2 == Caver::OverlayComponent::Interface;
}

