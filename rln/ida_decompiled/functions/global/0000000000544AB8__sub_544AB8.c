/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000544AB8
 * Mangled: sub_544AB8
 * Demangled: sub_544AB8
 *
 * Callers: 4
 *   0x00000000005459D8  sub_5459D8
 *   0x0000000000546758  sub_546758
 *   0x0000000000547030  sub_547030
 *   0x0000000000547A78  sub_547A78
 *
 * Callees: 2
 *   0x0000000000201760  .memcpy
 *   0x0000000000568C20  sub_568C20
 *
 * Referenced strings: 5
 *   insn=0x0000000000544AC0 string=0x0000000000544AC4 "4"
 *   insn=0x0000000000544AD4 string=0x0000000000544AD8 "R"
 *   insn=0x0000000000544B0C string=0x0000000000544B3C "`"
 *   insn=0x0000000000544B24 string=0x0000000000544B28 "`b"
 *   insn=0x0000000000544B40 string=0x0000000000544B44 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_544AB8(_BYTE *a1, __int64 a2, __int64 a3)
{
  size_t v3; // x20
  __int64 v5; // x0
  __int64 v6; // x19
  void *v7; // x3

  v3 = a2 - (_QWORD)a1;
  v5 = sub_568C20(a2 - (_QWORD)a1, 0, a3);
  v6 = v5;
  v7 = (void *)(v5 + 24);
  if ( v3 == 1 )
  {
    *(_BYTE *)(v5 + 24) = *a1;
    if ( (__int64 *)v5 == &qword_6FD2E0 )
      return v7;
  }
  else
  {
    v7 = memcpy((void *)(v5 + 24), a1, v3);
    if ( (__int64 *)v6 == &qword_6FD2E0 )
      return v7;
  }
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)v6 = v3;
  *(_BYTE *)(v6 + v3 + 24) = 0;
  return v7;
}

