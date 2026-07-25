/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053EE54
 * Mangled: sub_53EE54
 * Demangled: sub_53EE54
 *
 * Callers: 3
 *   0x000000000054CECC  sub_54CECC
 *   0x000000000054D374  sub_54D374
 *   0x000000000054E430  sub_54E430
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053EF0C  sub_53EF0C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x000000000053EE54 string=0x000000000053EE58 "A"
 *   insn=0x000000000053EE64 string=0x000000000053EE68 "!"
 *   insn=0x000000000053EE6C string=0x000000000053EE70 "!@"
 *   insn=0x000000000053EE70 string=0x000000000053EE74 "a"
 *   insn=0x000000000053EE7C string=0x000000000053EE80 "!"
 *   insn=0x000000000053EE80 string=0x000000000053EE84 " "
 *   insn=0x000000000053EE90 string=0x000000000053EE94 "J"
 *   insn=0x000000000053EE9C string=0x000000000053EEA0 "G"
 *   insn=0x000000000053EEAC string=0x000000000053EEB0 "A"
 *   insn=0x000000000053EEBC string=0x000000000053EEC0 "!"
 *   insn=0x000000000053EEC4 string=0x000000000053EEC8 "!@"
 *   insn=0x000000000053EEC8 string=0x000000000053EECC "a"
 *   insn=0x000000000053EED4 string=0x000000000053EED8 "!"
 *   insn=0x000000000053EED8 string=0x000000000053EEDC " "
 *   insn=0x000000000053EEE0 string=0x000000000053EEE4 "6"
 *   insn=0x000000000053EEF4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000053EEFC string=0x000000000053EF00 "/"
 *   insn=0x000000000053EF04 string=0x000000000053EF08 "o\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_53EE54(_QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[2];
  *a1 = &off_6DB130;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  nullsub_2();
}

