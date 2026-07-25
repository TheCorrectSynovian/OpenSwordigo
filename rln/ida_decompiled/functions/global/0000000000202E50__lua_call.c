/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202E50
 * Mangled: ._Z8lua_callP9lua_Stateii
 * Demangled: lua_call(lua_State *,int,int)
 *
 * Callers: 6
 *   0x00000000004C0D84  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *   0x00000000004F9234  luaL_callmeta(lua_State *,int,char const*)
 *   0x00000000004FA650  sub_4FA650
 *   0x00000000004FAA1C  sub_4FAA1C
 *   0x00000000004FB35C  sub_4FB35C
 *   0x00000000004FC250  sub_4FC250
 *
 * Callees: 1
 *   0x00000000004E98A8  lua_call(lua_State *,int,int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202E58 string=0x0000000000202E5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_call()
{
  return _Z8lua_callP9lua_Stateii();
}

