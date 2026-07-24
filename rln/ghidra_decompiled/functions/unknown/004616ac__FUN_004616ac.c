/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004616ac
 * Function: FUN_004616ac
 * Signature: undefined FUN_004616ac(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_004616ac(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  ProgramState *this;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  ItemInfoView *this_00;
  long lVar9;
  int *piVar10;
  GUIView *pGVar11;
  GUIView *local_80;
  long *local_78;
  ItemInfoView *local_70;
  long *local_68;
  long local_60;
  long *local_58;
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
                    /* try { // try from 004616d8 to 005616e3 has its CatchHandler @ 0046189c */
  FUN_00666bb8(&local_60,"gameController",&local_80);
                    /* try { // try from 004616ec to 005616f7 has its CatchHandler @ 00461898 */
  lVar6 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)&local_60);
  puVar4 = PTR_DAT_007e5de8;
                    /* try { // try from 0046170c to 00561717 has its CatchHandler @ 0046182c */
  if ((undefined *)(local_60 + -0x18) != PTR_DAT_007e5de8) {
    piVar10 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar10;
      *piVar10 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
                    /* try { // try from 00461718 to 005618af has its CatchHandler @ 004616a4 */
  Caver::ProgramState::StringAtStackIndex((int)this);
  iVar5 = Caver::ProgramState::IntAtStackIndex(this,2);
  puVar7 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,3);
  if (puVar7 == (undefined8 *)0x0) {
    pGVar11 = (GUIView *)0x0;
  }
  else {
    pGVar11 = (GUIView *)*puVar7;
  }
  plVar8 = (long *)(local_50 + -0x18);
  if (*plVar8 != 0) {
    puVar7 = *(undefined8 **)(lVar6 + 0xa8);
    plVar8 = *(long **)(lVar6 + 0xb0);
    if (plVar8 != (long *)0x0) {
      plVar8[1] = plVar8[1] + 1;
    }
    Caver::GameData::ItemForName((string *)*puVar7);
    if ((plVar8 != (long *)0x0) && (lVar9 = plVar8[1], plVar8[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      lVar9 = plVar8[2];
      plVar8[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
    if (local_60 != 0) {
      this_00 = operator_new(0x180);
      Caver::ItemInfoView::ItemInfoView(this_00);
      boost::shared_ptr<Caver::ItemInfoView>::shared_ptr<Caver::ItemInfoView>
                ((shared_ptr<Caver::ItemInfoView> *)&local_70,this_00);
      Caver::ItemInfoView::Init(local_70);
      Caver::ItemInfoView::SetItem(local_70,(shared_ptr *)&local_60);
      if (pGVar11 != (GUIView *)0x0) {
        *(int *)(pGVar11 + 8) = *(int *)(pGVar11 + 8) + 1;
      }
      lVar9 = *(long *)(lVar6 + 0xa8);
      plVar8 = *(long **)(lVar6 + 0xb0);
      if (plVar8 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0046170c with catch @ 0046182c */
        plVar8[1] = plVar8[1] + 1;
      }
      local_80 = pGVar11;
      Caver::ItemInfoView::EnablePurchasing
                (local_70,iVar5,(intrusive_ptr *)&local_80,iVar5 <= *(int *)(lVar9 + 0xb0));
      if ((plVar8 != (long *)0x0) && (lVar9 = plVar8[1], plVar8[1] = lVar9 + -1, lVar9 + -1 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        lVar9 = plVar8[2];
        plVar8[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
      }
                    /* catch() { ... } // from try @ 004616ec with catch @ 00461898 */
                    /* catch() { ... } // from try @ 004616d8 with catch @ 0046189c */
      if ((local_80 != (GUIView *)0x0) &&
         (iVar5 = *(int *)(local_80 + 8), *(int *)(local_80 + 8) = iVar5 + -1, iVar5 + -1 == 0)) {
        (**(code **)(*(long *)local_80 + 8))();
      }
      Caver::GUIView::SetFrame((GUIView *)local_70,(Rectangle *)(*(long *)(lVar6 + 0xd8) + 0x84));
      pGVar11 = *(GUIView **)(lVar6 + 0xd8);
      local_80 = (GUIView *)local_70;
      local_78 = local_68;
      if (local_68 != (long *)0x0) {
        local_68[1] = local_68[1] + 1;
      }
      Caver::GUIView::PresentModalView(pGVar11,(shared_ptr *)&local_80,true);
      plVar8 = local_78;
      if ((local_78 != (long *)0x0) &&
         (lVar6 = local_78[1], local_78[1] = lVar6 + -1, lVar6 + -1 == 0)) {
        (**(code **)(*local_78 + 0x10))(local_78);
        lVar6 = plVar8[2];
        plVar8[2] = lVar6 + -1;
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
      }
      if ((local_68 != (long *)0x0) &&
         (lVar6 = local_68[1], local_68[1] = lVar6 + -1, lVar6 + -1 == 0)) {
        (**(code **)(*local_68 + 0x10))(local_68);
        lVar6 = local_68[2];
        local_68[2] = lVar6 + -1;
        if (lVar6 + -1 == 0) {
          (**(code **)(*local_68 + 0x18))(local_68);
        }
      }
    }
    if ((local_58 != (long *)0x0) &&
       (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*local_58 + 0x10))(local_58);
      lVar6 = local_58[2];
      local_58[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*local_58 + 0x18))(local_58);
      }
    }
    plVar8 = (long *)(local_50 + -0x18);
  }
  if (plVar8 != (long *)puVar4) {
    piVar10 = (int *)(local_50 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar10;
      *piVar10 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete(plVar8);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


