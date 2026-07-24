/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00332694
 * Function: Caver::ProgramComponent::ResetIfFinished
 * Signature: undefined __thiscall ResetIfFinished(ProgramComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramComponent::ResetIfFinished() */

void __thiscall Caver::ProgramComponent::ResetIfFinished(ProgramComponent *this)

{
  long lVar1;
  long *plVar2;
  
  if ((*(long *)(this + 0xb0) != 0) && (*(char *)(*(long *)(this + 0xb0) + 0x53) != '\0')) {
    plVar2 = *(long **)(this + 0xb8);
    *(undefined8 *)(this + 0xb0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar1 = plVar2[2];
      plVar2[2] = lVar1 + -1;
      if (lVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0033270c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))(plVar2);
        return;
      }
    }
  }
  return;
}


