/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000567958
 * Mangled: sub_567958
 * Demangled: sub_567958
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FBC40  .memset
 *   0x000000000056554C  sub_56554C
 *
 * Referenced strings: 12
 *   insn=0x0000000000567964 string=0x0000000000567968 "6"
 *   insn=0x0000000000567998 string=0x000000000056799C "H"
 *   insn=0x000000000056799C string=0x00000000005679A0 "b"
 *   insn=0x00000000005679A0 string=0x00000000005679A4 "_"
 *   insn=0x00000000005679A8 string=0x00000000005679AC "B,@"
 *   insn=0x00000000005679A8 string=0x0000000000567A1C "`f"
 *   insn=0x00000000005679AC string=0x00000000005679B0 "`"
 *   insn=0x00000000005679B8 string=0x00000000005679BC "!"
 *   insn=0x00000000005679C4 string=0x00000000005679C8 "4"
 *   insn=0x00000000005679D4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000005679F4 string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000567A44 string=0x000000000059F980 "basic_string::_S_create"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_567958(size_t a1, unsigned __int8 a2)
{
  int v2; // w22
  void *v3; // x3
  __int64 v6; // x2
  __int64 v7; // x20
  __int64 v8; // x21
  __int64 v9; // x0

  v2 = a2;
  if ( !a1 )
    return &byte_6FD2F8;
  if ( a1 > 0x3FFFFFFFFFFFFFF9LL )
    sub_56554C("basic_string::_S_create");
  if ( a1 + 57 > 0x1000 )
  {
    v6 = ((_WORD)a1 + 57) & 0xFFF;
    v7 = 0x3FFFFFFFFFFFFFF9LL;
    if ( a1 + 4096 - v6 <= 0x3FFFFFFFFFFFFFF9LL )
      v7 = a1 + 4096 - v6;
    v8 = operator new(v7 + 25);
    v3 = (void *)(v8 + 24);
    *(_QWORD *)(v8 + 8) = v7;
    *(_DWORD *)(v8 + 16) = 0;
    goto LABEL_9;
  }
  v9 = operator new(a1 + 25);
  *(_QWORD *)(v9 + 8) = a1;
  *(_DWORD *)(v9 + 16) = 0;
  v8 = v9;
  v3 = (void *)(v9 + 24);
  if ( a1 != 1 )
  {
LABEL_9:
    v3 = memset(v3, v2, a1);
    goto LABEL_10;
  }
  *(_BYTE *)(v9 + 24) = v2;
LABEL_10:
  if ( (__int64 *)v8 != &qword_6FD2E0 )
  {
    *(_QWORD *)v8 = a1;
    *(_BYTE *)(v8 + a1 + 24) = 0;
  }
  return (char *)v3;
}

