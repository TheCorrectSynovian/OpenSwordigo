/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002011C0
 * Mangled: ._ZN5Caver13InventoryView37InventoryItemPanelTextForTrinketBonusEPNS_18InventoryItemPanelE
 * Demangled: Caver::InventoryView::InventoryItemPanelTextForTrinketBonus(Caver::InventoryItemPanel *)
 *
 * Callers: 1
 *   0x000000000041212C  Caver::InventoryView::InventoryItemPanelTextForTrinketBonus(Caver::InventoryItemPanel *)
 *
 * Callees: 1
 *   0x000000000041212C  Caver::InventoryView::InventoryItemPanelTextForTrinketBonus(Caver::InventoryItemPanel *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002011C8 string=0x00000000002011CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::InventoryView::InventoryItemPanelTextForTrinketBonus(
        Caver::InventoryView *this,
        Caver::InventoryItemPanel *a2)
{
  return _ZN5Caver13InventoryView37InventoryItemPanelTextForTrinketBonusEPNS_18InventoryItemPanelE(this, a2);
}

