/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057da14
 * Function: Caver::FWShell::~FWShell
 * Signature: undefined __thiscall ~FWShell(FWShell * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWShell::~FWShell() */

void __thiscall Caver::FWShell::~FWShell(FWShell *this)

{
  ~FWShell(this);
                    /* try { // try from 0057da2c to 0067daef has its CatchHandler @ 0057dbe4 */
  operator_delete(this);
  return;
}


