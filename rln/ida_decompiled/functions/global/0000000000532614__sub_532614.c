/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000532614
 * Mangled: sub_532614
 * Demangled: sub_532614
 *
 * Callers: 2
 *   0x0000000000532504  sub_532504
 *   0x000000000053557C  sub_53557C
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000052E854  sub_52E854
 *   0x0000000000532724  sub_532724
 *   0x000000000053C340  sub_53C340
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x0000000000532614 string=0x0000000000532618 "@"
 *   insn=0x000000000053265C string=0x0000000000532660 """
 *   insn=0x000000000053265C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000532664 string=0x0000000000532668 "B"
 *   insn=0x00000000005326C8 string=0x00000000005326CC "b"
 *   insn=0x00000000005326F4 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005326FC string=0x0000000000532700 "a"
 *   insn=0x0000000000532704 string=0x0000000000532708 "!"
 *   insn=0x0000000000532708 string=0x000000000053270C " "
 *   insn=0x0000000000532718 string=0x00000000001FD590 "0'"
 *   insn=0x000000000053271C string=0x0000000000532720 "i<"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_532614(__int64 a1, _QWORD *a2)
{
  __int64 v3; // x20
  __int64 v4; // x22
  __int64 result; // x0
  __int64 v6; // x0
  __int64 v7; // x19

  v3 = sub_53C4D0(&qword_6FBDF0);
  v4 = *(_QWORD *)(*a2 + 24LL);
  result = *(_QWORD *)(v4 + 8 * v3);
  if ( !result )
  {
    v6 = operator new(0x70u);
    *(_DWORD *)(v6 + 8) = 0;
    *(_QWORD *)v6 = off_6B7080;
    v7 = v6;
    *(_QWORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = 0;
    *(_BYTE *)(v6 + 32) = 0;
    *(_BYTE *)(v6 + 33) = 0;
    *(_BYTE *)(v6 + 34) = 0;
    *(_QWORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 48) = 0;
    *(_QWORD *)(v6 + 56) = 0;
    *(_QWORD *)(v6 + 64) = 0;
    *(_QWORD *)(v6 + 72) = 0;
    *(_QWORD *)(v6 + 80) = 0;
    *(_DWORD *)(v6 + 88) = 0;
    *(_BYTE *)(v6 + 92) = 0;
    *(_BYTE *)(v6 + 93) = 0;
    *(_BYTE *)(v6 + 94) = 0;
    *(_BYTE *)(v6 + 95) = 0;
    *(_BYTE *)(v6 + 96) = 0;
    *(_BYTE *)(v6 + 97) = 0;
    *(_BYTE *)(v6 + 98) = 0;
    *(_BYTE *)(v6 + 99) = 0;
    *(_BYTE *)(v6 + 111) = 0;
    sub_52E854(v6, (__int64)a2);
    sub_53C340(*a2, v7, v3);
    return *(_QWORD *)(v4 + 8 * v3);
  }
  return result;
}

