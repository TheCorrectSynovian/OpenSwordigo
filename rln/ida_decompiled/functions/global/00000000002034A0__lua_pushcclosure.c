/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002034A0
 * Mangled: ._Z16lua_pushcclosureP9lua_StatePFiS0_Ei
 * Demangled: lua_pushcclosure(lua_State *,int (*)(lua_State *),int)
 *
 * Callers: 5
 *   0x00000000004C0D84  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *   0x00000000004F9308  luaL_openlib(lua_State *,char const*,luaL_Reg const*,int)
 *   0x00000000004FA130  luaopen_base(lua_State *)
 *   0x00000000004FB654  sub_4FB654
 *   0x00000000004FC1E8  sub_4FC1E8
 *
 * Callees: 1
 *   0x00000000004E880C  lua_pushcclosure(lua_State *,int (*)(lua_State *),int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002034A8 string=0x00000000002034AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_pushcclosure()
{
  return _Z16lua_pushcclosureP9lua_StatePFiS0_Ei();
}

