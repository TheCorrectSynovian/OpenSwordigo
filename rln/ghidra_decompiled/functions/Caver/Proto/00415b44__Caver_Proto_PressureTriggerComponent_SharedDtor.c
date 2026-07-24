/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00415b44
 * Function: Caver::Proto::PressureTriggerComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(PressureTriggerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PressureTriggerComponent::SharedDtor() */

void __thiscall Caver::Proto::PressureTriggerComponent::SharedDtor(PressureTriggerComponent *this)

{
  if (*(PressureTriggerComponent **)PTR_default_instance__007e4948 != this) {
    if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* try { // try from 00415b78 to 00515b7b has its CatchHandler @ 00415ea8 */
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
    if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00415b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x20) + 8))();
      return;
    }
  }
  return;
}


