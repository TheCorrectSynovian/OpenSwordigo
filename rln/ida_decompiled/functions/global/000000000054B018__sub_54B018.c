/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B018
 * Mangled: sub_54B018
 * Demangled: sub_54B018
 *
 * Callers: 1
 *   0x000000000055DDF8  sub_55DDF8
 *
 * Callees: 1
 *   0x0000000000203AC0  .wmemcpy
 *
 * Referenced strings: 10
 *   insn=0x000000000054B018 string=0x000000000054B01C "_"
 *   insn=0x000000000054B03C string=0x000000000054B040 ""
 *   insn=0x000000000054B054 string=0x000000000054B058 "c"
 *   insn=0x000000000054B058 string=0x000000000054B05C "c"
 *   insn=0x000000000054B05C string=0x000000000054B060 "_"
 *   insn=0x000000000054B060 string=0x000000000054B064 "S"
 *   insn=0x000000000054B078 string=0x000000000054B07C "B4@"
 *   insn=0x000000000054B07C string=0x000000000054B080 "@"
 *   insn=0x000000000054B094 string=0x000000000054B098 "\n"
 *   insn=0x000000000054B0A0 string=0x000000000054B0A4 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54B018(_QWORD *a1, wchar_t *s2, __int64 a3)
{
  __int64 i; // x20
  wchar_t *v7; // x4
  __int64 v8; // x3
  __int64 v9; // x19
  size_t v10; // x2
  __int64 v11; // x19

  for ( i = 0; a3 > i; ++i )
  {
    v7 = (wchar_t *)a1[5];
    v8 = (__int64)(a1[6] - (_QWORD)v7) >> 2;
    if ( a3 - i > v8 )
      v9 = (__int64)(a1[6] - (_QWORD)v7) >> 2;
    else
      v9 = a3 - i;
    if ( v8 )
    {
      v10 = v9;
      i += v9;
      v11 = 4 * v9;
      wmemcpy(v7, s2, v10);
      a1[5] += v11;
      if ( a3 <= i )
        return i;
      s2 = (wchar_t *)((char *)s2 + v11);
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD *, _QWORD))(*a1 + 104LL))(a1, (unsigned int)*s2++) == -1 )
      break;
  }
  return i;
}

