/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038e658
 * Function: Caver::SkillComponent::BeginCasting
 * Signature: undefined __thiscall BeginCasting(SkillComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillComponent::BeginCasting() */

void __thiscall Caver::SkillComponent::BeginCasting(SkillComponent *this)

{
  SkillComponent *pSVar1;
  int iVar2;
  long lVar3;
  SpellComponent *this_00;
  long *plVar4;
  ulong uVar5;
  SceneObject *pSVar6;
  long lVar7;
  long lVar8;
  intrusive_ptr *piVar9;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this_00 = *(SpellComponent **)(this + 200);
  if (this_00 != (SpellComponent *)0x0) {
    local_50 = *(long **)(this + 0x28);
    if (local_50 != (long *)0x0) {
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    }
    SpellComponent::SetCasterObject(this_00,(intrusive_ptr *)&local_50);
    if ((local_50 != (long *)0x0) &&
       (iVar2 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*local_50 + 8))();
    }
    plVar4 = *(long **)(this + 200);
    *(undefined8 *)((long)plVar4 + 0x84) = *(undefined8 *)(this + 0x90);
    *(undefined4 *)((long)plVar4 + 0x8c) = *(undefined4 *)(this + 0x98);
    if ((plVar4 != (long *)0x0) && (uVar5 = (**(code **)(*plVar4 + 0x110))(), (uVar5 & 1) != 0)) {
      pSVar6 = *(SceneObject **)(this + 0x28);
      local_50 = *(long **)(*(long *)(this + 200) + 0x28);
      if (local_50 != (long *)0x0) {
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      }
      SceneObject::AddChildObject(pSVar6,(intrusive_ptr *)&local_50);
      if ((local_50 != (long *)0x0) &&
         (iVar2 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar2, iVar2 == 0)) {
        (**(code **)(*local_50 + 8))();
      }
      pSVar6 = *(SceneObject **)(this + 0xc0);
      SceneObject::WorldPointFromLocalPoint(*(Vector2 **)(this + 0x28));
      if ((DAT_00683488 < ABS((float)local_50 - *(float *)(pSVar6 + 0x70))) ||
         (DAT_00683488 < ABS(local_50._4_4_ - *(float *)(pSVar6 + 0x74)))) {
        *(float *)(pSVar6 + 0x70) = (float)local_50;
        *(float *)(pSVar6 + 0x74) = local_50._4_4_;
        if (pSVar6[0xb4] == (SceneObject)0x0) {
          SceneObject::RegisterForWorldBoundsUpdate(pSVar6);
          pSVar6[0xb4] = (SceneObject)0x1;
        }
      }
      *(undefined4 *)(*(long *)(this + 0xc0) + 0x78) =
           *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
      (**(code **)(**(long **)(this + 200) + 0x118))();
      goto LAB_0038e994;
    }
  }
  piVar9 = (intrusive_ptr *)(this + 0xa8);
  if (*(long *)piVar9 == 0) {
    if (*(long *)(*(long *)(this + 0xa0) + -0x18) == 0) goto LAB_0038e994;
    ObjectLibrary::TemplateForName
              (*(string **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0xa0),SUB81(this + 0xa0,0));
    if (local_50 != (long *)0x0) {
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    }
    plVar4 = *(long **)piVar9;
    *(long **)piVar9 = local_50;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    if ((local_50 != (long *)0x0) &&
       (iVar2 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*local_50 + 8))();
    }
    if (*(long *)piVar9 == 0) goto LAB_0038e994;
  }
  pSVar6 = operator_new(0x128);
  SceneObject::SceneObject(pSVar6);
  pSVar1 = this + 0xb0;
  *(int *)(pSVar6 + 8) = *(int *)(pSVar6 + 8) + 1;
  plVar4 = *(long **)pSVar1;
  *(SceneObject **)pSVar1 = pSVar6;
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
    pSVar6 = *(SceneObject **)pSVar1;
  }
  SceneObject::InitWithTemplate(pSVar6,piVar9);
  pSVar6 = *(SceneObject **)(this + 0xb0);
  SceneObject::WorldPointFromLocalPoint(*(Vector2 **)(this + 0x28));
  if ((DAT_00683488 < ABS((float)local_50 - *(float *)(pSVar6 + 0x70))) ||
     (DAT_00683488 < ABS(local_50._4_4_ - *(float *)(pSVar6 + 0x74)))) {
    *(float *)(pSVar6 + 0x70) = (float)local_50;
    *(float *)(pSVar6 + 0x74) = local_50._4_4_;
    if (pSVar6[0xb4] == (SceneObject)0x0) {
      SceneObject::RegisterForWorldBoundsUpdate(pSVar6);
      pSVar6[0xb4] = (SceneObject)0x1;
    }
  }
  lVar7 = *(long *)(this + 0x28);
  lVar8 = *(long *)(this + 0xb0);
  *(undefined4 *)(lVar8 + 0x78) = *(undefined4 *)(lVar7 + 0x78);
  *(undefined8 *)(lVar8 + 0x68) = *(undefined8 *)(lVar7 + 0x68);
  *(undefined4 *)(lVar8 + 0x78) = *(undefined4 *)(lVar7 + 0x78);
  (**(code **)(**(long **)(lVar7 + 0x20) + 0x28))(*(long **)(lVar7 + 0x20),pSVar1);
LAB_0038e994:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


