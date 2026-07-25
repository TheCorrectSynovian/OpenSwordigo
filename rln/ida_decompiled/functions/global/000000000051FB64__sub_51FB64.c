/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051FB64
 * Mangled: sub_51FB64
 * Demangled: sub_51FB64
 *
 * Callers: 1
 *   0x000000000051FB00  sub_51FB00
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000051FBC4  sub_51FBC4
 *   0x000000000053B7BC  nullsub_2
 *   0x0000000000570744  sub_570744
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x000000000051FB70 string=0x000000000051FB74 "!@-"
 *   insn=0x000000000051FB80 string=0x000000000051FB84 "`b@9"
 *   insn=0x000000000051FB88 string=0x000000000051FB8C "`"
 *   insn=0x000000000051FB8C string=0x000000000051FB90 "@"
 *   insn=0x000000000051FB94 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000051FB98 string=0x000000000051FB9C "o"
 *   insn=0x000000000051FBAC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000051FBBC string=0x000000000051FBC0 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_51FB64(_QWORD *a1)
{
  void *v2; // x0

  *a1 = off_6D9B50;
  sub_570744(a1 + 2);
  if ( *((_BYTE *)a1 + 24) )
  {
    v2 = (void *)a1[6];
    if ( v2 )
      operator delete[](v2);
  }
  nullsub_2(a1);
  operator delete(a1);
}

