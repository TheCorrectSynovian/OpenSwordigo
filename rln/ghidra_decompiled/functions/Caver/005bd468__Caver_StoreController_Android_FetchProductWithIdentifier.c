/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bd468
 * Function: Caver::StoreController_Android::FetchProductWithIdentifier
 * Signature: undefined __thiscall FetchProductWithIdentifier(StoreController_Android * this, string * param_1, TargetAction param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreController_Android::FetchProductWithIdentifier(std::string const&,
   Caver::TargetAction<void (std::string const&, boost::shared_ptr<Caver::StoreProduct> const&,
   std::string const&)>) */

void __thiscall
Caver::StoreController_Android::FetchProductWithIdentifier
          (StoreController_Android *this,undefined8 param_1,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined *puVar9;
  bool bVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  code *pcVar16;
  undefined8 local_98;
  long *local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  long *plStack_60;
  undefined8 local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_68 = (long *)0x0;
  plStack_60 = (long *)0x0;
  local_58 = 0;
  std::vector<std::string,std::allocator<std::string>>::_M_insert_aux
            ((vector<std::string,std::allocator<std::string>> *)&local_68,0,param_1);
  local_98 = *param_3;
  local_90 = (long *)param_3[1];
  pcVar16 = *(code **)(*(long *)this + 0x28);
  if (local_90 != (long *)0x0) {
    local_90[2] = local_90[2] + 1;
  }
  local_88 = 0;
  uVar12 = param_3[2];
  if (uVar12 != 0) {
    local_88 = uVar12;
    if ((uVar12 & 1) == 0) {
      (**(code **)(uVar12 & 0xfffffffffffffffe))(param_3 + 3,&local_80,0);
    }
    else {
      local_70 = param_3[5];
      uStack_78 = param_3[4];
      local_80 = param_3[3];
    }
  }
  (*pcVar16)(this,&local_68,&local_98);
  if (local_88 != 0) {
    if (((local_88 & 1) == 0) && (*(code **)(local_88 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(local_88 & 0xfffffffffffffffe))(&local_80,&local_80,2);
    }
    local_88 = 0;
  }
  puVar9 = PTR_pthread_create_007e4e78;
  puVar3 = PTR_DAT_007e5de8;
  plVar4 = local_68;
  plVar5 = plStack_60;
  if ((local_90 != (long *)0x0) &&
     (lVar13 = local_90[2], local_90[2] = lVar13 + -1, puVar9 = PTR_pthread_create_007e4e78,
     puVar3 = PTR_DAT_007e5de8, lVar13 + -1 == 0)) {
    (**(code **)(*local_90 + 0x18))();
    puVar9 = PTR_pthread_create_007e4e78;
    puVar3 = PTR_DAT_007e5de8;
    plVar4 = local_68;
    plVar5 = plStack_60;
  }
  for (; plVar8 = plStack_60, puVar7 = PTR_DAT_007e5de8, puVar6 = PTR_pthread_create_007e4e78,
      plVar4 != plStack_60; plVar4 = plVar4 + 1) {
    puVar11 = (undefined *)(*plVar4 + -0x18);
    bVar10 = puVar11 != PTR_DAT_007e5de8;
    PTR_DAT_007e5de8 = puVar3;
    plStack_60 = plVar5;
    if (bVar10) {
      piVar14 = (int *)(*plVar4 + -8);
      bVar10 = PTR_pthread_create_007e4e78 == (undefined *)0x0;
      PTR_pthread_create_007e4e78 = puVar9;
      if (bVar10) {
        iVar15 = *piVar14;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005bd368 with catch @ 005bd5b8
                        */
        *piVar14 = iVar15 + -1;
      }
      else {
        do {
          iVar15 = *piVar14;
          cVar1 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar10) {
            *piVar14 = iVar15 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005bd2fc with catch @ 005bd5c4
                        */
      puVar9 = PTR_pthread_create_007e4e78;
      if (iVar15 < 1) {
        operator_delete(puVar11);
        puVar9 = PTR_pthread_create_007e4e78;
      }
    }
                    /* try { // try from 005bd5e4 to 006bd60b has its CatchHandler @ 005bd614 */
    PTR_pthread_create_007e4e78 = puVar9;
    puVar9 = PTR_pthread_create_007e4e78;
    puVar3 = PTR_DAT_007e5de8;
    plVar5 = plStack_60;
    plStack_60 = plVar8;
    PTR_DAT_007e5de8 = puVar7;
    PTR_pthread_create_007e4e78 = puVar6;
  }
  PTR_pthread_create_007e4e78 = puVar9;
  PTR_DAT_007e5de8 = puVar3;
  plStack_60 = plVar5;
  if (local_68 != (long *)0x0) {
    operator_delete(local_68);
  }
                    /* try { // try from 005bd60c to 006bd617 has its CatchHandler @ 005bd23c */
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005bd5e4 with catch @ 005bd614
                        */
                    /* catch() { ... } // from try @ 005bd638 with catch @ 005bd618
                       catch() { ... } // from try @ 005bd69c with catch @ 005bd618 */
  return;
}


