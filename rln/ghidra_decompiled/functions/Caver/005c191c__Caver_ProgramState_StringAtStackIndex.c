/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c191c
 * Function: Caver::ProgramState::StringAtStackIndex
 * Signature: undefined __cdecl StringAtStackIndex(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::StringAtStackIndex(int) */

void Caver::ProgramState::StringAtStackIndex(int param_1)

{
  long lVar1;
  int in_w1;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lua_tolstring(*(lua_State **)(ulong)(uint)param_1,in_w1,&local_30);
  FUN_00666a7c();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


