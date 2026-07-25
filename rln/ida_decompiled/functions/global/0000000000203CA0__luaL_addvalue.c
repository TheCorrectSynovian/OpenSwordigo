/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203CA0
 * Mangled: ._Z13luaL_addvalueP11luaL_Buffer
 * Demangled: luaL_addvalue(luaL_Buffer *)
 *
 * Callers: 2
 *   0x00000000004FBC90  sub_4FBC90
 *   0x00000000004FC250  sub_4FC250
 *
 * Callees: 1
 *   0x00000000004F99A0  luaL_addvalue(luaL_Buffer *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203CA8 string=0x0000000000203CAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_addvalue()
{
  return _Z13luaL_addvalueP11luaL_Buffer();
}

