/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00507430
 * Function: Caver::InventoryItemPanel::InventoryItemPanel
 * Signature: undefined __thiscall InventoryItemPanel(InventoryItemPanel * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryItemPanel::InventoryItemPanel() */

void __thiscall Caver::InventoryItemPanel::InventoryItemPanel(InventoryItemPanel *this)

{
  undefined *puVar1;
  
                    /* try { // try from 00507434 to 00607437 has its CatchHandler @ 00507468 */
  GUIView::GUIView((GUIView *)this);
  puVar1 = PTR_vtable_007e4af0 + 0x158;
  *(undefined **)this = PTR_vtable_007e4af0 + 0x10;
  *(undefined **)(this + 0xf0) = puVar1;
                    /* catch() { ... } // from try @ 00507434 with catch @ 00507468 */
  memset(this + 0xf8,0,0x78);
                    /* catch() { ... } // from try @ 005073c8 with catch @ 0050746c */
                    /* try { // try from 00507470 to 00607477 has its CatchHandler @ 00507480 */
  return;
}


