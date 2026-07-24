/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031aab0
 * Function: Caver::CollisionShapeComponent::SetShape
 * Signature: undefined __thiscall SetShape(CollisionShapeComponent * this, Shape * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::SetShape(Caver::Shape const&) */

void __thiscall
Caver::CollisionShapeComponent::SetShape(CollisionShapeComponent *this,Shape *param_1)

{
  undefined8 uVar1;
  CollisionShapeComponent CVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)param_1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
  }
  plVar6 = *(long **)(this + 0x80);
  *(undefined8 *)(this + 0x78) = uVar1;
  *(long *)(this + 0x80) = lVar5;
  if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  uVar1 = *(undefined8 *)(this + 0x78);
  lVar5 = *(long *)(this + 0x80);
  *(undefined4 *)(this + 0x108) = *(undefined4 *)(this + 0x70);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
  }
  plVar6 = *(long **)(this + 0x118);
  *(undefined8 *)(this + 0x110) = uVar1;
  *(long *)(this + 0x118) = lVar5;
  if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
      CVar2 = this[0x179];
      goto joined_r0x0031ab98;
    }
  }
  CVar2 = this[0x179];
joined_r0x0031ab98:
  if (CVar2 == (CollisionShapeComponent)0x0) {
    Shape::Bounds();
    *(undefined8 *)(this + 0x160) = uStack_40;
    *(undefined8 *)(this + 0x158) = local_48;
    Component::UpdateObjectBounds((Component *)this);
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


