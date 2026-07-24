/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059e2a0
 * Function: Caver::GUIView::GUIView
 * Signature: undefined __thiscall GUIView(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::GUIView() */

void __thiscall Caver::GUIView::GUIView(GUIView *this)

{
  undefined *puVar1;
  
  *(undefined8 *)(this + 0x18) = 0;
  *(GUIView **)(this + 0x20) = this + 0x20;
  *(GUIView **)(this + 0x28) = this + 0x20;
  *(undefined8 *)(this + 0x58) = 0;
  *(GUIView **)(this + 0x60) = this + 0x60;
  *(GUIView **)(this + 0x68) = this + 0x60;
  this[0xe5] = (GUIView)0x1;
  puVar1 = PTR_vtable_007e47b0;
  this[0x50] = (GUIView)0x0;
  this[0xe4] = (GUIView)0x0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined2 *)(this + 0xe6) = 0;
  this[0xe8] = (GUIView)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
                    /* catch() { ... } // from try @ 0059e1d0 with catch @ 0059e2f4 */
  *(undefined8 *)(this + 0x8c) = 0;
  *(undefined8 *)(this + 0x84) = 0;
                    /* catch() { ... } // from try @ 0059e794 with catch @ 0059e2f8
                       catch() { ... } // from try @ 0059eaf4 with catch @ 0059e2f8
                       catch() { ... } // from try @ 0059ed08 with catch @ 0059e2f8 */
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x7c) = 0;
  *(undefined8 *)(this + 0x74) = 0;
  return;
}


