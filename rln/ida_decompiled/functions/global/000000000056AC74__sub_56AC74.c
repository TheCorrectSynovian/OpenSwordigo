/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056AC74
 * Mangled: sub_56AC74
 * Demangled: sub_56AC74
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x0000000000201760  .memcpy
 *   0x000000000056554C  sub_56554C
 *
 * Referenced strings: 16
 *   insn=0x000000000056AC84 string=0x000000000056AC88 "`"
 *   insn=0x000000000056AC90 string=0x000000000056AC94 "3"
 *   insn=0x000000000056AC94 string=0x000000000056AC98 " "
 *   insn=0x000000000056AC9C string=0x000000000056ACA0 ""
 *   insn=0x000000000056ACA0 string=0x000000000056ACA4 "a"
 *   insn=0x000000000056ACA4 string=0x000000000056ACA8 "?"
 *   insn=0x000000000056ACAC string=0x000000000056AD28 "`f"
 *   insn=0x000000000056ACB0 string=0x000000000056ACB4 "!,@"
 *   insn=0x000000000056ACB4 string=0x000000000056ACB8 "`"
 *   insn=0x000000000056ACC0 string=0x000000000056ACC4 """
 *   insn=0x000000000056ACCC string=0x000000000056ACD0 "5"
 *   insn=0x000000000056ACD8 string=0x000000000056ACDC "A*"
 *   insn=0x000000000056ACDC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000056AD28 string=0x000000000056AD2C "-*"
 *   insn=0x000000000056AD40 string=0x000000000056AD44 "a"
 *   insn=0x000000000056AD80 string=0x000000000059F980 "basic_string::_S_create"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_56AC74(_BYTE *a1, _BYTE *a2)
{
  size_t v3; // x19
  __int64 v4; // x1
  __int64 v5; // x21
  __int64 v6; // x22
  void *v7; // x3
  __int64 v9; // x0

  if ( a1 == a2 )
    return &byte_6FD2F8;
  v3 = a2 - a1;
  if ( (unsigned __int64)(a2 - a1) > 0x3FFFFFFFFFFFFFF9LL )
    sub_56554C("basic_string::_S_create");
  if ( v3 + 57 > 0x1000 && v3 )
  {
    v4 = ((_WORD)v3 + 57) & 0xFFF;
    v5 = 0x3FFFFFFFFFFFFFF9LL;
    if ( v3 + 4096 - v4 <= 0x3FFFFFFFFFFFFFF9LL )
      v5 = v3 + 4096 - v4;
    v6 = operator new(v5 + 25);
    v7 = (void *)(v6 + 24);
    *(_QWORD *)(v6 + 8) = v5;
    *(_DWORD *)(v6 + 16) = 0;
  }
  else
  {
    v9 = operator new(v3 + 25);
    *(_QWORD *)(v9 + 8) = v3;
    *(_DWORD *)(v9 + 16) = 0;
    v6 = v9;
    v7 = (void *)(v9 + 24);
    if ( v3 == 1 )
    {
      *(_BYTE *)(v9 + 24) = *a1;
      goto LABEL_9;
    }
  }
  v7 = memcpy(v7, a1, v3);
LABEL_9:
  if ( (__int64 *)v6 != &qword_6FD2E0 )
  {
    *(_QWORD *)v6 = v3;
    *(_BYTE *)(v6 + v3 + 24) = 0;
  }
  return (char *)v7;
}

