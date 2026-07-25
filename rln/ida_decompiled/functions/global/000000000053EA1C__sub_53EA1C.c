/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053EA1C
 * Mangled: sub_53EA1C
 * Demangled: sub_53EA1C
 *
 * Callers: 3
 *   0x000000000052AA64  sub_52AA64
 *   0x000000000052AF0C  sub_52AF0C
 *   0x000000000052C0D8  sub_52C0D8
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053EAD4  sub_53EAD4
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x000000000053EA1C string=0x000000000053EA20 "A"
 *   insn=0x000000000053EA2C string=0x000000000053EA30 "!\C"
 *   insn=0x000000000053EA34 string=0x000000000053EA38 "!@"
 *   insn=0x000000000053EA38 string=0x000000000053EA3C "a"
 *   insn=0x000000000053EA44 string=0x000000000053EA48 "!"
 *   insn=0x000000000053EA48 string=0x000000000053EA4C " "
 *   insn=0x000000000053EA58 string=0x000000000053EA5C "X"
 *   insn=0x000000000053EA64 string=0x000000000053EA68 "U"
 *   insn=0x000000000053EA74 string=0x000000000053EA78 "A"
 *   insn=0x000000000053EA84 string=0x000000000053EA88 "!\C"
 *   insn=0x000000000053EA8C string=0x000000000053EA90 "!@"
 *   insn=0x000000000053EA90 string=0x000000000053EA94 "a"
 *   insn=0x000000000053EA9C string=0x000000000053EAA0 "!"
 *   insn=0x000000000053EAA0 string=0x000000000053EAA4 " "
 *   insn=0x000000000053EAA8 string=0x000000000053EAAC "D"
 *   insn=0x000000000053EABC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000053EAC4 string=0x000000000053EAC8 "="
 *   insn=0x000000000053EACC string=0x000000000053EAD0 "}"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_53EA1C(_QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[2];
  *a1 = &off_6DA180;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  nullsub_2();
}

