/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005148e8
 * Function: Caver::ItemBuyPopupView::ButtonPressed
 * Signature: undefined __cdecl ButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemBuyPopupView::ButtonPressed(void*, Caver::GUIEvent*) */

void Caver::ItemBuyPopupView::ButtonPressed(void *param_1,GUIEvent *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  local_50 = (undefined8 *)0x0;
  if (*(SceneObject **)((long)param_1 + 0x150) != (SceneObject *)0x0) {
    SceneObject::GetComponentsWithInterface<Caver::ProgramComponent>
              (*(SceneObject **)((long)param_1 + 0x150),(vector *)&local_50);
  }
  puVar3 = local_48;
  puVar2 = local_50;
  if (*(GUIEvent **)((long)param_1 + 0x110) == param_2) {
    for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
      if (*(int *)((ProgramComponent *)*puVar2 + 0x74) == 5) {
        ProgramComponent::Execute((ProgramComponent *)*puVar2);
      }
    }
  }
  else if (*(GUIEvent **)((long)param_1 + 0x120) == param_2) {
    for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
      if (*(int *)((ProgramComponent *)*puVar2 + 0x74) == 6) {
        ProgramComponent::Execute((ProgramComponent *)*puVar2);
      }
    }
  }
  GUIView::DismissModalView(param_1,param_1);
  if (local_50 != (undefined8 *)0x0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


