/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057d754
 * Function: Caver::FWShell::FWShell
 * Signature: undefined __thiscall FWShell(FWShell * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWShell::FWShell() */

void __thiscall Caver::FWShell::FWShell(FWShell *this)

{
  long lVar1;
  long lVar2;
  FWShell *pFVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0057d6f8 with catch @ 0057d78c */
  *(undefined **)this = PTR_vtable_007e55f0 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  FWShellPreferences::FWShellPreferences((FWShellPreferences *)(this + 0x20));
  pFVar3 = this + 0x50;
  *(undefined8 *)pFVar3 = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(FWShell **)(this + 0x60) = pFVar3;
  *(FWShell **)(this + 0x68) = pFVar3;
  *(undefined8 *)(this + 0x70) = 0;
  this[0x78] = (FWShell)0x0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


