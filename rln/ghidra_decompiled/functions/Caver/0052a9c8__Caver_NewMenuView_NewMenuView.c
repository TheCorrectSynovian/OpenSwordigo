/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052a9c8
 * Function: Caver::NewMenuView::NewMenuView
 * Signature: undefined __thiscall NewMenuView(NewMenuView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::NewMenuView::NewMenuView() */

void __thiscall Caver::NewMenuView::NewMenuView(NewMenuView *this)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  GUIButton *pGVar6;
  string *psVar7;
  ulong uVar8;
  long *plVar9;
  code *pcVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  ulong uVar14;
  GUIButton *local_e0;
  long *local_d8;
  undefined8 uStack_d0;
  NewMenuView *local_c8;
  long *local_c0;
  GUIButton *local_b8;
  long *local_b0;
  long *local_a0;
  undefined8 uStack_98;
  NewMenuView *local_90;
  long local_88 [4];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  GUIView::GUIView((GUIView *)this);
                    /* try { // try from 0052aa00 to 0062aa03 has its CatchHandler @ 0052aa10 */
  *(undefined **)this = PTR_vtable_007e7d68 + 0x10;
                    /* catch() { ... } // from try @ 0052aa00 with catch @ 0052aa10 */
  *(undefined8 *)(this + 0xf8) = 0;
                    /* try { // try from 0052aa14 to 0062aa1b has its CatchHandler @ 0052aa24 */
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
                    /* try { // try from 0052aa1c to 0062aa27 has its CatchHandler @ 0052a9bc */
                    /* catch() { ... } // from try @ 0052aa14 with catch @ 0052aa24 */
                    /* try { // try from 0052aa28 to 0062aa6f has its CatchHandler @ 0052aa28
                       catch(type#1 @ 00000000) { ... } // from try @ 0052aa28 with catch @ 0052aa28
                       catch(type#1 @ 00000000) { ... } // from try @ 0052aa8c with catch @ 0052aa28
                       catch(type#1 @ 00000000) { ... } // from try @ 0052ab94 with catch @ 0052aa28
                        */
  FUN_00666bb8(local_88,&DAT_0068e4f6,&local_e0);
  FUN_00666bb8(local_88 + 1,&DAT_00691f83,&local_a0);
  FUN_00666bb8(local_88 + 2,"inventory",&local_b8);
                    /* try { // try from 0052aa70 to 0062aa8b has its CatchHandler @ 0052ab88 */
  FUN_00666bb8(local_88 + 3,"inventory",&local_c0);
  puVar4 = PTR_ButtonPressed_007e7638;
  puVar3 = PTR_DAT_007e5de8;
                    /* try { // try from 0052aa8c to 0062ab8b has its CatchHandler @ 0052aa28 */
  uVar14 = 0;
  do {
    pGVar6 = operator_new(0x1d0);
    GUIButton::GUIButton(pGVar6,1);
    boost::shared_ptr<Caver::GUIButton>::shared_ptr<Caver::GUIButton>
              ((shared_ptr<Caver::GUIButton> *)&local_b8,pGVar6);
    psVar7 = (string *)TextureLibrary::sharedLibrary();
    FUN_0035a030(&local_a0,"ui_tab_",local_88 + uVar14);
    FUN_0066a528(&local_e0,&local_a0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0052aa70 with catch @ 0052ab88
                        */
                    /* try { // try from 0052ab8c to 0062ab93 has its CatchHandler @ 0052ab9c */
    FUN_006677d4(&local_e0,"_selected",9);
                    /* try { // try from 0052ab94 to 0062ab9f has its CatchHandler @ 0052aa28 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0052ab8c with catch @ 0052ab9c
                        */
                    /* catch() { ... } // from try @ 0052abc4 with catch @ 0052aba0
                       catch() { ... } // from try @ 0052abe0 with catch @ 0052aba0 */
    TextureLibrary::TextureForName(psVar7,SUB81(&local_e0,0));
    if (local_e0 + -0x18 != (GUIButton *)puVar3) {
      pGVar6 = local_e0 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar13 = *(int *)pGVar6;
        *(int *)pGVar6 = iVar13 + -1;
      }
      else {
        do {
          iVar13 = *(int *)pGVar6;
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pGVar6,0x10);
          if (bVar5) {
            *(int *)pGVar6 = iVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar13 < 1) {
        operator_delete(local_e0 + -0x18);
      }
    }
                    /* try { // try from 0052abc0 to 0062abc3 has its CatchHandler @ 0052abd4 */
                    /* try { // try from 0052abc4 to 0062abd7 has its CatchHandler @ 0052aba0 */
    if (local_a0 + -3 != (long *)puVar3) {
      plVar9 = local_a0 + -1;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar13 = (int)*plVar9;
        *(int *)plVar9 = iVar13 + -1;
      }
      else {
        do {
          iVar13 = (int)*plVar9;
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *(int *)plVar9 = iVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar13 < 1) {
        operator_delete(local_a0 + -3);
      }
    }
    GUIButton::SetImage(local_b8,(intrusive_ptr *)&local_c0);
                    /* catch() { ... } // from try @ 0052abc0 with catch @ 0052abd4 */
                    /* try { // try from 0052abd8 to 0062abdf has its CatchHandler @ 0052abe8 */
    local_d8 = *(long **)((long)local_c0 + 0x54);
    local_e0 = (GUIButton *)0x0;
                    /* try { // try from 0052abe0 to 0062abeb has its CatchHandler @ 0052aba0 */
    GUIView::SetFrame((GUIView *)local_b8,(Rectangle *)&local_e0);
    pGVar6 = local_b8;
                    /* catch() { ... } // from try @ 0052abd8 with catch @ 0052abe8 */
    local_e0 = (GUIButton *)0x0;
    uStack_98 = 0;
    local_a0 = (long *)puVar4;
    local_90 = this;
    uVar8 = boost::detail::function::has_empty_target(&local_a0);
    if ((uVar8 & 1) == 0) {
      local_c8 = local_90;
      uStack_d0 = uStack_98;
      local_d8 = local_a0;
      local_e0 = (GUIButton *)PTR_stored_vtable_007e5d50;
    }
    else {
      local_e0 = (GUIButton *)0x0;
    }
    GUIControl::AddTargetActionForControlEvent((GUIControl *)pGVar6,this,&local_e0,1);
    if (((local_e0 != (GUIButton *)0x0) && (((ulong)local_e0 & 1) == 0)) &&
       (*(code **)((ulong)local_e0 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)local_e0 & 0xfffffffffffffffe))(&local_d8,&local_d8,2);
    }
    pcVar10 = *(code **)(*(long *)this + 0x60);
    local_e0 = local_b8;
    local_d8 = local_b0;
    if (local_b0 != (long *)0x0) {
      local_b0[1] = local_b0[1] + 1;
    }
    (*pcVar10)(this,&local_e0);
    plVar9 = local_d8;
    if ((local_d8 != (long *)0x0) &&
       (lVar11 = local_d8[1], local_d8[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*local_d8 + 0x10))(local_d8);
      lVar11 = plVar9[2];
      plVar9[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    plVar9 = *(long **)(this + 0x100);
    if (plVar9 == *(long **)(this + 0x108)) {
      std::
      vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
      ::_M_insert_aux((vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
                       *)(this + 0xf8),plVar9,&local_b8);
                    /* catch() { ... } // from try @ 0052ad80 with catch @ 0052ad30 */
    }
    else {
      *plVar9 = (long)local_b8;
      plVar9[1] = (long)local_b0;
      if (local_b0 != (long *)0x0) {
        local_b0[1] = local_b0[1] + 1;
      }
      *(long **)(this + 0x100) = plVar9 + 2;
    }
    if ((local_c0 != (long *)0x0) &&
       (iVar13 = (int)local_c0[1] + -1, *(int *)(local_c0 + 1) = iVar13, iVar13 == 0)) {
                    /* try { // try from 0052ad50 to 0062ad53 has its CatchHandler @ 0052ad74 */
      (**(code **)(*local_c0 + 8))();
    }
                    /* try { // try from 0052ad54 to 0062ad5b has its CatchHandler @ 0052ad6c */
    plVar9 = local_b0;
    if ((local_b0 != (long *)0x0) &&
       (lVar11 = local_b0[1], local_b0[1] = lVar11 + -1, lVar11 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0052ad54 with catch @ 0052ad6c */
                    /* catch() { ... } // from try @ 0052ad50 with catch @ 0052ad74 */
                    /* try { // try from 0052ad78 to 0062ad7f has its CatchHandler @ 0052ad90 */
      (**(code **)(*local_b0 + 0x10))(local_b0);
      lVar11 = plVar9[2];
                    /* try { // try from 0052ad80 to 0062ad93 has its CatchHandler @ 0052ad30 */
      plVar9[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
                    /* catch() { ... } // from try @ 0052ad78 with catch @ 0052ad90 */
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    bVar5 = uVar14 < 3;
    uVar14 = uVar14 + 1;
  } while (bVar5);
  if ((undefined *)(local_88[3] + -0x18) != puVar3) {
    piVar12 = (int *)(local_88[3] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar12;
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = iVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete((undefined *)(local_88[3] + -0x18));
    }
  }
  if ((undefined *)(local_88[2] + -0x18) != puVar3) {
    piVar12 = (int *)(local_88[2] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar12;
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = iVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete((undefined *)(local_88[2] + -0x18));
    }
  }
  if ((undefined *)(local_88[1] + -0x18) != puVar3) {
    piVar12 = (int *)(local_88[1] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar12;
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = iVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete((undefined *)(local_88[1] + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar3) {
    piVar12 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar12;
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = iVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


