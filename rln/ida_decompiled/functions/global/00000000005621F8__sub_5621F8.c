/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005621F8
 * Mangled: sub_5621F8
 * Demangled: sub_5621F8
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4F60  operator delete[](void *)
 *
 * Referenced strings: 7
 *   insn=0x000000000056220C string=0x0000000000562210 "`N@"
 *   insn=0x000000000056220C string=0x0000000000562224 "`j@"
 *   insn=0x0000000000562210 string=0x0000000000562214 "@"
 *   insn=0x0000000000562214 string=0x0000000000562218 "RK"
 *   insn=0x0000000000562218 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000562224 string=0x0000000000562228 "@"
 *   insn=0x0000000000562228 string=0x000000000056222C "MK"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_5621F8(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0

  if ( *(_BYTE *)(a1 + 168) )
  {
    v2 = *(void **)(a1 + 152);
    if ( v2 )
      operator delete[](v2);
    *(_QWORD *)(a1 + 152) = 0;
    *(_BYTE *)(a1 + 168) = 0;
  }
  v3 = *(void **)(a1 + 208);
  if ( v3 )
    operator delete[](v3);
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
}

