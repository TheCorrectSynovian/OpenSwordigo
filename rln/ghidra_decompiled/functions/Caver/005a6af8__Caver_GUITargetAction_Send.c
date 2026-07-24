/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a6af8
 * Function: Caver::GUITargetAction::Send
 * Signature: undefined __thiscall Send(GUITargetAction * this, void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITargetAction::Send(void*, Caver::GUIEvent const&) */

void __thiscall Caver::GUITargetAction::Send(GUITargetAction *this,void *param_1,GUIEvent *param_2)

{
  undefined8 extraout_x0;
  void *extraout_x1;
  long lVar1;
  long lVar2;
  long *plVar3;
  bad_function_call abStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  plVar3 = *(long **)(this + 8);
  if ((plVar3 != (long *)0x0) && (plVar3[1] != 0)) {
    plVar3[1] = plVar3[1] + 1;
    if (*(long *)this != 0) {
      uStack_38 = *(undefined8 *)(param_2 + 8);
      local_40 = *(undefined8 *)param_2;
      if (*(ulong *)(this + 0x10) == 0) {
        boost::bad_function_call::bad_function_call(abStack_50);
        boost::throw_exception<boost::bad_function_call>(abStack_50);
        FUN_0064a024(abStack_50);
        lVar2 = plVar3[1];
        plVar3[1] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          lVar2 = plVar3[2];
          plVar3[2] = lVar2 + -1;
          if (lVar2 + -1 == 0) {
            (**(code **)(*plVar3 + 0x18))(plVar3);
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_006818c4(extraout_x0);
      }
      (**(code **)((*(ulong *)(this + 0x10) & 0xfffffffffffffffe) + 8))
                (this + 0x18,param_1,&local_40);
      param_1 = extraout_x1;
    }
    lVar1 = plVar3[1];
    plVar3[1] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
      lVar1 = plVar3[2];
      plVar3[2] = lVar1 + -1;
      if (lVar1 + -1 == 0) {
                    /* try { // try from 005a6b8c to 006a6bb3 has its CatchHandler @ 005a6c70 */
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* try { // try from 005a6bb4 to 006a6d0f has its CatchHandler @ 005a69d0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


