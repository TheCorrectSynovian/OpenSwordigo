/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d562c
 * Function: FUN_005d562c
 * Signature: undefined FUN_005d562c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d562c(lua_State *param_1)

{
  long lVar1;
  ProgramState *this;
  undefined8 *puVar2;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
                    /* catch() { ... } // from try @ 005d5248 with catch @ 005d5630 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  local_38 = *puVar2;
  local_30 = *(undefined4 *)(puVar2 + 1);
                    /* catch() { ... } // from try @ 005d51c4 with catch @ 005d5668 */
  Caver::Vector3::Normalize((Vector3 *)&local_38);
  Caver::ProgramMath::PushVector3(this,(Vector3 *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 005d5138 with catch @ 005d56a0 */
  __stack_chk_fail();
}


