/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031ae00
 * Function: Caver::CollisionShapeComponent::SetDefaultShapeOfType
 * Signature: undefined __thiscall SetDefaultShapeOfType(CollisionShapeComponent * this, Type param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type) */

void __thiscall
Caver::CollisionShapeComponent::SetDefaultShapeOfType(CollisionShapeComponent *this,Circle *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_60;
  float local_58;
  undefined1 auStack_50 [16];
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(this + 0x28);
  if (lVar3 == 0) {
    ShapeComponent::SetDefaultShapeOfType((ShapeComponent *)this);
  }
  else {
    if ((int)param_2 == 2) {
      fVar5 = *(float *)(lVar3 + 0x94);
      fVar6 = *(float *)(lVar3 + 0x98);
      fVar8 = fVar5 + *(float *)(lVar3 + 0x9c);
      if (fVar5 <= fVar6) {
        fVar5 = fVar6;
      }
      fVar6 = fVar6 + *(float *)(lVar3 + 0xa0);
      fVar5 = -fVar5;
      fVar7 = fVar6;
      if (fVar5 <= fVar6) {
        fVar7 = fVar5;
      }
      pcVar4 = *(code **)(*(long *)this + 0x118);
      local_58 = fVar8;
      if (fVar7 <= fVar8) {
        local_58 = fVar6;
      }
      bVar2 = true;
      if ((fVar5 <= fVar6) && (bVar2 = false, !NAN(fVar8) && !NAN(fVar7))) {
        bVar2 = fVar8 < fVar7;
      }
      if (!bVar2) {
        local_58 = fVar5;
      }
      local_60 = 0;
      Shape::ShapeWithCircle((Shape *)&local_60,param_2);
      (*pcVar4)(this,auStack_50);
    }
    else {
      if ((int)param_2 != 1) goto LAB_0031af14;
      pcVar4 = *(code **)(*(long *)this + 0x118);
      Shape::ShapeWithRectangle((Shape *)(lVar3 + 0x94),(Rectangle *)param_2);
      (*pcVar4)(this,auStack_50);
    }
    if ((local_40 != (long *)0x0) &&
       (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar3 = local_40[2];
      local_40[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*local_40 + 0x18))(local_40);
      }
    }
  }
LAB_0031af14:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


