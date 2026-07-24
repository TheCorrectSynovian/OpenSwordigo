/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004baaa0
 * Function: Caver::LevelState::LevelState
 * Signature: undefined __thiscall LevelState(LevelState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LevelState::LevelState() */

void __thiscall Caver::LevelState::LevelState(LevelState *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_DAT_007e5de8 + 0x18;
  this[8] = (LevelState)0x0;
  StateProperties::StateProperties((StateProperties *)(this + 0x10));
  *(undefined8 *)(this + 0x40) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


