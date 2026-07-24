/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005755b4
 * Function: Caver::SceneObjectGroup::GetBindings
 * Signature: undefined __thiscall GetBindings(SceneObjectGroup * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SceneObjectGroup::GetBindings(std::vector<Caver::Binding, std::allocator<Caver::Binding>
   >*) */

void __thiscall Caver::SceneObjectGroup::GetBindings(SceneObjectGroup *this,vector *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_90 [8];
  long local_88 [2];
  undefined4 local_78 [2];
  long local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
                    /* try { // try from 005755b8 to 006755df has its CatchHandler @ 005757a4 */
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00666bb8(local_88,"identifier",auStack_90);
  local_78[0] = 0;
                    /* try { // try from 00575600 to 00675627 has its CatchHandler @ 00575794 */
  FUN_0066a528(&local_70,local_88);
  local_68 = 0x100000001;
  local_60 = 0;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_78);
  }
  else {
    *puVar1 = local_78[0];
    FUN_0066a528(puVar1 + 2,&local_70);
    puVar1[6] = local_60;
                    /* try { // try from 00575648 to 0067566f has its CatchHandler @ 00575784 */
    *(undefined8 *)(puVar1 + 4) = local_68;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  puVar6 = PTR_DAT_007e5de8;
  if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_70 + -8);
                    /* try { // try from 0057598c to 0067598f has its CatchHandler @ 005759a0 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
                    /* try { // try from 00575af0 to 00675b13 has its CatchHandler @ 00575b6c */
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
                    /* try { // try from 00575990 to 006759b3 has its CatchHandler @ 0057597c */
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
                    /* try { // try from 00575690 to 006756b7 has its CatchHandler @ 00575774 */
  if ((undefined *)(local_88[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
                    /* try { // try from 005759b4 to 00675a17 has its CatchHandler @ 005759b4
                       catch(type#1 @ 00000000) { ... } // from try @ 005759b4 with catch @ 005759b4
                       catch(type#1 @ 00000000) { ... } // from try @ 00575a24 with catch @ 005759b4
                       catch(type#1 @ 00000000) { ... } // from try @ 00575aac with catch @ 005759b4
                        */
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
                    /* try { // try from 00575b14 to 00675b8f has its CatchHandler @ 00575abc */
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  FUN_00666bb8(local_88,"hidden",auStack_90);
  local_78[0] = 1;
  FUN_0066a528(&local_70,local_88);
  uVar5 = _DAT_00683958;
  local_60 = 0;
  local_68 = _DAT_00683958;
  puVar1 = *(undefined4 **)(param_1 + 8);
                    /* try { // try from 005756d8 to 006756ff has its CatchHandler @ 00575764 */
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
                    /* try { // try from 00575720 to 00675747 has its CatchHandler @ 0057575c */
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_78);
  }
  else {
    *puVar1 = local_78[0];
    FUN_0066a528(puVar1 + 2,&local_70);
    puVar1[6] = local_60;
    *(undefined8 *)(puVar1 + 4) = local_68;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_70 + -0x18) != puVar6) {
    piVar7 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
                    /* try { // try from 00575748 to 006757d7 has its CatchHandler @ 0057552c */
  FUN_00666bb8(local_88,"locked",auStack_90);
                    /* catch() { ... } // from try @ 00575720 with catch @ 0057575c */
                    /* catch() { ... } // from try @ 005756d8 with catch @ 00575764 */
  local_78[0] = 2;
                    /* catch() { ... } // from try @ 00575690 with catch @ 00575774 */
  FUN_0066a528(&local_70,local_88);
  local_68 = uVar5;
  local_60 = 0;
  puVar1 = *(undefined4 **)(param_1 + 8);
                    /* catch() { ... } // from try @ 00575648 with catch @ 00575784 */
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_78);
  }
  else {
                    /* catch() { ... } // from try @ 00575600 with catch @ 00575794 */
    *puVar1 = local_78[0];
    FUN_0066a528(puVar1 + 2,&local_70);
                    /* catch() { ... } // from try @ 005755b8 with catch @ 005757a4 */
    puVar1[6] = local_60;
    *(undefined8 *)(puVar1 + 4) = local_68;
                    /* catch() { ... } // from try @ 00575570 with catch @ 005757b4 */
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
                    /* try { // try from 005757d8 to 0067596f has its CatchHandler @ 00575978 */
  if ((undefined *)(local_70 + -0x18) != puVar6) {
                    /* try { // try from 00575a18 to 00675a23 has its CatchHandler @ 00575a7c */
    piVar7 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
                    /* catch() { ... } // from try @ 00575af0 with catch @ 00575b6c */
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
                    /* try { // try from 00575a24 to 00675a9f has its CatchHandler @ 005759b4 */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
                    /* try { // try from 00575b90 to 00675b9b has its CatchHandler @ 00575ba8 */
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
                    /* try { // try from 00575b9c to 00675bab has its CatchHandler @ 00575abc */
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  FUN_00666bb8(local_88,&DAT_00695ed0,auStack_90);
  local_78[0] = 3;
  FUN_0066a528(&local_70,local_88);
  local_68 = uVar5;
  local_60 = 0;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_78);
  }
  else {
    *puVar1 = local_78[0];
    FUN_0066a528(puVar1 + 2,&local_70);
    puVar1[6] = local_60;
    *(undefined8 *)(puVar1 + 4) = local_68;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_70 + -0x18) != puVar6) {
    piVar7 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 00575b90 with catch @ 00575ba8 */
      iVar8 = *piVar7;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00575c1c with catch @ 00575bac
                       catch(type#1 @ 00000000) { ... } // from try @ 00575c58 with catch @ 00575bac
                        */
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar6) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00575a18 with catch @ 00575a7c
                        */
    piVar7 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  FUN_00666bb8(local_88,"onLoad",auStack_90);
  local_78[0] = 4;
  FUN_0066a528(&local_70,local_88);
  local_60 = 0;
  local_68 = DAT_00683970;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,puVar1,local_78);
  }
  else {
    *puVar1 = local_78[0];
    FUN_0066a528(puVar1 + 2,&local_70);
    puVar1[6] = local_60;
    *(undefined8 *)(puVar1 + 4) = local_68;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_70 + -0x18) != puVar6) {
                    /* try { // try from 00575aa0 to 00675aab has its CatchHandler @ 00575ab8 */
    piVar7 = (int *)(local_70 + -8);
                    /* try { // try from 00575aac to 00675abb has its CatchHandler @ 005759b4 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 00575be8 to 00675c1b has its CatchHandler @ 00575c44 */
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00575aa0 with catch @ 00575ab8
                        */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
                    /* catch() { ... } // from try @ 00575b14 with catch @ 00575abc
                       catch() { ... } // from try @ 00575b9c with catch @ 00575abc */
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_88[0] + -0x18) != puVar6) {
    piVar7 = (int *)(local_88[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
                    /* try { // try from 00575c1c to 00675c4b has its CatchHandler @ 00575bac */
      operator_delete((undefined *)(local_88[0] + -0x18));
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00575970 to 0067597b has its CatchHandler @ 0057552c */
                    /* catch() { ... } // from try @ 005757d8 with catch @ 00575978 */
                    /* catch() { ... } // from try @ 00575990 with catch @ 0057597c */
  return;
}


