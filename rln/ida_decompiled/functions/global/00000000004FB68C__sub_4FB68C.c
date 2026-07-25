/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FB68C
 * Mangled: sub_4FB68C
 * Demangled: sub_4FB68C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7AC0  lua_gettop(lua_State *)
 *   0x00000000002005F0  lua_yield(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000004FB698 string=0x00000000004FB69C "\t"
 *   insn=0x00000000004FB69C string=0x00000000001F7AC0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FB68C()
{
  lua_gettop();
  return lua_yield();
}

