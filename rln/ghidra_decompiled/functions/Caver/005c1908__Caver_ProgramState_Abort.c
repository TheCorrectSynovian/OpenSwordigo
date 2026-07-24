/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1908
 * Function: Caver::ProgramState::Abort
 * Signature: undefined __thiscall Abort(ProgramState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::Abort() */

void __thiscall Caver::ProgramState::Abort(ProgramState *this)

{
                    /* try { // try from 005c190c to 006c1adf has its CatchHandler @ 005c1bcc */
  this[0x53] = (ProgramState)0x1;
  *(undefined4 *)(this + 0x48) = 2;
  return;
}


