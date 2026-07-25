/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000554914
 * Mangled: sub_554914
 * Demangled: sub_554914
 *
 * Callers: 2
 *   0x0000000000554804  sub_554804
 *   0x00000000005569EC  sub_5569EC
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000053C340  sub_53C340
 *   0x000000000053C4D0  sub_53C4D0
 *   0x0000000000550C18  sub_550C18
 *   0x0000000000554A24  sub_554A24
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x0000000000554914 string=0x0000000000554918 "@"
 *   insn=0x0000000000554958 string=0x000000000055495C "!"
 *   insn=0x000000000055495C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000554964 string=0x0000000000554968 "B"
 *   insn=0x00000000005549D8 string=0x00000000005549DC "Y"
 *   insn=0x00000000005549F4 string=0x00000000005549F8 "^"
 *   insn=0x00000000005549F4 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005549FC string=0x0000000000554A00 "a"
 *   insn=0x0000000000554A04 string=0x0000000000554A08 "!"
 *   insn=0x0000000000554A08 string=0x0000000000554A0C " "
 *   insn=0x0000000000554A18 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_554914(__int64 a1, __int64 *a2)
{
  __int64 v3; // x20
  __int64 v4; // x22
  __int64 result; // x0
  __int64 v6; // x0
  _DWORD *v7; // x19

  v3 = sub_53C4D0(&qword_6FD2C8);
  v4 = *(_QWORD *)(*a2 + 24);
  result = *(_QWORD *)(v4 + 8 * v3);
  if ( !result )
  {
    v6 = operator new(0xA0u);
    *(_DWORD *)(v6 + 8) = 0;
    *(_QWORD *)v6 = off_6B7C40;
    v7 = (_DWORD *)v6;
    *(_QWORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = 0;
    *(_BYTE *)(v6 + 32) = 0;
    *(_DWORD *)(v6 + 36) = 0;
    *(_DWORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 48) = 0;
    *(_QWORD *)(v6 + 56) = 0;
    *(_QWORD *)(v6 + 64) = 0;
    *(_QWORD *)(v6 + 72) = 0;
    *(_QWORD *)(v6 + 80) = 0;
    *(_QWORD *)(v6 + 88) = 0;
    *(_DWORD *)(v6 + 96) = 0;
    *(_BYTE *)(v6 + 100) = 0;
    *(_BYTE *)(v6 + 101) = 0;
    *(_BYTE *)(v6 + 102) = 0;
    *(_BYTE *)(v6 + 103) = 0;
    *(_BYTE *)(v6 + 104) = 0;
    *(_BYTE *)(v6 + 105) = 0;
    *(_BYTE *)(v6 + 106) = 0;
    *(_BYTE *)(v6 + 107) = 0;
    *(_BYTE *)(v6 + 152) = 0;
    sub_550C18(v6, (__int64)a2);
    sub_53C340(*a2, v7, v3);
    return *(_QWORD *)(v4 + 8 * v3);
  }
  return result;
}

