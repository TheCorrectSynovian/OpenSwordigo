/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAE70
 * Mangled: ._Z12lua_isnumberP9lua_Statei
 * Demangled: lua_isnumber(lua_State *,int)
 *
 * Callers: 6
 *   0x00000000004C198C  Caver::ProgramState::IsIntAtStackIndex(int)
 *   0x00000000004C19C4  Caver::ProgramState::IsFloatAtStackIndex(int)
 *   0x00000000004F8FDC  luaL_checknumber(lua_State *,int)
 *   0x00000000004F90D4  luaL_checkinteger(lua_State *,int)
 *   0x00000000004FACEC  sub_4FACEC
 *   0x00000000004FAE4C  sub_4FAE4C
 *
 * Callees: 1
 *   0x00000000004E706C  lua_isnumber(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAE78 string=0x00000000001FAE7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_isnumber()
{
  return _Z12lua_isnumberP9lua_Statei();
}

