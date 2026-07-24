/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032bf34
 * Function: Caver::OverlayTargetArrowComponent::Update
 * Signature: undefined __cdecl Update(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTargetArrowComponent::Update(float) */

void Caver::OverlayTargetArrowComponent::Update(float param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long in_x0;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  float *pfVar11;
  long *plVar12;
  float *pfVar13;
  string *psVar14;
  long *plVar15;
  SceneObject *this;
  long *plVar16;
  ulong uVar17;
  float fVar18;
  undefined4 in_register_00005004;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_88 [8];
  long local_80;
  long *local_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar7 = *(long *)(in_x0 + 0x70);
  if (lVar7 == 0) {
    psVar14 = *(string **)(*(long *)(in_x0 + 0x28) + 0x20);
    FUN_00666bb8(CONCAT44(in_register_00005004,param_1),&local_80,"hero",auStack_88);
    Scene::ObjectWithIdentifier(psVar14);
    if (local_78 != (long *)0x0) {
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    }
    plVar15 = *(long **)(in_x0 + 0x70);
    *(long **)(in_x0 + 0x70) = local_78;
    if ((plVar15 != (long *)0x0) &&
       (iVar10 = (int)plVar15[1] + -1, *(int *)(plVar15 + 1) = iVar10, iVar10 == 0)) {
      (**(code **)(*plVar15 + 8))(plVar15);
    }
    if ((local_78 != (long *)0x0) &&
       (iVar10 = (int)local_78[1] + -1, *(int *)(local_78 + 1) = iVar10, iVar10 == 0)) {
      (**(code **)(*local_78 + 8))();
    }
    if ((undefined *)(local_80 + -0x18) == PTR_DAT_007e5de8) {
LAB_0032c030:
      lVar7 = *(long *)(in_x0 + 0x70);
    }
    else {
      piVar9 = (int *)(local_80 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar9;
        *piVar9 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (0 < iVar10) goto LAB_0032c030;
      operator_delete((undefined *)(local_80 + -0x18));
      lVar7 = *(long *)(in_x0 + 0x70);
    }
    if (lVar7 == 0) goto LAB_0032c284;
    pfVar11 = (float *)(lVar7 + 0xac);
    pfVar13 = (float *)(lVar7 + 0xa4);
    uVar19 = CONCAT44((float)((ulong)*(undefined8 *)pfVar13 >> 0x20) +
                      (float)((ulong)*(undefined8 *)pfVar11 >> 0x20) * 0.5,
                      (float)*(undefined8 *)pfVar13 + (float)*(undefined8 *)pfVar11 * 0.5);
    *(undefined8 *)(in_x0 + 0xb0) = uVar19;
  }
  else {
    uVar19 = *(undefined8 *)(in_x0 + 0xb0);
    pfVar13 = (float *)(lVar7 + 0xa4);
    pfVar11 = (float *)(lVar7 + 0xac);
  }
  plVar15 = *(long **)(in_x0 + 0x90);
  fVar18 = DAT_00684314 * (float)((ulong)uVar19 >> 0x20);
  fVar21 = (*(float *)(lVar7 + 0xa8) + *(float *)(lVar7 + 0xb0) * 0.5) * DAT_00684318;
  *(float *)(in_x0 + 0xb0) =
       (*pfVar13 + *pfVar11 * 0.5) * DAT_00684318 + DAT_00684314 * (float)uVar19;
  *(float *)(in_x0 + 0xb4) = fVar18 + fVar21;
  *(undefined8 *)(in_x0 + 0x90) = 0;
  if ((plVar15 != (long *)0x0) &&
     (iVar10 = (int)plVar15[1] + -1, *(int *)(plVar15 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*plVar15 + 8))(plVar15);
  }
  plVar5 = *(long **)(in_x0 + 0x78);
  plVar6 = *(long **)(in_x0 + 0x80);
  if (plVar6 != plVar5) {
    uVar17 = 0;
    fVar18 = DAT_0068431c;
    do {
      plVar16 = (long *)plVar5[uVar17];
      if (plVar16 != (long *)0x0) {
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      }
      if (plVar16[4] == 0) {
        plVar5 = plVar5 + uVar17;
        plVar1 = plVar5 + 1;
        plVar12 = plVar1;
        if ((plVar1 != plVar6) && (plVar12 = plVar6, 0 < (long)plVar6 - (long)plVar1)) {
          lVar7 = ((ulong)((long)plVar6 - (long)plVar1) >> 3) + 1;
          do {
            lVar8 = plVar5[1];
            if (lVar8 != 0) {
              *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
            }
            plVar6 = (long *)*plVar5;
            *plVar5 = lVar8;
            if ((plVar6 != (long *)0x0) &&
               (iVar10 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar10, iVar10 == 0)) {
              (**(code **)(*plVar6 + 8))();
            }
            lVar7 = lVar7 + -1;
            plVar5 = plVar5 + 1;
          } while (1 < lVar7);
          plVar12 = *(long **)(in_x0 + 0x80);
        }
        *(long **)(in_x0 + 0x80) = plVar12 + -1;
        plVar5 = (long *)plVar12[-1];
        if ((plVar5 != (long *)0x0) &&
           (iVar10 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar10, iVar10 == 0)) {
          (**(code **)(*plVar5 + 8))();
        }
        uVar17 = uVar17 - 1;
      }
      else {
        fVar21 = *(float *)(in_x0 + 0xb0) -
                 ((float)*(undefined8 *)((long)plVar16 + 0xa4) +
                 (float)*(undefined8 *)((long)plVar16 + 0xac) * 0.5);
        fVar20 = *(float *)(in_x0 + 0xb4) -
                 ((float)((ulong)*(undefined8 *)((long)plVar16 + 0xa4) >> 0x20) +
                 (float)((ulong)*(undefined8 *)((long)plVar16 + 0xac) >> 0x20) * 0.5);
        fVar21 = fVar21 * fVar21 + fVar20 * fVar20;
        if (fVar21 < fVar18) {
          *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
          plVar5 = *(long **)(in_x0 + 0x90);
          *(long **)(in_x0 + 0x90) = plVar16;
          fVar18 = fVar21;
          if ((plVar5 != (long *)0x0) &&
             (iVar10 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar10, iVar10 == 0)) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      if ((plVar16 != (long *)0x0) &&
         (iVar10 = (int)plVar16[1] + -1, *(int *)(plVar16 + 1) = iVar10, iVar10 == 0)) {
        (**(code **)(*plVar16 + 8))(plVar16);
      }
      plVar5 = *(long **)(in_x0 + 0x78);
      plVar6 = *(long **)(in_x0 + 0x80);
      uVar17 = uVar17 + 1;
    } while (uVar17 < (ulong)((long)plVar6 - (long)plVar5 >> 3));
  }
  if ((plVar15 != (long *)0x0) && (*(long *)(in_x0 + 0x90) == 0)) {
    *(undefined1 *)(*(long *)(in_x0 + 0x28) + 0xe8) = 1;
  }
LAB_0032c284:
  lVar7 = *(long *)(in_x0 + 0x90);
  if (lVar7 != 0) {
    this = *(SceneObject **)(in_x0 + 0x28);
    fVar18 = (float)*(undefined8 *)(lVar7 + 0xa4) + (float)*(undefined8 *)(lVar7 + 0xac) * 0.5;
    fVar21 = (float)((ulong)*(undefined8 *)(lVar7 + 0xa4) >> 0x20) +
             (float)((ulong)*(undefined8 *)(lVar7 + 0xac) >> 0x20) * 0.5;
    if (((DAT_00683488 < ABS(fVar18 - *(float *)(this + 0x70))) ||
        (DAT_00683488 < ABS(fVar21 - *(float *)(this + 0x74)))) &&
       (*(ulong *)(this + 0x70) = CONCAT44(fVar21,fVar18), this[0xb4] == (SceneObject)0x0)) {
      SceneObject::RegisterForWorldBoundsUpdate(this);
      this[0xb4] = (SceneObject)0x1;
      this = *(SceneObject **)(in_x0 + 0x28);
      lVar7 = *(long *)(in_x0 + 0x90);
    }
    *(undefined4 *)(this + 0x78) = *(undefined4 *)(lVar7 + 0x78);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


