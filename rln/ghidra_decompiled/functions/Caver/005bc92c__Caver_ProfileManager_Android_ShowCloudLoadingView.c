/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bc92c
 * Function: Caver::ProfileManager_Android::ShowCloudLoadingView
 * Signature: undefined __thiscall ShowCloudLoadingView(ProfileManager_Android * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager_Android::ShowCloudLoadingView() */

void __thiscall Caver::ProfileManager_Android::ShowCloudLoadingView(ProfileManager_Android *this)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ProfileManagerLoadingViewController *this_00;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  GUIControl *pGVar10;
  undefined *local_80;
  long *local_78;
  undefined8 uStack_70;
  ProfileManager_Android *local_68;
  long *local_60;
  undefined8 uStack_58;
  ProfileManager_Android *local_50;
  long local_48;
  
                    /* try { // try from 005bc92c to 006bc95f has its CatchHandler @ 005bce5c */
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (*(long *)(this + 0x90) == 0) {
    lVar9 = *(long *)(this + 0x38);
    plVar2 = *(long **)(this + 0x40);
    if (plVar2 != (long *)0x0) {
      plVar2[1] = plVar2[1] + 1;
    }
    if (lVar9 != 0) {
      this_00 = operator_new(0x60);
      ProfileManagerLoadingViewController::ProfileManagerLoadingViewController(this_00);
      boost::shared_ptr<Caver::ProfileManagerLoadingViewController>::
      shared_ptr<Caver::ProfileManagerLoadingViewController>
                ((shared_ptr<Caver::ProfileManagerLoadingViewController> *)&local_80,this_00);
      puVar1 = *(undefined **)(this + 0x90);
      plVar3 = *(long **)(this + 0x98);
      *(undefined **)(this + 0x90) = local_80;
      *(long **)(this + 0x98) = local_78;
      if ((plVar3 != (long *)0x0) && (lVar7 = plVar3[1], plVar3[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        local_80 = puVar1;
        local_78 = plVar3;
        (**(code **)(*plVar3 + 0x10))(plVar3);
        lVar7 = plVar3[2];
        plVar3[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
      plVar3 = *(long **)(lVar9 + 0x100);
      plVar4 = *(long **)(lVar9 + 0x108);
      if (plVar4 != (long *)0x0) {
        plVar4[1] = plVar4[1] + 1;
      }
      local_80 = *(undefined **)(this + 0x90);
      pcVar8 = *(code **)(*plVar3 + 0x50);
                    /* try { // try from 005bca3c to 006bcaa7 has its CatchHandler @ 005bcfa0 */
      local_78 = *(long **)(this + 0x98);
      if (local_78 != (long *)0x0) {
        local_78[1] = local_78[1] + 1;
      }
      (*pcVar8)(plVar3,&local_80);
      plVar3 = local_78;
      if ((local_78 != (long *)0x0) &&
         (lVar9 = local_78[1], local_78[1] = lVar9 + -1, lVar9 + -1 == 0)) {
        (**(code **)(*local_78 + 0x10))(local_78);
        lVar9 = plVar3[2];
        plVar3[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
                    /* try { // try from 005bcab0 to 006bcabb has its CatchHandler @ 005bce80 */
      if ((plVar4 != (long *)0x0) && (lVar9 = plVar4[1], plVar4[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* try { // try from 005bcac0 to 006bcac7 has its CatchHandler @ 005bce70 */
        (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* try { // try from 005bcac8 to 006bcadb has its CatchHandler @ 005bce90 */
        lVar9 = plVar4[2];
        plVar4[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      pGVar10 = *(GUIControl **)(*(long *)(*(long *)(this + 0x90) + 0x50) + 0x100);
      local_80 = (undefined *)0x0;
      uStack_58 = 0;
      local_60 = (long *)PTR_SkipLoadingButtonPressed_007e4cc0;
      local_50 = this;
      uVar6 = boost::detail::function::has_empty_target(&local_60);
      if ((uVar6 & 1) == 0) {
        local_68 = local_50;
        uStack_70 = uStack_58;
        local_78 = local_60;
        local_80 = PTR_stored_vtable_007e50c0;
      }
      else {
        local_80 = (undefined *)0x0;
      }
      GUIControl::AddTargetActionForControlEvent(pGVar10,this,&local_80,0x40);
                    /* try { // try from 005bcb58 to 006bcb6f has its CatchHandler @ 005bce50 */
      if (local_80 != (undefined *)0x0) {
        if ((((ulong)local_80 & 1) == 0) &&
           (*(code **)((ulong)local_80 & 0xfffffffffffffffe) != (code *)0x0)) {
          (**(code **)((ulong)local_80 & 0xfffffffffffffffe))(&local_78,&local_78,2);
        }
        local_80 = (undefined *)0x0;
      }
    }
    if ((plVar2 != (long *)0x0) && (lVar9 = plVar2[1], plVar2[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar9 = plVar2[2];
      plVar2[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


