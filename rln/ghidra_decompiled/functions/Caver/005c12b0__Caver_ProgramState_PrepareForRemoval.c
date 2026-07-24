/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c12b0
 * Function: Caver::ProgramState::PrepareForRemoval
 * Signature: undefined __thiscall PrepareForRemoval(ProgramState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::PrepareForRemoval() */

void __thiscall Caver::ProgramState::PrepareForRemoval(ProgramState *this)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x20);
  *(undefined8 *)(this + 0x20) = 0;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x005c12dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}


