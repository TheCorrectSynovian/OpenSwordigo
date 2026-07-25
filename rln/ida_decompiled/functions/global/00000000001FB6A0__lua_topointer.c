/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB6A0
 * Mangled: ._Z13lua_topointerP9lua_Statei
 * Demangled: lua_topointer(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000004FAF74  sub_4FAF74
 *
 * Callees: 1
 *   0x00000000004E8340  lua_topointer(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FB6A4 string=0x00000000004E8340 "?"
 *   insn=0x00000000001FB6A8 string=0x00000000001FB6AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_topointer()
{
  return _Z13lua_topointerP9lua_Statei();
}

