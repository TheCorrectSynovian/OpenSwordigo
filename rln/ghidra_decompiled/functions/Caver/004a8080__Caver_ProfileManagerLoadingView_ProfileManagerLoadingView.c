/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a8080
 * Function: Caver::ProfileManagerLoadingView::ProfileManagerLoadingView
 * Signature: undefined __thiscall ProfileManagerLoadingView(ProfileManagerLoadingView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManagerLoadingView::ProfileManagerLoadingView() */

void __thiscall
Caver::ProfileManagerLoadingView::ProfileManagerLoadingView(ProfileManagerLoadingView *this)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  code *pcVar8;
  int *piVar9;
  long *plVar10;
  size_t *psVar11;
  GUILabel *this_00;
  void *pvVar12;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [8];
  long local_68;
  void *local_60;
  long *local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
                    /* try { // try from 004a8088 to 005a80bf has its CatchHandler @ 004a8d14 */
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  GUIView::GUIView((GUIView *)this);
  uVar5 = DAT_00689370;
                    /* try { // try from 004a80c0 to 005a907f has its CatchHandler @ 004a724c */
  puVar1 = PTR_vtable_007e6130 + 0x10;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined **)this = puVar1;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x114) = uVar5;
  FUN_00666bb8(&local_68,&DAT_0068fbeb,auStack_70);
  local_78 = 0xff000000;
  uStack_74 = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_60,&local_68,&uStack_74,&local_78);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  plVar10 = *(long **)(this + 0xf8);
  *(void **)(this + 0xf0) = local_60;
  *(long **)(this + 0xf8) = local_58;
  if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  if ((local_58 != (long *)0x0) && (lVar7 = local_58[1], local_58[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar7 = local_58[2];
    local_58[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*local_58 + 0x18))(local_58);
    }
  }
  puVar1 = PTR_DAT_007e5de8;
  if ((undefined *)(local_68 + -0x18) != PTR_DAT_007e5de8) {
    piVar9 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar9;
      *piVar9 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  this_00 = *(GUILabel **)(this + 0xf0);
  FUN_00666bb8(&local_60,"Downloading saves from iCloud...",auStack_50);
  pvVar12 = local_60;
  psVar11 = (size_t *)((long)local_60 + -0x18);
  if ((*psVar11 != *(size_t *)((long)*(void **)(this_00 + 0x100) + -0x18)) ||
     (iVar6 = memcmp(local_60,*(void **)(this_00 + 0x100),*psVar11), iVar6 != 0)) {
    FUN_0066a6a8(this_00 + 0x100,&local_60);
    GUILabel::UpdateText(this_00);
    psVar11 = (size_t *)((long)local_60 + -0x18);
    pvVar12 = local_60;
  }
  if (psVar11 != (size_t *)puVar1) {
    piVar9 = (int *)((long)pvVar12 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar9;
      *piVar9 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(psVar11);
    }
  }
  local_60 = *(void **)(this + 0xf0);
  pcVar8 = *(code **)(*(long *)this + 0x60);
  local_58 = *(long **)(this + 0xf8);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  (*pcVar8)(this,&local_60);
  plVar10 = local_58;
  if ((local_58 != (long *)0x0) && (lVar7 = local_58[1], local_58[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  FUN_00666bb8(&local_68,&DAT_006919f1,auStack_70);
  GameInterfaceBuilder::FramedButtonWithTitle((string *)&local_68,false);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  plVar10 = *(long **)(this + 0x108);
  *(void **)(this + 0x100) = local_60;
  *(long **)(this + 0x108) = local_58;
  if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  plVar10 = local_58;
  if ((local_58 != (long *)0x0) && (lVar7 = local_58[1], local_58[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  if ((undefined *)(local_68 + -0x18) != puVar1) {
    piVar9 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar9;
      *piVar9 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  local_7c = 0xcccccccc;
  GUIButton::SetTintColor(*(GUIButton **)(this + 0x100),&local_7c);
  local_80 = 0xffffffff;
  GUIButton::SetTextColor(*(GUIButton **)(this + 0x100),&local_80);
  local_60 = *(void **)(this + 0x100);
  pcVar8 = *(code **)(*(long *)this + 0x60);
  local_58 = *(long **)(this + 0x108);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  (*pcVar8)(this,&local_60);
  plVar10 = local_58;
  if ((local_58 != (long *)0x0) && (lVar7 = local_58[1], local_58[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  *(undefined1 *)(*(long *)(this + 0x100) + 0xe4) = 1;
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


