/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055D9C0
 * Mangled: sub_55D9C0
 * Demangled: sub_55D9C0
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 36
 *   insn=0x000000000055D9D8 string=0x000000000055D9DC "!"
 *   insn=0x000000000055D9EC string=0x000000000055D9F0 "a"
 *   insn=0x000000000055D9F4 string=0x000000000055D9F8 "v"
 *   insn=0x000000000055D9F8 string=0x000000000055D9FC "?"
 *   insn=0x000000000055D9FC string=0x000000000055DA00 """
 *   insn=0x000000000055DA00 string=0x000000000055DA84 "d"
 *   insn=0x000000000055DA04 string=0x000000000055DA08 "a\n"
 *   insn=0x000000000055DA18 string=0x000000000055DA1C "H"
 *   insn=0x000000000055DA20 string=0x000000000055DAD8 "V"
 *   insn=0x000000000055DA44 string=0x000000000055DA48 "B4@"
 *   insn=0x000000000055DA48 string=0x000000000055DA4C "@"
 *   insn=0x000000000055DA50 string=0x000000000055DA54 "`"
 *   insn=0x000000000055DA54 string=0x000000000055DA58 "`N@"
 *   insn=0x000000000055DA5C string=0x000000000055DA60 "v"
 *   insn=0x000000000055DA64 string=0x000000000055DA68 "`"
 *   insn=0x000000000055DA68 string=0x000000000055DA6C "`\n"
 *   insn=0x000000000055DA6C string=0x000000000055DA70 "`"
 *   insn=0x000000000055DA8C string=0x000000000055DA90 """
 *   insn=0x000000000055DAA4 string=0x000000000055DAA8 "a"
 *   insn=0x000000000055DAAC string=0x000000000055DAB0 "!$@"
 *   insn=0x000000000055DAB0 string=0x000000000055DAB4 " "
 *   insn=0x000000000055DAD8 string=0x000000000055DADC "`"
 *   insn=0x000000000055DAE0 string=0x000000000055DAE4 "`\n@"
 *   insn=0x000000000055DAE0 string=0x000000000055DAF8 "a"
 *   insn=0x000000000055DAE4 string=0x000000000055DAE8 "!"
 *   insn=0x000000000055DAE8 string=0x000000000055DAEC "a"
 *   insn=0x000000000055DAF8 string=0x000000000055DAFC "`"
 *   insn=0x000000000055DAFC string=0x000000000055DB00 "c\n@"
 *   insn=0x000000000055DB00 string=0x000000000055DB04 "b"
 *   insn=0x000000000055DB04 string=0x000000000055DB08 "`^"
 *   insn=0x000000000055DB0C string=0x000000000055DB10 "a"
 *   insn=0x000000000055DB10 string=0x000000000055DB14 "a\n"
 *   insn=0x000000000055DB14 string=0x000000000055DB18 "!"
 *   insn=0x000000000055DB18 string=0x000000000055DB1C "cZ"
 *   insn=0x000000000055DB1C string=0x000000000055DB20 "b"
 *   insn=0x000000000055DB20 string=0x000000000055DB24 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55D9C0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // w20
  unsigned __int64 v4; // x0
  unsigned int v5; // w21
  int v6; // w22
  int v7; // w0
  __int64 v9; // x0
  _BYTE *v10; // x0
  __int64 v11; // x3

  v2 = a2;
  if ( (*(_DWORD *)(a1 + 120) & 8) == 0 )
    return (unsigned int)-1;
  if ( *(_BYTE *)(a1 + 170) )
  {
    if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, 0xFFFFFFFFLL) == -1 )
      return (unsigned int)-1;
    v9 = *(_QWORD *)(a1 + 152);
    v6 = *(unsigned __int8 *)(a1 + 192);
    v5 = v2 == -1;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 24) = v9;
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
      *(_QWORD *)(a1 + 16) = v4 - 1;
      v7 = *(unsigned __int8 *)(v4 - 1);
      goto LABEL_5;
    }
  }
  if ( (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, -1, 1, 24) == -1 )
    return (unsigned int)-1;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
  if ( v7 == -1 )
    return (unsigned int)-1;
LABEL_5:
  if ( (v2 == v7) > v5 )
    return v2;
  if ( !v5 )
  {
    if ( !v6 )
    {
      if ( *(_BYTE *)(a1 + 192) )
      {
        v10 = *(_BYTE **)(a1 + 16);
      }
      else
      {
        v11 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 184) = *(_QWORD *)(a1 + 24);
        v10 = (_BYTE *)(a1 + 171);
        *(_QWORD *)(a1 + 8) = a1 + 171;
        *(_QWORD *)(a1 + 16) = a1 + 171;
        *(_QWORD *)(a1 + 176) = v11;
        *(_QWORD *)(a1 + 24) = a1 + 172;
        *(_BYTE *)(a1 + 192) = 1;
      }
      *(_BYTE *)(a1 + 169) = 1;
      *v10 = v2;
      return v2;
    }
    return (unsigned int)-1;
  }
  if ( v2 == -1 )
    return 0;
  return v2;
}

