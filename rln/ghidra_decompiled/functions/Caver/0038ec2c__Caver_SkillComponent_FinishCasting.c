/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038ec2c
 * Function: Caver::SkillComponent::FinishCasting
 * Signature: undefined __thiscall FinishCasting(SkillComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillComponent::FinishCasting() */

void __thiscall Caver::SkillComponent::FinishCasting(SkillComponent *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  SceneObject *pSVar5;
  code *pcVar6;
  long lVar7;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(long **)(this + 200) == (long *)0x0) ||
     (uVar3 = (**(code **)(**(long **)(this + 200) + 0x110))(), (uVar3 & 1) == 0)) {
    plVar4 = *(long **)(this + 0xb0);
    if (plVar4 == (long *)0x0) {
LAB_0038ec9c:
      lVar7 = *(long *)(this + 200);
    }
    else {
      *(undefined1 *)(plVar4 + 0x1d) = 1;
      *(undefined8 *)(this + 0xb0) = 0;
      iVar1 = (int)plVar4[1] + -1;
      *(int *)(plVar4 + 1) = iVar1;
      if (iVar1 != 0) goto LAB_0038ec9c;
      (**(code **)(*plVar4 + 8))();
      lVar7 = *(long *)(this + 200);
    }
    if (lVar7 == 0) goto LAB_0038ed8c;
    local_40 = *(long **)(lVar7 + 0x28);
    pSVar5 = *(SceneObject **)(this + 0x28);
    if (local_40 != (long *)0x0) {
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    }
    SceneObject::AddChildObject(pSVar5,(intrusive_ptr *)&local_40);
    if ((local_40 != (long *)0x0) &&
       (iVar1 = (int)local_40[1] + -1, *(int *)(local_40 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*local_40 + 8))();
    }
    pSVar5 = *(SceneObject **)(this + 0xc0);
    SceneObject::WorldPointFromLocalPoint(*(Vector2 **)(this + 0x28));
    if ((DAT_00683488 < ABS((float)local_40 - *(float *)(pSVar5 + 0x70))) ||
       (DAT_00683488 < ABS(local_40._4_4_ - *(float *)(pSVar5 + 0x74)))) {
      *(float *)(pSVar5 + 0x70) = (float)local_40;
      *(float *)(pSVar5 + 0x74) = local_40._4_4_;
      if (pSVar5[0xb4] == (SceneObject)0x0) {
        SceneObject::RegisterForWorldBoundsUpdate(pSVar5);
        pSVar5[0xb4] = (SceneObject)0x1;
      }
    }
    *(undefined4 *)(*(long *)(this + 0xc0) + 0x78) = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
    pcVar6 = *(code **)(**(long **)(this + 200) + 0x108);
  }
  else {
    pcVar6 = *(code **)(**(long **)(this + 200) + 0x120);
  }
  (*pcVar6)();
LAB_0038ed8c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


