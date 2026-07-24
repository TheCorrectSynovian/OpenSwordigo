/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00475abc
 * Function: boost::function2<void,void*,Caver::GUIEvent*>::swap
 * Signature: undefined __thiscall swap(function2<void,void*,Caver::GUIEvent*> * this, function2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::function2<void, void*, Caver::GUIEvent*>::swap(boost::function2<void, void*,
   Caver::GUIEvent*>&) */

void __thiscall
boost::function2<void,void*,Caver::GUIEvent*>::swap
          (function2<void,void*,Caver::GUIEvent*> *this,function2 *param_1)

{
  long lVar1;
  ulong local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (function2 *)this) {
    local_58 = 0;
    move_assign((function2<void,void*,Caver::GUIEvent*> *)&local_58,(function2 *)this);
    move_assign(this,param_1);
    move_assign((function2<void,void*,Caver::GUIEvent*> *)param_1,(function2 *)&local_58);
    if (local_58 != 0) {
      if (((local_58 & 1) == 0) && (*(code **)(local_58 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_58 & 0xfffffffffffffffe))(auStack_50,auStack_50,2);
      }
      local_58 = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


