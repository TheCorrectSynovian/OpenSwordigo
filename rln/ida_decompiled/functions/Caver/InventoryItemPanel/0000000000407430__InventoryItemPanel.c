/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000407430
 * Mangled: _ZN5Caver18InventoryItemPanelC2Ev
 * Demangled: Caver::InventoryItemPanel::InventoryItemPanel(void)
 *
 * Callers: 1
 *   0x00000000001F99E0  Caver::InventoryItemPanel::InventoryItemPanel(void)
 *
 * Callees: 2
 *   0x00000000001FBC40  .memset
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *
 * Referenced strings: 7
 *   insn=0x0000000000407444 string=0x0000000000407448 "yE"
 *   insn=0x0000000000407448 string=0x000000000040744C "`"
 *   insn=0x0000000000407454 string=0x0000000000407458 "\tA"
 *   insn=0x0000000000407458 string=0x000000000040745C "a"
 *   insn=0x000000000040745C string=0x0000000000407460 "i"
 *   insn=0x0000000000407460 string=0x0000000000407464 "hz"
 *   insn=0x0000000000407468 string=0x00000000001FBC40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall Caver::InventoryItemPanel::InventoryItemPanel(Caver::InventoryItemPanel *this)
{
  Caver::GUIView::GUIView(this);
  *(_QWORD *)this = off_6D1B60;
  *((_QWORD *)this + 30) = &off_6D1CA8;
  return memset((char *)this + 248, 0, 0x78u);
}

