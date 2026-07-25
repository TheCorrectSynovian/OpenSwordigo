/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7C70
 * Mangled: ._Z15lua_pushintegerP9lua_Statel
 * Demangled: lua_pushinteger(lua_State *,long)
 *
 * Callers: 15
 *   0x00000000004C1A84  Caver::ProgramState::PushInt(int)
 *   0x00000000004C2384  Caver::ProgramTable::SetIntForKey(std::string const&,int)
 *   0x00000000004C2478  Caver::ProgramTable::StringAtIndex(int)
 *   0x00000000004F9BFC  luaL_unref(lua_State *,int,int)
 *   0x00000000004FA2B4  sub_4FA2B4
 *   0x00000000004FA304  sub_4FA304
 *   0x00000000004FA740  sub_4FA740
 *   0x00000000004FAC38  sub_4FAC38
 *   0x00000000004FB9A8  sub_4FB9A8
 *   0x00000000004FC1E8  sub_4FC1E8
 *   0x00000000004FC250  sub_4FC250
 *   0x00000000004FC674  sub_4FC674
 *   0x00000000004FCAF8  sub_4FCAF8
 *   0x00000000004FD8D8  sub_4FD8D8
 *   0x00000000004FD99C  sub_4FD99C
 *
 * Callees: 1
 *   0x00000000004E857C  lua_pushinteger(lua_State *,long)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F7C74 string=0x00000000004E857C "@"
 *   insn=0x00000000001F7C78 string=0x00000000001F7C7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_pushinteger()
{
  return _Z15lua_pushintegerP9lua_Statel();
}

