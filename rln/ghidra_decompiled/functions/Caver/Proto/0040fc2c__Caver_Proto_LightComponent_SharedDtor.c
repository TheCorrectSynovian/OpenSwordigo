/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040fc2c
 * Function: Caver::Proto::LightComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(LightComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LightComponent::SharedDtor() */

void __thiscall Caver::Proto::LightComponent::SharedDtor(LightComponent *this)

{
  if (*(LightComponent **)PTR_default_instance__007e5cc8 != this) {
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
    if (*(long **)(this + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040fc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x30) + 8))();
      return;
    }
  }
                    /* catch() { ... } // from try @ 0040f1b8 with catch @ 0040fc80 */
  return;
}


