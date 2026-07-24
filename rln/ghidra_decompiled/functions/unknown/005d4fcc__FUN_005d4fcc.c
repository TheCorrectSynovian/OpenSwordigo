/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d4fcc
 * Function: FUN_005d4fcc
 * Signature: undefined FUN_005d4fcc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d4fcc(lua_State *param_1)

{
  long lVar1;
  ProgramState *this;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  uVar2 = Caver::ProgramState::FloatAtStackIndex(this,1);
  uVar3 = Caver::ProgramState::FloatAtStackIndex(this,2);
  local_40 = Caver::ProgramState::FloatAtStackIndex(this,3);
  local_48 = uVar2;
  uStack_44 = uVar3;
  Caver::ProgramMath::PushVector3(this,(Vector3 *)&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


