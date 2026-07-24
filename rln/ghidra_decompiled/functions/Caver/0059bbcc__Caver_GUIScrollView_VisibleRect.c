/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059bbcc
 * Function: Caver::GUIScrollView::VisibleRect
 * Signature: undefined __cdecl VisibleRect(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIScrollView::VisibleRect() const */

void Caver::GUIScrollView::VisibleRect(void)

{
  long in_x0;
  float *in_x8;
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = *(float *)(in_x0 + 300);
  uVar1 = *(undefined8 *)(in_x0 + 0x8c);
                    /* try { // try from 0059bbd8 to 0069bbe3 has its CatchHandler @ 0059bfe0 */
  *in_x8 = -*(float *)(in_x0 + 0x100);
  in_x8[1] = -fVar2;
  *(undefined8 *)(in_x8 + 2) = uVar1;
  return;
}


