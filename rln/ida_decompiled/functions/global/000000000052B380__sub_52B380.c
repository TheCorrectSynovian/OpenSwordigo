/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052B380
 * Mangled: sub_52B380
 * Demangled: sub_52B380
 *
 * Callers: 2
 *   0x000000000052B2A4  sub_52B2A4
 *   0x000000000052B3F8  sub_52B3F8
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x000000000052B3F8  sub_52B3F8
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053BE7C  sub_53BE7C
 *   0x0000000000570744  sub_570744
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x000000000052B390 string=0x000000000052B394 "@"
 *   insn=0x000000000052B394 string=0x000000000052B39C "`"
 *   insn=0x000000000052B3A8 string=0x000000000052B3AC "t"
 *   insn=0x000000000052B3A8 string=0x000000000052B3B8 "`\n@"
 *   insn=0x000000000052B3B4 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000052B3BC string=0x000000000052B3CC "`b"
 *   insn=0x000000000052B3C0 string=0x000000000052B3C4 "!"
 *   insn=0x000000000052B3C4 string=0x000000000052B3C8 " "
 *   insn=0x000000000052B3F0 string=0x000000000052B3F4 "4Y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52B380(_QWORD *a1)
{
  void *v2; // x20
  __int64 v3; // x0

  v2 = (void *)a1[4];
  *a1 = off_6B6E20;
  if ( v2 != (void *)sub_53BE7C() && v2 )
    operator delete[](v2);
  v3 = a1[2];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  sub_570744(a1 + 3);
  return nullsub_2(a1);
}

