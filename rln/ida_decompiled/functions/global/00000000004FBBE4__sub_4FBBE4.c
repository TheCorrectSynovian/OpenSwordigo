/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FBBE4
 * Mangled: sub_4FBBE4
 * Demangled: sub_4FBBE4
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F59E0  luaL_checktype(lua_State *,int,int)
 *   0x00000000001F5B60  luaL_buffinit(lua_State *,luaL_Buffer *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63C0  lua_dump(lua_State *,int (*)(lua_State *,void const*,ulong,void *),void *)
 *   0x00000000001FADF0  luaL_error(lua_State *,char const*,...)
 *   0x00000000001FF030  luaL_pushresult(luaL_Buffer *)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x00000000004FCADC  sub_4FCADC
 *
 * Referenced strings: 10
 *   insn=0x00000000004FBBF4 string=0x00000000004FBBF8 "T"
 *   insn=0x00000000004FBC0C string=0x00000000004FBC10 "t"
 *   insn=0x00000000004FBC10 string=0x00000000001F59E0 "P'"
 *   insn=0x00000000004FBC18 string=0x00000000004FBC1C "="
 *   insn=0x00000000004FBC28 string=0x00000000001F5B60 "P'"
 *   insn=0x00000000004FBC3C string=0x00000000001F63C0 "0'"
 *   insn=0x00000000004FBC44 string=0x000000000059AD4B "unable to dump given function"
 *   insn=0x00000000004FBC4C string=0x00000000004FBC50 "h"
 *   insn=0x00000000004FBC50 string=0x00000000001FADF0 "0'"
 *   insn=0x00000000004FBC84 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FBBE4()
{
  _ReadStatusReg(TPIDR_EL0);
  luaL_checktype();
  lua_settop();
  luaL_buffinit();
  if ( (unsigned int)lua_dump() )
    luaL_error();
  luaL_pushresult();
  return 1;
}

