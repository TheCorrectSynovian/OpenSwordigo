/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C92A4
 * Mangled: _ZN5Caver20ConfigureOverlayViewD0Ev
 * Demangled: Caver::ConfigureOverlayView::~ConfigureOverlayView()
 *
 * Callers: 1
 *   0x00000000003C8E60  Caver::ConfigureOverlayView::~ConfigureOverlayView()
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7620  Caver::ConfigureOverlayView::~ConfigureOverlayView()
 *   0x00000000003C92DC  Caver::ConfigureOverlayView::DidMoveToWindow(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000003C92B4 string=0x00000000001F7620 "0'"
 *   insn=0x00000000003C92C4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003C92D4 string=0x00000000003C92D8 "{"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ConfigureOverlayView::~ConfigureOverlayView(Caver::ConfigureOverlayView *this)
{
  Caver::ConfigureOverlayView::~ConfigureOverlayView(this);
  operator delete(this);
}

