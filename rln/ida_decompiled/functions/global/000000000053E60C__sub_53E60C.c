/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053E60C
 * Mangled: sub_53E60C
 * Demangled: sub_53E60C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000053DB28  sub_53DB28
 *
 * Referenced strings: 8
 *   insn=0x000000000053E60C string=0x000000000053E610 "B"
 *   insn=0x000000000053E61C string=0x000000000053E620 "B$E"
 *   insn=0x000000000053E628 string=0x000000000053E62C "B@"
 *   insn=0x000000000053E630 string=0x000000000053E634 "b"
 *   insn=0x000000000053E648 string=0x000000000053E64C "7"
 *   insn=0x000000000053E658 string=0x000000000053E65C "a""
 *   insn=0x000000000053E65C string=0x000000000053E660 "`"
 *   insn=0x000000000053E664 string=0x000000000053E668 "`J"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53E60C(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = off_6B7710;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  sub_53DB28((_QWORD *)(a1 + 56));
  *(_QWORD *)(a1 + 64) = a2;
  *(_QWORD *)a1 = off_6DA5A0;
  result = 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 72) = -1;
  return result;
}

