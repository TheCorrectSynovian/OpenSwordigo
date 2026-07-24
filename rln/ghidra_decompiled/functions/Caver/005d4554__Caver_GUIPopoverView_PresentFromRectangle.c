/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d4554
 * Function: Caver::GUIPopoverView::PresentFromRectangle
 * Signature: undefined __thiscall PresentFromRectangle(GUIPopoverView * this, Rectangle * param_1, uint param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIPopoverView::PresentFromRectangle(Caver::Rectangle const&, unsigned int) */

void __thiscall
Caver::GUIPopoverView::PresentFromRectangle(GUIPopoverView *this,Rectangle *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
                    /* try { // try from 005d4558 to 006d469b has its CatchHandler @ 005d41d8 */
  *(uint *)(this + 0x110) = param_2;
  *(undefined8 *)(this + 0xf4) = uVar2;
  *(undefined8 *)(this + 0xec) = uVar1;
  this[0xe9] = (GUIPopoverView)0x1;
  if (*(long *)(this + 0x100) != 0) {
    UpdateLayout(this);
    return;
  }
  return;
}


