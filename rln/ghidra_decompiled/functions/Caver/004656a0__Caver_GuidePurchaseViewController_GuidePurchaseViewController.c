/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004656a0
 * Function: Caver::GuidePurchaseViewController::GuidePurchaseViewController
 * Signature: undefined __thiscall GuidePurchaseViewController(GuidePurchaseViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuidePurchaseViewController::GuidePurchaseViewController() */

void __thiscall
Caver::GuidePurchaseViewController::GuidePurchaseViewController(GuidePurchaseViewController *this)

{
  undefined *puVar1;
  
                    /* catch() { ... } // from try @ 004655f0 with catch @ 004656a8 */
  GUIViewController::GUIViewController((GUIViewController *)this);
  puVar1 = PTR_vtable_007e6710;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
                    /* try { // try from 004656cc to 005656f3 has its CatchHandler @ 004656f8 */
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x50) = puVar1 + 200;
  *(undefined **)(this + 0x48) = puVar1 + 0xa0;
  *(undefined8 *)(this + 0x58) = 0;
  return;
}


