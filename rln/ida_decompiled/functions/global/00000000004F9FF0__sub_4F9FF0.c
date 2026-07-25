/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F9FF0
 * Mangled: sub_4F9FF0
 * Demangled: sub_4F9FF0
 *
 * Callers: 2
 *   0x00000000004F9F9C  luaL_loadbuffer(lua_State *,char const*,ulong,char const*)
 *   0x00000000004FA010  luaL_loadstring(lua_State *,char const*)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000004F9FF4 string=0x00000000004F9FF8 "H"
 *   insn=0x00000000004F9FF8 string=0x00000000004F9FFC " "
 *   insn=0x00000000004F9FFC string=0x00000000004FA000 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F9FF0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // x8
  __int64 result; // x0

  v3 = a2[1];
  if ( !v3 )
    return 0;
  *a3 = v3;
  result = *a2;
  a2[1] = 0;
  return result;
}

