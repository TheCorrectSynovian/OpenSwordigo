/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F4320
 * Mangled: sub_4F4320
 * Demangled: sub_4F4320
 *
 * Callers: 3
 *   0x00000000004E92F8  lua_rawset(lua_State *,int)
 *   0x00000000004F61E8  sub_4F61E8
 *   0x00000000004FE158  sub_4FE158
 *
 * Callees: 3
 *   0x00000000004EB320  sub_4EB320
 *   0x00000000004F4118  sub_4F4118
 *   0x00000000004F43C0  sub_4F43C0
 *
 * Referenced strings: 9
 *   insn=0x00000000004F4340 string=0x00000000004F4344 "u"
 *   insn=0x00000000004F4344 string=0x00000000004F4348 "("
 *   insn=0x00000000004F4358 string=0x00000000004F436C "h\n@"
 *   insn=0x00000000004F4374 string=0x00000000004F4378 "h"
 *   insn=0x00000000004F4374 string=0x00000000004F4388 "`"
 *   insn=0x00000000004F4378 string=0x00000000004F437C "!"
 *   insn=0x00000000004F437C string=0x000000000059A2C8 "table index is nil"
 *   insn=0x00000000004F4390 string=0x00000000004F4394 "!"
 *   insn=0x00000000004F4394 string=0x000000000059A2DB "table index is NaN"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_4F4320(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 *result; // x0

  result = sub_4F4118(a2, a3);
  *(_BYTE *)(a2 + 10) = 0;
  if ( result == &qword_599BC8 )
  {
    if ( !a3[2] )
      sub_4EB320(a1, "table index is nil");
    return (__int64 *)sub_4F43C0(a1, a2, a3);
  }
  return result;
}

