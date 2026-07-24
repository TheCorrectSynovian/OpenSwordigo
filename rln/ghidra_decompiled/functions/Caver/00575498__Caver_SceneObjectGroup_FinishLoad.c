/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00575498
 * Function: Caver::SceneObjectGroup::FinishLoad
 * Signature: undefined __thiscall FinishLoad(SceneObjectGroup * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObjectGroup::FinishLoad() */

void __thiscall Caver::SceneObjectGroup::FinishLoad(SceneObjectGroup *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ProgramState *local_38;
  long *local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(this + 0x28) != 0) && (*(long *)(*(long *)(this + 0x28) + 0x18) != 0)) {
    Scene::NewProgramStateForProgram(*(Program **)(this + 0x18));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00575424 with catch @ 005754d4
                        */
    if (local_38 != (ProgramState *)0x0) {
      ProgramState::PushString(local_38,(string *)(this + 0x20));
      ProgramState::Execute(local_38,1);
    }
                    /* try { // try from 005754f8 to 0067551f has its CatchHandler @ 00575528 */
    if ((local_30 != (long *)0x0) &&
       (lVar3 = local_30[1], local_30[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*local_30 + 0x10))(local_30);
      lVar3 = local_30[2];
                    /* try { // try from 00575520 to 0067552b has its CatchHandler @ 00575368 */
      local_30[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005754f8 with catch @ 00575528
                        */
                    /* catch() { ... } // from try @ 00575748 with catch @ 0057552c
                       catch() { ... } // from try @ 00575970 with catch @ 0057552c */
        (**(code **)(*local_30 + 0x18))(local_30);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


