/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055EFBC
 * Mangled: sub_55EFBC
 * Demangled: sub_55EFBC
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4F60  operator delete[](void *)
 *
 * Referenced strings: 5
 *   insn=0x000000000055EFD0 string=0x000000000055EFD4 "`N@"
 *   insn=0x000000000055EFD0 string=0x000000000055EFE8 "`j@"
 *   insn=0x000000000055EFD4 string=0x000000000055EFD8 "@"
 *   insn=0x000000000055EFDC string=0x00000000001F4F60 "P'"
 *   insn=0x000000000055EFE8 string=0x000000000055EFEC "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_55EFBC(__int64 a1)
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

