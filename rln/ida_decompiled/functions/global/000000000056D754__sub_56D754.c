/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056D754
 * Mangled: sub_56D754
 * Demangled: sub_56D754
 *
 * Callers: 1
 *   0x0000000000552738  sub_552738
 *
 * Callees: 2
 *   0x00000000001F6A30  .wmemset
 *   0x000000000056C5B8  sub_56C5B8
 *
 * Referenced strings: 3
 *   insn=0x000000000056D770 string=0x000000000056D774 "!"
 *   insn=0x000000000056D7C4 string=0x00000000001F6A30 "0'"
 *   insn=0x000000000056D7D0 string=0x000000000056D7D4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_56D754(__int64 *result, unsigned __int64 a2, wchar_t a3)
{
  __int64 *v4; // x21
  void *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x22

  v4 = result;
  if ( a2 )
  {
    v7 = sub_56C5B8(a2, 0);
    v8 = v7;
    v6 = (void *)(v7 + 24);
    if ( a2 == 1 )
      *(_DWORD *)(v7 + 24) = a3;
    else
      wmemset((wchar_t *)(v7 + 24), a3, a2);
    result = &qword_6FD300;
    if ( (__int64 *)v8 != &qword_6FD300 )
    {
      result = (__int64 *)(v8 + 4 * a2);
      *(_DWORD *)(v8 + 16) = 0;
      *(_QWORD *)v8 = a2;
      *((_DWORD *)result + 6) = 0;
    }
  }
  else
  {
    v6 = &unk_6FD318;
  }
  *v4 = (__int64)v6;
  return result;
}

