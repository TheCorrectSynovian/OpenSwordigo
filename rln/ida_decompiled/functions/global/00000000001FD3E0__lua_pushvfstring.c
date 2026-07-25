/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD3E0
 * Mangled: ._Z16lua_pushvfstringP9lua_StatePKcSt9__va_list
 * Demangled: lua_pushvfstring(lua_State *,char const*,std::__va_list)
 *
 * Callers: 1
 *   0x00000000004F8984  luaL_error(lua_State *,char const*,...)
 *
 * Callees: 1
 *   0x00000000004E86A8  lua_pushvfstring(lua_State *,char const*,std::__va_list)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD3E8 string=0x00000000001FD3EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_pushvfstring()
{
  return _Z16lua_pushvfstringP9lua_StatePKcSt9__va_list();
}

