/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c0d84
 * Function: Caver::ProgramState::ProgramState
 * Signature: undefined __thiscall ProgramState(ProgramState * this, ProgramState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::ProgramState(Caver::ProgramState*) */

void __thiscall Caver::ProgramState::ProgramState(ProgramState *this,ProgramState *param_1)

{
  undefined8 uVar1;
  lua_State *plVar2;
  void *pvVar3;
  
  *(undefined8 *)this = 0;
  *(ProgramState **)(this + 8) = param_1;
  *(ProgramState **)(this + 0x10) = this + 0x10;
  *(ProgramState **)(this + 0x18) = this + 0x10;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005c0d28 with catch @ 005c0dc0
                        */
  *(undefined2 *)(this + 0x51) = 1;
                    /* try { // try from 005c0dc4 to 006c0dcb has its CatchHandler @ 005c0dd4 */
  *(undefined4 *)(this + 0x30) = 0;
                    /* try { // try from 005c0dcc to 006c0dd7 has its CatchHandler @ 005c0ce0 */
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005c0dc4 with catch @ 005c0dd4
                        */
  this[0x50] = (ProgramState)0x0;
                    /* try { // try from 005c0dd8 to 006c0dff has its CatchHandler @ 005c0dd8
                       catch() { ... } // from try @ 005c0dd8 with catch @ 005c0dd8
                       catch() { ... } // from try @ 005c0e14 with catch @ 005c0dd8 */
  *(undefined8 *)(this + 0x48) = 0;
  this[0x53] = (ProgramState)0x0;
  *(undefined4 *)(this + 0x54) = 0x3f800000;
  if (param_1 == (ProgramState *)0x0) {
    plVar2 = (lua_State *)luaL_newstate();
                    /* try { // try from 005c0e14 to 006c0f07 has its CatchHandler @ 005c0dd8 */
    *(lua_State **)this = plVar2;
    lua_atpanic(plVar2,(_func_int_lua_State_ptr *)PTR_ProgramPanic_007e7138);
    RegisterProgramLibrary(this);
    ProgramMath::RegisterLibraries(this);
  }
  else {
    lua_pushlightuserdata(*(lua_State **)param_1,this);
    uVar1 = lua_newthread(*(lua_State **)param_1);
    *(undefined8 *)this = uVar1;
                    /* try { // try from 005c0e00 to 006c0e13 has its CatchHandler @ 005c0e98 */
    lua_settable(*(lua_State **)param_1,-10000);
  }
  pvVar3 = *(void **)this;
  *(undefined4 *)(this + 0x30) = 0xffffd8ee;
  *(void **)(this + 0x28) = pvVar3;
  *(void **)(this + 0x38) = pvVar3;
  *(undefined4 *)(this + 0x40) = 0xffffd8f0;
  ProgramTable::SetPointerForPointerKey((ProgramTable *)(this + 0x28),pvVar3,this);
  return;
}


