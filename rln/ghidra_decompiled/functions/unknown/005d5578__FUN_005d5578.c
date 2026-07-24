/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d5578
 * Function: FUN_005d5578
 * Signature: undefined FUN_005d5578(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d5578(lua_State *param_1)

{
  long lVar1;
  ProgramState *this;
  float *pfVar2;
  float *pfVar3;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  pfVar2 = (float *)Caver::ProgramState::PointerAtStackIndex(this,1);
                    /* catch() { ... } // from try @ 005d533c with catch @ 005d55ac */
                    /* catch() { ... } // from try @ 005d52b8 with catch @ 005d55b0 */
                    /* catch() { ... } // from try @ 005d5234 with catch @ 005d55b4 */
  pfVar3 = (float *)Caver::ProgramState::PointerAtStackIndex(this,2);
                    /* catch() { ... } // from try @ 005d51b0 with catch @ 005d55b8 */
                    /* catch() { ... } // from try @ 005d5124 with catch @ 005d55bc */
                    /* catch() { ... } // from try @ 005d5350 with catch @ 005d55c0 */
  local_48 = pfVar2[1] * pfVar3[2] - pfVar2[2] * pfVar3[1];
  fStack_44 = pfVar2[2] * *pfVar3 - pfVar3[2] * *pfVar2;
  local_40 = pfVar3[1] * *pfVar2 - pfVar2[1] * *pfVar3;
                    /* catch() { ... } // from try @ 005d52cc with catch @ 005d55f8 */
  Caver::ProgramMath::PushVector3(this,(Vector3 *)&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


