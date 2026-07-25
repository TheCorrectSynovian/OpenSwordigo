/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023DBE4
 * Mangled: _ZNK5Caver19TextBubbleComponent5CloneEv
 * Demangled: Caver::TextBubbleComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000023DA84  Caver::TextBubbleComponent::~TextBubbleComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202B50  Caver::OverlayComponent::OverlayComponent(void)
 *   0x000000000023DC70  Caver::TextBubbleComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x000000000023DBF4 string=0x000000000023DBF8 "z"
 *   insn=0x000000000023DBF8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000023DC00 string=0x000000000023DC04 "H%"
 *   insn=0x000000000023DC04 string=0x000000000023DC08 ""
 *   insn=0x000000000023DC14 string=0x000000000023DC18 "\tA"
 *   insn=0x000000000023DC18 string=0x000000000023DC1C "i"
 *   insn=0x000000000023DC1C string=0x000000000023DC20 "\t"
 *   insn=0x000000000023DC20 string=0x000000000023DC24 ""
 *   insn=0x000000000023DC24 string=0x000000000023DC28 " "
 *   insn=0x000000000023DC30 string=0x000000000023DC34 "`"
 *   insn=0x000000000023DC3C string=0x000000000023DC40 "`"
 *   insn=0x000000000023DC40 string=0x000000000023DC44 "h""
 *   insn=0x000000000023DC64 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TextBubbleComponent::Clone(Caver::TextBubbleComponent *this)
{
  __int64 v2; // x19
  __int128 v3; // q0

  v2 = operator new(0x88u);
  Caver::OverlayComponent::OverlayComponent((Caver::OverlayComponent *)v2);
  *(_QWORD *)(v2 + 120) = 0;
  *(_QWORD *)(v2 + 128) = 0;
  *(_BYTE *)(v2 + 118) = 0;
  *(_WORD *)(v2 + 116) = 0;
  *(_QWORD *)v2 = off_6BBCF0;
  *(_QWORD *)&v3 = &off_6BBE10;
  *((_QWORD *)&v3 + 1) = &off_6BBE50;
  *(_DWORD *)(v2 + 112) = 0;
  *(_OWORD *)(v2 + 16) = v3;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  return v2;
}

