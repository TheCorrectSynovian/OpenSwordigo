/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00541a5c
 * Function: Caver::TabbedMenuView::SetContentView
 * Signature: undefined __thiscall SetContentView(TabbedMenuView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TabbedMenuView::SetContentView(boost::shared_ptr<Caver::MenuViewPage> const&) */

void __thiscall Caver::TabbedMenuView::SetContentView(TabbedMenuView *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *pvVar5;
  int iVar6;
  long lVar7;
  code *pcVar8;
  int *piVar9;
  long *plVar10;
  size_t *psVar11;
  GUILabel *this_00;
  void *pvVar12;
  void *local_60;
  long *local_58;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (*(long **)(this + 0x138) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x138) + 0x78))();
  }
  uVar1 = *(undefined8 *)param_1;
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 8) = *(long *)(lVar7 + 8) + 1;
  }
  plVar10 = *(long **)(this + 0x140);
  *(undefined8 *)(this + 0x138) = uVar1;
  *(long *)(this + 0x140) = lVar7;
  if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
                    /* catch() { ... } // from try @ 0054198c with catch @ 00541ae8 */
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
      pvVar5 = *(void **)(this + 0x138);
      pvVar12 = local_60;
      goto joined_r0x00541af0;
    }
  }
  pvVar5 = *(void **)(this + 0x138);
  pvVar12 = local_60;
joined_r0x00541af0:
  local_60 = pvVar5;
  if (local_60 != (void *)0x0) {
    pcVar8 = *(code **)(*(long *)this + 0x70);
    local_58 = *(long **)(this + 0x140);
    if (local_58 != (long *)0x0) {
      local_58[1] = local_58[1] + 1;
    }
    (*pcVar8)(this,0,&local_60);
    plVar10 = local_58;
    if ((local_58 != (long *)0x0) &&
       (lVar7 = local_58[1], local_58[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_58 + 0x10))(local_58);
      lVar7 = plVar10[2];
                    /* catch() { ... } // from try @ 00541974 with catch @ 00541b54 */
      plVar10[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
                    /* catch() { ... } // from try @ 00541944 with catch @ 00541b64 */
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    this_00 = *(GUILabel **)(this + 0x168);
                    /* catch() { ... } // from try @ 00541914 with catch @ 00541b80 */
    FUN_0066a528(&local_60,*(long *)(this + 0x138) + 0xf0);
    pvVar12 = local_60;
    psVar11 = (size_t *)((long)local_60 + -0x18);
    if ((*psVar11 != *(size_t *)((long)*(void **)(this_00 + 0x100) + -0x18)) ||
       (iVar6 = memcmp(local_60,*(void **)(this_00 + 0x100),*psVar11), iVar6 != 0)) {
      FUN_0066a6a8(this_00 + 0x100,&local_60);
      GUILabel::UpdateText(this_00);
      psVar11 = (size_t *)((long)local_60 + -0x18);
      pvVar12 = local_60;
    }
    if (psVar11 != (size_t *)PTR_DAT_007e5de8) {
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
                    /* catch() { ... } // from try @ 005418b8 with catch @ 00541c60 */
                    /* catch() { ... } // from try @ 005418f8 with catch @ 00541c64
                       catch() { ... } // from try @ 005419c4 with catch @ 00541c64 */
        operator_delete(psVar11);
      }
    }
    UpdateContentLayout(this);
    pvVar12 = local_60;
  }
  local_60 = pvVar12;
                    /* catch() { ... } // from try @ 00541900 with catch @ 00541bec */
  if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 005418cc with catch @ 00541bf0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


