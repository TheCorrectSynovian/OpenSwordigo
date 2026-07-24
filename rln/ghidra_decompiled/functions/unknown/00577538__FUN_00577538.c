/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00577538
 * Function: FUN_00577538
 * Signature: undefined FUN_00577538(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00577538(lua_State *param_1)

{
  long lVar1;
  ProgramState *this;
  long *plVar2;
  long lVar3;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  plVar2 = (long *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((plVar2 == (long *)0x0) || (lVar3 = *plVar2, lVar3 == 0)) {
    local_30 = 0;
    local_38 = 0;
  }
  else {
    local_38 = *(undefined8 *)(lVar3 + 0x70);
    local_30 = *(undefined4 *)(lVar3 + 0x78);
  }
  Caver::ProgramState::PushVector3(this,(Vector3 *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


