/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00340774
 * Function: Caver::TransformControllerComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(TransformControllerComponent * this, TransformControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TransformControllerComponent::InitWithComponent(Caver::TransformControllerComponent
   const*) */

void __thiscall
Caver::TransformControllerComponent::InitWithComponent
          (TransformControllerComponent *this,TransformControllerComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  return;
}


