/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000562E74
 * Mangled: sub_562E74
 * Demangled: sub_562E74
 *
 * Callers: 1
 *   0x0000000000562F10  sub_562F10
 *
 * Callees: 1
 *   0x00000000001F4F60  operator delete[](void *)
 *
 * Referenced strings: 10
 *   insn=0x0000000000562E84 string=0x0000000000562E88 "`"
 *   insn=0x0000000000562E94 string=0x0000000000562E98 "`N@"
 *   insn=0x0000000000562E94 string=0x0000000000562EAC "`j@"
 *   insn=0x0000000000562E98 string=0x0000000000562E9C "@"
 *   insn=0x0000000000562E9C string=0x0000000000562EA0 "0H"
 *   insn=0x0000000000562EA0 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000562EAC string=0x0000000000562EB0 "@"
 *   insn=0x0000000000562EB0 string=0x0000000000562EB4 "+H"
 *   insn=0x0000000000562EF8 string=0x0000000000562EFC "@@H"
 *   insn=0x0000000000562EFC string=0x0000000000562F00 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_562E74(__int64 *a1)
{
  __int64 v1; // x19
  int v3; // w0
  void *v4; // x0
  void *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 result; // x0

  v1 = *a1;
  v3 = *(unsigned __int8 *)(*a1 + 168);
  *(_DWORD *)(v1 + 120) = 0;
  *(_BYTE *)(v1 + 192) = 0;
  if ( v3 )
  {
    v4 = *(void **)(v1 + 152);
    if ( v4 )
      operator delete[](v4);
    *(_QWORD *)(v1 + 152) = 0;
    *(_BYTE *)(v1 + 168) = 0;
  }
  v5 = *(void **)(v1 + 208);
  if ( v5 )
    operator delete[](v5);
  v6 = *a1;
  *(_QWORD *)(v1 + 208) = 0;
  *(_QWORD *)(v1 + 216) = 0;
  *(_QWORD *)(v1 + 224) = 0;
  *(_QWORD *)(v1 + 232) = 0;
  *(_QWORD *)(v6 + 132) = *(_QWORD *)(v6 + 124);
  v7 = *(_QWORD *)(v6 + 152);
  v8 = *a1;
  *(_BYTE *)(v6 + 169) = 0;
  *(_BYTE *)(v6 + 170) = 0;
  *(_QWORD *)(v6 + 8) = v7;
  *(_QWORD *)(v6 + 16) = v7;
  *(_QWORD *)(v6 + 24) = v7;
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 32) = 0;
  *(_QWORD *)(v6 + 48) = 0;
  result = *(_QWORD *)(v8 + 132);
  *(_QWORD *)(v8 + 140) = result;
  return result;
}

