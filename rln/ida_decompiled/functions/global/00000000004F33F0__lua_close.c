/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F33F0
 * Mangled: _Z9lua_closeP9lua_State
 * Demangled: lua_close(lua_State *)
 *
 * Callers: 1
 *   0x0000000000201AB0  lua_close(lua_State *)
 *
 * Callees: 5
 *   0x00000000004EB998  sub_4EB998
 *   0x00000000004ED5F4  sub_4ED5F4
 *   0x00000000004ED86C  sub_4ED86C
 *   0x00000000004F3344  sub_4F3344
 *   0x00000000004F3460  sub_4F3460
 *
 * Referenced strings: 9
 *   insn=0x00000000004F33F8 string=0x00000000004F33FC ""
 *   insn=0x00000000004F3400 string=0x00000000004F3404 "a"@"
 *   insn=0x00000000004F3408 string=0x00000000004F340C "z"
 *   insn=0x00000000004F341C string=0x00000000004F3460 "C"
 *   insn=0x00000000004F3424 string=0x00000000004F3428 "h*@"
 *   insn=0x00000000004F3434 string=0x00000000004F3438 "h"
 *   insn=0x00000000004F3438 string=0x00000000004F343C ""
 *   insn=0x00000000004F3440 string=0x00000000004F3444 "h""
 *   insn=0x00000000004F3444 string=0x00000000004F3448 "T"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_close(__int64 a1)
{
  __int64 v1; // x19
  __int64 *v2; // x8
  __int64 v3; // x8

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 176LL);
  sub_4ED5F4(v1, *(_QWORD *)(v1 + 64));
  sub_4ED86C(v1, 1);
  *(_QWORD *)(v1 + 176) = 0;
  do
  {
    v2 = *(__int64 **)(v1 + 80);
    *(_QWORD *)(v1 + 40) = v2;
    v3 = *v2;
    *(_DWORD *)(v1 + 96) = 0;
    *(_QWORD *)(v1 + 16) = v3;
    *(_QWORD *)(v1 + 24) = v3;
  }
  while ( (unsigned int)sub_4EB998(v1, (void (*)(void))sub_4F3460) );
  return sub_4F3344(v1);
}

