/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054EBF4
 * Mangled: sub_54EBF4
 * Demangled: sub_54EBF4
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053BE7C  sub_53BE7C
 *   0x000000000054C268  sub_54C268
 *   0x000000000054EC54  sub_54EC54
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000054EBF4 string=0x000000000054EBF8 "?"
 *   insn=0x000000000054EC08 string=0x000000000054EC0C "`\n"
 *   insn=0x000000000054EC0C string=0x000000000054EC10 "@"
 *   insn=0x000000000054EC18 string=0x000000000054EC1C "`"
 *   insn=0x000000000054EC20 string=0x000000000054EC24 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const char *__fastcall sub_54EBF4(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = a2 != 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = off_6B79E0;
  *(_QWORD *)(a1 + 32) = sub_53BE7C();
  return sub_54C268(a1);
}

