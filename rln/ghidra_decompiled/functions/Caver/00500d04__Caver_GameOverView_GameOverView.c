/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00500d04
 * Function: Caver::GameOverView::GameOverView
 * Signature: undefined __thiscall GameOverView(GameOverView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GameOverView::GameOverView() */

void __thiscall Caver::GameOverView::GameOverView(GameOverView *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  FontLibrary *this_00;
  long lVar6;
  code *pcVar7;
  int *piVar8;
  long *plVar9;
  GUILabel *pGVar10;
  size_t *psVar11;
  void *pvVar12;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [8];
  long local_68;
  void *local_60;
  long *local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar4 = PTR_vtable_007e4980;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined **)this = puVar4 + 0x10;
  FUN_00666bb8(&local_68,&DAT_0068fbeb,auStack_70);
  local_78 = 0xff000000;
  uStack_74 = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_60,&local_68,&uStack_74,&local_78);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  plVar9 = *(long **)(this + 0x100);
  *(void **)(this + 0xf8) = local_60;
  *(long **)(this + 0x100) = local_58;
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  plVar9 = local_58;
  if ((local_58 != (long *)0x0) && (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_68 + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar8;
      *piVar8 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  pGVar10 = *(GUILabel **)(this + 0xf8);
  this_00 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::LargeDefaultFont(this_00);
  if (local_60 != *(void **)(pGVar10 + 0xf0)) {
                    /* catch() { ... } // from try @ 00500cbc with catch @ 00500e60 */
    if (local_58 != (long *)0x0) {
      local_58[1] = local_58[1] + 1;
    }
    plVar9 = *(long **)(pGVar10 + 0xf8);
    *(void **)(pGVar10 + 0xf0) = local_60;
    *(long **)(pGVar10 + 0xf8) = local_58;
    if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar6 = plVar9[2];
      plVar9[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    GUILabel::UpdateText(pGVar10);
  }
  plVar9 = local_58;
  if ((local_58 != (long *)0x0) && (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  pGVar10 = *(GUILabel **)(this + 0xf8);
  FUN_00666bb8(&local_60,"Game Over",auStack_50);
  pvVar12 = local_60;
  psVar11 = (size_t *)((long)local_60 + -0x18);
  if ((*psVar11 != *(size_t *)((long)*(void **)(pGVar10 + 0x100) + -0x18)) ||
     (iVar5 = memcmp(local_60,*(void **)(pGVar10 + 0x100),*psVar11), iVar5 != 0)) {
    FUN_0066a6a8(pGVar10 + 0x100,&local_60);
    GUILabel::UpdateText(pGVar10);
    psVar11 = (size_t *)((long)local_60 + -0x18);
    pvVar12 = local_60;
  }
  if (psVar11 != (size_t *)puVar4) {
    piVar8 = (int *)((long)pvVar12 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar8;
      *piVar8 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete(psVar11);
    }
  }
  pGVar10 = *(GUILabel **)(this + 0xf8);
  GameInterfaceBuilder::TextGradient(_DAT_00684434,1.0,0.75,1.0);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  plVar9 = *(long **)(pGVar10 + 0x118);
  *(void **)(pGVar10 + 0x110) = local_60;
  *(long **)(pGVar10 + 0x118) = local_58;
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  GUILabel::UpdateText(pGVar10);
  if ((local_58 != (long *)0x0) && (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar6 = local_58[2];
    local_58[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*local_58 + 0x18))(local_58);
    }
  }
  pGVar10 = *(GUILabel **)(this + 0xf8);
  *(undefined4 *)(pGVar10 + 0x130) = 4;
  GUILabel::UpdateBounds(pGVar10);
  local_60 = *(void **)(this + 0xf8);
  pcVar7 = *(code **)(*(long *)this + 0x60);
  local_58 = *(long **)(this + 0x100);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  (*pcVar7)(this,&local_60);
  plVar9 = local_58;
  if ((local_58 != (long *)0x0) && (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


