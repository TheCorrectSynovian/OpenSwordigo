/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053E680
 * Mangled: sub_53E680
 * Demangled: sub_53E680
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000053DB28  sub_53DB28
 *
 * Referenced strings: 7
 *   insn=0x000000000053E680 string=0x000000000053E684 "B"
 *   insn=0x000000000053E690 string=0x000000000053E694 "B"
 *   insn=0x000000000053E69C string=0x000000000053E6A0 "B@"
 *   insn=0x000000000053E6A4 string=0x000000000053E6A8 "b"
 *   insn=0x000000000053E6CC string=0x000000000053E6D0 "a""
 *   insn=0x000000000053E6D0 string=0x000000000053E6D4 "`"
 *   insn=0x000000000053E6D8 string=0x000000000053E6DC "`J"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53E680(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = off_6B7790;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  sub_53DB28((_QWORD *)(a1 + 56));
  *(_QWORD *)(a1 + 64) = a2;
  *(_QWORD *)a1 = off_6DA620;
  result = 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 72) = -1;
  return result;
}

