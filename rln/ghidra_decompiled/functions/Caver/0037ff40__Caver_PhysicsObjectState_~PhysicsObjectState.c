/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037ff40
 * Function: Caver::PhysicsObjectState::~PhysicsObjectState
 * Signature: undefined __thiscall ~PhysicsObjectState(PhysicsObjectState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectState::~PhysicsObjectState() */

void __thiscall Caver::PhysicsObjectState::~PhysicsObjectState(PhysicsObjectState *this)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x20);
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0037ff64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}


