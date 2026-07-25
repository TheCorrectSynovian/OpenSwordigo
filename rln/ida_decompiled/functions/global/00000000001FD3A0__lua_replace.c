/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD3A0
 * Mangled: ._Z11lua_replaceP9lua_Statei
 * Demangled: lua_replace(lua_State *,int)
 *
 * Callers: 3
 *   0x00000000004FB1D4  sub_4FB1D4
 *   0x00000000004FB35C  sub_4FB35C
 *   0x00000000004FD99C  sub_4FD99C
 *
 * Callees: 1
 *   0x00000000004E6BC0  lua_replace(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD3A8 string=0x00000000001FD3AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_replace()
{
  return _Z11lua_replaceP9lua_Statei();
}

