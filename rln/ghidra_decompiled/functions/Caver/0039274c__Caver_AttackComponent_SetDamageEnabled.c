/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039274c
 * Function: Caver::AttackComponent::SetDamageEnabled
 * Signature: undefined __thiscall SetDamageEnabled(AttackComponent * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttackComponent::SetDamageEnabled(bool) */

void __thiscall Caver::AttackComponent::SetDamageEnabled(AttackComponent *this,bool param_1)

{
  CollisionShapeComponent *this_00;
  
  this_00 = *(CollisionShapeComponent **)(this + 0x98);
  if (this_00 == (CollisionShapeComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    this_00 = *(CollisionShapeComponent **)(this + 0x98);
    if (this_00 == (CollisionShapeComponent *)0x0) goto LAB_00392784;
  }
  CollisionShapeComponent::SetEnabled(this_00,param_1);
LAB_00392784:
  this[0x124] = (AttackComponent)param_1;
  return;
}


