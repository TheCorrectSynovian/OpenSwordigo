/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1acc
 * Function: Caver::ProgramState::NewUserData
 * Signature: undefined __thiscall NewUserData(ProgramState * this, ulong param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::NewUserData(unsigned long, std::string const&) */

undefined8 __thiscall
Caver::ProgramState::NewUserData(ProgramState *this,ulong param_1,string *param_2)

{
  undefined8 uVar1;
  
                    /* try { // try from 005c1ae0 to 006c1bbf has its CatchHandler @ 005c1890 */
  uVar1 = lua_newuserdata(*(lua_State **)this,param_1);
  if (*(long *)(*(char **)param_2 + -0x18) != 0) {
    lua_getfield(*(lua_State **)this,-10000,*(char **)param_2);
    lua_setmetatable(*(lua_State **)this,-2);
  }
  return uVar1;
}


