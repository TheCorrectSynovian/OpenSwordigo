/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5030
 * Mangled: ._Z12lua_tonumberP9lua_Statei
 * Demangled: lua_tonumber(lua_State *,int)
 *
 * Callers: 6
 *   0x00000000004C19E4  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000004C1DD8  sub_4C1DD8
 *   0x00000000004C23CC  Caver::ProgramTable::FloatForKey(std::string const&)
 *   0x00000000004F8FDC  luaL_checknumber(lua_State *,int)
 *   0x00000000004FACEC  sub_4FACEC
 *   0x00000000004FAE4C  sub_4FAE4C
 *
 * Callees: 1
 *   0x00000000004E7954  lua_tonumber(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5038 string=0x00000000001F503C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_tonumber()
{
  return _Z12lua_tonumberP9lua_Statei();
}

