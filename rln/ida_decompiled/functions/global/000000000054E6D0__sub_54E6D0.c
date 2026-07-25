/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054E6D0
 * Mangled: sub_54E6D0
 * Demangled: sub_54E6D0
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053F19C  sub_53F19C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x000000000054E6D0 string=0x000000000054E6D4 "?"
 *   insn=0x000000000054E6E8 string=0x000000000054E6EC "b"
 *   insn=0x000000000054E6F0 string=0x000000000054E6F4 "B"
 *   insn=0x000000000054E714 string=0x000000000054E718 ")"
 *   insn=0x000000000054E71C string=0x000000000054E720 "i"
 *   insn=0x000000000054E724 string=0x000000000054E728 "_"
 *   insn=0x000000000054E738 string=0x000000000054E73C "b"
 *   insn=0x000000000054E740 string=0x000000000054E744 "B"
 *   insn=0x000000000054E770 string=0x000000000054E774 "T"
 *   insn=0x000000000054E778 string=0x000000000054E77C "_"
 *   insn=0x000000000054E78C string=0x000000000054E790 "b"
 *   insn=0x000000000054E794 string=0x000000000054E798 "B"
 *   insn=0x000000000054E7A0 string=0x000000000054E7A4 "~"
 *   insn=0x000000000054E7C0 string=0x000000000054E7C4 "@"
 *   insn=0x000000000054E7D0 string=0x000000000054E7D4 "!@"
 *   insn=0x000000000054E7D4 string=0x000000000054E7D8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54E6D0(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = a2 != 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = &off_6DB0E0;
  return sub_53F19C(a1);
}

