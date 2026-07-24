/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00576b38
 * Function: FUN_00576b38
 * Signature: undefined FUN_00576b38(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00576b38(lua_State *param_1)

{
  int iVar1;
  ProgramState *this;
  long *plVar2;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  plVar2 = (long *)Caver::ProgramState::PointerAtStackIndex(this,1);
                    /* try { // try from 00576b54 to 00676b67 has its CatchHandler @ 0057c294 */
  if (((plVar2 != (long *)0x0) && (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0)) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* try { // try from 00576b68 to 00676b7b has its CatchHandler @ 0057c28c */
    (**(code **)(*plVar2 + 8))();
  }
                    /* try { // try from 00576b7c to 00676b8f has its CatchHandler @ 0057c284 */
  return 0;
}


