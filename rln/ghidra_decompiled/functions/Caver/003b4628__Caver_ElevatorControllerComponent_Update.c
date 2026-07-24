/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b4628
 * Function: Caver::ElevatorControllerComponent::Update
 * Signature: undefined __thiscall Update(ElevatorControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ElevatorControllerComponent::Update(float) */

void __thiscall
Caver::ElevatorControllerComponent::Update(ElevatorControllerComponent *this,float param_1)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  SceneObject *pSVar4;
  SceneObject *pSVar5;
  long lVar6;
  SceneObject *this_00;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_50;
  float fStack_4c;
  long local_48;
  
  fVar8 = DAT_00683488;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(this + 0x9c);
  if (iVar1 == 0) {
    if (*(int *)(this + 0x98) != 2) goto LAB_003b4974;
    *(undefined4 *)(this + 0x9c) = 1;
    if (this[0xa0] == (ElevatorControllerComponent)0x0) {
      lVar6 = *(long *)(this + 0x28);
      this[0xa0] = (ElevatorControllerComponent)0x1;
      fVar8 = *(float *)(lVar6 + 0x70);
      *(float *)(this + 0xa4) = fVar8;
      pfVar3 = (float *)(lVar6 + 0x74);
      fVar7 = *pfVar3;
      *(float *)(this + 0xa8) = fVar7;
    }
    else {
      lVar6 = *(long *)(this + 0x28);
      fVar8 = *(float *)(this + 0xa4);
      fVar7 = *(float *)(this + 0xa8);
      pfVar3 = (float *)(lVar6 + 0x74);
    }
    fVar8 = fVar8 + *(float *)(this + 0xac);
    fVar7 = fVar7 + *(float *)(this + 0xb0);
    *(float *)(this + 0xb8) = fVar8;
    *(float *)(this + 0xbc) = fVar7;
    fVar9 = *(float *)(lVar6 + 0x70) - fVar8;
    fVar12 = *pfVar3 - fVar7;
    if (fVar9 * fVar9 + fVar12 * fVar12 < DAT_00683488) goto LAB_003b48ac;
    local_50 = fVar8 - *(float *)(lVar6 + 0x70);
    fStack_4c = fVar7 - *pfVar3;
LAB_003b4894:
    Vector2::Normalize((Vector2 *)&local_50);
    *(ulong *)(lVar6 + 0x68) =
         CONCAT44(fStack_4c * *(float *)(this + 0xb4),local_50 * *(float *)(this + 0xb4));
LAB_003b48ac:
    if (*(int *)(this + 0x9c) == 0) goto LAB_003b4974;
  }
  else {
    if (iVar1 == 2) {
      lVar6 = *(long *)(this + 0x28);
      fVar7 = *(float *)(lVar6 + 0x70);
      fVar9 = *(float *)(lVar6 + 0x74);
      fVar12 = (fVar7 - *(float *)(this + 0xb8)) * (fVar7 - *(float *)(this + 0xb8)) +
               (fVar9 - *(float *)(this + 0xbc)) * (fVar9 - *(float *)(this + 0xbc));
      if (*(int *)(this + 0x98) == 2) {
        if (fVar12 < DAT_00683488) {
          *(undefined4 *)(this + 0x9c) = 1;
          if (this[0xa0] == (ElevatorControllerComponent)0x0) {
            this[0xa0] = (ElevatorControllerComponent)0x1;
            *(float *)(this + 0xa4) = fVar7;
            *(float *)(this + 0xa8) = fVar9;
          }
          else {
            fVar7 = *(float *)(this + 0xa4);
            fVar9 = *(float *)(this + 0xa8);
          }
          fVar7 = fVar7 + *(float *)(this + 0xac);
          fVar9 = fVar9 + *(float *)(this + 0xb0);
          *(float *)(this + 0xb8) = fVar7;
          *(float *)(this + 0xbc) = fVar9;
          fVar12 = *(float *)(lVar6 + 0x70) - fVar7;
          fVar14 = *(float *)(lVar6 + 0x74) - fVar9;
          if (fVar8 <= fVar12 * fVar12 + fVar14 * fVar14) {
            local_50 = fVar7 - *(float *)(lVar6 + 0x70);
            fStack_4c = fVar9 - *(float *)(lVar6 + 0x74);
            goto LAB_003b4894;
          }
        }
      }
      else if (fVar12 < DAT_00683488) {
        *(undefined4 *)(this + 0x9c) = 0;
        goto LAB_003b4974;
      }
      goto LAB_003b48ac;
    }
    if (iVar1 == 1) {
      if (*(int *)(this + 0x98) == 1) {
        if (1.0 < *(float *)(this + 0xcc)) goto LAB_003b4790;
      }
      else if (*(int *)(this + 0x98) == 2) {
        lVar6 = *(long *)(this + 0x28);
        fVar7 = (float)*(undefined8 *)(lVar6 + 0x70) - (float)*(undefined8 *)(this + 0xb8);
        fVar9 = (float)((ulong)*(undefined8 *)(lVar6 + 0x70) >> 0x20) -
                (float)((ulong)*(undefined8 *)(this + 0xb8) >> 0x20);
        if (fVar7 * fVar7 + fVar9 * fVar9 < DAT_00683488) {
          fVar7 = *(float *)(this + 0xa4);
          fVar9 = *(float *)(this + 0xa8);
          *(undefined4 *)(this + 0x9c) = 2;
          *(float *)(this + 0xb8) = fVar7;
          *(float *)(this + 0xbc) = fVar9;
          fVar12 = *(float *)(lVar6 + 0x70) - fVar7;
          fVar14 = *(float *)(lVar6 + 0x74) - fVar9;
          if (fVar8 <= fVar12 * fVar12 + fVar14 * fVar14) {
            local_50 = fVar7 - *(float *)(lVar6 + 0x70);
            fStack_4c = fVar9 - *(float *)(lVar6 + 0x74);
            goto LAB_003b4894;
          }
        }
      }
      else {
LAB_003b4790:
        fVar8 = *(float *)(this + 0xa4);
        fVar7 = *(float *)(this + 0xa8);
        lVar6 = *(long *)(this + 0x28);
        *(undefined4 *)(this + 0x9c) = 2;
        *(float *)(this + 0xb8) = fVar8;
        *(float *)(this + 0xbc) = fVar7;
        fVar9 = *(float *)(lVar6 + 0x70) - fVar8;
        fVar12 = *(float *)(lVar6 + 0x74) - fVar7;
        if (DAT_00683488 <= fVar9 * fVar9 + fVar12 * fVar12) {
          local_50 = fVar8 - *(float *)(lVar6 + 0x70);
          fStack_4c = fVar7 - *(float *)(lVar6 + 0x74);
          goto LAB_003b4894;
        }
      }
      goto LAB_003b48ac;
    }
  }
  this_00 = *(SceneObject **)(this + 0x28);
  fVar11 = *(float *)(this_00 + 0x70);
  fVar9 = *(float *)(this_00 + 0x74);
  pSVar4 = this_00 + 0x68;
  fVar8 = *(float *)pSVar4;
  pSVar5 = this_00 + 0x6c;
  fVar7 = *(float *)pSVar5;
  fVar12 = *(float *)(this + 0xb8);
  fVar14 = *(float *)(this + 0xbc);
  fVar13 = fVar8 * param_1;
  fVar15 = fVar7 * param_1;
  fVar10 = fVar12 - fVar11;
  if (fVar13 * fVar13 + fVar15 * fVar15 <= fVar10 * fVar10 + (fVar14 - fVar9) * (fVar14 - fVar9)) {
    fVar12 = fVar11 + fVar13;
    fVar14 = fVar9 + fVar15;
    fVar10 = fVar12 - fVar11;
  }
  else {
    fVar8 = 0.0;
    fVar7 = 0.0;
  }
  if ((DAT_00683488 < ABS(fVar10)) || (DAT_00683488 < ABS(fVar14 - fVar9))) {
    *(float *)(this_00 + 0x70) = fVar12;
    *(float *)(this_00 + 0x74) = fVar14;
    if (this_00[0xb4] == (SceneObject)0x0) {
      SceneObject::RegisterForWorldBoundsUpdate(this_00);
      this_00[0xb4] = (SceneObject)0x1;
      pSVar4 = (SceneObject *)(*(long *)(this + 0x28) + 0x68);
      pSVar5 = (SceneObject *)(*(long *)(this + 0x28) + 0x6c);
    }
  }
  *(float *)pSVar4 = fVar8;
  *(float *)pSVar5 = fVar7;
LAB_003b4974:
  fVar8 = 0.0;
  if (*(float *)(this + 0xcc) < _DAT_00684434) {
    fVar8 = *(float *)(this + 200) + param_1;
  }
  *(float *)(this + 200) = fVar8;
  *(float *)(this + 0xcc) = *(float *)(this + 0xcc) + param_1;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


