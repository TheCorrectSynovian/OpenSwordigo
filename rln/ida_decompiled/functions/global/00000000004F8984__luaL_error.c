/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F8984
 * Mangled: _Z10luaL_errorP9lua_StatePKcz
 * Demangled: luaL_error(lua_State *,char const*,...)
 *
 * Callers: 1
 *   0x00000000001FADF0  luaL_error(lua_State *,char const*,...)
 *
 * Callees: 8
 *   0x00000000001F3BE0  lua_error(lua_State *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA2F0  lua_getstack(lua_State *,int,lua_Debug *)
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x00000000001FD3E0  lua_pushvfstring(lua_State *,char const*,std::__va_list)
 *   0x00000000001FEAF0  lua_getinfo(lua_State *,char const*,lua_Debug *)
 *   0x00000000002029F0  lua_concat(lua_State *,int)
 *   0x00000000002035B0  lua_pushfstring(lua_State *,char const*,...)
 *
 * Referenced strings: 15
 *   insn=0x00000000004F89B4 string=0x00000000004F89B8 "U"
 *   insn=0x00000000004F89D8 string=0x00000000004F89DC "k"
 *   insn=0x00000000004F89F8 string=0x00000000004F89FC "="
 *   insn=0x00000000004F89FC string=0x00000000001FA2F0 "0'"
 *   insn=0x00000000004F8A04 string=0x000000000059A5C5 "Sl"
 *   insn=0x00000000004F8A14 string=0x00000000004F8A18 "6"
 *   insn=0x00000000004F8A28 string=0x000000000059A5C8 "%s:%d: "
 *   insn=0x00000000004F8A2C string=0x00000000004F8A30 "! "
 *   insn=0x00000000004F8A50 string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004F8A64 string=0x00000000004F8A68 "^"
 *   insn=0x00000000004F8A68 string=0x00000000001FD3E0 "0'"
 *   insn=0x00000000004F8A78 string=0x00000000004F8A7C "Y"
 *   insn=0x00000000004F8A7C string=0x00000000001F3BE0 "P'"
 *   insn=0x00000000004F8A8C string=0x00000000004F8AA8 "\n"
 *   insn=0x00000000004F8AA8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn luaL_error(__int64 a1, __int64 a2, ...)
{
  gcc_va_list va1; // [xsp+B0h] [xbp-F0h] BYREF
  gcc_va_list va; // [xsp+D0h] [xbp-D0h] BYREF
  int v4; // [xsp+118h] [xbp-88h]
  __int64 v5; // [xsp+168h] [xbp-38h]

  va_start(va, a2);
  v5 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (unsigned int)lua_getstack() && (lua_getinfo(), v4 >= 1) )
    lua_pushfstring();
  else
    lua_pushlstring();
  va_copy(va1, va);
  lua_pushvfstring();
  lua_concat();
  lua_error();
}

