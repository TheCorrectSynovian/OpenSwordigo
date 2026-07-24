/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1424
 * Function: Caver::ProgramState::SetParentObject
 * Signature: undefined __thiscall SetParentObject(ProgramState * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::SetParentObject(boost::intrusive_ptr<Caver::SceneObject> const&) */

void __thiscall Caver::ProgramState::SetParentObject(ProgramState *this,intrusive_ptr *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)param_1;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  plVar2 = *(long **)(this + 0x20);
  *(long *)(this + 0x20) = lVar3;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x005c1464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}


