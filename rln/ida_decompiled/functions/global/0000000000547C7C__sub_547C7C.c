/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000547C7C
 * Mangled: sub_547C7C
 * Demangled: sub_547C7C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000053DB28  sub_53DB28
 *
 * Referenced strings: 6
 *   insn=0x0000000000547C8C string=0x0000000000547C90 "B"
 *   insn=0x0000000000547C98 string=0x0000000000547C9C "B@"
 *   insn=0x0000000000547CA0 string=0x0000000000547CA4 "b"
 *   insn=0x0000000000547CC8 string=0x0000000000547CCC "`"
 *   insn=0x0000000000547CD0 string=0x0000000000547CD4 "aB"
 *   insn=0x0000000000547CDC string=0x0000000000547CE0 "`&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_547C7C(__int64 a1, int a2)
{
  void *result; // x0

  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = off_6B7790;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  sub_53DB28((_QWORD *)(a1 + 56));
  *(_QWORD *)a1 = off_6DA9F0;
  *(_DWORD *)(a1 + 64) = a2;
  result = &unk_6FD318;
  *(_QWORD *)(a1 + 72) = &unk_6FD318;
  return result;
}

