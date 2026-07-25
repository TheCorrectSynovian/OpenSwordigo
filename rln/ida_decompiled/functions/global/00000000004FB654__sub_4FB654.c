/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FB654
 * Mangled: sub_4FB654
 * Demangled: sub_4FB654
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000002034A0  lua_pushcclosure(lua_State *,int (*)(lua_State *),int)
 *   0x00000000004FB408  sub_4FB408
 *   0x00000000004FB850  sub_4FB850
 *
 * Referenced strings: 1
 *   insn=0x00000000004FB660 string=0x00000000004FB664 "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FB654()
{
  sub_4FB408();
  lua_pushcclosure();
  return 1;
}

