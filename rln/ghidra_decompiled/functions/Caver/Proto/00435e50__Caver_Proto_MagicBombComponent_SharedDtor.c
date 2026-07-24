/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00435e50
 * Function: Caver::Proto::MagicBombComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(MagicBombComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBombComponent::SharedDtor() */

void __thiscall Caver::Proto::MagicBombComponent::SharedDtor(MagicBombComponent *this)

{
  if ((*(MagicBombComponent **)PTR_default_instance__007e7bd0 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00435e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


