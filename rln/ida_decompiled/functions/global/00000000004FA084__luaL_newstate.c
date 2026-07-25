/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA084
 * Mangled: _Z13luaL_newstatev
 * Demangled: luaL_newstate(void)
 *
 * Callers: 1
 *   0x0000000000202B10  luaL_newstate(void)
 *
 * Callees: 4
 *   0x0000000000200680  lua_newstate(void * (*)(void *,void *,ulong,ulong),void *)
 *   0x0000000000201570  lua_atpanic(lua_State *,int (*)(lua_State *))
 *   0x00000000004FA0C8  sub_4FA0C8
 *   0x00000000004FA0F4  sub_4FA0F4
 *
 * Referenced strings: 2
 *   insn=0x00000000004FA098 string=0x00000000004FA09C "y"
 *   insn=0x00000000004FA0B0 string=0x00000000004FA0B4 "/"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 luaL_newstate(void)
{
  __int64 v0; // x19

  v0 = lua_newstate((void *(*)(void *, void *, unsigned __int64, unsigned __int64))sub_4FA0C8, 0);
  if ( v0 )
    lua_atpanic();
  return v0;
}

