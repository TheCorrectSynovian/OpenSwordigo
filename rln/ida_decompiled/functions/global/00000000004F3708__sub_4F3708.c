/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F3708
 * Mangled: sub_4F3708
 * Demangled: sub_4F3708
 *
 * Callers: 1
 *   0x00000000004E9F4C  lua_newuserdata(lua_State *,ulong)
 *
 * Callees: 2
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004EEDE0  sub_4EEDE0
 *
 * Referenced strings: 12
 *   insn=0x00000000004F3724 string=0x00000000004F3728 "c"
 *   insn=0x00000000004F3744 string=0x00000000004F3748 "h"
 *   insn=0x00000000004F374C string=0x00000000004F3750 ""
 *   insn=0x00000000004F3750 string=0x00000000004F3754 "\t "
 *   insn=0x00000000004F375C string=0x00000000004F3760 ""
 *   insn=0x00000000004F3760 string=0x00000000004F3764 "$"
 *   insn=0x00000000004F3764 string=0x00000000004F3768 "h"
 *   insn=0x00000000004F3768 string=0x00000000004F376C "Y@"
 *   insn=0x00000000004F376C string=0x00000000004F3770 ""
 *   insn=0x00000000004F3770 string=0x00000000004F3774 ""
 *   insn=0x00000000004F3774 string=0x00000000004F3778 "h"
 *   insn=0x00000000004F3778 string=0x00000000004F377C "Y@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F3708(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // x0
  char v7; // w8

  if ( a2 >= 0xFFFFFFFFFFFFFFD6LL )
    sub_4EEDE0(a1);
  result = sub_4EED74(a1, 0, 0, a2 + 40);
  v7 = *(_BYTE *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_BYTE *)(result + 8) = 7;
  *(_QWORD *)(result + 24) = a3;
  *(_QWORD *)(result + 32) = a2;
  *(_QWORD *)(result + 16) = 0;
  *(_BYTE *)(result + 9) = v7 & 3;
  *(_QWORD *)result = **(_QWORD **)(*(_QWORD *)(a1 + 32) + 176LL);
  **(_QWORD **)(*(_QWORD *)(a1 + 32) + 176LL) = result;
  return result;
}

