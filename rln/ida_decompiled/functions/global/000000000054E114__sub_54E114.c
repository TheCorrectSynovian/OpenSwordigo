/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054E114
 * Mangled: sub_54E114
 * Demangled: sub_54E114
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053EB8C  sub_53EB8C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x000000000054E114 string=0x000000000054E118 "?"
 *   insn=0x000000000054E118 string=0x000000000054E11C "c"
 *   insn=0x000000000054E128 string=0x000000000054E12C "c"
 *   insn=0x000000000054E16C string=0x000000000054E170 "_"
 *   insn=0x000000000054E184 string=0x000000000054E188 "c"
 *   insn=0x000000000054E18C string=0x000000000054E190 "c"
 *   insn=0x000000000054E19C string=0x000000000054E1A0 "{"
 *   insn=0x000000000054E1D8 string=0x000000000054E1DC "c"
 *   insn=0x000000000054E1E0 string=0x000000000054E1E4 "c"
 *   insn=0x000000000054E1EC string=0x000000000054E1F0 "g"
 *   insn=0x000000000054E204 string=0x000000000054E208 "m"
 *   insn=0x000000000054E21C string=0x000000000054E220 "!@"
 *   insn=0x000000000054E220 string=0x000000000054E224 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall sub_54E114(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = a2 != 0;
  *(_QWORD *)a1 = &off_6DB130;
  *(_QWORD *)(a1 + 16) = 0;
  return sub_53EB8C(a1);
}

