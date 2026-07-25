/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF280
 * Mangled: ._ZN5Caver20InventoryTrinketSlot22UpdateHighlightedStateEv
 * Demangled: Caver::InventoryTrinketSlot::UpdateHighlightedState(void)
 *
 * Callers: 1
 *   0x0000000000411444  Caver::InventoryView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x000000000040E4A8  Caver::InventoryTrinketSlot::UpdateHighlightedState(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FF284 string=0x000000000040E4A8 "`E9"
 *   insn=0x00000000001FF288 string=0x00000000001FF28C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::InventoryTrinketSlot::UpdateHighlightedState(Caver::InventoryTrinketSlot *this)
{
  return _ZN5Caver20InventoryTrinketSlot22UpdateHighlightedStateEv(this);
}

