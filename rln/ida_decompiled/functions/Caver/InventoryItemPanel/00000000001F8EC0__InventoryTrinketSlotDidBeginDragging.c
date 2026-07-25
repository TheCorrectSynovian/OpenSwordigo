/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8EC0
 * Mangled: ._ZN5Caver18InventoryItemPanel36InventoryTrinketSlotDidBeginDraggingEPNS_20InventoryTrinketSlotE
 * Demangled: Caver::InventoryItemPanel::InventoryTrinketSlotDidBeginDragging(Caver::InventoryTrinketSlot *)
 *
 * Callers: 1
 *   0x000000000040B614  Caver::InventoryItemPanel::DraggableItemDidDropIntoView(Caver::GUIDraggableItem *)
 *
 * Callees: 1
 *   0x000000000040B614  Caver::InventoryItemPanel::DraggableItemDidDropIntoView(Caver::GUIDraggableItem *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8EC8 string=0x00000000001F8ECC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::InventoryItemPanel::InventoryTrinketSlotDidBeginDragging()
{
  JUMPOUT(0x40BB84);
}

