/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0030e358
 * Function: Caver::CaverShell::InitApplication
 * Signature: undefined __thiscall InitApplication(CaverShell * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CaverShell::InitApplication() */

void __thiscall Caver::CaverShell::InitApplication(CaverShell *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(this + 8);
  this[0x78] = (CaverShell)0x1;
  if (0 < (int)((ulong)(*(long *)(this + 0x10) - lVar2) >> 3)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      iVar1 = FUN_006689e0(lVar2 + lVar3,"--slow");
      if (iVar1 == 0) {
        FWShellPreferences::Set((FWShellPreferences *)0x3f000000,this + 0x20,3);
      }
      lVar2 = *(long *)(this + 8);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 8;
    } while (lVar4 < (int)((ulong)(*(long *)(this + 0x10) - lVar2) >> 3));
  }
  return;
}


