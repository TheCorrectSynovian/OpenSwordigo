/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8A50
 * Mangled: ._Z11lua_setfenvP9lua_Statei
 * Demangled: lua_setfenv(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000004FACEC  sub_4FACEC
 *
 * Callees: 1
 *   0x00000000004E9730  lua_setfenv(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F8A54 string=0x00000000004E9730 "?"
 *   insn=0x00000000001F8A58 string=0x00000000001F8A5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_setfenv()
{
  return _Z11lua_setfenvP9lua_Statei();
}

