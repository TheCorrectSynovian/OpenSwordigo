/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA778
 * Mangled: sub_4FA778
 * Demangled: sub_4FA778
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F3A40  lua_iscfunction(lua_State *,int)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *   0x0000000000200A30  lua_getfenv(lua_State *,int)
 *   0x00000000004FB244  sub_4FB244
 *
 * Referenced strings: 3
 *   insn=0x00000000004FA798 string=0x00000000001F3A40 "P'"
 *   insn=0x00000000004FA79C string=0x00000000004FA7A0 "!"
 *   insn=0x00000000004FA7A8 string=0x00000000001FCF60 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FA778()
{
  sub_4FB244();
  if ( (unsigned int)lua_iscfunction() )
    lua_pushvalue();
  else
    lua_getfenv();
  return 1;
}

