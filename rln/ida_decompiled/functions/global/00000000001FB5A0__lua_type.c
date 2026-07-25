/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB5A0
 * Mangled: ._Z8lua_typeP9lua_Statei
 * Demangled: lua_type(lua_State *,int)
 *
 * Callers: 33
 *   0x0000000000476BE8  sub_476BE8
 *   0x0000000000476CC4  sub_476CC4
 *   0x00000000004C1A00  Caver::ProgramState::IsBoolAtStackIndex(int)
 *   0x00000000004C1A20  Caver::ProgramState::BoolAtStackIndex(int)
 *   0x00000000004C1E70  sub_4C1E70
 *   0x00000000004F8AAC  luaL_typerror(lua_State *,int,char const*)
 *   0x00000000004F8BB4  luaL_checkoption(lua_State *,int,char const*,char const* const*)
 *   0x00000000004F8C78  luaL_optlstring(lua_State *,int,char const*,ulong *)
 *   0x00000000004F8CF0  luaL_checklstring(lua_State *,int,ulong *)
 *   0x00000000004F8D78  luaL_newmetatable(lua_State *,char const*)
 *   0x00000000004F8DF8  luaL_checkudata(lua_State *,int,char const*)
 *   0x00000000004F8F00  luaL_checktype(lua_State *,int,int)
 *   0x00000000004F8F94  luaL_checkany(lua_State *,int)
 *   0x00000000004F8FDC  luaL_checknumber(lua_State *,int)
 *   0x00000000004F9080  luaL_optnumber(lua_State *,int,double)
 *   0x00000000004F90D4  luaL_checkinteger(lua_State *,int)
 *   0x00000000004F916C  luaL_optinteger(lua_State *,int,long)
 *   0x00000000004F91C0  luaL_getmetafield(lua_State *,int,char const*)
 *   0x00000000004F9234  luaL_callmeta(lua_State *,int,char const*)
 *   0x00000000004F9308  luaL_openlib(lua_State *,char const*,luaL_Reg const*,int)
 *   0x00000000004F9474  luaL_findtable(lua_State *,int,char const*,int)
 *   0x00000000004F9B1C  luaL_ref(lua_State *,int)
 *   0x00000000004FA304  sub_4FA304
 *   0x00000000004FA420  sub_4FA420
 *   0x00000000004FAC38  sub_4FAC38
 *   0x00000000004FADB0  sub_4FADB0
 *   0x00000000004FAF74  sub_4FAF74
 *   0x00000000004FB094  sub_4FB094
 *   0x00000000004FB0E0  sub_4FB0E0
 *   0x00000000004FB244  sub_4FB244
 *   0x00000000004FB35C  sub_4FB35C
 *   0x00000000004FB408  sub_4FB408
 *   0x00000000004FC250  sub_4FC250
 *
 * Callees: 1
 *   0x00000000004E6E6C  lua_type(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FB5A4 string=0x00000000004E6E6C "?"
 *   insn=0x00000000001FB5A8 string=0x00000000001FB5AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_type()
{
  return _Z8lua_typeP9lua_Statei();
}

