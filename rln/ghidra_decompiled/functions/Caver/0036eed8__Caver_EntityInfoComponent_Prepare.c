/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036eed8
 * Function: Caver::EntityInfoComponent::Prepare
 * Signature: undefined __thiscall Prepare(EntityInfoComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityInfoComponent::Prepare() */

void __thiscall Caver::EntityInfoComponent::Prepare(EntityInfoComponent *this)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  MapNode *this_00;
  SceneObject *this_01;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_70;
  long *local_68;
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = 0;
  uStack_50 = 0;
  local_60 = (void *)0x0;
  SceneObject::GetComponentsWithInterface<Caver::EntityInfoComponent>
            (*(SceneObject **)(this + 0x28),(vector *)&local_60);
  puVar8 = *(undefined8 **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0x10);
  if (puVar8 == (undefined8 *)0x0) goto LAB_0036f0fc;
  GameData::EntityClassForName((string *)*puVar8);
  if (local_68 != (long *)0x0) {
    local_68[1] = local_68[1] + 1;
  }
  plVar7 = *(long **)(this + 0x88);
  *(undefined8 *)(this + 0x80) = local_70;
  *(long **)(this + 0x88) = local_68;
  if ((plVar7 != (long *)0x0) && (lVar6 = plVar7[1], plVar7[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar6 = plVar7[2];
    plVar7[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  if ((local_68 != (long *)0x0) && (lVar6 = local_68[1], local_68[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_68 + 0x10))(local_68);
    lVar6 = local_68[2];
    local_68[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*local_68 + 0x18))(local_68);
    }
  }
  this_00 = (MapNode *)puVar8[0x2e];
  plVar7 = (long *)puVar8[0x2f];
  if (plVar7 == (long *)0x0) {
    if (this_00 != (MapNode *)0x0) {
      plVar7 = (long *)0x0;
LAB_0036f044:
      bVar2 = true;
      goto LAB_0036f048;
    }
  }
  else {
    if (plVar7[1] == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar6 = plVar7[2];
      plVar7[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    if (this_00 != (MapNode *)0x0) {
      this_00 = (MapNode *)puVar8[0x2e];
      plVar7 = (long *)puVar8[0x2f];
      if (plVar7 == (long *)0x0) goto LAB_0036f044;
      bVar2 = false;
      plVar7[1] = plVar7[1] + 1;
LAB_0036f048:
      uVar4 = MapNode::ExperienceLevel(this_00);
      *(undefined4 *)(this + 0x90) = uVar4;
      if ((!bVar2) && (lVar6 = plVar7[1], plVar7[1] = lVar6 + -1, lVar6 + -1 == 0)) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        lVar6 = plVar7[2];
        plVar7[2] = lVar6 + -1;
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
    }
  }
  ApplyToObject(this,*(SceneObject **)(this + 0x28));
  puVar3 = PTR_Interface_007e4ff0;
  lVar6 = *(long *)(*(long *)(this + 0x28) + 0x38);
  if ((lVar6 != 0) && (0 < *(int *)(lVar6 + 0x38))) {
    lVar9 = 0;
    do {
      this_01 = *(SceneObject **)(*(long *)(lVar6 + 0x40) + lVar9 * 8);
      lVar5 = SceneObject::ComponentWithInterface(this_01,(long)puVar3);
      if (lVar5 == 0) {
        ApplyToObject(this,this_01);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(lVar6 + 0x38));
  }
LAB_0036f0fc:
  this[0x70] = (EntityInfoComponent)0x1;
  if (local_60 != (void *)0x0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


