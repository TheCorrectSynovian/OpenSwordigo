/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056E200
 * Mangled: sub_56E200
 * Demangled: sub_56E200
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F6A30  .wmemset
 *   0x000000000056C5B8  sub_56C5B8
 *
 * Referenced strings: 3
 *   insn=0x000000000056E210 string=0x000000000056E214 "t"
 *   insn=0x000000000056E25C string=0x000000000056E260 "`"
 *   insn=0x000000000056E25C string=0x00000000001F6A30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_56E200(unsigned __int64 a1, wchar_t a2)
{
  __int64 v2; // x20
  __int64 v6; // x0
  __int64 v7; // x22

  if ( !a1 )
    return &unk_6FD318;
  v6 = sub_56C5B8(a1, 0);
  v7 = v6;
  v2 = v6 + 24;
  if ( a1 == 1 )
    *(_DWORD *)(v6 + 24) = a2;
  else
    wmemset((wchar_t *)(v6 + 24), a2, a1);
  if ( (__int64 *)v7 != &qword_6FD300 )
  {
    *(_DWORD *)(v7 + 16) = 0;
    *(_QWORD *)v7 = a1;
    *(_DWORD *)(v7 + 4 * a1 + 24) = 0;
  }
  return (void *)v2;
}

