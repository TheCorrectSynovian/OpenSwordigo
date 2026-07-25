/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBF10
 * Mangled: ._ZN5Caver13InventoryView32InventoryItemPanelTrinketChangedEPNS_18InventoryItemPanelE
 * Demangled: Caver::InventoryView::InventoryItemPanelTrinketChanged(Caver::InventoryItemPanel *)
 *
 * Callers: 1
 *   0x0000000000411D94  Caver::InventoryView::InventoryItemPanelTrinketChanged(Caver::InventoryItemPanel *)
 *
 * Callees: 1
 *   0x0000000000411D94  Caver::InventoryView::InventoryItemPanelTrinketChanged(Caver::InventoryItemPanel *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBF18 string=0x00000000001FBF1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::InventoryView::InventoryItemPanelTrinketChanged(
        Caver::InventoryView *this,
        Caver::InventoryItemPanel *a2)
{
  return _ZN5Caver13InventoryView32InventoryItemPanelTrinketChangedEPNS_18InventoryItemPanelE(this, a2);
}

