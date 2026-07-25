/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201570
 * Mangled: ._Z11lua_atpanicP9lua_StatePFiS0_E
 * Demangled: lua_atpanic(lua_State *,int (*)(lua_State *))
 *
 * Callers: 2
 *   0x00000000004C0D84  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *   0x00000000004FA084  luaL_newstate(void)
 *
 * Callees: 1
 *   0x00000000004E688C  lua_atpanic(lua_State *,int (*)(lua_State *))
 *
 * Referenced strings: 2
 *   insn=0x0000000000201574 string=0x00000000004E688C ""
 *   insn=0x0000000000201578 string=0x000000000020157C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_atpanic()
{
  return _Z11lua_atpanicP9lua_StatePFiS0_E();
}

