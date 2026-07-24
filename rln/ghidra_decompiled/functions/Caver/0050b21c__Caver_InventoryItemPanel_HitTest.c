/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050b21c
 * Function: Caver::InventoryItemPanel::HitTest
 * Signature: undefined __cdecl HitTest(Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryItemPanel::HitTest(Caver::Vector2 const&) */

void Caver::InventoryItemPanel::HitTest(Vector2 *param_1)

{
  long lVar1;
  ulong uVar2;
  Vector2 *in_x1;
  undefined8 *in_x8;
  long lVar3;
  long lVar4;
  Vector2 *local_48;
  long *local_40;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 0050b234 to 0060b237 has its CatchHandler @ 0050b330 */
                    /* try { // try from 0050b238 to 0060b343 has its CatchHandler @ 0050af94 */
  lVar3 = *(long *)(lVar1 + 0x28);
  GUIView::HitTest(param_1);
  if ((local_48 == param_1) &&
     (uVar2 = Rectangle::PointInside((Rectangle *)(*(long *)(param_1 + 0x110) + 0xc),in_x1),
     (uVar2 & 1) == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    if (local_40 == (long *)0x0) goto LAB_0050b2dc;
  }
  else {
    *in_x8 = local_48;
    in_x8[1] = local_40;
    if (local_40 == (long *)0x0) goto LAB_0050b2dc;
    local_40[1] = local_40[1] + 1;
  }
  lVar4 = local_40[1];
  local_40[1] = lVar4 + -1;
  if (lVar4 + -1 == 0) {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar4 = local_40[2];
    local_40[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
LAB_0050b2dc:
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


