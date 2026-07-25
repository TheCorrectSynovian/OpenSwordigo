/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054DED8
 * Mangled: sub_54DED8
 * Demangled: sub_54DED8
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053ECF0  sub_53ECF0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x000000000054DED8 string=0x000000000054DEDC "?"
 *   insn=0x000000000054DEDC string=0x000000000054DEE0 "c"
 *   insn=0x000000000054DEEC string=0x000000000054DEF0 "c"
 *   insn=0x000000000054DF08 string=0x000000000054DF0C "y"
 *   insn=0x000000000054DF20 string=0x000000000054DF24 "&"
 *   insn=0x000000000054DF28 string=0x000000000054DF2C "f"
 *   insn=0x000000000054DF30 string=0x000000000054DF34 "_"
 *   insn=0x000000000054DF48 string=0x000000000054DF4C "c"
 *   insn=0x000000000054DF50 string=0x000000000054DF54 "c"
 *   insn=0x000000000054DF60 string=0x000000000054DF64 "c"
 *   insn=0x000000000054DF80 string=0x000000000054DF84 "P"
 *   insn=0x000000000054DF9C string=0x000000000054DFA0 "c"
 *   insn=0x000000000054DFA4 string=0x000000000054DFA8 "c"
 *   insn=0x000000000054DFB0 string=0x000000000054DFB4 "O"
 *   insn=0x000000000054DFD0 string=0x000000000054DFD4 "<"
 *   insn=0x000000000054DFE0 string=0x000000000054DFE4 "!@"
 *   insn=0x000000000054DFE4 string=0x000000000054DFE8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall sub_54DED8(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = a2 != 0;
  *(_QWORD *)a1 = &off_6DB1A0;
  *(_QWORD *)(a1 + 16) = 0;
  return sub_53ECF0(a1);
}

