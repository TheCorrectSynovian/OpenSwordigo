/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00442c0c
 * Function: Caver::GameMenuViewController::GameMenuViewController
 * Signature: undefined __thiscall GameMenuViewController(GameMenuViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameMenuViewController::GameMenuViewController() */

void __thiscall Caver::GameMenuViewController::GameMenuViewController(GameMenuViewController *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  GUIViewController::GUIViewController((GUIViewController *)this);
  puVar2 = PTR_vtable_007e63f0;
                    /* catch() { ... } // from try @ 00442bb4 with catch @ 00442c28 */
  puVar1 = PTR_vtable_007e63f0 + 0xe0;
  *(undefined **)this = PTR_vtable_007e63f0 + 0x10;
                    /* try { // try from 00442c4c to 00542c73 has its CatchHandler @ 00442c78 */
  *(undefined **)(this + 0x50) = puVar2 + 0x100;
  *(undefined **)(this + 0x48) = puVar1;
  *(undefined **)(this + 0x60) = puVar2 + 0x138;
  *(undefined **)(this + 0x58) = puVar2 + 0x118;
                    /* catch() { ... } // from try @ 00442c4c with catch @ 00442c78 */
  *(undefined **)(this + 0x78) = puVar2 + 0x198;
                    /* catch() { ... } // from try @ 00442864 with catch @ 00442c7c
                       catch() { ... } // from try @ 0044294c with catch @ 00442c7c */
  *(undefined **)(this + 0x70) = puVar2 + 0x180;
  *(undefined **)(this + 0x68) = puVar2 + 0x168;
  memset(this + 0x80,0,0x48);
  return;
}


