/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00381968
 * Function: Caver::DimensionObjectComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(DimensionObjectComponent * this, DimensionObjectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DimensionObjectComponent::InitWithComponent(Caver::DimensionObjectComponent const*) */

void __thiscall
Caver::DimensionObjectComponent::InitWithComponent
          (DimensionObjectComponent *this,DimensionObjectComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  return;
}


