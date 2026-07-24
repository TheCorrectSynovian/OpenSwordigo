/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00421fc4
 * Function: Caver::Proto::SimpleGlowComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(SimpleGlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SimpleGlowComponent::SharedDtor() */

void __thiscall Caver::Proto::SimpleGlowComponent::SharedDtor(SimpleGlowComponent *this)

{
  if (*(SimpleGlowComponent **)PTR_default_instance__007e53a8 != this) {
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
                    /* try { // try from 00421ffc to 0052200f has its CatchHandler @ 00422808 */
    if (*(long **)(this + 0x28) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00422014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x28) + 8))();
      return;
    }
  }
                    /* try { // try from 00422020 to 0052202b has its CatchHandler @ 004227d0 */
  return;
}


