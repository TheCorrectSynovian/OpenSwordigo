/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FED10
 * Mangled: ._Z14lua_pushthreadP9lua_State
 * Demangled: lua_pushthread(lua_State *)
 *
 * Callers: 2
 *   0x00000000004FACEC  sub_4FACEC
 *   0x00000000004FB52C  sub_4FB52C
 *
 * Callees: 1
 *   0x00000000004E8928  lua_pushthread(lua_State *)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FED14 string=0x00000000004E8928 "@"
 *   insn=0x00000000001FED18 string=0x00000000001FED1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_pushthread()
{
  return _Z14lua_pushthreadP9lua_State();
}

