/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E6F54
 * Mangled: _Z12lua_typenameP9lua_Statei
 * Demangled: lua_typename(lua_State *,int)
 *
 * Callers: 1
 *   0x0000000000200BD0  lua_typename(lua_State *,int)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004E6F6C string=0x00000000005997D3 "no value"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const char *__fastcall lua_typename(__int64 a1, int a2)
{
  if ( a2 == -1 )
    return "no value";
  else
    return (const char *)*(&off_6D8858 + a2);
}

