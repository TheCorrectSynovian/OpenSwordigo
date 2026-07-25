/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054AF4C
 * Mangled: sub_54AF4C
 * Demangled: sub_54AF4C
 *
 * Callers: 1
 *   0x000000000055E85C  sub_55E85C
 *
 * Callees: 1
 *   0x0000000000203AC0  .wmemcpy
 *
 * Referenced strings: 11
 *   insn=0x000000000054AF4C string=0x000000000054AF50 "_"
 *   insn=0x000000000054AF70 string=0x000000000054AF74 "-"
 *   insn=0x000000000054AF88 string=0x000000000054AF8C "c"
 *   insn=0x000000000054AF8C string=0x000000000054AF90 "c"
 *   insn=0x000000000054AF90 string=0x000000000054AF94 "_"
 *   insn=0x000000000054AF94 string=0x000000000054AF98 "S"
 *   insn=0x000000000054AFA4 string=0x000000000054AFA8 "!(@"
 *   insn=0x000000000054AFA8 string=0x000000000054AFAC " "
 *   insn=0x000000000054AFC8 string=0x000000000054AFCC "l"
 *   insn=0x000000000054AFCC string=0x000000000054AFD0 "\n"
 *   insn=0x000000000054AFD8 string=0x000000000054AFDC "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54AF4C(_QWORD *a1, wchar_t *s1, __int64 a3)
{
  __int64 i; // x20
  const wchar_t *v7; // x4
  __int64 v8; // x3
  __int64 v9; // x19
  wchar_t v10; // w0
  size_t v11; // x2
  __int64 v12; // x19

  for ( i = 0; a3 > i; ++s1 )
  {
    v7 = (const wchar_t *)a1[2];
    v8 = (__int64)(a1[3] - (_QWORD)v7) >> 2;
    if ( a3 - i > v8 )
      v9 = (__int64)(a1[3] - (_QWORD)v7) >> 2;
    else
      v9 = a3 - i;
    if ( v8 )
    {
      v11 = v9;
      i += v9;
      v12 = 4 * v9;
      wmemcpy(s1, v7, v11);
      a1[2] += v12;
      if ( a3 <= i )
        return i;
      s1 = (wchar_t *)((char *)s1 + v12);
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 80LL))(a1);
    if ( v10 == -1 )
      break;
    ++i;
    *s1 = v10;
  }
  return i;
}

