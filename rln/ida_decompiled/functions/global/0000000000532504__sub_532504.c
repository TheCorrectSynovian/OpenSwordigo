/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000532504
 * Mangled: sub_532504
 * Demangled: sub_532504
 *
 * Callers: 1
 *   0x00000000005347F0  sub_5347F0
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000052E2BC  sub_52E2BC
 *   0x0000000000532614  sub_532614
 *   0x000000000053C340  sub_53C340
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x0000000000532504 string=0x0000000000532508 "@"
 *   insn=0x0000000000532548 string=0x000000000053254C "%"
 *   insn=0x000000000053254C string=0x0000000000532550 """
 *   insn=0x000000000053254C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000532554 string=0x0000000000532558 "B"
 *   insn=0x00000000005325B8 string=0x00000000005325BC "@"
 *   insn=0x00000000005325C8 string=0x00000000005325CC "]'"
 *   insn=0x00000000005325E4 string=0x00000000005325E8 "bA"
 *   insn=0x00000000005325E4 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005325EC string=0x00000000005325F0 "a"
 *   insn=0x00000000005325F4 string=0x00000000005325F8 "!"
 *   insn=0x00000000005325F8 string=0x00000000005325FC " "
 *   insn=0x0000000000532608 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_532504(__int64 a1, _QWORD *a2)
{
  __int64 v3; // x20
  __int64 v4; // x22
  __int64 result; // x0
  __int64 v6; // x0
  __int64 v7; // x19

  v3 = sub_53C4D0(&qword_6FBDE8);
  v4 = *(_QWORD *)(*a2 + 24LL);
  result = *(_QWORD *)(v4 + 8 * v3);
  if ( !result )
  {
    v6 = operator new(0x70u);
    *(_DWORD *)(v6 + 8) = 0;
    *(_QWORD *)v6 = off_6B70A0;
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
    sub_52E2BC(v6, (__int64)a2);
    sub_53C340(*a2, v7, v3);
    return *(_QWORD *)(v4 + 8 * v3);
  }
  return result;
}

