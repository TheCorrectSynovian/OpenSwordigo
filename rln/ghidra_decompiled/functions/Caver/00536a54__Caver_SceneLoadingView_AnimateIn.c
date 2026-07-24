/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00536a54
 * Function: Caver::SceneLoadingView::AnimateIn
 * Signature: undefined __cdecl AnimateIn(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneLoadingView::AnimateIn() */

void Caver::SceneLoadingView::AnimateIn(void)

{
  long lVar1;
  long in_x0;
  undefined8 *in_x8;
  long lVar2;
  long lVar3;
  undefined8 local_48;
  long *local_40;
  
                    /* catch() { ... } // from try @ 00536918 with catch @ 00536a58 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  GUILoadingView::AnimateIn();
  if (((*(shared_ptr **)(in_x0 + 0x130) == (shared_ptr *)0x0) || (*(long *)(in_x0 + 0x140) == 0)) ||
     (*(long *)(in_x0 + 0x150) == 0)) {
    *in_x8 = local_48;
    in_x8[1] = local_40;
    if (local_40 == (long *)0x0) goto LAB_00536b10;
    local_40[1] = local_40[1] + 1;
  }
  else {
    MapView::AnimateLocationMarkerFromNodeToNode
              (*(shared_ptr **)(in_x0 + 0x130),(shared_ptr *)(in_x0 + 0x140));
    if (local_40 == (long *)0x0) goto LAB_00536b10;
  }
  lVar3 = local_40[1];
  local_40[1] = lVar3 + -1;
  if (lVar3 + -1 == 0) {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar3 = local_40[2];
    local_40[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
LAB_00536b10:
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


