/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053EF0C
 * Mangled: sub_53EF0C
 * Demangled: sub_53EF0C
 *
 * Callers: 4
 *   0x000000000053EE54  sub_53EE54
 *   0x000000000054CEBC  sub_54CEBC
 *   0x000000000054D344  sub_54D344
 *   0x000000000054E430  sub_54E430
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053EFC4  sub_53EFC4
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x000000000053EF0C string=0x000000000053EF10 "!"
 *   insn=0x000000000053EF1C string=0x000000000053EF20 "!"
 *   insn=0x000000000053EF24 string=0x000000000053EF28 "!@"
 *   insn=0x000000000053EF28 string=0x000000000053EF2C "a"
 *   insn=0x000000000053EF34 string=0x000000000053EF38 "!"
 *   insn=0x000000000053EF38 string=0x000000000053EF3C " "
 *   insn=0x000000000053EF5C string=0x000000000053EF60 "Y\n"
 *   insn=0x000000000053EF64 string=0x000000000053EF68 "!"
 *   insn=0x000000000053EF74 string=0x000000000053EF78 "!"
 *   insn=0x000000000053EF7C string=0x000000000053EF80 "!@"
 *   insn=0x000000000053EF80 string=0x000000000053EF84 "a"
 *   insn=0x000000000053EF8C string=0x000000000053EF90 "!"
 *   insn=0x000000000053EF90 string=0x000000000053EF94 " "
 *   insn=0x000000000053EF98 string=0x000000000053EF9C ""
 *   insn=0x000000000053EFAC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000053EFBC string=0x000000000053EFC0 "A\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_53EF0C(_QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[2];
  *a1 = &off_6DB1A0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  nullsub_2();
}

