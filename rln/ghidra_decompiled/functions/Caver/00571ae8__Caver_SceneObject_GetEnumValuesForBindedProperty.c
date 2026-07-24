/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00571ae8
 * Function: Caver::SceneObject::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(SceneObject * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::GetEnumValuesForBindedProperty(int, std::vector<Caver::BindingValue,
   std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::SceneObject::GetEnumValuesForBindedProperty(SceneObject *this,int param_1,vector *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  string *extraout_x1;
  string *extraout_x1_00;
  long lVar11;
  int iVar12;
  int *piVar13;
  long *plVar14;
  long local_a8;
  long *local_a0;
  long *local_98;
  undefined8 uStack_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  long *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
                    /* catch() { ... } // from try @ 00571ba0 with catch @ 00571af0 */
  lVar4 = tpidr_el0;
                    /* try { // try from 00571b08 to 00671b0f has its CatchHandler @ 00571bac */
  local_58 = *(long *)(lVar4 + 0x28);
  if ((param_1 - 4U < 0x15) && (*(long *)(this + 0x20) != 0)) {
                    /* try { // try from 00571b3c to 00671b47 has its CatchHandler @ 00571b54 */
    FUN_00666bb8(&local_a0,"nil",auStack_60);
    BindingValue::ValueWithString((BindingValue *)&local_a0,extraout_x1);
    puVar1 = *(undefined4 **)(param_2 + 8);
                    /* catch() { ... } // from try @ 00571b3c with catch @ 00571b54 */
    if (puVar1 == *(undefined4 **)(param_2 + 0x10)) {
                    /* try { // try from 00571bbc to 00671bc7 has its CatchHandler @ 00571bc8 */
      std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux
                ((vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)param_2,puVar1,
                 local_88);
      plVar10 = local_68;
    }
    else {
      *puVar1 = local_88[0];
      *(undefined8 *)(puVar1 + 2) = local_80;
      *(long **)(puVar1 + 4) = local_78;
      if (local_78 != (long *)0x0) {
                    /* try { // try from 00571b78 to 00671b9f has its CatchHandler @ 00571ba8 */
        local_78[1] = local_78[1] + 1;
      }
      *(undefined8 *)(puVar1 + 6) = local_70;
      *(long **)(puVar1 + 8) = local_68;
      if (local_68 != (long *)0x0) {
        local_68[1] = local_68[1] + 1;
      }
                    /* try { // try from 00571ba0 to 00671bbb has its CatchHandler @ 00571af0 */
      *(undefined4 **)(param_2 + 8) = puVar1 + 10;
                    /* catch() { ... } // from try @ 00571b78 with catch @ 00571ba8 */
                    /* catch() { ... } // from try @ 00571b08 with catch @ 00571bac */
      plVar10 = local_68;
    }
    local_68 = plVar10;
                    /* catch() { ... } // from try @ 00571bbc with catch @ 00571bc8 */
                    /* try { // try from 00571bcc to 00671bcf has its CatchHandler @ 00571bd4 */
                    /* catch() { ... } // from try @ 00571bcc with catch @ 00571bd4 */
    if ((plVar10 != (long *)0x0) &&
       (lVar11 = plVar10[1], plVar10[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar11 = plVar10[2];
      plVar10[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
                    /* catch() { ... } // from try @ 00571c6c with catch @ 00571bfc
                       catch() { ... } // from try @ 00571d10 with catch @ 00571bfc */
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    plVar10 = local_78;
    if ((local_78 != (long *)0x0) &&
       (lVar11 = local_78[1], local_78[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*local_78 + 0x10))(local_78);
      lVar11 = plVar10[2];
      plVar10[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    puVar7 = PTR_DAT_007e5de8;
    if (local_a0 + -3 != (long *)PTR_DAT_007e5de8) {
      plVar10 = local_a0 + -1;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = (int)*plVar10;
        *(int *)plVar10 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = (int)*plVar10;
                    /* catch() { ... } // from try @ 00571df0 with catch @ 00571ecc */
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *(int *)plVar10 = iVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar12 < 1) {
        operator_delete(local_a0 + -3);
      }
    }
                    /* try { // try from 00571c68 to 00671c6b has its CatchHandler @ 00571cc8 */
    local_98 = (long *)0x0;
    uStack_90 = 0;
                    /* try { // try from 00571c6c to 00671ce7 has its CatchHandler @ 00571bfc */
    local_a0 = (long *)0x0;
    Scene::GetAllGroups(*(Scene **)(this + 0x20),(vector *)&local_a0);
    plVar8 = local_98;
    puVar6 = PTR_pthread_create_007e4e78;
    plVar14 = local_a0;
    plVar10 = local_a0;
    if (local_a0 != local_98) {
      do {
        piVar13 = *(int **)(this + 0x28);
        if ((piVar13 != (int *)0x0) && (0 < *piVar13)) {
                    /* try { // try from 00571ce8 to 00671d0f has its CatchHandler @ 00571d18 */
          lVar11 = 0;
          do {
            if (*(long *)(*(long *)(piVar13 + 2) + lVar11 * 8) == *plVar10) goto LAB_00571e34;
            lVar11 = lVar11 + 1;
          } while (lVar11 < *piVar13);
        }
                    /* try { // try from 00571d10 to 00671d1b has its CatchHandler @ 00571bfc */
        FUN_0066a528(&local_a8,*plVar10 + 0x20);
                    /* catch() { ... } // from try @ 00571ce8 with catch @ 00571d18 */
        BindingValue::ValueWithString((BindingValue *)&local_a8,extraout_x1_00);
        puVar1 = *(undefined4 **)(param_2 + 8);
        if (puVar1 == *(undefined4 **)(param_2 + 0x10)) {
          std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux
                    ((vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)param_2,
                     puVar1,local_88);
          plVar14 = local_68;
        }
        else {
          *puVar1 = local_88[0];
          *(undefined8 *)(puVar1 + 2) = local_80;
          *(long **)(puVar1 + 4) = local_78;
          if (local_78 != (long *)0x0) {
            local_78[1] = local_78[1] + 1;
          }
          *(undefined8 *)(puVar1 + 6) = local_70;
          *(long **)(puVar1 + 8) = local_68;
          if (local_68 != (long *)0x0) {
            local_68[1] = local_68[1] + 1;
          }
          *(undefined4 **)(param_2 + 8) = puVar1 + 10;
          plVar14 = local_68;
        }
        local_68 = plVar14;
        if ((plVar14 != (long *)0x0) &&
           (lVar11 = plVar14[1], plVar14[1] = lVar11 + -1, lVar11 + -1 == 0)) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          lVar11 = plVar14[2];
          plVar14[2] = lVar11 + -1;
          if (lVar11 + -1 == 0) {
                    /* catch() { ... } // from try @ 00571e5c with catch @ 00571dd0 */
            (**(code **)(*plVar14 + 0x18))(plVar14);
          }
        }
        plVar14 = local_78;
                    /* try { // try from 00571df0 to 00671df7 has its CatchHandler @ 00571ecc */
        if ((local_78 != (long *)0x0) &&
           (lVar11 = local_78[1], local_78[1] = lVar11 + -1, lVar11 + -1 == 0)) {
          (**(code **)(*local_78 + 0x10))(local_78);
          lVar11 = plVar14[2];
          plVar14[2] = lVar11 + -1;
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar14 + 0x18))(plVar14);
          }
        }
        if ((undefined *)(local_a8 + -0x18) != puVar7) {
          piVar13 = (int *)(local_a8 + -8);
          if (puVar6 == (undefined *)0x0) {
            iVar12 = *piVar13;
            *piVar13 = iVar12 + -1;
          }
          else {
            do {
              iVar12 = *piVar13;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar3) {
                *piVar13 = iVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (iVar12 < 1) {
                    /* catch() { ... } // from try @ 00571c68 with catch @ 00571cc8 */
            operator_delete((undefined *)(local_a8 + -0x18));
          }
        }
LAB_00571e34:
        plVar9 = local_98;
        plVar10 = plVar10 + 1;
        plVar5 = local_a0;
        plVar14 = local_98;
      } while (plVar10 != plVar8);
      for (; plVar5 != plVar9; plVar5 = plVar5 + 1) {
        plVar10 = (long *)*plVar5;
                    /* try { // try from 00571e54 to 00671e5b has its CatchHandler @ 00571e9c */
                    /* try { // try from 00571e5c to 00671ee3 has its CatchHandler @ 00571dd0 */
        if ((plVar10 != (long *)0x0) &&
           (iVar12 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar12, iVar12 == 0)) {
          (**(code **)(*plVar10 + 8))();
        }
        plVar14 = local_a0;
      }
    }
    if (plVar14 != (long *)0x0) {
      operator_delete(plVar14);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00571e54 with catch @ 00571e9c */
  return;
}


