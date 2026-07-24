/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a08f4
 * Function: Caver::GUIView::PointInside
 * Signature: undefined __thiscall PointInside(GUIView * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::PointInside(Caver::Vector2 const&) const */

uint __thiscall Caver::GUIView::PointInside(GUIView *this,Vector2 *param_1)

{
  GUIView *pGVar1;
  long lVar2;
  uint uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
                    /* try { // try from 005a0904 to 006a092b has its CatchHandler @ 005a0cb8 */
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pGVar1 = this + 0x94;
  if (*(float *)(this + 0x9c) <= DAT_00683734) {
    pGVar1 = this + 0x84;
  }
  uStack_38 = *(undefined8 *)(pGVar1 + 8);
  local_40 = *(undefined8 *)pGVar1;
  uVar3 = Rectangle::PointInside((Rectangle *)&local_40,param_1);
  if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* try { // try from 005a094c to 006a0973 has its CatchHandler @ 005a0ca8 */
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


