/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038cd94
 * Function: Caver::ProjectileControllerComponent::CreateBlast
 * Signature: undefined __thiscall CreateBlast(ProjectileControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileControllerComponent::CreateBlast() */

void __thiscall
Caver::ProjectileControllerComponent::CreateBlast(ProjectileControllerComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  SceneObject *pSVar4;
  undefined *puVar5;
  SceneObject *pSVar6;
  int *piVar7;
  int iVar8;
  string *psVar9;
  long *local_68;
  undefined4 local_60;
  undefined1 auStack_58 [8];
  SceneObject *local_50;
  float local_48;
  float fStack_44;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  pSVar4 = operator_new(0x128);
  SceneObject::SceneObject(pSVar4);
  *(int *)(pSVar4 + 8) = *(int *)(pSVar4 + 8) + 1;
  psVar9 = *(string **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0xa0);
  local_50 = pSVar4;
  FUN_00666bb8(&local_48,"particle_blast",auStack_58);
  ObjectLibrary::TemplateForName(psVar9,SUB81(&local_48,0));
  SceneObject::InitWithTemplate(pSVar4,(intrusive_ptr *)&local_68);
  if ((local_68 != (long *)0x0) &&
     (iVar8 = (int)local_68[1] + -1, *(int *)(local_68 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_68 + 8))();
  }
  puVar5 = (undefined *)(CONCAT44(fStack_44,local_48) + -0x18);
  if (puVar5 != PTR_DAT_007e5de8) {
    piVar7 = (int *)(CONCAT44(fStack_44,local_48) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(puVar5);
    }
  }
  pSVar4 = local_50;
  local_68 = *(long **)(*(long *)(this + 0x28) + 0x70);
  local_60 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
  Vector2::Vector2((Vector2 *)&local_48,(Vector3 *)&local_68);
  pSVar6 = pSVar4;
  if ((DAT_00683488 < ABS(local_48 - *(float *)(pSVar4 + 0x70))) ||
     (DAT_00683488 < ABS(fStack_44 - *(float *)(pSVar4 + 0x74)))) {
    *(float *)(pSVar4 + 0x70) = local_48;
    *(float *)(pSVar4 + 0x74) = fStack_44;
    if (pSVar4[0xb4] == (SceneObject)0x0) {
      SceneObject::RegisterForWorldBoundsUpdate(pSVar4);
      pSVar4[0xb4] = (SceneObject)0x1;
      pSVar6 = local_50;
    }
  }
  *(undefined4 *)(pSVar4 + 0x78) = local_60;
  SceneObject::SetInstanceScaling(pSVar6,1.0);
  (**(code **)(**(long **)(*(long *)(this + 0x28) + 0x20) + 0x28))
            (*(long **)(*(long *)(this + 0x28) + 0x20),&local_50);
  if ((local_50 != (SceneObject *)0x0) &&
     (iVar8 = *(int *)(local_50 + 8), *(int *)(local_50 + 8) = iVar8 + -1, iVar8 + -1 == 0)) {
    (**(code **)(*(long *)local_50 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


