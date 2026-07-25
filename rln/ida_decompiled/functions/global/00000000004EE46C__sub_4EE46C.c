/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EE46C
 * Mangled: sub_4EE46C
 * Demangled: sub_4EE46C
 *
 * Callers: 6
 *   0x00000000004E92F8  lua_rawset(lua_State *,int)
 *   0x00000000004E944C  lua_rawseti(lua_State *,int,int)
 *   0x00000000004E959C  lua_setmetatable(lua_State *,int)
 *   0x00000000004F43C0  sub_4F43C0
 *   0x00000000004F61E8  sub_4F61E8
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x00000000004EE46C string=0x00000000004EE470 "\t"
 *   insn=0x00000000004EE470 string=0x00000000004EE474 "y"
 *   insn=0x00000000004EE474 string=0x00000000004EE478 "($"
 *   insn=0x00000000004EE478 string=0x00000000004EE47C "(!@"
 *   insn=0x00000000004EE47C string=0x00000000004EE480 "("
 *   insn=0x00000000004EE480 string=0x00000000004EE484 "!!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EE46C(__int64 result, __int64 a2)
{
  __int64 v2; // x9

  v2 = *(_QWORD *)(result + 32);
  *(_BYTE *)(a2 + 9) &= ~4u;
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(v2 + 64);
  *(_QWORD *)(v2 + 64) = a2;
  return result;
}

