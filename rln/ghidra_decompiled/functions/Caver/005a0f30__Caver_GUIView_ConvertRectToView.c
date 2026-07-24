/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a0f30
 * Function: Caver::GUIView::ConvertRectToView
 * Signature: undefined __cdecl ConvertRectToView(Rectangle * param_1, GUIView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::ConvertRectToView(Caver::Rectangle const&, Caver::GUIView*) const */

void Caver::GUIView::ConvertRectToView(Rectangle *param_1,GUIView *param_2)

{
  long lVar1;
  long *plVar2;
  long in_x2;
  undefined4 *in_x8;
  undefined8 uVar3;
  Rectangle *pRVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = *(undefined4 *)param_2;
  uStack_54 = *(undefined4 *)(param_2 + 4);
  pRVar4 = param_1 + 0x58;
  plVar2 = *(long **)pRVar4;
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x108))(&local_50,plVar2,&local_58);
    pRVar4 = (Rectangle *)(*(long *)pRVar4 + 0x58);
    local_58 = local_50;
    uStack_54 = uStack_4c;
    plVar2 = *(long **)pRVar4;
  }
  if (in_x2 != 0) {
    while( true ) {
      plVar2 = *(long **)(in_x2 + 0x58);
      if (plVar2 == (long *)0x0) break;
      (**(code **)(*plVar2 + 0x100))(&local_50,plVar2,&local_58,in_x2);
      local_58 = local_50;
      uStack_54 = uStack_4c;
      in_x2 = *(long *)(in_x2 + 0x58);
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 8);
  *in_x8 = local_58;
  in_x8[1] = uStack_54;
  *(undefined8 *)(in_x8 + 2) = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


