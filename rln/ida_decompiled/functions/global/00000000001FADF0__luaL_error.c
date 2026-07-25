/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FADF0
 * Mangled: ._Z10luaL_errorP9lua_StatePKcz
 * Demangled: luaL_error(lua_State *,char const*,...)
 *
 * Callers: 18
 *   0x00000000004F888C  luaL_argerror(lua_State *,int,char const*)
 *   0x00000000004F8EBC  luaL_checkstack(lua_State *,int,char const*)
 *   0x00000000004F9308  luaL_openlib(lua_State *,char const*,luaL_Reg const*,int)
 *   0x00000000004FA518  sub_4FA518
 *   0x00000000004FAA1C  sub_4FAA1C
 *   0x00000000004FACEC  sub_4FACEC
 *   0x00000000004FADB0  sub_4FADB0
 *   0x00000000004FB0E0  sub_4FB0E0
 *   0x00000000004FB244  sub_4FB244
 *   0x00000000004FB35C  sub_4FB35C
 *   0x00000000004FB6B4  sub_4FB6B4
 *   0x00000000004FB9A8  sub_4FB9A8
 *   0x00000000004FBBE4  sub_4FBBE4
 *   0x00000000004FBC90  sub_4FBC90
 *   0x00000000004FC1DC  sub_4FC1DC
 *   0x00000000004FC250  sub_4FC250
 *   0x00000000004FCDB4  sub_4FCDB4
 *   0x00000000004FD8D8  sub_4FD8D8
 *
 * Callees: 1
 *   0x00000000004F8984  luaL_error(lua_State *,char const*,...)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FADF8 string=0x00000000001FADFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __noreturn luaL_error()
{
  _Z10luaL_errorP9lua_StatePKcz();
}

