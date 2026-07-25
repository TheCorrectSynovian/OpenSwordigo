/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F9080
 * Mangled: _Z14luaL_optnumberP9lua_Stateid
 * Demangled: luaL_optnumber(lua_State *,int,double)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FF230  luaL_checknumber(lua_State *,int)
 *
 * Referenced strings: 4
 *   insn=0x00000000004F908C string=0x00000000004F9090 ""
 *   insn=0x00000000004F9098 string=0x00000000004F909C "A\t"
 *   insn=0x00000000004F909C string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004F90B8 string=0x00000000004F90BC "]"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall luaL_optnumber(long double a1)
{
  long double result; // q0

  if ( (int)lua_type() < 1 )
    return a1;
  luaL_checknumber();
  return result;
}

