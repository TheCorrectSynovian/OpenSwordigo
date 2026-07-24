/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031ac6c
 * Function: Caver::CollisionShapeComponent::SetUpdatedShape
 * Signature: undefined __thiscall SetUpdatedShape(CollisionShapeComponent * this, Shape * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::SetUpdatedShape(Caver::Shape const&) */

void __thiscall
Caver::CollisionShapeComponent::SetUpdatedShape(CollisionShapeComponent *this,Shape *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  SceneObject *pSVar4;
  long *plVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(this + 0x108) = *(undefined4 *)param_1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
  }
  plVar5 = *(long **)(this + 0x118);
  *(undefined8 *)(this + 0x110) = uVar1;
  *(long *)(this + 0x118) = lVar3;
  if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar3 = plVar5[2];
    plVar5[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  Shape::Bounds();
  *(undefined8 *)(this + 0x160) = uStack_40;
  *(undefined8 *)(this + 0x158) = local_48;
  uStack_58 = *(undefined8 *)(*(long *)(this + 0x28) + 0x9c);
  local_60 = *(undefined8 *)(*(long *)(this + 0x28) + 0x94);
  Rectangle::ExpandToincludeRectangle((Rectangle *)&local_60,(Rectangle *)&local_48);
  pSVar4 = *(SceneObject **)(this + 0x28);
  if ((((DAT_00683488 < ABS((float)local_60 - *(float *)(pSVar4 + 0x94))) ||
       (DAT_00683488 < ABS(local_60._4_4_ - *(float *)(pSVar4 + 0x98)))) ||
      (DAT_00683488 < ABS((float)uStack_58 - *(float *)(pSVar4 + 0x9c)))) ||
     (DAT_00683488 < ABS(uStack_58._4_4_ - *(float *)(pSVar4 + 0xa0)))) {
    *(undefined8 *)(pSVar4 + 0x9c) = uStack_58;
    *(undefined8 *)(pSVar4 + 0x94) = local_60;
    if (pSVar4[0xb4] == (SceneObject)0x0) {
      SceneObject::RegisterForWorldBoundsUpdate(pSVar4);
      pSVar4[0xb4] = (SceneObject)0x1;
    }
  }
  pSVar4 = *(SceneObject **)(this + 0x28);
  if (pSVar4[0xb4] == (SceneObject)0x0) {
    SceneObject::RegisterForWorldBoundsUpdate(pSVar4);
    pSVar4[0xb4] = (SceneObject)0x1;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


