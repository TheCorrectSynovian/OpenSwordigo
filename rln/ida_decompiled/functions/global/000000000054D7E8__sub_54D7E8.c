/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D7E8
 * Mangled: sub_54D7E8
 * Demangled: sub_54D7E8
 *
 * Callers: 2
 *   0x000000000054D70C  sub_54D70C
 *   0x000000000054D860  sub_54D860
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053BE7C  sub_53BE7C
 *   0x000000000054D860  sub_54D860
 *   0x0000000000570744  sub_570744
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x000000000054D7F8 string=0x000000000054D7FC "@"
 *   insn=0x000000000054D7FC string=0x000000000054D804 "`"
 *   insn=0x000000000054D810 string=0x000000000054D814 "t"
 *   insn=0x000000000054D810 string=0x000000000054D820 "`\n@"
 *   insn=0x000000000054D81C string=0x00000000001F4F60 "P'"
 *   insn=0x000000000054D824 string=0x000000000054D834 "`b"
 *   insn=0x000000000054D828 string=0x000000000054D82C "!"
 *   insn=0x000000000054D82C string=0x000000000054D830 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54D7E8(_QWORD *a1)
{
  char *v2; // x20
  __int64 v3; // x0

  v2 = (char *)a1[4];
  *a1 = off_6B79E0;
  if ( v2 != sub_53BE7C() && v2 )
    operator delete[](v2);
  v3 = a1[2];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  sub_570744(a1 + 3);
  nullsub_2();
}

