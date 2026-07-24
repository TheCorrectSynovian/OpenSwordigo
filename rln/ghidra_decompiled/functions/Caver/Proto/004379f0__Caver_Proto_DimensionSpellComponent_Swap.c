/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004379f0
 * Function: Caver::Proto::DimensionSpellComponent::Swap
 * Signature: undefined __thiscall Swap(DimensionSpellComponent * this, DimensionSpellComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DimensionSpellComponent::Swap(Caver::Proto::DimensionSpellComponent*) */

void __thiscall
Caver::Proto::DimensionSpellComponent::Swap
          (DimensionSpellComponent *this,DimensionSpellComponent *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


