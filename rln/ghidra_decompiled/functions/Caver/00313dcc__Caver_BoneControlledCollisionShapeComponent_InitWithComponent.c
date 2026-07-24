/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00313dcc
 * Function: Caver::BoneControlledCollisionShapeComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(BoneControlledCollisionShapeComponent * this, BoneControlledCollisionShapeComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BoneControlledCollisionShapeComponent::InitWithComponent(Caver::BoneControlledCollisionShapeComponent
   const*) */

void __thiscall
Caver::BoneControlledCollisionShapeComponent::InitWithComponent
          (BoneControlledCollisionShapeComponent *this,
          BoneControlledCollisionShapeComponent *param_1)

{
  int iVar1;
  long *plVar2;
  
  CollisionShapeComponent::InitWithComponent
            ((CollisionShapeComponent *)this,(CollisionShapeComponent *)param_1);
  if (*(int *)(this + 0x1d8) != *(int *)(param_1 + 0x1d8)) {
    plVar2 = *(long **)(this + 0x1e0);
    *(int *)(this + 0x1d8) = *(int *)(param_1 + 0x1d8);
    *(undefined8 *)(this + 0x1e0) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  FUN_0066a6a8(this + 0x1e8,param_1 + 0x1e8);
  return;
}


