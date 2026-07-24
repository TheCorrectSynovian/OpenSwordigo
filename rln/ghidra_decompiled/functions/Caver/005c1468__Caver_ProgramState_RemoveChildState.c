/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1468
 * Function: Caver::ProgramState::RemoveChildState
 * Signature: undefined __thiscall RemoveChildState(ProgramState * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::RemoveChildState(boost::shared_ptr<Caver::ProgramState> const&) */

void __thiscall Caver::ProgramState::RemoveChildState(ProgramState *this,shared_ptr *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(*(long *)param_1 + 0x20);
  *(undefined8 *)(*(long *)param_1 + 0x20) = 0;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  std::
  list<boost::shared_ptr<Caver::ProgramState>,std::allocator<boost::shared_ptr<Caver::ProgramState>>>
  ::remove((list<boost::shared_ptr<Caver::ProgramState>,std::allocator<boost::shared_ptr<Caver::ProgramState>>>
            *)(this + 0x10),param_1);
  return;
}


