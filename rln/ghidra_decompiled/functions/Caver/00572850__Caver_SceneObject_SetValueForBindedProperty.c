/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00572850
 * Function: Caver::SceneObject::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(SceneObject * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::SceneObject::SetValueForBindedProperty(SceneObject *this,int param_1,BindingValue *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  Program *pPVar10;
  long *plVar11;
  int *piVar12;
  code *pcVar13;
  SceneObjectGroup *pSVar14;
  long lVar15;
  FastVector<Caver::SceneObjectGroup*> *this_00;
  SceneObjectGroup *pSVar16;
  long lVar17;
  string *psVar18;
  long local_78;
  long local_70;
  long local_68;
  SceneObjectGroup *local_60;
  long *local_58 [2];
  long local_48;
  
                    /* try { // try from 00572850 to 0067285b has its CatchHandler @ 00572868 */
                    /* catch() { ... } // from try @ 00572850 with catch @ 00572868 */
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  if (param_1 == 3) {
                    /* try { // try from 005728e0 to 006728e3 has its CatchHandler @ 005728e8 */
    pPVar10 = operator_new(0x28);
                    /* catch() { ... } // from try @ 005728e0 with catch @ 005728e8 */
                    /* catch() { ... } // from try @ 0057296c with catch @ 005728ec
                       catch() { ... } // from try @ 00572a2c with catch @ 005728ec
                       catch() { ... } // from try @ 00572b70 with catch @ 005728ec */
    BindingValue::ProgramValue();
    local_60 = (SceneObjectGroup *)pPVar10;
    boost::detail::shared_count::shared_count<Caver::Program>((shared_count *)local_58,pPVar10);
    boost::detail::sp_enable_shared_from_this(&local_60,pPVar10,pPVar10);
    pSVar14 = *(SceneObjectGroup **)(this + 0x58);
    plVar11 = *(long **)(this + 0x60);
    *(SceneObjectGroup **)(this + 0x58) = local_60;
    *(long **)(this + 0x60) = local_58[0];
    local_60 = pSVar14;
    local_58[0] = plVar11;
                    /* try { // try from 00572944 to 0067296b has its CatchHandler @ 00572b28 */
    if ((plVar11 != (long *)0x0) &&
       (lVar17 = plVar11[1], plVar11[1] = lVar17 + -1, lVar17 + -1 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar17 = plVar11[2];
      plVar11[2] = lVar17 + -1;
      if (lVar17 + -1 == 0) {
                    /* try { // try from 0057296c to 00672a03 has its CatchHandler @ 005728ec */
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    if (*(long *)(*(long *)(this + 0x58) + 8) == 0) {
      FUN_00666bb8(&local_70,&DAT_0068fbeb,&local_60);
    }
    else {
      FUN_0066a528(&local_70);
    }
    plVar11 = (long *)(local_70 + -0x18);
    lVar17 = *plVar11;
    if (plVar11 != (long *)PTR_DAT_007e5de8) {
      piVar12 = (int *)(local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar12;
        *piVar12 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar12;
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar8) {
            *piVar12 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(plVar11);
      }
    }
    if (lVar17 != 0) goto LAB_00572cc4;
    pSVar14 = *(SceneObjectGroup **)(this + 0x60);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    if ((pSVar14 == (SceneObjectGroup *)0x0) ||
       (lVar17 = *(long *)(pSVar14 + 8), *(long *)(pSVar14 + 8) = lVar17 + -1, lVar17 + -1 != 0))
    goto LAB_00572cc4;
                    /* catch() { ... } // from try @ 00572a04 with catch @ 00572adc */
    (**(code **)(*(long *)pSVar14 + 0x10))(pSVar14);
    lVar17 = *(long *)(pSVar14 + 0x10);
    *(long *)(pSVar14 + 0x10) = lVar17 + -1;
    if (lVar17 + -1 != 0) goto LAB_00572cc4;
                    /* try { // try from 00572afc to 00672b6f has its CatchHandler @ 00572b78 */
    pcVar13 = *(code **)(*(long *)pSVar14 + 0x18);
  }
  else {
    if (param_1 == 2) {
                    /* try { // try from 005728d0 to 006728db has its CatchHandler @ 005728dc */
      this[0xf4] = **(SceneObject **)(param_2 + 8);
                    /* catch() { ... } // from try @ 005728d0 with catch @ 005728dc */
      goto LAB_00572cc4;
    }
                    /* try { // try from 0057288c to 006728b3 has its CatchHandler @ 005728bc */
    if (param_1 == 1) {
      FUN_0066a528(&local_60,*(undefined8 *)(param_2 + 8));
      pSVar14 = local_60;
      pSVar16 = local_60 + -0x18;
                    /* try { // try from 005728b4 to 006728cf has its CatchHandler @ 00572804 */
      if (*(size_t *)pSVar16 == *(size_t *)((long)*(void **)(this + 0x50) + -0x18)) {
                    /* catch() { ... } // from try @ 0057288c with catch @ 005728bc */
                    /* catch() { ... } // from try @ 0057281c with catch @ 005728c0 */
        iVar9 = memcmp(local_60,*(void **)(this + 0x50),*(size_t *)pSVar16);
        bVar8 = iVar9 != 0;
      }
      else {
        bVar8 = true;
      }
      puVar7 = PTR_DAT_007e5de8;
      if (pSVar16 != (SceneObjectGroup *)PTR_DAT_007e5de8) {
        pSVar14 = pSVar14 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar9 = *(int *)pSVar14;
          *(int *)pSVar14 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *(int *)pSVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pSVar14,0x10);
            if (bVar4) {
              *(int *)pSVar14 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
                    /* catch() { ... } // from try @ 00572d78 with catch @ 00572d08
                       catch() { ... } // from try @ 00572e1c with catch @ 00572d08 */
          } while (cVar3 != '\0');
        }
        if (iVar9 < 1) {
                    /* try { // try from 00572d74 to 00672d77 has its CatchHandler @ 00572dd4 */
                    /* try { // try from 00572d78 to 00672df3 has its CatchHandler @ 00572d08 */
          operator_delete(pSVar16);
        }
      }
      if (bVar8) {
        psVar18 = *(string **)(this + 0x20);
        if (psVar18 == (string *)0x0) {
          FUN_0066a528(&local_60,*(undefined8 *)(param_2 + 8));
                    /* catch() { ... } // from try @ 00572944 with catch @ 00572b28 */
        }
        else {
          FUN_0066a528(&local_68,*(undefined8 *)(param_2 + 8));
          Scene::MakeUniqueObjectIdentifier(psVar18);
        }
        SetIdentifier(this,(string *)&local_60);
        if (local_60 + -0x18 != (SceneObjectGroup *)puVar7) {
          pSVar14 = local_60 + -8;
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar9 = *(int *)pSVar14;
                    /* try { // try from 00572e1c to 00672e27 has its CatchHandler @ 00572d08 */
            *(int *)pSVar14 = iVar9 + -1;
          }
          else {
            do {
              iVar9 = *(int *)pSVar14;
              cVar3 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(pSVar14,0x10);
              if (bVar8) {
                *(int *)pSVar14 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
                    /* catch() { ... } // from try @ 00572df4 with catch @ 00572e24 */
                    /* try { // try from 00572e28 to 00672e73 has its CatchHandler @ 00572e28
                       catch() { ... } // from try @ 00572e28 with catch @ 00572e28
                       catch() { ... } // from try @ 00573668 with catch @ 00572e28
                       catch() { ... } // from try @ 00573e14 with catch @ 00572e28 */
          if (iVar9 < 1) {
            operator_delete(local_60 + -0x18);
          }
        }
        if ((psVar18 != (string *)0x0) && ((undefined *)(local_68 + -0x18) != puVar7)) {
          piVar12 = (int *)(local_68 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar9 = *piVar12;
            *piVar12 = iVar9 + -1;
          }
          else {
            do {
              iVar9 = *piVar12;
                    /* try { // try from 00572b70 to 00672b7b has its CatchHandler @ 005728ec */
              cVar3 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar8) {
                *piVar12 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
                    /* catch() { ... } // from try @ 00572afc with catch @ 00572b78 */
            } while (cVar3 != '\0');
          }
                    /* try { // try from 00572e74 to 00672e7b has its CatchHandler @ 00573a90 */
          if (iVar9 < 1) {
                    /* try { // try from 00572e7c to 00672e8f has its CatchHandler @ 00573a8c */
            operator_delete((undefined *)(local_68 + -0x18));
          }
        }
      }
      goto LAB_00572cc4;
    }
    uVar5 = param_1 - 4;
    if (0x14 < uVar5) goto LAB_00572cc4;
    piVar12 = *(int **)(this + 0x28);
    if (piVar12 == (int *)0x0) {
      if ((int)uVar5 < 0) goto LAB_005729b0;
    }
    else if ((int)uVar5 < *piVar12) {
LAB_005729b0:
      SceneObjectGroup::RemoveObject
                (*(SceneObjectGroup **)(*(long *)(piVar12 + 2) + (long)(int)uVar5 * 8),this);
    }
    FUN_0066a528(&local_78,*(undefined8 *)(param_2 + 8));
    puVar7 = PTR_DAT_007e5de8;
    plVar11 = (long *)(local_78 + -0x18);
    lVar17 = *plVar11;
    if (plVar11 != (long *)PTR_DAT_007e5de8) {
      piVar12 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 00572df4 to 00672e1b has its CatchHandler @ 00572e24 */
        iVar9 = *piVar12;
        *piVar12 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar12;
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar8) {
            *piVar12 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(plVar11);
      }
    }
    if (lVar17 == 0) goto LAB_00572cc4;
    psVar18 = *(string **)(this + 0x20);
    FUN_0066a528(&local_68,*(undefined8 *)(param_2 + 8));
                    /* try { // try from 00572a04 to 00672a2b has its CatchHandler @ 00572adc */
    Scene::GroupWithIdentifier(psVar18,SUB81(&local_68,0));
    if ((undefined *)(local_68 + -0x18) != puVar7) {
                    /* catch() { ... } // from try @ 00572d74 with catch @ 00572dd4 */
      piVar12 = (int *)(local_68 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar12;
        *piVar12 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar12;
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar8) {
            *piVar12 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_68 + -0x18));
      }
    }
    if (local_60 == (SceneObjectGroup *)0x0) goto LAB_00572cc4;
                    /* try { // try from 00572a2c to 00672afb has its CatchHandler @ 005728ec */
    SceneObjectGroup::AddObject(local_60,this);
    this_00 = *(FastVector<Caver::SceneObjectGroup*> **)(this + 0x28);
    if (this_00 == (FastVector<Caver::SceneObjectGroup*> *)0x0) {
      if ((int)uVar5 < 0) goto LAB_00572b8c;
    }
    else if ((int)uVar5 < *(int *)this_00) {
LAB_00572b8c:
      iVar2 = *(int *)this_00;
      iVar9 = 0;
      if (iVar2 != 0) {
                    /* catch() { ... } // from try @ 00572c0c with catch @ 00572b9c
                       catch() { ... } // from try @ 00572c28 with catch @ 00572b9c */
        if (iVar2 < 1) {
          pSVar14 = (SceneObjectGroup *)0x0;
        }
        else {
          lVar15 = (long)iVar2 * 8;
          lVar17 = (long)iVar2 + 1;
          pSVar16 = (SceneObjectGroup *)0x0;
          do {
            lVar15 = lVar15 + -8;
            pSVar14 = *(SceneObjectGroup **)(*(long *)(this_00 + 8) + lVar15);
            *(SceneObjectGroup **)(*(long *)(this_00 + 8) + lVar15) = pSVar16;
            if (pSVar14 == local_60) {
                    /* try { // try from 00572c20 to 00672c27 has its CatchHandler @ 00572c30 */
              iVar9 = iVar2 + -1;
              goto LAB_00572c24;
            }
            lVar17 = lVar17 + -1;
            pSVar16 = pSVar14;
          } while (1 < lVar17);
        }
                    /* try { // try from 00572be4 to 00672c0b has its CatchHandler @ 00572c1c */
        iVar9 = iVar2 + -1;
        *(int *)this_00 = iVar9;
        if (*(int *)(this_00 + 4) < iVar2) {
          iVar9 = *(int *)(this_00 + 4) * 2;
          if (iVar9 < 0xb) {
            iVar9 = 10;
          }
          FastVector<Caver::SceneObjectGroup*>::Resize(this_00,iVar9);
                    /* try { // try from 00572c0c to 00672c1f has its CatchHandler @ 00572b9c */
          iVar9 = *(int *)this_00;
        }
        *(SceneObjectGroup **)(*(long *)(this_00 + 8) + (long)iVar9 * 8) = pSVar14;
        iVar9 = iVar9 + 1;
                    /* catch() { ... } // from try @ 00572be4 with catch @ 00572c1c */
LAB_00572c24:
        *(int *)this_00 = iVar9;
                    /* try { // try from 00572c28 to 00672c33 has its CatchHandler @ 00572b9c */
        this_00 = *(FastVector<Caver::SceneObjectGroup*> **)(this + 0x28);
                    /* catch() { ... } // from try @ 00572c20 with catch @ 00572c30 */
        iVar9 = *(int *)this_00;
      }
      pSVar14 = local_60;
                    /* catch() { ... } // from try @ 00572cc8 with catch @ 00572c34 */
      if (*(int *)(this_00 + 4) <= iVar9) {
        iVar9 = *(int *)(this_00 + 4) * 2;
        if (iVar9 < 0xb) {
          iVar9 = 10;
        }
        FastVector<Caver::SceneObjectGroup*>::Resize(this_00,iVar9);
        iVar9 = *(int *)this_00;
      }
      *(int *)this_00 = iVar9 + 1;
      if ((int)uVar5 < iVar9) {
        lVar17 = (long)iVar9;
        do {
          puVar1 = (undefined8 *)(*(long *)(this_00 + 8) + lVar17 * 8);
                    /* try { // try from 00572c7c to 00672ca3 has its CatchHandler @ 00572cbc */
          lVar17 = lVar17 + -1;
          *puVar1 = puVar1[-1];
        } while ((int)uVar5 < lVar17);
      }
      *(SceneObjectGroup **)(*(long *)(this_00 + 8) + (long)(int)uVar5 * 8) = pSVar14;
    }
                    /* try { // try from 00572ca4 to 00672cab has its CatchHandler @ 00572cd0 */
    if ((local_60 == (SceneObjectGroup *)0x0) ||
       (iVar9 = *(int *)(local_60 + 8), *(int *)(local_60 + 8) = iVar9 + -1, iVar9 + -1 != 0))
    goto LAB_00572cc4;
                    /* catch() { ... } // from try @ 00572c7c with catch @ 00572cbc */
    pcVar13 = *(code **)(*(long *)local_60 + 8);
    pSVar14 = local_60;
  }
                    /* try { // try from 00572cc0 to 00672cc7 has its CatchHandler @ 00572ccc */
  (*pcVar13)(pSVar14);
LAB_00572cc4:
                    /* try { // try from 00572cc8 to 00672ce3 has its CatchHandler @ 00572c34 */
                    /* catch() { ... } // from try @ 00572cc0 with catch @ 00572ccc */
                    /* catch() { ... } // from try @ 00572ca4 with catch @ 00572cd0 */
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


