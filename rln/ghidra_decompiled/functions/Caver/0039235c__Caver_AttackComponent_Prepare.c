/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039235c
 * Function: Caver::AttackComponent::Prepare
 * Signature: undefined __thiscall Prepare(AttackComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttackComponent::Prepare() */

void __thiscall Caver::AttackComponent::Prepare(AttackComponent *this)

{
  int iVar1;
  AnimBlendNode *this_00;
  long *plVar2;
  CollisionShapeComponent *this_01;
  
  this_00 = operator_new(0x30);
  AnimBlendNode::AnimBlendNode(this_00);
  *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  plVar2 = *(long **)(this + 0xf8);
  *(AnimBlendNode **)(this + 0xf8) = this_00;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
    this_00 = *(AnimBlendNode **)(this + 0xf8);
  }
  *(undefined8 *)(this_00 + 0x24) = *(undefined8 *)(this + 0x128);
  this_01 = *(CollisionShapeComponent **)(this + 0x98);
  if (this_01 == (CollisionShapeComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    this_01 = *(CollisionShapeComponent **)(this + 0x98);
    if (this_01 == (CollisionShapeComponent *)0x0) {
      return;
    }
  }
  CollisionShapeComponent::SetEnabled(this_01,false);
  return;
}


