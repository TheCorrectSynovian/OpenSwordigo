/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00332ac4
 * Function: Caver::ProgramComponent::FinishLoad
 * Signature: undefined __thiscall FinishLoad(ProgramComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramComponent::FinishLoad() */

void __thiscall Caver::ProgramComponent::FinishLoad(ProgramComponent *this)

{
  if (*(int *)(this + 0x74) == 3) {
    Execute(this);
    return;
  }
  return;
}


