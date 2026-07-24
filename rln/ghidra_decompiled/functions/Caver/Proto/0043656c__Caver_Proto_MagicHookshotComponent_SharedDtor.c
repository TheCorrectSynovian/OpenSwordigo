/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043656c
 * Function: Caver::Proto::MagicHookshotComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(MagicHookshotComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicHookshotComponent::SharedDtor() */

void __thiscall Caver::Proto::MagicHookshotComponent::SharedDtor(MagicHookshotComponent *this)

{
  if ((*(MagicHookshotComponent **)PTR_default_instance__007e6b30 != this) &&
     (*(long **)(this + 0x20) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00436590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 8))();
    return;
  }
  return;
}


