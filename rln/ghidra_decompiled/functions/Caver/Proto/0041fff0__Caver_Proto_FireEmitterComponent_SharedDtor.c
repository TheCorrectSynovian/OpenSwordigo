/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041fff0
 * Function: Caver::Proto::FireEmitterComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(FireEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireEmitterComponent::SharedDtor() */

void __thiscall Caver::Proto::FireEmitterComponent::SharedDtor(FireEmitterComponent *this)

{
                    /* try { // try from 00420010 to 00520023 has its CatchHandler @ 00420128 */
  if (*(FireEmitterComponent **)PTR_default_instance__007e7b98 != this) {
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
                    /* try { // try from 00420028 to 00520037 has its CatchHandler @ 004200b8 */
    if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* try { // try from 00420038 to 0052012b has its CatchHandler @ 0041ffec */
      (**(code **)(**(long **)(this + 0x20) + 8))();
    }
    if (*(long **)(this + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x28) + 8))();
    }
    if (*(long **)(this + 0x38) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00420068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x38) + 8))();
      return;
    }
  }
  return;
}


