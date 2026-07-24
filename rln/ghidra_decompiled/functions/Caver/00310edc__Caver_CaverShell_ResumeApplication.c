/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00310edc
 * Function: Caver::CaverShell::ResumeApplication
 * Signature: undefined __thiscall ResumeApplication(CaverShell * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CaverShell::ResumeApplication() */

void __thiscall Caver::CaverShell::ResumeApplication(CaverShell *this)

{
  this[0xa8] = (CaverShell)0x0;
  if (*(long **)(this + 0x98) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00310ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x98) + 0x28))();
    return;
  }
  return;
}


