/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004376fc
 * Function: Caver::Proto::DimensionObjectComponent::Swap
 * Signature: undefined __thiscall Swap(DimensionObjectComponent * this, DimensionObjectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DimensionObjectComponent::Swap(Caver::Proto::DimensionObjectComponent*) */

void __thiscall
Caver::Proto::DimensionObjectComponent::Swap
          (DimensionObjectComponent *this,DimensionObjectComponent *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
                    /* try { // try from 00437710 to 0053771f has its CatchHandler @ 00437fe8 */
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


