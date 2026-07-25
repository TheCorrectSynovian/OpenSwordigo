/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056AEBC
 * Mangled: sub_56AEBC
 * Demangled: sub_56AEBC
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x0000000000201760  .memcpy
 *   0x0000000000565330  sub_565330
 *   0x000000000056554C  sub_56554C
 *
 * Referenced strings: 13
 *   insn=0x000000000056AECC string=0x000000000056AED0 " "
 *   insn=0x000000000056AEE4 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x000000000056AEF0 string=0x000000000056AEF4 "s"
 *   insn=0x000000000056AEF4 string=0x000000000056AEF8 " "
 *   insn=0x000000000056AEFC string=0x000000000056AF00 ""
 *   insn=0x000000000056AF00 string=0x000000000056AF04 "`"
 *   insn=0x000000000056AF0C string=0x000000000056AF88 "`f"
 *   insn=0x000000000056AF14 string=0x000000000056AF18 "t"
 *   insn=0x000000000056AF20 string=0x000000000056AF24 "!"
 *   insn=0x000000000056AF3C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000056AFA0 string=0x000000000056AFA4 "a"
 *   insn=0x000000000056AFE0 string=0x000000000056AFE8 "Y"
 *   insn=0x000000000056AFE0 string=0x000000000059F980 "basic_string::_S_create"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_56AEBC(_BYTE *a1, _BYTE *a2)
{
  size_t v3; // x19
  unsigned __int64 v4; // x20
  __int64 v5; // x22
  void *v6; // x3
  __int64 v8; // x0

  if ( a1 == a2 )
    return &byte_6FD2F8;
  if ( !a1 && a2 )
    sub_565330("basic_string::_S_construct null not valid");
  v3 = a2 - a1;
  if ( (unsigned __int64)(a2 - a1) > 0x3FFFFFFFFFFFFFF9LL )
    sub_56554C("basic_string::_S_create");
  if ( v3 + 57 > 0x1000 && v3 )
  {
    v4 = v3 + 4096 - (((_WORD)v3 + 57) & 0xFFF);
    if ( v4 > 0x3FFFFFFFFFFFFFF9LL )
      v4 = 0x3FFFFFFFFFFFFFF9LL;
    v5 = operator new(v4 + 25);
    v6 = (void *)(v5 + 24);
    *(_QWORD *)(v5 + 8) = v4;
    *(_DWORD *)(v5 + 16) = 0;
  }
  else
  {
    v8 = operator new(v3 + 25);
    *(_QWORD *)(v8 + 8) = v3;
    *(_DWORD *)(v8 + 16) = 0;
    v5 = v8;
    v6 = (void *)(v8 + 24);
    if ( v3 == 1 )
    {
      *(_BYTE *)(v8 + 24) = *a1;
      goto LABEL_12;
    }
  }
  v6 = memcpy(v6, a1, v3);
LABEL_12:
  if ( (__int64 *)v5 != &qword_6FD2E0 )
  {
    *(_QWORD *)v5 = v3;
    *(_BYTE *)(v5 + v3 + 24) = 0;
  }
  return (char *)v6;
}

