/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a0ce4
 * Function: Caver::GUIView::ConvertPointToView
 * Signature: undefined __cdecl ConvertPointToView(Vector2 * param_1, GUIView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::ConvertPointToView(Caver::Vector2 const&, Caver::GUIView*) const */

void Caver::GUIView::ConvertPointToView(Vector2 *param_1,GUIView *param_2)

{
  long lVar1;
  long *plVar2;
  long in_x2;
  undefined8 *in_x8;
  Vector2 *pVVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *in_x8 = *(undefined8 *)param_2;
  pVVar3 = param_1 + 0x58;
  plVar2 = *(long **)pVVar3;
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x108))(&local_40);
    *in_x8 = local_40;
    pVVar3 = (Vector2 *)(*(long *)pVVar3 + 0x58);
    plVar2 = *(long **)pVVar3;
  }
  if (in_x2 != 0) {
    while( true ) {
      plVar2 = *(long **)(in_x2 + 0x58);
      if (plVar2 == (long *)0x0) break;
      (**(code **)(*plVar2 + 0x100))(&local_40);
      *in_x8 = local_40;
      in_x2 = *(long *)(in_x2 + 0x58);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


