/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EC964
 * Mangled: _Z9lua_yieldP9lua_Statei
 * Demangled: lua_yield(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000002005F0  lua_yield(lua_State *,int)
 *
 * Callees: 1
 *   0x00000000004EB320  sub_4EB320
 *
 * Referenced strings: 9
 *   insn=0x00000000004EC970 string=0x00000000004EC974 "h"
 *   insn=0x00000000004EC974 string=0x00000000004EC978 "i"
 *   insn=0x00000000004EC984 string=0x00000000004EC988 "a"
 *   insn=0x00000000004EC984 string=0x00000000004EC998 "h\n@"
 *   insn=0x00000000004EC988 string=0x0000000000599A9D "attempt to yield across metamethod/C-call boundary"
 *   insn=0x00000000004EC990 string=0x00000000004EC994 "c"
 *   insn=0x00000000004EC99C string=0x00000000004EC9A0 "i*"
 *   insn=0x00000000004EC9A4 string=0x00000000004EC9A8 ""
 *   insn=0x00000000004EC9A8 string=0x00000000004EC9AC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_yield(__int64 a1, int a2)
{
  __int64 v3; // x8
  __int64 result; // x0

  if ( *(unsigned __int16 *)(a1 + 96) > (unsigned int)*(unsigned __int16 *)(a1 + 98) )
    sub_4EB320(a1, "attempt to yield across metamethod/C-call boundary");
  v3 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 10) = 1;
  result = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = v3 - 16LL * a2;
  return result;
}

