/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF030
 * Mangled: ._Z15luaL_pushresultP11luaL_Buffer
 * Demangled: luaL_pushresult(luaL_Buffer *)
 *
 * Callers: 8
 *   0x00000000004FBAE8  sub_4FBAE8
 *   0x00000000004FBBE4  sub_4FBBE4
 *   0x00000000004FBC90  sub_4FBC90
 *   0x00000000004FC250  sub_4FC250
 *   0x00000000004FC6D4  sub_4FC6D4
 *   0x00000000004FC7A8  sub_4FC7A8
 *   0x00000000004FC85C  sub_4FC85C
 *   0x00000000004FCA10  sub_4FCA10
 *
 * Callees: 1
 *   0x00000000004F9850  luaL_pushresult(luaL_Buffer *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF038 string=0x00000000001FF03C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_pushresult()
{
  return _Z15luaL_pushresultP11luaL_Buffer();
}

