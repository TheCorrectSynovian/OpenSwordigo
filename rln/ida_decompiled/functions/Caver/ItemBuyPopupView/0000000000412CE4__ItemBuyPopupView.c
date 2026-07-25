/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000412CE4
 * Mangled: _ZN5Caver16ItemBuyPopupViewC2Ev
 * Demangled: Caver::ItemBuyPopupView::ItemBuyPopupView(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FBC40  .memset
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *
 * Referenced strings: 4
 *   insn=0x0000000000412CF8 string=0x0000000000412CFC ""
 *   insn=0x0000000000412D04 string=0x0000000000412D08 "A"
 *   insn=0x0000000000412D08 string=0x0000000000412D0C "h"
 *   insn=0x0000000000412D14 string=0x00000000001FBC40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall Caver::ItemBuyPopupView::ItemBuyPopupView(Caver::ItemBuyPopupView *this)
{
  Caver::GUIView::GUIView(this);
  *(_QWORD *)this = off_6D2270;
  return memset((char *)this + 240, 0, 0x68u);
}

