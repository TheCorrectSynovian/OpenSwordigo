/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00310db8
 * Function: Caver::CaverShell::SuspendApplication
 * Signature: undefined __thiscall SuspendApplication(CaverShell * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CaverShell::SuspendApplication(bool) */

void __thiscall Caver::CaverShell::SuspendApplication(CaverShell *this,bool param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  GameOptions *local_48;
  long *local_40;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((this[0xa8] == (CaverShell)0x0) && (this[0xa8] = (CaverShell)0x1, param_1)) {
    GameOptions::sharedOptions((GameOptions *)this);
    GameOptions::SaveToFile(local_48);
    if ((local_40 != (long *)0x0) &&
       (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar3 = local_40[2];
      local_40[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*local_40 + 0x18))(local_40);
      }
    }
    if (*(long **)(this + 0x98) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x98) + 0x20))();
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


