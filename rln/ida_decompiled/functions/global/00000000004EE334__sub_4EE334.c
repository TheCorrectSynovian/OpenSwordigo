/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EE334
 * Mangled: sub_4EE334
 * Demangled: sub_4EE334
 *
 * Callers: 9
 *   0x00000000004E6BC0  lua_replace(lua_State *,int)
 *   0x00000000004E959C  lua_setmetatable(lua_State *,int)
 *   0x00000000004E9730  lua_setfenv(lua_State *,int)
 *   0x00000000004EA180  lua_setupvalue(lua_State *,int,int)
 *   0x00000000004F17E0  sub_4F17E0
 *   0x00000000004F21A8  sub_4F21A8
 *   0x00000000004F2614  sub_4F2614
 *   0x00000000004F6B64  sub_4F6B64
 *   0x00000000004FE158  sub_4FE158
 *
 * Callees: 1
 *   0x00000000004EE364  sub_4EE364
 *
 * Referenced strings: 8
 *   insn=0x00000000004EE334 string=0x00000000004EE338 ""
 *   insn=0x00000000004EE33C string=0x00000000004EE340 "a"
 *   insn=0x00000000004EE340 string=0x00000000004EE34C "($@9\t"
 *   insn=0x00000000004EE344 string=0x00000000004EE348 ""
 *   insn=0x00000000004EE34C string=0x00000000004EE350 "\t"
 *   insn=0x00000000004EE350 string=0x00000000004EE354 ""
 *   insn=0x00000000004EE354 string=0x00000000004EE358 "("
 *   insn=0x00000000004EE358 string=0x00000000004EE35C "($"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EE334(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(result + 33) == 1 )
    return sub_4EE364(result);
  *(_BYTE *)(a2 + 9) = *(_BYTE *)(a2 + 9) & 0xF8 | *(_BYTE *)(result + 32) & 3;
  return result;
}

