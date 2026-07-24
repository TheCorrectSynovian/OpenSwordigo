/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00370f8c
 * Function: Caver::HealthComponent::Update
 * Signature: undefined __thiscall Update(HealthComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthComponent::Update(float) */

void __thiscall Caver::HealthComponent::Update(HealthComponent *this,float param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  SceneObject *pSVar6;
  long *plVar7;
  code *pcVar8;
  int iVar9;
  string *psVar10;
  float fVar11;
  float fVar12;
  SceneObject *local_60;
  undefined4 local_58;
  undefined1 auStack_50 [8];
  long *local_48;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (0 < *(int *)(this + 0xa4)) {
    uVar2 = *(uint *)(this + 0x7c);
    if (*(int *)(this + 0x80) < (int)uVar2) {
      fVar11 = *(float *)(this + 0xa8);
      *(float *)(this + 0xa8) = fVar11 + param_1;
      if (12.0 < fVar11 + param_1) {
        *(undefined4 *)(this + 0xa8) = 0;
        if (this[0x78] == (HealthComponent)0x0) {
          uVar1 = *(int *)(this + 0x80) + 1;
          if ((int)uVar2 <= (int)uVar1) {
            uVar1 = uVar2;
          }
          *(uint *)(this + 0x80) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
        }
        psVar10 = *(string **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0xa0);
        FUN_00666bb8(&local_60,"collect_health",auStack_50);
        ObjectLibrary::TemplateForName(psVar10,SUB81(&local_60,0));
        if (local_60 + -0x18 != (SceneObject *)PTR_DAT_007e5de8) {
          pSVar6 = local_60 + -8;
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar9 = *(int *)pSVar6;
            *(int *)pSVar6 = iVar9 + -1;
          }
          else {
            do {
              iVar9 = *(int *)pSVar6;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pSVar6,0x10);
              if (bVar5) {
                *(int *)pSVar6 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar9 < 1) {
            operator_delete(local_60 + -0x18);
          }
        }
        if (local_48 != (long *)0x0) {
          pSVar6 = operator_new(0x128);
          SceneObject::SceneObject(pSVar6);
          SceneObject::InitWithTemplate(pSVar6,(intrusive_ptr *)&local_48);
          local_60 = *(SceneObject **)(*(long *)(this + 0x28) + 0x70);
          local_58 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
          Vector2::Vector2((Vector2 *)&local_40,(Vector3 *)&local_60);
          if ((DAT_00683488 < ABS(local_40 - *(float *)(pSVar6 + 0x70))) ||
             (DAT_00683488 < ABS(local_3c - *(float *)(pSVar6 + 0x74)))) {
            *(float *)(pSVar6 + 0x70) = local_40;
            *(float *)(pSVar6 + 0x74) = local_3c;
            if (pSVar6[0xb4] == (SceneObject)0x0) {
              SceneObject::RegisterForWorldBoundsUpdate(pSVar6);
              pSVar6[0xb4] = (SceneObject)0x1;
            }
          }
          *(undefined4 *)(pSVar6 + 0x78) = local_58;
          plVar7 = *(long **)(*(long *)(this + 0x28) + 0x20);
          pcVar8 = *(code **)(*plVar7 + 0x28);
          *(int *)(pSVar6 + 8) = *(int *)(pSVar6 + 8) + 1;
          local_60 = pSVar6;
          (*pcVar8)(plVar7,&local_60);
          if ((local_60 != (SceneObject *)0x0) &&
             (iVar9 = *(int *)(local_60 + 8), *(int *)(local_60 + 8) = iVar9 + -1, iVar9 + -1 == 0))
          {
            (**(code **)(*(long *)local_60 + 8))();
          }
          if ((local_48 != (long *)0x0) &&
             (iVar9 = (int)local_48[1] + -1, *(int *)(local_48 + 1) = iVar9, iVar9 == 0)) {
            (**(code **)(*local_48 + 8))();
          }
        }
      }
    }
    else {
      *(undefined4 *)(this + 0xa8) = 0;
    }
  }
  if ((DAT_00683734 < *(float *)(this + 0x94)) &&
     (fVar11 = *(float *)(this + 0x94) - param_1, *(float *)(this + 0x94) = fVar11, fVar11 < 0.0)) {
    *(undefined4 *)(this + 0x94) = 0;
  }
  fVar11 = *(float *)(this + 0xac) - param_1;
  *(float *)(this + 0xac) = fVar11;
  if (0.0 < fVar11) {
    fVar12 = *(float *)(this + 0xb0) - param_1 / fVar11;
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    bVar5 = fVar11 - param_1 < DAT_00683944;
    *(float *)(this + 0xac) = fVar11 - param_1;
    *(float *)(this + 0xb0) = fVar12;
    if (bVar5) {
      *(undefined4 *)(this + 0xac) = 0;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


