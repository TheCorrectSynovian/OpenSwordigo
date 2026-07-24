/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059cb2c
 * Function: Caver::GUISlider::GUISlider
 * Signature: undefined __thiscall GUISlider(GUISlider * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISlider::GUISlider() */

void __thiscall Caver::GUISlider::GUISlider(GUISlider *this)

{
  undefined *puVar1;
  GUISlider *pGVar2;
  
  GUIView::GUIView((GUIView *)this);
  *(undefined8 *)(this + 0x118) = 0;
  puVar1 = PTR_vtable_007e5588;
                    /* try { // try from 0059cb54 to 0069cba7 has its CatchHandler @ 0059cb54
                       catch() { ... } // from try @ 0059cb54 with catch @ 0059cb54
                       catch() { ... } // from try @ 0059cc68 with catch @ 0059cb54
                       catch() { ... } // from try @ 0059ce44 with catch @ 0059cb54 */
  pGVar2 = this + 0xf8;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)pGVar2 = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(GUISlider **)(this + 0x108) = pGVar2;
  *(GUISlider **)(this + 0x110) = pGVar2;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x134) = 0x42c8000000000000;
  *(undefined8 *)(this + 0x124) = 0;
  *(undefined8 *)(this + 0x129) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined2 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x164) = 0;
  *(undefined2 *)(this + 0x16c) = 0;
                    /* try { // try from 0059cba8 to 0069cbb3 has its CatchHandler @ 0059cd44 */
  return;
}


