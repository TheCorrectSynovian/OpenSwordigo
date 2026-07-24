/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045f404
 * Function: FUN_0045f404
 * Signature: undefined FUN_0045f404(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0045f404(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  QuestText *pQVar12;
  int *piVar13;
  int iVar14;
  long local_90;
  long local_88;
  long *local_80;
  long local_78 [2];
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  puVar10 = (undefined8 *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(&local_88,"gameController",local_78);
  lVar11 = Caver::ProgramTable::PointerForKey((ProgramTable *)(puVar10 + 5),(string *)&local_88);
  puVar9 = PTR_DAT_007e5de8;
  if ((undefined *)(local_88 + -0x18) != PTR_DAT_007e5de8) {
    piVar13 = (int *)(local_88 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar6) {
          *piVar13 = iVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_88 + -0x18));
      lVar1 = *(long *)(lVar11 + 0xa8);
      plVar3 = *(long **)(lVar11 + 0xb0);
      goto joined_r0x0045f6e8;
    }
  }
  lVar1 = *(long *)(lVar11 + 0xa8);
  plVar3 = *(long **)(lVar11 + 0xb0);
joined_r0x0045f6e8:
  if ((plVar3 != (long *)0x0) && (plVar3[1] == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar11 = plVar3[2];
    plVar3[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  Caver::ProgramState::StringAtStackIndex((int)puVar10);
  pQVar12 = operator_new(0x20);
  *(undefined8 *)(pQVar12 + 0x10) = 0;
  *(undefined8 *)(pQVar12 + 0x18) = 0;
  *(undefined **)pQVar12 = puVar9 + 0x18;
  *(undefined8 *)(pQVar12 + 8) = 0;
  boost::shared_ptr<Caver::QuestText>::shared_ptr<Caver::QuestText>
            ((shared_ptr<Caver::QuestText> *)&local_88,pQVar12);
  FUN_0066a6a8(local_88,local_78);
  puVar8 = PTR_pthread_create_007e4e78;
  local_68 = *puVar10;
  local_60 = 2;
  do {
    while( true ) {
      Caver::ProgramTable::StringAtIndex((int)&local_68);
      lVar11 = local_88;
      if (*(long *)(local_90 + -0x18) == 0) {
        bVar6 = true;
      }
      else {
        lVar2 = *(long *)(local_88 + 0x10);
        if (lVar2 == *(long *)(local_88 + 0x18)) {
          std::vector<std::string,std::allocator<std::string>>::_M_insert_aux
                    ((vector<std::string,std::allocator<std::string>> *)(local_88 + 8),lVar2,
                     &local_90);
          bVar6 = false;
        }
        else {
          FUN_0066a528(lVar2,&local_90);
          bVar6 = false;
          *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 8;
        }
      }
      if ((undefined *)(local_90 + -0x18) != puVar9) break;
LAB_0045f584:
      if (bVar6) goto LAB_0045f5d0;
    }
    piVar13 = (int *)(local_90 + -8);
    if (puVar8 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar5) {
          *piVar13 = iVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (0 < iVar14) goto LAB_0045f584;
    operator_delete((undefined *)(local_90 + -0x18));
  } while (!bVar6);
LAB_0045f5d0:
  plVar3 = *(long **)(lVar1 + 0x1b8);
                    /* try { // try from 0045f5d4 to 0055f5e7 has its CatchHandler @ 0045f8d8 */
  if (plVar3 == *(long **)(lVar1 + 0x1c0)) {
    std::
    vector<boost::shared_ptr<Caver::QuestText>,std::allocator<boost::shared_ptr<Caver::QuestText>>>
    ::_M_insert_aux((vector<boost::shared_ptr<Caver::QuestText>,std::allocator<boost::shared_ptr<Caver::QuestText>>>
                     *)(lVar1 + 0x1b0),plVar3,&local_88);
  }
  else {
    *plVar3 = local_88;
                    /* try { // try from 0045f5e8 to 0055f753 has its CatchHandler @ 0045f148 */
    plVar3[1] = (long)local_80;
    if (local_80 != (long *)0x0) {
      local_80[1] = local_80[1] + 1;
    }
    *(long **)(lVar1 + 0x1b8) = plVar3 + 2;
  }
  if ((local_80 != (long *)0x0) &&
     (lVar11 = local_80[1], local_80[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    lVar11 = local_80[2];
    local_80[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*local_80 + 0x18))(local_80);
    }
  }
  if ((undefined *)(local_78[0] + -0x18) != puVar9) {
    piVar13 = (int *)(local_78[0] + -8);
    if (puVar8 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar6) {
          *piVar13 = iVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


