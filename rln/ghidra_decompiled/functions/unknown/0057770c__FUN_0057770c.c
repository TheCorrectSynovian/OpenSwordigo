/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057770c
 * Function: FUN_0057770c
 * Signature: undefined FUN_0057770c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0057770c(lua_State *param_1)

{
  ProgramState *this;
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  
                    /* try { // try from 0057770c to 00677717 has its CatchHandler @ 0057ca34 */
                    /* try { // try from 00577718 to 0067777f has its CatchHandler @ 0057ca50 */
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  plVar1 = (long *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (plVar1 == (long *)0x0) {
    Caver::ProgramState::FloatAtStackIndex(this,2);
  }
  else {
    lVar2 = *plVar1;
    uVar3 = Caver::ProgramState::FloatAtStackIndex(this,2);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x78) = uVar3;
    }
  }
  return 0;
}


