/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF6F0
 * Mangled: ._Z15luaL_loadbufferP9lua_StatePKcmS2_
 * Demangled: luaL_loadbuffer(lua_State *,char const*,ulong,char const*)
 *
 * Callers: 2
 *   0x00000000004C0C6C  Caver::Program::LoadIntoState(lua_State *)
 *   0x00000000004FA914  sub_4FA914
 *
 * Callees: 1
 *   0x00000000004F9F9C  luaL_loadbuffer(lua_State *,char const*,ulong,char const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF6F8 string=0x00000000001FF6FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_loadbuffer()
{
  return _Z15luaL_loadbufferP9lua_StatePKcmS2_();
}

