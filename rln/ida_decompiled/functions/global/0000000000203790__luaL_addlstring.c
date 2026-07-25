/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203790
 * Mangled: ._Z15luaL_addlstringP11luaL_BufferPKcm
 * Demangled: luaL_addlstring(luaL_Buffer *,char const*,ulong)
 *
 * Callers: 4
 *   0x00000000004FBC90  sub_4FBC90
 *   0x00000000004FC250  sub_4FC250
 *   0x00000000004FC7A8  sub_4FC7A8
 *   0x00000000004FCADC  sub_4FCADC
 *
 * Callees: 1
 *   0x00000000004F9780  luaL_addlstring(luaL_Buffer *,char const*,ulong)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203798 string=0x000000000020379C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_addlstring()
{
  return _Z15luaL_addlstringP11luaL_BufferPKcm();
}

