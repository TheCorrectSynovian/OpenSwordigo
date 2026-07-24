/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a0e58
 * Function: Caver::GUIView::ConvertRectFromView
 * Signature: undefined __cdecl ConvertRectFromView(Rectangle * param_1, GUIView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::ConvertRectFromView(Caver::Rectangle const&, Caver::GUIView*) const */

void Caver::GUIView::ConvertRectFromView(Rectangle *param_1,GUIView *param_2)

{
  long lVar1;
  long *plVar2;
  long in_x2;
  undefined4 *in_x8;
  undefined8 uVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = *(undefined4 *)param_2;
  uStack_54 = *(undefined4 *)(param_2 + 4);
  if (in_x2 != 0) {
    while( true ) {
      plVar2 = *(long **)(in_x2 + 0x58);
      if (plVar2 == (long *)0x0) break;
      (**(code **)(*plVar2 + 0x108))(&local_50,plVar2,&local_58);
      in_x2 = *(long *)(in_x2 + 0x58);
      local_58 = local_50;
      uStack_54 = uStack_4c;
    }
  }
  while( true ) {
    plVar2 = *(long **)(param_1 + 0x58);
    if (plVar2 == (long *)0x0) break;
    (**(code **)(*plVar2 + 0x100))(&local_50,plVar2,&local_58,param_1);
    local_58 = local_50;
    uStack_54 = uStack_4c;
    param_1 = *(Rectangle **)(param_1 + 0x58);
  }
  uVar3 = *(undefined8 *)(param_2 + 8);
  *in_x8 = local_58;
  in_x8[1] = uStack_54;
  *(undefined8 *)(in_x8 + 2) = uVar3;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


