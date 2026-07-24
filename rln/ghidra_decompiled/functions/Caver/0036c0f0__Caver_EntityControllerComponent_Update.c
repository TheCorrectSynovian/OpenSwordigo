/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036c0f0
 * Function: Caver::EntityControllerComponent::Update
 * Signature: undefined __thiscall Update(EntityControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::EntityControllerComponent::Update(float) */

void __thiscall
Caver::EntityControllerComponent::Update(EntityControllerComponent *this,float param_1)

{
  ComponentOutletBase *this_00;
  ComponentOutletBase *this_01;
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  SceneObject *this_02;
  EntityComponent *pEVar7;
  void *pvVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  code *pcVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  float extraout_s0;
  float fVar16;
  float extraout_s0_00;
  undefined4 uVar17;
  undefined4 in_register_00005004;
  ulong uVar18;
  float fVar19;
  long *local_70;
  long local_68;
  
  uVar18 = CONCAT44(in_register_00005004,param_1);
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(this + 0x80) == 0) &&
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this),
     *(long *)(this + 0x80) == 0)) goto LAB_0036c76c;
  if (*(long **)(this + 0x118) == (long *)0x0) {
    fVar16 = *(float *)(this + 0x124) + param_1;
    *(float *)(this + 0x124) = fVar16;
LAB_0036c1ac:
    plVar5 = *(long **)(this + 0xf0);
    if (plVar5 == (long *)0x0) goto LAB_0036c1d0;
LAB_0036c1b4:
    if (plVar5[4] == 0) {
      *(undefined8 *)(this + 0xf0) = 0;
      iVar13 = (int)plVar5[1] + -1;
      *(int *)(plVar5 + 1) = iVar13;
      if ((iVar13 != 0) ||
         (fVar16 = (float)(**(code **)(*plVar5 + 8))(), *(long *)(this + 0xf0) == 0))
      goto LAB_0036c1d0;
    }
  }
  else {
    (**(code **)(**(long **)(this + 0x118) + 200))(uVar18);
    uVar4 = EntityActionComponent::IsFinished(*(EntityActionComponent **)(this + 0x118));
    fVar16 = extraout_s0;
    if ((uVar4 & 1) == 0) goto LAB_0036c1ac;
    plVar5 = *(long **)(this + 0x118);
    *(undefined8 *)(this + 0x118) = 0;
    if ((plVar5 == (long *)0x0) ||
       (iVar13 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar13, iVar13 != 0)) {
      plVar5 = *(long **)(this + 0x98);
    }
    else {
      fVar16 = (float)(**(code **)(*plVar5 + 8))();
      plVar5 = *(long **)(this + 0x98);
    }
    if (plVar5 == (long *)0x0) {
      fVar16 = (float)ComponentOutletBase::Connect
                                ((ComponentOutletBase *)(this + 0x88),(Component *)this);
      plVar5 = *(long **)(this + 0x98);
      if (plVar5 == (long *)0x0) goto LAB_0036c1ac;
    }
    plVar15 = (long *)plVar5[0x14];
    if (plVar15 == (long *)0x0) {
      if (*(long *)(this + 0x100) != 0) goto LAB_0036c80c;
      goto LAB_0036c1ac;
    }
    plVar6 = *(long **)(this + 0x100);
    if ((int)plVar15[1] == 0) {
      fVar16 = (float)(**(code **)(*plVar15 + 8))(plVar15);
      if (plVar15 != plVar6) {
        plVar5 = *(long **)(this + 0x98);
        if (plVar5 == (long *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
          plVar5 = *(long **)(this + 0x98);
        }
        goto LAB_0036c80c;
      }
      goto LAB_0036c1ac;
    }
    if (plVar15 == plVar6) goto LAB_0036c1ac;
LAB_0036c80c:
    local_70 = *(long **)(this + 0x100);
    pcVar12 = *(code **)(*plVar5 + 0x108);
    if (local_70 != (long *)0x0) {
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    }
    fVar16 = (float)(*pcVar12)(_DAT_00683c38,plVar5,&local_70);
    if ((local_70 == (long *)0x0) ||
       (iVar13 = (int)local_70[1] + -1, *(int *)(local_70 + 1) = iVar13, iVar13 != 0))
    goto LAB_0036c1ac;
    fVar16 = (float)(**(code **)(*local_70 + 8))();
    plVar5 = *(long **)(this + 0xf0);
    if (plVar5 != (long *)0x0) goto LAB_0036c1b4;
LAB_0036c1d0:
    fVar16 = *(float *)(this + 0xe8);
    if (DAT_00683734 < fVar16) {
      plVar6 = (long *)ComponentManager::ComponentCollectionForInterface
                                 ((ComponentManager *)
                                  (*(long *)(*(long *)(this + 0x28) + 0x20) + 0x180),
                                  (long)PTR_Interface_007e5a28);
      plVar15 = (long *)plVar6[1];
      for (plVar5 = (long *)*plVar6;
          (plVar10 = plVar15, fVar16 = extraout_s0_00, plVar15 != plVar5 &&
          (*(long *)(*plVar5 + 0x28) == 0)); plVar5 = plVar5 + 1) {
      }
joined_r0x0036c22c:
      if (plVar15 != plVar5) {
        pvVar8 = *(void **)(this + 0x28);
        this_02 = *(SceneObject **)(*plVar5 + 0x28);
        fVar16 = (float)*(undefined8 *)((long)pvVar8 + 0x70) -
                 (float)*(undefined8 *)(this_02 + 0x70);
        fVar19 = (float)((ulong)*(undefined8 *)((long)pvVar8 + 0x70) >> 0x20) -
                 (float)((ulong)*(undefined8 *)(this_02 + 0x70) >> 0x20);
        fVar16 = fVar16 * fVar16 + fVar19 * fVar19;
        if (fVar16 < *(float *)(this + 0xe8) * *(float *)(this + 0xe8)) {
          if (this_02 != (SceneObject *)0x0) {
            *(int *)(this_02 + 8) = *(int *)(this_02 + 8) + 1;
          }
          plVar10 = *(long **)(this + 0xf0);
          *(SceneObject **)(this + 0xf0) = this_02;
          if ((plVar10 != (long *)0x0) &&
             (iVar13 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar13, iVar13 == 0)) {
            (**(code **)(*plVar10 + 8))(plVar10);
            this_02 = *(SceneObject **)(this + 0xf0);
            pvVar8 = *(void **)(this + 0x28);
          }
          fVar16 = (float)SceneObject::HandleMessage(this_02,0xf,pvVar8);
          plVar10 = (long *)plVar6[1];
        }
        do {
          plVar5 = plVar5 + 1;
          if (plVar5 == plVar10) break;
        } while (*(long *)(*plVar5 + 0x28) == 0);
        goto joined_r0x0036c22c;
      }
    }
  }
  iVar13 = *(int *)(this + 0xf8);
  if (iVar13 == 3) {
    if (*(long *)(this + 0xf0) == 0) goto LAB_0036c404;
    lVar14 = *(long *)(this + 0x80);
    fVar16 = *(float *)(*(long *)(this + 0xf0) + 0x70) - *(float *)(*(long *)(this + 0x28) + 0x70);
    iVar13 = -1;
    if (0.0 <= fVar16) {
      iVar13 = 1;
    }
    if (lVar14 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar14 = *(long *)(this + 0x80);
      iVar9 = 0;
      if (lVar14 != 0) goto LAB_0036c3d0;
    }
    else {
LAB_0036c3d0:
      iVar9 = *(int *)(lVar14 + 0x70);
    }
    fVar19 = DAT_00684318;
    fVar16 = ABS(fVar16);
    if (iVar13 != iVar9) {
      if (*(int *)(this + 0x128) == iVar13) {
        fVar19 = (float)NEON_fminnm(*(undefined4 *)(this + 0x130),DAT_00684318);
      }
      else {
        *(int *)(this + 0x128) = iVar13;
      }
      *(float *)(this + 0x130) = fVar19;
    }
    if (_DAT_0068782c <= fVar16) {
      if (_DAT_0068782c < fVar16) {
        fVar19 = 1.5;
        fVar16 = DAT_00683f68;
        goto LAB_0036c980;
      }
      iVar9 = *(int *)(this + 0x108);
      fVar16 = 0.0;
      iVar13 = iVar9;
    }
    else {
      iVar13 = -iVar13;
      fVar16 = _DAT_00684434;
      fVar19 = DAT_00684318;
LAB_0036c980:
      iVar3 = fastrandom();
      iVar9 = *(int *)(this + 0x108);
      fVar16 = fVar16 + fVar19 * ((float)iVar3 / (float)*(int *)PTR_FASTRANDOM_MAX_007e4b68);
    }
    if (iVar9 == 0) {
      lVar14 = *(long *)(this + 0x80);
      *(undefined4 *)(this + 0x134) = 0;
      *(int *)(this + 300) = iVar13;
      *(int *)(this + 0x108) = iVar13;
      if (lVar14 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        lVar14 = *(long *)(this + 0x80);
        iVar13 = *(int *)(this + 0x108);
      }
      *(float *)(lVar14 + 0xb0) = *(float *)(this + 0x10c) * (float)iVar13;
      lVar11 = *(long *)(this + 0x100);
      if (lVar11 != 0) {
        if (lVar14 == 0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
          lVar14 = *(long *)(this + 0x80);
        }
        *(bool *)(lVar11 + 0x39) = iVar13 != *(int *)(lVar14 + 0x70);
      }
    }
    else if ((iVar9 != iVar13) && (*(int *)(this + 300) != iVar13)) {
      *(int *)(this + 300) = iVar13;
      *(float *)(this + 0x134) = fVar16;
    }
  }
  else if (iVar13 == 2) {
    if (*(long *)(this + 0xf0) == 0) goto LAB_0036c404;
    iVar13 = -1;
    if (0.0 <= *(float *)(*(long *)(this + 0xf0) + 0x70) - *(float *)(*(long *)(this + 0x28) + 0x70)
       ) {
      iVar13 = 1;
    }
    if (*(int *)(this + 0x108) == 0) {
      pEVar7 = *(EntityComponent **)(this + 0x80);
      *(undefined4 *)(this + 0x134) = 0;
      *(int *)(this + 300) = iVar13;
      *(int *)(this + 0x108) = iVar13;
      iVar9 = iVar13;
      if (pEVar7 == (EntityComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        pEVar7 = *(EntityComponent **)(this + 0x80);
        iVar9 = *(int *)(this + 0x108);
      }
      *(float *)(pEVar7 + 0xb0) = *(float *)(this + 0x10c) * (float)iVar9;
      lVar14 = *(long *)(this + 0x100);
      if (lVar14 != 0) {
        if (pEVar7 == (EntityComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
          pEVar7 = *(EntityComponent **)(this + 0x80);
        }
        *(bool *)(lVar14 + 0x39) = iVar9 != *(int *)(pEVar7 + 0x70);
      }
      *(undefined4 *)(this + 0x130) = 0;
      *(int *)(this + 0x128) = iVar13;
      if (pEVar7 == (EntityComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        pEVar7 = *(EntityComponent **)(this + 0x80);
      }
      EntityComponent::SetFacingDirection(pEVar7,iVar13);
      lVar14 = *(long *)(this + 0x100);
      if (lVar14 != 0) {
        lVar11 = *(long *)(this + 0x80);
        iVar13 = *(int *)(this + 0x108);
        if (lVar11 == 0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
          lVar11 = *(long *)(this + 0x80);
        }
        *(bool *)(lVar14 + 0x39) = iVar13 != *(int *)(lVar11 + 0x70);
      }
      goto LAB_0036c40c;
    }
    lVar14 = *(long *)(this + 0x80);
    if (lVar14 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar14 = *(long *)(this + 0x80);
      iVar9 = 0;
      if (lVar14 != 0) goto LAB_0036c360;
    }
    else {
LAB_0036c360:
      iVar9 = *(int *)(lVar14 + 0x70);
    }
    fVar16 = DAT_00683f68;
    if (iVar13 != iVar9) {
      if (*(int *)(this + 0x128) == iVar13) {
        fVar16 = (float)NEON_fminnm(*(undefined4 *)(this + 0x130),DAT_00683f68);
      }
      else {
        *(int *)(this + 0x128) = iVar13;
      }
      *(float *)(this + 0x130) = fVar16;
    }
    fVar16 = DAT_00683f68;
    if (iVar13 != *(int *)(this + 0x108)) {
      if (*(int *)(this + 300) == iVar13) {
        uVar17 = NEON_fminnm(*(undefined4 *)(this + 0x134),DAT_00683f68);
        *(undefined4 *)(this + 0x134) = uVar17;
      }
      else {
        *(int *)(this + 300) = iVar13;
        *(float *)(this + 0x134) = fVar16;
      }
    }
  }
  else if (iVar13 == 1) {
LAB_0036c404:
    RoamUpdate(fVar16);
  }
LAB_0036c40c:
  fVar16 = DAT_00683734;
  if (((DAT_00683734 <= *(float *)(this + 0x130)) && (*(long *)(this + 0x118) == 0)) &&
     (fVar19 = *(float *)(this + 0x130) - param_1, bVar2 = fVar19 < DAT_00683734,
     *(float *)(this + 0x130) = fVar19, bVar2)) {
    pEVar7 = *(EntityComponent **)(this + 0x80);
    iVar13 = *(int *)(this + 0x128);
    *(undefined4 *)(this + 0x130) = 0;
    if (pEVar7 == (EntityComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      pEVar7 = *(EntityComponent **)(this + 0x80);
    }
    EntityComponent::SetFacingDirection(pEVar7,iVar13);
    lVar14 = *(long *)(this + 0x100);
    if (lVar14 != 0) {
      lVar11 = *(long *)(this + 0x80);
      iVar13 = *(int *)(this + 0x108);
      if (lVar11 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        lVar11 = *(long *)(this + 0x80);
      }
      *(bool *)(lVar14 + 0x39) = iVar13 != *(int *)(lVar11 + 0x70);
    }
  }
  if (((fVar16 <= *(float *)(this + 0x134)) && (*(long *)(this + 0x118) == 0)) &&
     (fVar19 = *(float *)(this + 0x134) - param_1, *(float *)(this + 0x134) = fVar19,
     fVar19 < fVar16)) {
    iVar13 = *(int *)(this + 300);
    lVar14 = *(long *)(this + 0x80);
    *(undefined4 *)(this + 0x134) = 0;
    *(int *)(this + 0x108) = iVar13;
    if (lVar14 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar14 = *(long *)(this + 0x80);
      iVar13 = *(int *)(this + 0x108);
    }
    *(float *)(lVar14 + 0xb0) = *(float *)(this + 0x10c) * (float)iVar13;
    lVar11 = *(long *)(this + 0x100);
    if (lVar11 != 0) {
      if (lVar14 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        lVar14 = *(long *)(this + 0x80);
      }
      *(bool *)(lVar11 + 0x39) = iVar13 != *(int *)(lVar14 + 0x70);
    }
  }
  plVar5 = *(long **)(this + 0x138);
  plVar15 = *(long **)(this + 0x140);
  if (plVar5 == plVar15) {
LAB_0036c718:
    plVar5 = *(long **)(this + 0x80);
    if (plVar5 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      plVar5 = *(long **)(this + 0x80);
    }
    (**(code **)(*plVar5 + 200))(uVar18);
    plVar5 = *(long **)(this + 0x98);
    if (plVar5 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      plVar5 = *(long **)(this + 0x98);
      if (plVar5 == (long *)0x0) goto LAB_0036c76c;
    }
  }
  else {
    bVar2 = false;
    do {
      plVar6 = (long *)*plVar5;
      if (plVar6[5] != 0) {
        if ((plVar6[0x13] == 0) || (*(char *)(plVar6[0x13] + 0x170) == '\0')) {
          (**(code **)(*plVar6 + 200))(uVar18);
        }
        else {
          bVar2 = true;
        }
      }
      plVar5 = plVar5 + 1;
    } while (plVar15 != plVar5);
    if (!bVar2) goto LAB_0036c718;
    plVar15 = *(long **)(this + 0x140);
    uVar18 = (ulong)(uint)(param_1 / 3.0);
    this_00 = (ComponentOutletBase *)(this + 0x70);
    for (plVar5 = *(long **)(this + 0x138); plVar5 != plVar15; plVar5 = plVar5 + 1) {
      lVar14 = ((long *)*plVar5)[0x13];
      if ((lVar14 != 0) && (*(char *)(lVar14 + 0x170) != '\0')) {
        (**(code **)(*(long *)*plVar5 + 200))(uVar18);
      }
    }
    plVar5 = *(long **)(this + 0x80);
    this_01 = (ComponentOutletBase *)(this + 0x88);
    if (plVar5 == (long *)0x0) {
      ComponentOutletBase::Connect(this_00,(Component *)this);
      plVar5 = *(long **)(this + 0x80);
    }
    (**(code **)(*plVar5 + 200))(uVar18);
    plVar5 = *(long **)(this + 0x98);
    if (plVar5 == (long *)0x0) {
      ComponentOutletBase::Connect(this_01,(Component *)this);
      plVar5 = *(long **)(this + 0x98);
    }
    (**(code **)(*plVar5 + 200))(uVar18);
    plVar15 = *(long **)(this + 0x140);
    for (plVar5 = *(long **)(this + 0x138); plVar5 != plVar15; plVar5 = plVar5 + 1) {
      lVar14 = ((long *)*plVar5)[0x13];
      if ((lVar14 != 0) && (*(char *)(lVar14 + 0x170) != '\0')) {
        (**(code **)(*(long *)*plVar5 + 200))(uVar18);
      }
    }
    plVar5 = *(long **)(this + 0x80);
    if (plVar5 == (long *)0x0) {
      ComponentOutletBase::Connect(this_00,(Component *)this);
      plVar5 = *(long **)(this + 0x80);
    }
    (**(code **)(*plVar5 + 200))(uVar18);
    plVar5 = *(long **)(this + 0x98);
    if (plVar5 == (long *)0x0) {
      ComponentOutletBase::Connect(this_01,(Component *)this);
      plVar5 = *(long **)(this + 0x98);
    }
    (**(code **)(*plVar5 + 200))(uVar18);
    plVar15 = *(long **)(this + 0x140);
    for (plVar5 = *(long **)(this + 0x138); plVar5 != plVar15; plVar5 = plVar5 + 1) {
      lVar14 = ((long *)*plVar5)[0x13];
      if ((lVar14 != 0) && (*(char *)(lVar14 + 0x170) != '\0')) {
        (**(code **)(*(long *)*plVar5 + 200))(uVar18);
      }
    }
    plVar5 = *(long **)(this + 0x80);
    if (plVar5 == (long *)0x0) {
      ComponentOutletBase::Connect(this_00,(Component *)this);
      plVar5 = *(long **)(this + 0x80);
    }
    (**(code **)(*plVar5 + 200))(uVar18);
    plVar5 = *(long **)(this + 0x98);
    if (plVar5 == (long *)0x0) {
      ComponentOutletBase::Connect(this_01,(Component *)this);
      plVar5 = *(long **)(this + 0x98);
    }
  }
  (**(code **)(*plVar5 + 200))(uVar18);
LAB_0036c76c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


