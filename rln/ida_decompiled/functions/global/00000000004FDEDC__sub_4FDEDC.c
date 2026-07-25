/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FDEDC
 * Mangled: sub_4FDEDC
 * Demangled: sub_4FDEDC
 *
 * Callers: 3
 *   0x00000000004FDD68  sub_4FDD68
 *   0x00000000004FE674  sub_4FE674
 *   0x00000000005001E8  sub_5001E8
 *
 * Callees: 3
 *   0x00000000004FDFC8  sub_4FDFC8
 *   0x000000000050037C  sub_50037C
 *   0x0000000000500968  sub_500968
 *
 * Referenced strings: 15
 *   insn=0x00000000004FDF00 string=0x00000000004FDF04 "?"
 *   insn=0x00000000004FDF20 string=0x00000000004FDF24 "8|@"
 *   insn=0x00000000004FDF24 string=0x00000000004FDF28 "@"
 *   insn=0x00000000004FDF28 string=0x00000000004FDF2C ""
 *   insn=0x00000000004FDF2C string=0x00000000004FDF30 "(;H)"
 *   insn=0x00000000004FDF30 string=0x00000000004FDF34 ")"
 *   insn=0x00000000004FDF38 string=0x00000000004FDF3C "\"
 *   insn=0x00000000004FDF40 string=0x000000000050037C ""
 *   insn=0x00000000004FDF60 string=0x00000000004FDF64 ";"
 *   insn=0x00000000004FDF68 string=0x00000000004FDF6C "hW"
 *   insn=0x00000000004FDF74 string=0x00000000004FDF88 ""
 *   insn=0x00000000004FDF7C string=0x00000000004FDF84 "y\n"
 *   insn=0x00000000004FDF7C string=0x000000000059B07B "control structure too long"
 *   insn=0x00000000004FDF90 string=0x00000000004FDF94 "J9*5"
 *   insn=0x00000000004FDF94 string=0x00000000004FDF98 "*5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FDEDC(__int64 result, int a2, unsigned int a3, __int64 a4, int a5)
{
  _QWORD *v7; // x22
  __int64 v8; // x24
  int v9; // w28
  int v10; // w27
  int v11; // w8

  v7 = (_QWORD *)result;
  if ( a2 != -1 )
  {
    do
    {
      v8 = a2;
      if ( *(_DWORD *)(*(_QWORD *)(*v7 + 24LL) + 4LL * a2) >> 14 == 131070 )
        v9 = -1;
      else
        v9 = a2 + (*(_DWORD *)(*(_QWORD *)(*v7 + 24LL) + 4LL * a2) >> 14) - 0x1FFFF + 1;
      result = sub_50037C(v7);
      if ( (_DWORD)result )
      {
        result = sub_4FDFC8(v7, (unsigned int)v8, a3);
      }
      else
      {
        v10 = ~(_DWORD)v8 + a5;
        if ( v10 >= 0 )
          v11 = ~(_DWORD)v8 + a5;
        else
          v11 = -v10;
        if ( v11 >= 0x20000 )
          sub_500968(v7[3], "control structure too long");
        *(_DWORD *)(*(_QWORD *)(*v7 + 24LL) + 4 * v8) = ((v10 << 14) + 2147467264) & 0xFFFFC000
                                                      | *(_DWORD *)(*(_QWORD *)(*v7 + 24LL) + 4 * v8) & 0x3FFF;
      }
      a2 = v9;
    }
    while ( v9 != -1 );
  }
  return result;
}

