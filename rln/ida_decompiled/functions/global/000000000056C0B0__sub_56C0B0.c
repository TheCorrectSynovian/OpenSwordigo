/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056C0B0
 * Mangled: sub_56C0B0
 * Demangled: sub_56C0B0
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000200670  .wmemchr
 *   0x0000000000202DD0  .wcslen
 *
 * Referenced strings: 8
 *   insn=0x000000000056C0D0 string=0x000000000056C0D4 "?["
 *   insn=0x000000000056C0E8 string=0x000000000056C104 "s"
 *   insn=0x000000000056C104 string=0x000000000056C108 "_"
 *   insn=0x000000000056C108 string=0x000000000056C10C "S"
 *   insn=0x000000000056C10C string=0x000000000056C110 "t"
 *   insn=0x000000000056C11C string=0x000000000056C120 "`"
 *   insn=0x000000000056C134 string=0x000000000056C138 "NQ"
 *   insn=0x000000000056C13C string=0x000000000056C118 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_56C0B0(__int64 *a1, wchar_t *s, unsigned __int64 a3)
{
  size_t v5; // x23
  __int64 v6; // x0
  __int64 v7; // x19
  unsigned __int64 v9; // x19
  __int64 v10; // x20
  wchar_t v11; // w1

  v5 = wcslen(s);
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 - 24);
  if ( !v7 )
    return -1;
  v9 = v7 - 1;
  if ( a3 <= v9 )
    v9 = a3;
  v10 = 4 * v9;
  while ( 1 )
  {
    v11 = *(_DWORD *)(v6 + v10);
    v10 -= 4;
    if ( !wmemchr(s, v11, v5) )
      break;
    if ( --v9 == -1 )
      return -1;
    v6 = *a1;
  }
  return v9;
}

