/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F8FDC
 * Mangled: _Z16luaL_checknumberP9lua_Statei
 * Demangled: luaL_checknumber(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001FF230  luaL_checknumber(lua_State *,int)
 *
 * Callees: 6
 *   0x00000000001F5030  lua_tonumber(lua_State *,int)
 *   0x00000000001FAE70  lua_isnumber(lua_State *,int)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FC190  luaL_argerror(lua_State *,int,char const*)
 *   0x0000000000200BD0  lua_typename(lua_State *,int)
 *   0x00000000002035B0  lua_pushfstring(lua_State *,char const*,...)
 *
 * Referenced strings: 12
 *   insn=0x00000000004F8FF8 string=0x00000000004F8FFC ""
 *   insn=0x00000000004F8FF8 string=0x00000000001F5030 "P'"
 *   insn=0x00000000004F8FFC string=0x00000000004F9000 "!`"
 *   insn=0x00000000004F9000 string=0x00000000004F9004 "!"
 *   insn=0x00000000004F9010 string=0x00000000001FAE70 "0'"
 *   insn=0x00000000004F902C string=0x00000000004F9030 "\\t"
 *   insn=0x00000000004F9030 string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004F9040 string=0x000000000059A5B1 "%s expected, got %s"
 *   insn=0x00000000004F9044 string=0x00000000004F9048 "!"
 *   insn=0x00000000004F9050 string=0x00000000004F9054 "W)"
 *   insn=0x00000000004F9060 string=0x00000000004F9064 "K"
 *   insn=0x00000000004F9064 string=0x00000000001FC190 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double luaL_checknumber()
{
  long double v0; // q0
  long double v1; // q8

  lua_tonumber();
  v1 = v0;
  if ( *(double *)&v0 == 0.0 && !(unsigned int)lua_isnumber() )
  {
    lua_typename();
    lua_type();
    lua_typename();
    lua_pushfstring();
    luaL_argerror();
  }
  return v1;
}

