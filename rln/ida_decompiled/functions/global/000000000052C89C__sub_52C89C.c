/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052C89C
 * Mangled: sub_52C89C
 * Demangled: sub_52C89C
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x000000000052C8FC  sub_52C8FC
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053BE7C  sub_53BE7C
 *   0x000000000054BE60  sub_54BE60
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x000000000052C89C string=0x000000000052C8A0 "?"
 *   insn=0x000000000052C8B0 string=0x000000000052C8B4 "`\n"
 *   insn=0x000000000052C8B4 string=0x000000000052C8B8 "@"
 *   insn=0x000000000052C8C0 string=0x000000000052C8C4 "`"
 *   insn=0x000000000052C8C4 string=0x000000000052C8C8 "m="
 *   insn=0x000000000052C8C8 string=0x000000000052C8CC "`"
 *   insn=0x000000000052C8D4 string=0x000000000052C8D8 "b}"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52C89C(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = a2 != 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = off_6B6E20;
  *(_QWORD *)(a1 + 32) = sub_53BE7C();
  return sub_54BE60(a1, 0);
}

