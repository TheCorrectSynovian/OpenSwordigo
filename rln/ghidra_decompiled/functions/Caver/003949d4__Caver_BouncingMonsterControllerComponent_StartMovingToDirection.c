/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003949d4
 * Function: Caver::BouncingMonsterControllerComponent::StartMovingToDirection
 * Signature: undefined __thiscall StartMovingToDirection(BouncingMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BouncingMonsterControllerComponent::StartMovingToDirection(int) */

void __thiscall
Caver::BouncingMonsterControllerComponent::StartMovingToDirection
          (BouncingMonsterControllerComponent *this,int param_1)

{
  EntityComponent *this_00;
  
  if (*(int *)(this + 0x110) == param_1) {
    return;
  }
  this_00 = *(EntityComponent **)(this + 0x80);
  *(int *)(this + 0x110) = param_1;
  if (this_00 == (EntityComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    this_00 = *(EntityComponent **)(this + 0x80);
  }
  EntityComponent::SetFacingDirection(this_00,param_1);
  return;
}


