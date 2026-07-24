/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00336d68
 * Function: Caver::ShapeComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(ShapeComponent * this, ShapeComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShapeComponent::InitWithComponent(Caver::ShapeComponent const*) */

void __thiscall
Caver::ShapeComponent::InitWithComponent(ShapeComponent *this,ShapeComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00336da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x118))(this,param_1 + 0x70);
  return;
}


