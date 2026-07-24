/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00315380
 * Function: Caver::BoneControlledCollisionShapeComponent::Clone
 * Signature: undefined __thiscall Clone(BoneControlledCollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BoneControlledCollisionShapeComponent::Clone() const */

BoneControlledCollisionShapeComponent * __thiscall
Caver::BoneControlledCollisionShapeComponent::Clone(BoneControlledCollisionShapeComponent *this)

{
  int iVar1;
  BoneControlledCollisionShapeComponent *this_00;
  long *plVar2;
  
  this_00 = operator_new(0x200);
  BoneControlledCollisionShapeComponent(this_00);
  CollisionShapeComponent::InitWithComponent
            ((CollisionShapeComponent *)this_00,(CollisionShapeComponent *)this);
  if (*(int *)(this_00 + 0x1d8) != *(int *)(this + 0x1d8)) {
    plVar2 = *(long **)(this_00 + 0x1e0);
    *(int *)(this_00 + 0x1d8) = *(int *)(this + 0x1d8);
    *(undefined8 *)(this_00 + 0x1e0) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  FUN_0066a6a8(this_00 + 0x1e8,this + 0x1e8);
  return this_00;
}


