/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00338650
 * Function: Caver::ShapeComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(ShapeComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShapeComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::ShapeComponent::SetValueForBindedProperty
          (ShapeComponent *this,int param_1,BindingValue *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  float *pfVar10;
  size_t *psVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  void *local_80 [2];
  long *local_70;
  float local_68;
  undefined8 local_64;
  float local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (param_1 == 100) {
    FUN_0066a528(local_80,*(undefined8 *)(param_2 + 8));
    pvVar5 = local_80[0];
    psVar11 = (size_t *)((long)local_80[0] + -0x18);
    if (*psVar11 == *(size_t *)((long)DAT_007e8ac8 + -0x18)) {
      iVar7 = memcmp(local_80[0],DAT_007e8ac8,*psVar11);
      bVar6 = iVar7 == 0;
    }
    else {
      bVar6 = false;
    }
    puVar4 = PTR_DAT_007e5de8;
    if (psVar11 != (size_t *)PTR_DAT_007e5de8) {
      piVar9 = (int *)((long)pvVar5 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar9;
        *piVar9 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete(psVar11);
      }
    }
    if ((bVar6) && (*(int *)(this + 0x70) != 1)) {
      (**(code **)(*(long *)this + 0x120))(this,1);
    }
    FUN_0066a528(local_80,*(undefined8 *)(param_2 + 8));
    pvVar5 = local_80[0];
    psVar11 = (size_t *)((long)local_80[0] + -0x18);
    if (*psVar11 == *(size_t *)((long)DAT_007e8ad0 + -0x18)) {
      iVar7 = memcmp(local_80[0],DAT_007e8ad0,*psVar11);
      bVar6 = iVar7 == 0;
      if (psVar11 == (size_t *)puVar4) goto LAB_003387d8;
LAB_00338a48:
      piVar9 = (int *)((long)pvVar5 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar9;
        *piVar9 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (0 < iVar7) goto LAB_003387d8;
      operator_delete(psVar11);
      if (bVar6) goto LAB_003387dc;
    }
    else {
      bVar6 = false;
      if (psVar11 != (size_t *)puVar4) goto LAB_00338a48;
LAB_003387d8:
      if (bVar6) {
LAB_003387dc:
        if (*(int *)(this + 0x70) != 2) {
          (**(code **)(*(long *)this + 0x120))(this,2);
        }
      }
    }
    FUN_0066a528(local_80,*(undefined8 *)(param_2 + 8));
    psVar11 = (size_t *)((long)local_80[0] + -0x18);
    if (*psVar11 == *(size_t *)((long)DAT_007e8ad8 + -0x18)) {
      iVar7 = memcmp(local_80[0],DAT_007e8ad8,*psVar11);
      bVar6 = iVar7 == 0;
    }
    else {
      bVar6 = false;
    }
    if (psVar11 != (size_t *)puVar4) {
      piVar9 = (int *)((long)local_80[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar9;
        *piVar9 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete(psVar11);
      }
    }
    if ((bVar6) && (*(int *)(this + 0x70) != 3)) {
      (**(code **)(*(long *)this + 0x120))(this,3);
    }
    goto LAB_003389f8;
  }
  if (*(int *)(this + 0x70) == 2) {
    local_68 = **(float **)(this + 0x78);
    local_64 = *(undefined8 *)(*(float **)(this + 0x78) + 1);
    if (param_1 == 0x69) {
      local_68 = **(float **)(param_2 + 8);
      *(int *)((ulong)&local_68 | 4) = (int)local_64;
    }
    else if (param_1 == 0x6a) {
      local_64._4_4_ = (undefined4)((ulong)local_64 >> 0x20);
      local_64 = CONCAT44(local_64._4_4_,**(undefined4 **)(param_2 + 8));
    }
    else {
      if (param_1 != 0x6b) goto switchD_00338724_default;
      local_64 = CONCAT44(**(undefined4 **)(param_2 + 8),(int)local_64);
    }
    pcVar12 = *(code **)(*(long *)this + 0x118);
    Shape::ShapeWithCircle((Shape *)&local_68,(Circle *)(ulong)(uint)param_1);
    (*pcVar12)(this,local_80);
    goto LAB_003389a0;
  }
  if (*(int *)(this + 0x70) != 1) goto switchD_00338724_default;
  pfVar10 = *(float **)(this + 0x78);
  local_68 = *pfVar10;
  fVar15 = pfVar10[1];
  fVar14 = pfVar10[2];
  local_64 = *(undefined8 *)(pfVar10 + 1);
  local_5c = pfVar10[3];
  switch(param_1) {
  case 0x65:
    fVar14 = local_68 + fVar14;
    local_68 = **(float **)(param_2 + 8);
    fVar14 = fVar14 - local_68;
    goto joined_r0x00338954;
  case 0x66:
    fVar14 = **(float **)(param_2 + 8) - local_68;
joined_r0x00338954:
    local_64 = CONCAT44(fVar14,(undefined4)local_64);
    fVar13 = local_5c;
    break;
  case 0x67:
    local_5c = fVar15 + local_5c;
    fVar15 = **(float **)(param_2 + 8);
    fVar13 = local_5c - fVar15;
    local_64 = CONCAT44(fVar14,fVar15);
    break;
  case 0x68:
    fVar13 = **(float **)(param_2 + 8) - fVar15;
    break;
  default:
    goto switchD_00338724_default;
  }
  if (fVar14 < 0.0) {
    local_68 = fVar14 + local_68;
    local_64 = CONCAT44(-fVar14,(undefined4)local_64);
  }
  local_5c = fVar13;
  if (fVar13 < 0.0) {
    local_5c = -fVar13;
    local_64 = CONCAT44(local_64._4_4_,fVar13 + fVar15);
  }
  pcVar12 = *(code **)(*(long *)this + 0x118);
  Shape::ShapeWithRectangle((Shape *)&local_68,(Rectangle *)(ulong)(uint)param_1);
  (*pcVar12)(this,local_80);
LAB_003389a0:
  if ((local_70 != (long *)0x0) && (lVar8 = local_70[1], local_70[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
    (**(code **)(*local_70 + 0x10))(local_70);
    lVar8 = local_70[2];
    local_70[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*local_70 + 0x18))(local_70);
    }
  }
switchD_00338724_default:
  Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
LAB_003389f8:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


