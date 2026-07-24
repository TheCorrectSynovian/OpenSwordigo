/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005778d0
 * Function: FUN_005778d0
 * Signature: undefined FUN_005778d0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005778d0(lua_State *param_1)

{
  long lVar1;
  ProgramState *this;
  long *plVar2;
  Vector3 *pVVar3;
  long lVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005778f0 to 006778fb has its CatchHandler @ 0057c780 */
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  plVar2 = (long *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (plVar2 == (long *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar2;
  }
  pVVar3 = (Vector3 *)Caver::ProgramState::PointerAtStackIndex(this,2);
                    /* try { // try from 0057791c to 00677943 has its CatchHandler @ 0057c6e4 */
  if ((lVar4 != 0) && (pVVar3 != (Vector3 *)0x0)) {
    Caver::Vector2::Vector2((Vector2 *)&local_40,pVVar3);
    *(undefined8 *)(lVar4 + 0x68) = local_40;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


