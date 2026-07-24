/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e572c
 * Function: Caver::Proto::GameOptions::SharedDtor
 * Signature: undefined __thiscall SharedDtor(GameOptions * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameOptions::SharedDtor() */

void __thiscall Caver::Proto::GameOptions::SharedDtor(GameOptions *this)

{
  if (*(GameOptions **)PTR_default_instance__007e6d28 != this) {
    if (*(long **)(this + 0x58) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x58) + 8))();
    }
    if (*(long **)(this + 0x60) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e577c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x60) + 8))();
      return;
    }
  }
  return;
}


