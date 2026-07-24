/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fbed0
 * Function: Caver::Proto::ObjectTemplate::SharedDtor
 * Signature: undefined __thiscall SharedDtor(ObjectTemplate * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectTemplate::SharedDtor() */

void __thiscall Caver::Proto::ObjectTemplate::SharedDtor(ObjectTemplate *this)

{
  if ((*(ObjectTemplate **)PTR_default_instance__007e4a98 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x003fbef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


