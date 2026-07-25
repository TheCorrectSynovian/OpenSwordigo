/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9110
 * Mangled: ._Z12lua_tothreadP9lua_Statei
 * Demangled: lua_tothread(lua_State *,int)
 *
 * Callers: 3
 *   0x00000000004FB484  sub_4FB484
 *   0x00000000004FB55C  sub_4FB55C
 *   0x00000000004FB850  sub_4FB850
 *
 * Callees: 1
 *   0x00000000004E8258  lua_tothread(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9114 string=0x00000000004E8258 "?"
 *   insn=0x00000000001F9118 string=0x00000000001F911C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_tothread()
{
  return _Z12lua_tothreadP9lua_Statei();
}

