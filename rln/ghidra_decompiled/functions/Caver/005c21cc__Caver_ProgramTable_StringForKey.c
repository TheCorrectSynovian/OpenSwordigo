/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c21cc
 * Function: Caver::ProgramTable::StringForKey
 * Signature: undefined __cdecl StringForKey(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramTable::StringForKey(std::string const&) */

void Caver::ProgramTable::StringForKey(string *param_1)

{
  long lVar1;
  undefined8 *in_x1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  lua_pushlstring(*(lua_State **)param_1,(char *)*in_x1,*(ulong *)((char *)*in_x1 + -0x18));
  lua_gettable(*(lua_State **)param_1,*(int *)(param_1 + 8));
  lua_tolstring(*(lua_State **)param_1,-1,(ulong *)0x0);
  FUN_00666bb8();
  lua_settop(*(lua_State **)param_1,-2);
                    /* catch() { ... } // from try @ 005c22a8 with catch @ 005c223c */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


