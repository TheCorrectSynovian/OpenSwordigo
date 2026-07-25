/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056F43C
 * Mangled: sub_56F43C
 * Demangled: sub_56F43C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000203AC0  .wmemcpy
 *   0x000000000056C5B8  sub_56C5B8
 *
 * Referenced strings: 6
 *   insn=0x000000000056F454 string=0x000000000056F458 "3"
 *   insn=0x000000000056F454 string=0x000000000056F4C4 "v"
 *   insn=0x000000000056F45C string=0x000000000056F460 "u"
 *   insn=0x000000000056F468 string=0x000000000056F46C "S"
 *   insn=0x000000000056F48C string=0x000000000056F490 "`"
 *   insn=0x000000000056F498 string=0x000000000056F49C "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_56F43C(const wchar_t *a1, const wchar_t *a2)
{
  signed __int64 v2; // x19
  unsigned __int64 v4; // x21
  __int64 v5; // x0
  __int64 v6; // x23
  __int64 v7; // x22

  if ( a1 == a2 )
    return &unk_6FD318;
  v2 = (char *)a2 - (char *)a1;
  v4 = a2 - a1;
  v5 = sub_56C5B8(v4, 0);
  v6 = v5;
  v7 = v5 + 24;
  if ( v4 == 1 )
    *(_DWORD *)(v5 + 24) = *a1;
  else
    wmemcpy((wchar_t *)(v5 + 24), a1, v4);
  if ( (__int64 *)v6 != &qword_6FD300 )
  {
    *(_DWORD *)(v6 + 16) = 0;
    *(_QWORD *)v6 = v4;
    *(_DWORD *)(v6 + v2 + 24) = 0;
  }
  return (void *)v7;
}

