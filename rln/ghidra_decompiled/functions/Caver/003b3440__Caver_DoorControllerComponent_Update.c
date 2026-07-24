/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b3440
 * Function: Caver::DoorControllerComponent::Update
 * Signature: undefined __thiscall Update(DoorControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::DoorControllerComponent::Update(float) */

void __thiscall Caver::DoorControllerComponent::Update(DoorControllerComponent *this,float param_1)

{
  long *plVar1;
  undefined4 in_register_00005004;
  
  plVar1 = *(long **)(this + 0x68);
  if (plVar1 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x58),(Component *)(this + -0x18));
    plVar1 = *(long **)(this + 0x68);
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x003b3490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 200))(CONCAT44(in_register_00005004,param_1));
  return;
}


