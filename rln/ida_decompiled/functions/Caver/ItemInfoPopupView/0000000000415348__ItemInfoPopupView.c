/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000415348
 * Mangled: _ZN5Caver17ItemInfoPopupViewC2Ev
 * Demangled: Caver::ItemInfoPopupView::ItemInfoPopupView(void)
 *
 * Callers: 1
 *   0x00000000001FFDE0  Caver::ItemInfoPopupView::ItemInfoPopupView(void)
 *
 * Callees: 2
 *   0x00000000001FBC40  .memset
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000041535C string=0x0000000000415360 "%@"
 *   insn=0x0000000000415368 string=0x000000000041536C "A"
 *   insn=0x000000000041536C string=0x0000000000415370 "h"
 *   insn=0x0000000000415374 string=0x0000000000415378 "2"
 *   insn=0x0000000000415378 string=0x00000000001FBC40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall Caver::ItemInfoPopupView::ItemInfoPopupView(Caver::ItemInfoPopupView *this)
{
  Caver::GUIView::GUIView(this);
  *(_QWORD *)this = off_6D2430;
  return memset((char *)this + 240, 0, 0x50u);
}

