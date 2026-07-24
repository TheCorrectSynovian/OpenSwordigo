/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cfc64
 * Function: Caver::Proto::Circle::SharedDtor
 * Signature: undefined __thiscall SharedDtor(Circle * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Circle::SharedDtor() */

void __thiscall Caver::Proto::Circle::SharedDtor(Circle *this)

{
  if ((*(Circle **)PTR_default_instance__007e76b0 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x003cfc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


