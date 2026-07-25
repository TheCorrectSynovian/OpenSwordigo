/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051F9EC
 * Mangled: sub_51F9EC
 * Demangled: sub_51F9EC
 *
 * Callers: 3
 *   0x0000000000520438  sub_520438
 *   0x0000000000520448  sub_520448
 *   0x0000000000520478  sub_520478
 *
 * Callees: 5
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x000000000051FA44  sub_51FA44
 *   0x000000000053B7BC  nullsub_2
 *   0x0000000000570744  sub_570744
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x000000000051F9F8 string=0x000000000051F9FC "!@-"
 *   insn=0x000000000051FA04 string=0x000000000051FA08 "OC"
 *   insn=0x000000000051FA08 string=0x000000000051FA0C "`b@9"
 *   insn=0x000000000051FA10 string=0x000000000051FA14 "`"
 *   insn=0x000000000051FA14 string=0x000000000051FA18 "@"
 *   insn=0x000000000051FA18 string=0x000000000051FA1C "QU"
 *   insn=0x000000000051FA1C string=0x00000000001F4F60 "P'"
 *   insn=0x000000000051FA28 string=0x000000000051FA2C "do"
 *   insn=0x000000000051FA34 string=0x000000000051FA38 "ao"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_51F9EC(__int64 a1)
{
  void *v2; // x0

  *(_QWORD *)a1 = off_6D9B50;
  sub_570744(a1 + 16);
  if ( *(_BYTE *)(a1 + 24) )
  {
    v2 = *(void **)(a1 + 48);
    if ( v2 )
      operator delete[](v2);
  }
  return nullsub_2(a1);
}

