/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049779C
 * Mangled: _ZN5Caver12GUIFrameViewD0Ev
 * Demangled: Caver::GUIFrameView::~GUIFrameView()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC000  Caver::GUIFrameView::~GUIFrameView()
 *   0x00000000004977D4  Caver::GUILabel::GUILabel(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000004977AC string=0x00000000001FC000 "0'"
 *   insn=0x00000000004977BC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004977CC string=0x00000000004977D0 "="
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIFrameView::~GUIFrameView(Caver::GUIFrameView *this)
{
  Caver::GUIFrameView::~GUIFrameView(this);
  operator delete(this);
}

