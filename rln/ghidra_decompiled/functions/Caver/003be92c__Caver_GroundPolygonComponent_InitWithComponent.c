/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003be92c
 * Function: Caver::GroundPolygonComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(GroundPolygonComponent * this, GroundPolygonComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundPolygonComponent::InitWithComponent(Caver::GroundPolygonComponent const*) */

void __thiscall
Caver::GroundPolygonComponent::InitWithComponent
          (GroundPolygonComponent *this,GroundPolygonComponent *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::operator=
            ((vector<Caver::Vector2,std::allocator<Caver::Vector2>> *)(this + 0x78),
             (vector *)(param_1 + 0x78));
  *(undefined2 *)(this + 0x90) = *(undefined2 *)(param_1 + 0x90);
  Polygon::Bounds();
  *(undefined8 *)(this + 0xa0) = uStack_40;
  *(undefined8 *)(this + 0x98) = local_48;
  Component::UpdateObjectBounds((Component *)this);
  this[0xb0] = param_1[0xb0];
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  this[0xb8] = param_1[0xb8];
  FUN_0066a6a8(this + 0xc0,param_1 + 0xc0);
  uVar1 = *(undefined8 *)(param_1 + 200);
  lVar4 = *(long *)(param_1 + 0xd0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
  }
  plVar5 = *(long **)(this + 0xd0);
  *(undefined8 *)(this + 200) = uVar1;
  *(long *)(this + 0xd0) = lVar4;
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  lVar4 = *(long *)(param_1 + 0xe0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
  }
  plVar5 = *(long **)(this + 0xe0);
  *(undefined8 *)(this + 0xd8) = uVar1;
  *(long *)(this + 0xe0) = lVar4;
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


