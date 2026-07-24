/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003961dc
 * Function: Caver::ChargingMonsterControllerComponent::StartMovingToDirection
 * Signature: undefined __thiscall StartMovingToDirection(ChargingMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ChargingMonsterControllerComponent::StartMovingToDirection(int) */

void __thiscall
Caver::ChargingMonsterControllerComponent::StartMovingToDirection
          (ChargingMonsterControllerComponent *this,int param_1)

{
  EntityComponent *this_00;
  
  if (*(int *)(this + 0x148) != param_1) {
    this_00 = *(EntityComponent **)(this + 0x80);
    *(int *)(this + 0x148) = param_1;
    if (this_00 == (EntityComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      this_00 = *(EntityComponent **)(this + 0x80);
    }
    EntityComponent::SetFacingDirection(this_00,param_1);
    *(undefined4 *)(this + 0x14c) = 0;
  }
  return;
}


