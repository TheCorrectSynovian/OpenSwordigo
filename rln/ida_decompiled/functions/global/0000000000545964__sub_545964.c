/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000545964
 * Mangled: sub_545964
 * Demangled: sub_545964
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000053DB28  sub_53DB28
 *
 * Referenced strings: 7
 *   insn=0x0000000000545974 string=0x0000000000545978 "B$E"
 *   insn=0x0000000000545980 string=0x0000000000545984 "B@"
 *   insn=0x0000000000545988 string=0x000000000054598C "b"
 *   insn=0x00000000005459A0 string=0x00000000005459A4 "a"
 *   insn=0x00000000005459B0 string=0x00000000005459B4 "`"
 *   insn=0x00000000005459B8 string=0x00000000005459BC "aB"
 *   insn=0x00000000005459C4 string=0x00000000005459C8 "`&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_545964(__int64 a1, int a2)
{
  char *result; // x0

  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = off_6B7710;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  sub_53DB28((_QWORD *)(a1 + 56));
  *(_QWORD *)a1 = off_6DA7B0;
  *(_DWORD *)(a1 + 64) = a2;
  result = &byte_6FD2F8;
  *(_QWORD *)(a1 + 72) = &byte_6FD2F8;
  return result;
}

