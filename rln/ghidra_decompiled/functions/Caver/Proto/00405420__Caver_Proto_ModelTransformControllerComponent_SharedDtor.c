/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00405420
 * Function: Caver::Proto::ModelTransformControllerComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(ModelTransformControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ModelTransformControllerComponent::SharedDtor() */

void __thiscall
Caver::Proto::ModelTransformControllerComponent::SharedDtor(ModelTransformControllerComponent *this)

{
  if (*(ModelTransformControllerComponent **)PTR_default_instance__007e6260 != this) {
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* catch() { ... } // from try @ 00405304 with catch @ 0040546c */
                    /* WARNING: Could not recover jumptable at 0x00405470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x18) + 8))();
      return;
    }
  }
  return;
}


