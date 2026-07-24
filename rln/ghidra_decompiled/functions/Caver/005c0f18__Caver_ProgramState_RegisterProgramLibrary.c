/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c0f18
 * Function: Caver::ProgramState::RegisterProgramLibrary
 * Signature: undefined __thiscall RegisterProgramLibrary(ProgramState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::RegisterProgramLibrary() */

void __thiscall Caver::ProgramState::RegisterProgramLibrary(ProgramState *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_40 [8];
  char *local_38 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  FUN_00666bb8(local_38,"Program",auStack_40);
  luaL_register(*(lua_State **)this,local_38[0],(luaL_Reg *)&PTR_DAT_007d7bd8);
  lua_settop(*(lua_State **)this,-2);
  if (local_38[0] + -0x18 != PTR_DAT_007e5de8) {
    piVar4 = (int *)(local_38[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar4;
      *piVar4 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 005c0ffc to 006c0fff has its CatchHandler @ 005c14f8 */
      } while (cVar1 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete(local_38[0] + -0x18);
    }
  }
  luaopen_string(*(lua_State **)this);
  lua_pushcclosure(*(lua_State **)this,(_func_int_lua_State_ptr *)PTR_luaopen_base_007e70d8,0);
  lua_pushstring(*(lua_State **)this,"");
  lua_call(*(lua_State **)this,1,0);
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


