/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040D5F4
 * Mangled: _ZN5Caver20InventoryTrinketSlotC2Ev
 * Demangled: Caver::InventoryTrinketSlot::InventoryTrinketSlot(void)
 *
 * Callers: 1
 *   0x00000000001FB630  Caver::InventoryTrinketSlot::InventoryTrinketSlot(void)
 *
 * Callees: 2
 *   0x00000000001FBC40  .memset
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *
 * Referenced strings: 9
 *   insn=0x000000000040D600 string=0x000000000040D604 "O"
 *   insn=0x000000000040D608 string=0x000000000040D60C ""
 *   insn=0x000000000040D60C string=0x000000000040D610 "`"
 *   insn=0x000000000040D618 string=0x000000000040D61C "\tA"
 *   insn=0x000000000040D61C string=0x000000000040D620 ""
 *   insn=0x000000000040D620 string=0x000000000040D624 "i"
 *   insn=0x000000000040D624 string=0x000000000040D628 "hz"
 *   insn=0x000000000040D62C string=0x00000000001FBC40 "0'"
 *   insn=0x000000000040D634 string=0x000000000040D638 "hB"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall Caver::InventoryTrinketSlot::InventoryTrinketSlot(Caver::InventoryTrinketSlot *this)
{
  void *result; // x0

  Caver::GUIView::GUIView(this);
  *(_QWORD *)this = off_6D1DC0;
  *((_QWORD *)this + 30) = off_6D1F10;
  result = memset((char *)this + 248, 0, 0x48u);
  *((_QWORD *)this + 41) = 0;
  *((_DWORD *)this + 80) = 1065353216;
  *((_BYTE *)this + 344) = 0;
  return result;
}

