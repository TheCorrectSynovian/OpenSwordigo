/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00432b3c
 * Function: Caver::Proto::MagicBoltComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(MagicBoltComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBoltComponent::SharedDtor() */

void __thiscall Caver::Proto::MagicBoltComponent::SharedDtor(MagicBoltComponent *this)

{
  if ((*(MagicBoltComponent **)PTR_default_instance__007e4db8 != this) &&
     (*(long **)(this + 0x18) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00432b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}


