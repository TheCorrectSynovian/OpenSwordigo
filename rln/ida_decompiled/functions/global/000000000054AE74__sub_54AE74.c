/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054AE74
 * Mangled: sub_54AE74
 * Demangled: sub_54AE74
 *
 * Callers: 1
 *   0x000000000055DC98  sub_55DC98
 *
 * Callees: 1
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 9
 *   insn=0x000000000054AE74 string=0x000000000054AE78 "_"
 *   insn=0x000000000054AEB0 string=0x000000000054AEB4 "B"
 *   insn=0x000000000054AEB4 string=0x000000000054AEB8 "a"
 *   insn=0x000000000054AEC8 string=0x000000000054AECC "B4@"
 *   insn=0x000000000054AECC string=0x000000000054AED0 "@"
 *   insn=0x000000000054AED8 string=0x000000000054AEDC "s"
 *   insn=0x000000000054AEE0 string=0x000000000054AEE4 "M"
 *   insn=0x000000000054AEF8 string=0x000000000054AEFC "B"
 *   insn=0x000000000054AF0C string=0x000000000054AF10 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54AE74(_QWORD *a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 v5; // x19
  unsigned __int8 *v6; // x23
  signed __int64 v7; // x20
  __int64 v8; // x2
  void *v9; // x0
  signed __int64 v10; // x2

  v5 = 0;
  v6 = a2;
  if ( a3 > 0 )
  {
    v7 = a3;
    v8 = a1[6];
    v9 = (void *)a1[5];
    v10 = v8 - (_QWORD)v9;
    if ( v10 )
      goto LABEL_6;
    while ( (*(unsigned int (__fastcall **)(_QWORD *, _QWORD))(*a1 + 104LL))(a1, *v6++) != -1 )
    {
      if ( a3 <= ++v5 )
        break;
      v7 = a3 - v5;
      a2 = v6;
      v9 = (void *)a1[5];
      v10 = a1[6] - (_QWORD)v9;
      if ( v10 )
      {
LABEL_6:
        if ( v7 > v10 )
          v7 = v10;
        v5 += v7;
        memcpy(v9, a2, v7);
        a1[5] += v7;
        if ( a3 <= v5 )
          return v5;
        v6 += v7;
      }
    }
  }
  return v5;
}

