/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00576b80
 * Function: FUN_00576b80
 * Signature: undefined FUN_00576b80(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00576b80(lua_State *param_1)

{
  ProgramState *this;
  long *plVar1;
  long lVar2;
  long lVar3;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
                    /* try { // try from 00576b90 to 00676ba3 has its CatchHandler @ 0057c27c */
  plVar1 = (long *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (plVar1 == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *plVar1;
                    /* try { // try from 00576ba4 to 00676bc3 has its CatchHandler @ 0057c274 */
  }
  plVar1 = (long *)Caver::ProgramState::PointerAtStackIndex(this,2);
  if (plVar1 == (long *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *plVar1;
  }
                    /* try { // try from 00576bcc to 00676bdf has its CatchHandler @ 0057c26c */
  Caver::ProgramState::PushBool(this,lVar3 == lVar2);
                    /* try { // try from 00576be0 to 00676bf3 has its CatchHandler @ 0057c264 */
  return 1;
}


