/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004259e4
 * Function: Caver::Proto::AttackComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(AttackComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AttackComponent::SharedDtor() */

void __thiscall Caver::Proto::AttackComponent::SharedDtor(AttackComponent *this)

{
  if ((*(AttackComponent **)PTR_default_instance__007e7ad0 != this) &&
     (*(long **)(this + 0x20) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00425a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 8))();
    return;
  }
  return;
}


