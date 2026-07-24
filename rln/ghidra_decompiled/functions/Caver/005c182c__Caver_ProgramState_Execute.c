/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c182c
 * Function: Caver::ProgramState::Execute
 * Signature: undefined __thiscall Execute(ProgramState * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::Execute(int) */

void __thiscall Caver::ProgramState::Execute(ProgramState *this,int param_1)

{
  int iVar1;
  
  if (*(long *)(this + 8) == 0) {
    iVar1 = lua_pcall(*(lua_State **)this,param_1,0,0);
    if (iVar1 != 0) {
      lua_settop(*(lua_State **)this,-2);
      return;
    }
  }
  else {
    *(undefined4 *)(this + 0x48) = 0;
    iVar1 = lua_resume(*(lua_State **)this,param_1);
    if (iVar1 != 1) {
      this[0x53] = (ProgramState)0x1;
    }
  }
                    /* try { // try from 005c1890 to 006c190b has its CatchHandler @ 005c1890
                       catch() { ... } // from try @ 005c1890 with catch @ 005c1890
                       catch() { ... } // from try @ 005c1ae0 with catch @ 005c1890
                       catch() { ... } // from try @ 005c1c6c with catch @ 005c1890 */
  return;
}


