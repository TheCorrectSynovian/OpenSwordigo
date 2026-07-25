/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F59E0
 * Mangled: ._Z14luaL_checktypeP9lua_Stateii
 * Demangled: luaL_checktype(lua_State *,int,int)
 *
 * Callers: 11
 *   0x00000000004FA2B4  sub_4FA2B4
 *   0x00000000004FA304  sub_4FA304
 *   0x00000000004FA37C  sub_4FA37C
 *   0x00000000004FA3C8  sub_4FA3C8
 *   0x00000000004FA880  sub_4FA880
 *   0x00000000004FAB8C  sub_4FAB8C
 *   0x00000000004FABDC  sub_4FABDC
 *   0x00000000004FACEC  sub_4FACEC
 *   0x00000000004FADB0  sub_4FADB0
 *   0x00000000004FB0E0  sub_4FB0E0
 *   0x00000000004FBBE4  sub_4FBBE4
 *
 * Callees: 1
 *   0x00000000004F8F00  luaL_checktype(lua_State *,int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F59E8 string=0x00000000001F59EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_checktype()
{
  return _Z14luaL_checktypeP9lua_Stateii();
}

