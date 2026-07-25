/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055DB2C
 * Mangled: sub_55DB2C
 * Demangled: sub_55DB2C
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 34
 *   insn=0x000000000055DB58 string=0x000000000055DB5C "a"
 *   insn=0x000000000055DB60 string=0x000000000055DB64 "v"
 *   insn=0x000000000055DB64 string=0x000000000055DB68 "?"
 *   insn=0x000000000055DB6C string=0x000000000055DC24 "d"
 *   insn=0x000000000055DB74 string=0x000000000055DB78 "a\n"
 *   insn=0x000000000055DB88 string=0x000000000055DB8C "u"
 *   insn=0x000000000055DB8C string=0x000000000055DBD8 "V"
 *   insn=0x000000000055DBAC string=0x000000000055DBB0 "B4@"
 *   insn=0x000000000055DBB0 string=0x000000000055DBB4 "@"
 *   insn=0x000000000055DBBC string=0x000000000055DBF8 "`N@"
 *   insn=0x000000000055DBD8 string=0x000000000055DBDC "`"
 *   insn=0x000000000055DBDC string=0x000000000055DBE0 " "
 *   insn=0x000000000055DBE0 string=0x000000000055DBE4 "`\n@"
 *   insn=0x000000000055DBE0 string=0x000000000055DC64 "a"
 *   insn=0x000000000055DBE4 string=0x000000000055DBE8 "!"
 *   insn=0x000000000055DBE8 string=0x000000000055DBEC "a"
 *   insn=0x000000000055DBFC string=0x000000000055DC00 "v"
 *   insn=0x000000000055DC04 string=0x000000000055DC08 "`"
 *   insn=0x000000000055DC08 string=0x000000000055DC0C "`\n"
 *   insn=0x000000000055DC0C string=0x000000000055DC10 "`"
 *   insn=0x000000000055DC2C string=0x000000000055DC30 """
 *   insn=0x000000000055DC44 string=0x000000000055DC48 "a"
 *   insn=0x000000000055DC4C string=0x000000000055DC50 "!$@"
 *   insn=0x000000000055DC50 string=0x000000000055DC54 " "
 *   insn=0x000000000055DC64 string=0x000000000055DC68 "`"
 *   insn=0x000000000055DC68 string=0x000000000055DC6C "c\n@"
 *   insn=0x000000000055DC6C string=0x000000000055DC70 "b"
 *   insn=0x000000000055DC70 string=0x000000000055DC74 "`^"
 *   insn=0x000000000055DC78 string=0x000000000055DC7C "a"
 *   insn=0x000000000055DC7C string=0x000000000055DC80 "a\n"
 *   insn=0x000000000055DC80 string=0x000000000055DC84 "!"
 *   insn=0x000000000055DC84 string=0x000000000055DC88 "cZ"
 *   insn=0x000000000055DC88 string=0x000000000055DC8C "b"
 *   insn=0x000000000055DC8C string=0x000000000055DC90 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55DB2C(__int64 a1, unsigned int a2)
{
  unsigned int v2; // w20
  unsigned __int64 v4; // x0
  unsigned int v5; // w21
  int v6; // w22
  unsigned __int64 v7; // x1
  int v8; // w0
  unsigned int *v10; // x0
  __int64 v11; // x0
  __int64 v12; // x3

  v2 = a2;
  if ( (*(_DWORD *)(a1 + 120) & 8) == 0 )
    return (unsigned int)-1;
  if ( *(_BYTE *)(a1 + 170) )
  {
    if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, 0xFFFFFFFFLL) == -1 )
      return (unsigned int)-1;
    v11 = *(_QWORD *)(a1 + 152);
    v6 = *(unsigned __int8 *)(a1 + 192);
    v5 = v2 == -1;
    *(_QWORD *)(a1 + 8) = v11;
    *(_QWORD *)(a1 + 16) = v11;
    *(_QWORD *)(a1 + 24) = v11;
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    *(_BYTE *)(a1 + 170) = 0;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 16);
    v5 = a2 == -1;
    v6 = *(unsigned __int8 *)(a1 + 192);
    if ( *(_QWORD *)(a1 + 8) < v4 )
    {
      v7 = v4 - 4;
      v8 = *(_DWORD *)(v4 - 4);
      *(_QWORD *)(a1 + 16) = v7;
      goto LABEL_5;
    }
  }
  if ( (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, -1, 1, 24) == -1 )
    return (unsigned int)-1;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
  if ( v8 == -1 )
    return (unsigned int)-1;
LABEL_5:
  if ( (v2 == v8) <= v5 )
  {
    if ( v5 )
      return 0;
    if ( !v6 )
    {
      if ( *(_BYTE *)(a1 + 192) )
      {
        v10 = *(unsigned int **)(a1 + 16);
      }
      else
      {
        v12 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 184) = *(_QWORD *)(a1 + 24);
        v10 = (unsigned int *)(a1 + 172);
        *(_QWORD *)(a1 + 8) = a1 + 172;
        *(_QWORD *)(a1 + 16) = a1 + 172;
        *(_QWORD *)(a1 + 176) = v12;
        *(_QWORD *)(a1 + 24) = a1 + 176;
        *(_BYTE *)(a1 + 192) = 1;
      }
      *(_BYTE *)(a1 + 169) = 1;
      *v10 = v2;
      return v2;
    }
    return (unsigned int)-1;
  }
  return v2;
}

