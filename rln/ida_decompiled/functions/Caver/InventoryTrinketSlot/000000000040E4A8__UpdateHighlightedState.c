/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040E4A8
 * Mangled: _ZN5Caver20InventoryTrinketSlot22UpdateHighlightedStateEv
 * Demangled: Caver::InventoryTrinketSlot::UpdateHighlightedState(void)
 *
 * Callers: 1
 *   0x00000000001FF280  Caver::InventoryTrinketSlot::UpdateHighlightedState(void)
 *
 * Callees: 1
 *   0x00000000001F5920  Caver::MenuItemSlot::SetSelected(bool)
 *
 * Referenced strings: 2
 *   insn=0x000000000040E4AC string=0x000000000040E4BC ""
 *   insn=0x000000000040E4B8 string=0x00000000001F5920 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::InventoryTrinketSlot::UpdateHighlightedState(Caver::InventoryTrinketSlot *this)
{
  Caver::MenuItemSlot *v1; // x0
  char v2; // w1
  __int64 v3; // x8

  if ( *((_BYTE *)this + 344) )
  {
    v1 = (Caver::MenuItemSlot *)*((_QWORD *)this + 34);
    v2 = 1;
  }
  else
  {
    v3 = *((_QWORD *)this + 41);
    v1 = (Caver::MenuItemSlot *)*((_QWORD *)this + 34);
    v2 = v3 != 0;
  }
  return Caver::MenuItemSlot::SetSelected(v1, v2);
}

