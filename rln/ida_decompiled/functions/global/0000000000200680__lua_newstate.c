/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200680
 * Mangled: ._Z12lua_newstatePFPvS_S_mmES_
 * Demangled: lua_newstate(void * (*)(void *,void *,ulong,ulong),void *)
 *
 * Callers: 1
 *   0x00000000004FA084  luaL_newstate(void)
 *
 * Callees: 1
 *   0x00000000004F3118  lua_newstate(void * (*)(void *,void *,ulong,ulong),void *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200688 string=0x000000000020068C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall lua_newstate(void *(*a1)(void *, void *, unsigned __int64, unsigned __int64), void *a2)
{
  return _Z12lua_newstatePFPvS_S_mmES_(a1, a2);
}

