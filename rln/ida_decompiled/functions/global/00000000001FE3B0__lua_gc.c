/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE3B0
 * Mangled: ._Z6lua_gcP9lua_Stateii
 * Demangled: lua_gc(lua_State *,int,int)
 *
 * Callers: 2
 *   0x00000000004FA584  sub_4FA584
 *   0x00000000004FA740  sub_4FA740
 *
 * Callees: 1
 *   0x00000000004E9C58  lua_gc(lua_State *,int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE3B8 string=0x00000000001FE3BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_gc()
{
  return _Z6lua_gcP9lua_Stateii();
}

