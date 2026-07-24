/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c0418
 * Function: Caver::CollisionShapeComponent::setOnCollide
 * Signature: undefined __thiscall setOnCollide(CollisionShapeComponent * this, Program * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::setOnCollide(Caver::Program const&) */

void __thiscall
Caver::CollisionShapeComponent::setOnCollide(CollisionShapeComponent *this,Program *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  FUN_0066a6a8(this + 0x90);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0xa0);
  *(undefined8 *)(this + 0x98) = uVar1;
  *(long *)(this + 0xa0) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      lVar2 = *(long *)(param_1 + 0x20);
      goto joined_r0x003c048c;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
joined_r0x003c048c:
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
                    /* WARNING: Could not recover jumptable at 0x003c051c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  return;
}


