/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056F5CC
 * Mangled: sub_56F5CC
 * Demangled: sub_56F5CC
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x0000000000203AC0  .wmemcpy
 *   0x0000000000565330  sub_565330
 *   0x000000000056C5B8  sub_56C5B8
 *
 * Referenced strings: 10
 *   insn=0x000000000056F5E0 string=0x000000000056F5E4 "@"
 *   insn=0x000000000056F5E4 string=0x000000000056F66C "u"
 *   insn=0x000000000056F5F0 string=0x000000000056F604 "s"
 *   insn=0x000000000056F5F4 string=0x000000000056F5F8 "`"
 *   insn=0x000000000056F5F8 string=0x000000000056F600 "L"
 *   insn=0x000000000056F5F8 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x000000000056F608 string=0x000000000056F60C "w"
 *   insn=0x000000000056F630 string=0x000000000056F634 "#Q"
 *   insn=0x000000000056F634 string=0x000000000056F638 "t"
 *   insn=0x000000000056F640 string=0x000000000056F644 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_56F5CC(const wchar_t *a1, const wchar_t *a2)
{
  __int64 v3; // x19
  unsigned __int64 v4; // x23
  __int64 v5; // x0
  __int64 v6; // x22
  __int64 v7; // x21

  if ( a1 == a2 )
    return &unk_6FD318;
  if ( !a1 && a2 )
    sub_565330("basic_string::_S_construct null not valid");
  v3 = (char *)a2 - (char *)a1;
  v4 = a2 - a1;
  v5 = sub_56C5B8(v4, 0);
  v6 = v5;
  v7 = v5 + 24;
  if ( v4 == 1 )
    *(_DWORD *)(v5 + 24) = *a1;
  else
    wmemcpy((wchar_t *)(v5 + 24), a1, v3 >> 2);
  if ( (__int64 *)v6 != &qword_6FD300 )
  {
    *(_DWORD *)(v6 + 16) = 0;
    *(_QWORD *)v6 = v4;
    *(_DWORD *)(v6 + v3 + 24) = 0;
  }
  return (void *)v7;
}

