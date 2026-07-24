/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005710cc
 * Function: Caver::SceneObject::GetBindings
 * Signature: undefined __thiscall GetBindings(SceneObject * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SceneObject::GetBindings(std::vector<Caver::Binding, std::allocator<Caver::Binding> >*) */

void __thiscall Caver::SceneObject::GetBindings(SceneObject *this,vector *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_b0 [8];
  long local_a8 [2];
  int local_98 [2];
  long local_90;
  undefined8 local_88;
  int local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  FUN_00666bb8(local_a8,"template",auStack_b0);
                    /* catch() { ... } // from try @ 00570eec with catch @ 0057111c */
                    /* catch() { ... } // from try @ 00571208 with catch @ 00571120
                       catch() { ... } // from try @ 00571294 with catch @ 00571120
                       catch() { ... } // from try @ 00571384 with catch @ 00571120 */
  local_98[0] = 0;
  FUN_0066a528(&local_90,local_a8);
  local_88 = 0x100000001;
  local_80 = 2;
  piVar5 = *(int **)(param_1 + 8);
  if (piVar5 == *(int **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar5,local_98);
  }
  else {
    *piVar5 = local_98[0];
    FUN_0066a528(piVar5 + 2,&local_90);
    piVar5[6] = local_80;
    *(undefined8 *)(piVar5 + 4) = local_88;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_90 + -0x18) != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_90 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar5;
      *piVar5 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar5;
                    /* try { // try from 00571414 to 006714b7 has its CatchHandler @ 00571414
                       catch() { ... } // from try @ 00571414 with catch @ 00571414
                       catch() { ... } // from try @ 005714d8 with catch @ 00571414
                       catch() { ... } // from try @ 00571500 with catch @ 00571414
                       catch() { ... } // from try @ 00571588 with catch @ 00571414
                       catch() { ... } // from try @ 005716c0 with catch @ 00571414 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
                    /* try { // try from 00571534 to 0067153f has its CatchHandler @ 0057162c */
      operator_delete((undefined *)(local_90 + -0x18));
    }
  }
  if ((undefined *)(local_a8[0] + -0x18) != puVar4) {
    piVar5 = (int *)(local_a8[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar5;
      *piVar5 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_a8[0] + -0x18));
    }
  }
  FUN_00666bb8(local_a8,"identifier",auStack_b0);
  local_98[0] = 1;
                    /* try { // try from 005711e0 to 00671207 has its CatchHandler @ 0057133c */
  FUN_0066a528(&local_90,local_a8);
  local_88 = 0x100000001;
  local_80 = 0;
  piVar5 = *(int **)(param_1 + 8);
  if (piVar5 == *(int **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar5,local_98);
  }
  else {
                    /* try { // try from 00571208 to 00671287 has its CatchHandler @ 00571120 */
    *piVar5 = local_98[0];
    FUN_0066a528(piVar5 + 2,&local_90);
    piVar5[6] = local_80;
    *(undefined8 *)(piVar5 + 4) = local_88;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_90 + -0x18) != puVar4) {
    piVar5 = (int *)(local_90 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar5;
                    /* try { // try from 00571560 to 00671587 has its CatchHandler @ 0057161c */
      *piVar5 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_90 + -0x18));
    }
  }
  if ((undefined *)(local_a8[0] + -0x18) != puVar4) {
    piVar5 = (int *)(local_a8[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar5;
      *piVar5 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 00571588 to 0067164f has its CatchHandler @ 00571414 */
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_a8[0] + -0x18));
    }
  }
  FUN_00666bb8(local_a8,"hidden",auStack_b0);
                    /* try { // try from 00571288 to 00671293 has its CatchHandler @ 0057138c */
  local_98[0] = 2;
                    /* try { // try from 00571294 to 0067135b has its CatchHandler @ 00571120 */
  FUN_0066a528(&local_90,local_a8);
  local_80 = 0;
  local_88 = _DAT_00683958;
  piVar5 = *(int **)(param_1 + 8);
  if (piVar5 == *(int **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar5,local_98);
  }
  else {
    *piVar5 = local_98[0];
    FUN_0066a528(piVar5 + 2,&local_90);
    piVar5[6] = local_80;
    *(undefined8 *)(piVar5 + 4) = local_88;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_90 + -0x18) != puVar4) {
    piVar5 = (int *)(local_90 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar5;
      *piVar5 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_90 + -0x18));
    }
  }
  if ((undefined *)(local_a8[0] + -0x18) != puVar4) {
                    /* try { // try from 005714b8 to 006714cb has its CatchHandler @ 0057174c */
    piVar5 = (int *)(local_a8[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar5;
      *piVar5 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_a8[0] + -0x18));
    }
  }
  FUN_00666bb8(local_a8,"onLoad",auStack_b0);
                    /* catch() { ... } // from try @ 005711e0 with catch @ 0057133c */
  local_98[0] = 3;
  FUN_0066a528(&local_90,local_a8);
  local_80 = 0;
  local_88 = DAT_00683970;
                    /* try { // try from 0057135c to 00671383 has its CatchHandler @ 00571388 */
  piVar5 = *(int **)(param_1 + 8);
  if (piVar5 == *(int **)(param_1 + 0x10)) {
    std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
              ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar5,local_98);
  }
  else {
    *piVar5 = local_98[0];
    FUN_0066a528(piVar5 + 2,&local_90);
                    /* try { // try from 00571384 to 006713fb has its CatchHandler @ 00571120 */
    piVar5[6] = local_80;
                    /* catch() { ... } // from try @ 0057135c with catch @ 00571388 */
                    /* catch() { ... } // from try @ 00571288 with catch @ 0057138c */
    *(undefined8 *)(piVar5 + 4) = local_88;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
  }
  if ((undefined *)(local_90 + -0x18) != puVar4) {
                    /* try { // try from 005714d8 to 006714fb has its CatchHandler @ 00571414 */
    piVar5 = (int *)(local_90 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar5;
      *piVar5 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_90 + -0x18));
    }
  }
  if ((undefined *)(local_a8[0] + -0x18) == puVar4) {
LAB_005713d0:
    piVar5 = *(int **)(this + 0x28);
    if (piVar5 == (int *)0x0) goto LAB_00571620;
LAB_005713d8:
    if (*piVar5 < 0x14) {
      iVar7 = *piVar5 + 1;
      if (iVar7 < 1) goto LAB_00571774;
    }
    else {
      iVar7 = 0x15;
    }
  }
  else {
                    /* try { // try from 005714fc to 006714ff has its CatchHandler @ 005716c8 */
                    /* try { // try from 00571500 to 00671533 has its CatchHandler @ 00571414 */
    piVar5 = (int *)(local_a8[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar5;
      *piVar5 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (0 < iVar7) goto LAB_005713d0;
    operator_delete((undefined *)(local_a8[0] + -0x18));
    piVar5 = *(int **)(this + 0x28);
                    /* catch() { ... } // from try @ 00571560 with catch @ 0057161c */
    if (piVar5 != (int *)0x0) goto LAB_005713d8;
LAB_00571620:
    iVar7 = 1;
  }
                    /* catch() { ... } // from try @ 00571534 with catch @ 0057162c */
  iVar8 = 0;
  do {
    FUN_00666bb8(local_a8,"group",auStack_b0);
                    /* catch() { ... } // from try @ 005714d0 with catch @ 005716dc */
    local_98[0] = iVar8 + 4;
    FUN_0066a528(&local_90,local_a8);
    local_88 = 0x100000001;
    local_80 = 5;
    piVar5 = *(int **)(param_1 + 8);
    if (piVar5 == *(int **)(param_1 + 0x10)) {
      std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
                ((vector<Caver::Binding,std::allocator<Caver::Binding>> *)param_1,piVar5,local_98);
    }
    else {
      *piVar5 = local_98[0];
      FUN_0066a528(piVar5 + 2,&local_90);
      piVar5[6] = local_80;
      *(undefined8 *)(piVar5 + 4) = local_88;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x20;
    }
                    /* catch() { ... } // from try @ 005714b8 with catch @ 0057174c */
    if ((undefined *)(local_90 + -0x18) != puVar4) {
      piVar5 = (int *)(local_90 + -8);
                    /* try { // try from 00571650 to 006716bf has its CatchHandler @ 005716c4 */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar5;
        *piVar5 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = iVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_90 + -0x18));
      }
    }
    if ((undefined *)(local_a8[0] + -0x18) != puVar4) {
      piVar5 = (int *)(local_a8[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar5;
        *piVar5 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = iVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar6 < 1) {
                    /* try { // try from 005716c0 to 00671757 has its CatchHandler @ 00571414 */
                    /* catch() { ... } // from try @ 00571650 with catch @ 005716c4 */
        operator_delete((undefined *)(local_a8[0] + -0x18));
                    /* catch() { ... } // from try @ 005714fc with catch @ 005716c8 */
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < iVar7);
LAB_00571774:
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


