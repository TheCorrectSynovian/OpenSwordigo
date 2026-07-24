/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003178a0
 * Function: Caver::CollisionShapeComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(CollisionShapeComponent * this, CollisionShapeComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::InitWithComponent(Caver::CollisionShapeComponent const*) */

void __thiscall
Caver::CollisionShapeComponent::InitWithComponent
          (CollisionShapeComponent *this,CollisionShapeComponent *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  ShapeComponent::InitWithComponent((ShapeComponent *)this,(ShapeComponent *)param_1);
  uVar1 = *(undefined8 *)(this + 0x78);
  lVar2 = *(long *)(this + 0x80);
  this[0x178] = param_1[0x178];
  *(undefined4 *)(this + 0x108) = *(undefined4 *)(this + 0x70);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x118);
  *(undefined8 *)(this + 0x110) = uVar1;
  *(long *)(this + 0x118) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  *(undefined8 *)(this + 0x150) = *(undefined8 *)(param_1 + 0x150);
  this[0x17a] = param_1[0x17a];
  this[0x17b] = param_1[0x17b];
  this[0x17c] = param_1[0x17c];
  this[0x17d] = param_1[0x17d];
  *(undefined8 *)(this + 0x180) = *(undefined8 *)(param_1 + 0x180);
  this[0x188] = param_1[0x188];
  FUN_0066a6a8(this + 0x90,param_1 + 0x90);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  lVar2 = *(long *)(param_1 + 0xa0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0xa0);
  *(undefined8 *)(this + 0x98) = uVar1;
  *(long *)(this + 0xa0) = lVar2;
  if ((plVar3 == (long *)0x0) || (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 != 0)) {
LAB_003179c0:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    lVar2 = *(long *)(param_1 + 0xb0);
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 != 0) goto LAB_003179c0;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    lVar2 = *(long *)(param_1 + 0xb0);
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0xb0);
  *(undefined8 *)(this + 0xa8) = uVar1;
  *(long *)(this + 0xb0) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  FUN_0066a6a8(this + 0xb8,param_1 + 0xb8);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  lVar2 = *(long *)(param_1 + 200);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 200);
  *(undefined8 *)(this + 0xc0) = uVar1;
  *(long *)(this + 200) = lVar2;
  if ((plVar3 == (long *)0x0) || (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 != 0)) {
LAB_00317a7c:
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    lVar2 = *(long *)(param_1 + 0xd8);
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 != 0) goto LAB_00317a7c;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    lVar2 = *(long *)(param_1 + 0xd8);
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0xd8);
  *(undefined8 *)(this + 0xd0) = uVar1;
  *(long *)(this + 0xd8) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  FUN_0066a6a8(this + 0xe0,param_1 + 0xe0);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  lVar2 = *(long *)(param_1 + 0xf0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0xf0);
  *(undefined8 *)(this + 0xe8) = uVar1;
  *(long *)(this + 0xf0) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
      uVar1 = *(undefined8 *)(param_1 + 0xf8);
      lVar2 = *(long *)(param_1 + 0x100);
      goto joined_r0x00317b3c;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  lVar2 = *(long *)(param_1 + 0x100);
joined_r0x00317b3c:
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x100);
  *(undefined8 *)(this + 0xf8) = uVar1;
  *(long *)(this + 0x100) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00317c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  return;
}


