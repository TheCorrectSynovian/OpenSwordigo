/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1b88
 * Function: Caver::ProgramState::RegisterClass
 * Signature: undefined __thiscall RegisterClass(ProgramState * this, string * param_1, LibFunction * param_2, LibFunction * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::RegisterClass(std::string const&, Caver::LibFunction const*,
   Caver::LibFunction const*) */

void __thiscall
Caver::ProgramState::RegisterClass
          (ProgramState *this,string *param_1,LibFunction *param_2,LibFunction *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_60 [8];
  char *local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005c1bc0 to 006c1bcb has its CatchHandler @ 005c1bcc */
  luaL_newmetatable(*(lua_State **)this,*(char **)param_1);
                    /* catch() { ... } // from try @ 005c190c with catch @ 005c1bcc
                       catch() { ... } // from try @ 005c1bc0 with catch @ 005c1bcc */
  FUN_00666bb8(local_58,"__index",auStack_60);
  lua_pushlstring(*(lua_State **)this,local_58[0],*(ulong *)(local_58[0] + -0x18));
  puVar4 = PTR_DAT_007e5de8;
  if (local_58[0] + -0x18 != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(local_58[0] + -0x18);
    }
  }
  lua_pushvalue(*(lua_State **)this,-2);
  lua_settable(*(lua_State **)this,-3);
  luaL_register(*(lua_State **)this,(char *)0x0,(luaL_Reg *)param_3);
  lua_settop(*(lua_State **)this,-2);
  FUN_00666bb8(local_58,*(undefined8 *)param_1,auStack_60);
  luaL_register(*(lua_State **)this,local_58[0],(luaL_Reg *)param_2);
  lua_settop(*(lua_State **)this,-2);
                    /* try { // try from 005c1c68 to 006c1c6b has its CatchHandler @ 005c1c8c */
                    /* try { // try from 005c1c6c to 006c1c8f has its CatchHandler @ 005c1890 */
  if (local_58[0] + -0x18 != puVar4) {
    piVar5 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(local_58[0] + -0x18);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 005c1c68 with catch @ 005c1c8c */
  return;
}


