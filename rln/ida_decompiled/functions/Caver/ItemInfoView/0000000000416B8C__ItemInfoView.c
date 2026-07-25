/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000416B8C
 * Mangled: _ZN5Caver12ItemInfoViewC2Ev
 * Demangled: Caver::ItemInfoView::ItemInfoView(void)
 *
 * Callers: 2
 *   0x00000000001F6790  Caver::ItemInfoView::ItemInfoView(void)
 *   0x0000000000416844  Caver::ItemInfoPopupView::~ItemInfoPopupView()
 *
 * Callees: 2
 *   0x00000000001FBC40  .memset
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *
 * Referenced strings: 7
 *   insn=0x0000000000416BA0 string=0x0000000000416BA4 "5D"
 *   insn=0x0000000000416BA4 string=0x0000000000416BA8 "`"
 *   insn=0x0000000000416BA8 string=0x0000000000416BAC """
 *   insn=0x0000000000416BB0 string=0x0000000000416BB4 "A"
 *   insn=0x0000000000416BB4 string=0x0000000000416BB8 "h"
 *   insn=0x0000000000416BBC string=0x0000000000416BC0 " "
 *   insn=0x0000000000416BC0 string=0x00000000001FBC40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall Caver::ItemInfoView::ItemInfoView(Caver::ItemInfoView *this)
{
  Caver::GUIView::GUIView(this);
  *(_QWORD *)this = off_6D2590;
  *((_QWORD *)this + 47) = 0;
  return memset((char *)this + 240, 0, 0x81u);
}

