/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e871c
 * Function: Caver::PurchaseViewController::ButtonPressed
 * Signature: undefined __cdecl ButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PurchaseViewController::ButtonPressed(void*, Caver::GUIEvent*) */

void Caver::PurchaseViewController::ButtonPressed(void *param_1,GUIEvent *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  PurchaseView *this;
  long *plVar4;
  ulong uVar5;
  undefined8 extraout_x0;
  undefined *puVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  GUIButton *this_00;
  long *plVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined *local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined1 auStack_70 [16];
  undefined *local_60;
  undefined8 uStack_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this = *(PurchaseView **)((long)param_1 + 0x50);
  if (*(GUIEvent **)(this + 0x138) == param_2) {
    PurchaseView::AnimateOut();
    GUIViewController::DismissModalViewController(*(GUIViewController **)((long)param_1 + 0x28));
  }
  else if (*(GUIEvent **)(this + 0x128) == param_2) {
    PurchaseView::SetBuyButtonEnabled(this,false);
    this_00 = *(GUIButton **)(*(long *)((long)param_1 + 0x50) + 0x128);
    FUN_00666bb8(&local_60,&DAT_0068f6a7,auStack_70);
    GUIButton::SetTitle(this_00,(string *)&local_60);
    if (local_60 + -0x18 != PTR_DAT_007e5de8) {
      piVar8 = (int *)(local_60 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(local_60 + -0x18);
      }
    }
    plVar4 = (long *)StoreController::SharedController();
    plVar10 = *(long **)((long)param_1 + 0x10);
    if ((plVar10 == (long *)0x0) || (plVar10[1] == 0)) {
      local_60 = PTR_vtable_007e6120 + 0x10;
      boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_60);
      std::exception::~exception((exception *)&local_60);
                    /* WARNING: Subroutine does not return */
      FUN_006818c4(extraout_x0);
    }
    uVar12 = *(undefined8 *)((long)param_1 + 8);
    pcVar11 = *(code **)(*plVar4 + 0x30);
    plVar10[1] = plVar10[1] + 2;
    uStack_58 = 0;
    local_60 = PTR_PurchaseCompletion_007e54e8;
    local_50 = param_1;
    uVar5 = boost::detail::function::has_empty_target(&local_60);
    if ((uVar5 & 1) == 0) {
      local_a8 = local_50;
      uStack_b0 = uStack_58;
      local_b8 = local_60;
      puVar6 = PTR_stored_vtable_007e6c70;
    }
    else {
      puVar6 = (undefined *)0x0;
    }
    plVar10[2] = plVar10[2] + 1;
    local_90 = (undefined *)0x0;
    local_a0 = uVar12;
    local_98 = plVar10;
    if (puVar6 != (undefined *)0x0) {
      local_90 = puVar6;
      if (((ulong)puVar6 & 1) == 0) {
        (**(code **)((ulong)puVar6 & 0xfffffffffffffffe))(&local_b8,&local_88,0);
      }
      else {
        local_78 = local_a8;
        uStack_80 = uStack_b0;
        local_88 = local_b8;
      }
    }
    (*pcVar11)(plVar4,(long)param_1 + 0x68,&local_a0);
    if (local_90 != (undefined *)0x0) {
      if ((((ulong)local_90 & 1) == 0) &&
         (*(code **)((ulong)local_90 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)((ulong)local_90 & 0xfffffffffffffffe))(&local_88,&local_88,2);
      }
      local_90 = (undefined *)0x0;
    }
    if ((local_98 != (long *)0x0) &&
       (lVar7 = local_98[2], local_98[2] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_98 + 0x18))();
    }
    if (((puVar6 != (undefined *)0x0) && (((ulong)puVar6 & 1) == 0)) &&
       (*(code **)((ulong)puVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)puVar6 & 0xfffffffffffffffe))(&local_b8,&local_b8,2);
    }
    lVar7 = plVar10[1];
    plVar10[1] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar7 = plVar10[2];
      plVar10[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    lVar7 = plVar10[1];
    plVar10[1] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar7 = plVar10[2];
      plVar10[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


