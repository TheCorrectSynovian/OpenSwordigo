/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023CCB0
 * Mangled: _ZN5Caver19TextBubbleComponentC2Ev
 * Demangled: Caver::TextBubbleComponent::TextBubbleComponent(void)
 *
 * Callers: 1
 *   0x00000000001FAB40  Caver::TextBubbleComponent::TextBubbleComponent(void)
 *
 * Callees: 1
 *   0x0000000000202B50  Caver::OverlayComponent::OverlayComponent(void)
 *
 * Referenced strings: 8
 *   insn=0x000000000023CCC0 string=0x000000000023CCC4 "H%"
 *   insn=0x000000000023CCC4 string=0x000000000023CCC8 ""
 *   insn=0x000000000023CCD4 string=0x000000000023CCD8 "\n"
 *   insn=0x000000000023CCD8 string=0x000000000023CCDC "\tA"
 *   insn=0x000000000023CCDC string=0x000000000023CCE0 ""
 *   insn=0x000000000023CCE0 string=0x000000000023CCE4 "@"
 *   insn=0x000000000023CCE8 string=0x000000000023CCEC "i"
 *   insn=0x000000000023CCEC string=0x000000000023CCF0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::TextBubbleComponent::TextBubbleComponent(Caver::TextBubbleComponent *this)
{
  __n128 result; // q0

  Caver::OverlayComponent::OverlayComponent(this);
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_BYTE *)this + 118) = 0;
  *((_WORD *)this + 58) = 0;
  result.n128_u64[0] = (unsigned __int64)&off_6BBE10;
  result.n128_u64[1] = (unsigned __int64)&off_6BBE50;
  *(_QWORD *)this = off_6BBCF0;
  *((__n128 *)this + 1) = result;
  *((_DWORD *)this + 28) = 0;
  return result;
}

