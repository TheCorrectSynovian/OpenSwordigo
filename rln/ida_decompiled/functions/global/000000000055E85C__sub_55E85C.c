/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055E85C
 * Mangled: sub_55E85C
 * Demangled: sub_55E85C
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x0000000000203AC0  .wmemcpy
 *   0x000000000051F714  sub_51F714
 *   0x000000000054AF4C  sub_54AF4C
 *   0x00000000005652C8  sub_5652C8
 *   0x0000000000565AD8  sub_565AD8
 *
 * Referenced strings: 26
 *   insn=0x000000000055E87C string=0x000000000055E880 "a"
 *   insn=0x000000000055E880 string=0x000000000055E884 "_"
 *   insn=0x000000000055E89C string=0x000000000055E8A0 "?"
 *   insn=0x000000000055E8B0 string=0x000000000055E8B4 "`"
 *   insn=0x000000000055E8D4 string=0x000000000055E8D8 "I\t"
 *   insn=0x000000000055E8D8 string=0x000000000055EA00 " "
 *   insn=0x000000000055E8F0 string=0x000000000055E8F4 "!"
 *   insn=0x000000000055E8F4 string=0x000000000055E8F8 " "
 *   insn=0x000000000055E914 string=0x000000000055E918 "B"
 *   insn=0x000000000055E928 string=0x000000000055E92C " \t"
 *   insn=0x000000000055E93C string=0x000000000055E940 "u"
 *   insn=0x000000000055E944 string=0x000000000055E948 "@"
 *   insn=0x000000000055E94C string=0x000000000055E924 "s"
 *   insn=0x000000000055E99C string=0x000000000055E9A0 "B4@"
 *   insn=0x000000000055E9A0 string=0x000000000055E9A4 "@"
 *   insn=0x000000000055E9DC string=0x000000000055E9E0 "["
 *   insn=0x000000000055EA08 string=0x000000000055EA0C "S"
 *   insn=0x000000000055EA10 string=0x000000000055EA14 "5"
 *   insn=0x000000000055EA24 string=0x000000000055EA28 "s"
 *   insn=0x000000000055EA2C string=0x000000000055EA30 "$"
 *   insn=0x000000000055EA50 string=0x000000000055EA54 " "
 *   insn=0x000000000055EA54 string=0x000000000055EA58 "?"
 *   insn=0x000000000055EA78 string=0x000000000055EA7C " "
 *   insn=0x000000000055EAA4 string=0x000000000055EAA8 "?"
 *   insn=0x000000000055EABC string=0x000000000055EAC0 "!"
 *   insn=0x000000000055EAD0 string=0x000000000059F700 "basic_filebuf::xsgetn error reading the file"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55E85C(__int64 a1, wchar_t *s1, __int64 a3)
{
  signed __int64 v5; // x19
  wchar_t *v6; // x0
  wchar_t *v7; // x1
  __int64 v8; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x0
  unsigned __int64 v12; // x0
  int v13; // w23
  __int64 v14; // x0
  __int64 v15; // x0
  const wchar_t *v16; // x1
  __int64 v17; // x23
  size_t v18; // x2
  ssize_t v19; // x0
  __int64 v20; // x0
  __int64 result; // x0
  __int64 v22; // x0
  wchar_t v23; // t1
  wchar_t *v24; // x0
  __int64 v25; // x0
  unsigned __int64 v26; // x1
  __int64 v27; // x0

  v5 = a3;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v6 = *(wchar_t **)(a1 + 16);
    if ( a3 <= 0 )
    {
      v8 = 0;
      v7 = *(wchar_t **)(a1 + 8);
    }
    else
    {
      v7 = *(wchar_t **)(a1 + 8);
      if ( v6 == v7 )
      {
        ++s1;
        v5 = a3 - 1;
        v23 = *v6++;
        v8 = 1;
        *(s1 - 1) = v23;
      }
      else
      {
        v8 = 0;
      }
    }
    v9 = v7 != v6;
    v10 = *(_QWORD *)(a1 + 184);
    v11 = *(_QWORD *)(a1 + 176) + 4 * v9;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(a1 + 176) = v11;
    *(_QWORD *)(a1 + 16) = v11;
    *(_QWORD *)(a1 + 24) = v10;
    *(_BYTE *)(a1 + 192) = 0;
  }
  else
  {
    v8 = 0;
    if ( *(_BYTE *)(a1 + 170) )
    {
      if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, 0xFFFFFFFFLL) == -1 )
        return v8;
      v22 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 8) = v22;
      *(_QWORD *)(a1 + 16) = v22;
      *(_QWORD *)(a1 + 24) = v22;
      *(_QWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 48) = 0;
      *(_BYTE *)(a1 + 170) = 0;
    }
  }
  v12 = *(_QWORD *)(a1 + 160);
  v13 = *(_DWORD *)(a1 + 120);
  if ( v12 <= 1 )
    v14 = 1;
  else
    v14 = v12 - 1;
  if ( v5 <= v14 )
    goto LABEL_24;
  v15 = *(_QWORD *)(a1 + 200);
  if ( !v15 )
    sub_5652C8(0);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 48LL))(v15) || (v13 & 8) == 0 )
  {
LABEL_24:
    v8 += sub_54AF4C((_QWORD *)a1, s1, v5);
    return v8;
  }
  v16 = *(const wchar_t **)(a1 + 16);
  v17 = *(_QWORD *)(a1 + 24) - (_QWORD)v16;
  v18 = v17 >> 2;
  if ( v17 >> 2 )
  {
    v24 = s1;
    v8 += v18;
    v5 -= v18;
    s1 = (wchar_t *)((char *)s1 + v17);
    wmemcpy(v24, v16, v18);
    *(_QWORD *)(a1 + 16) += v17;
  }
  while ( 1 )
  {
    v19 = sub_51F714((FILE **)(a1 + 104), s1, v5);
    if ( v19 == -1 )
      sub_565AD8("basic_filebuf::xsgetn error reading the file");
    if ( !v19 )
      break;
    v5 -= v19;
    v8 += v19;
    if ( !v5 )
      goto LABEL_29;
    s1 += v19;
  }
  if ( v5 )
  {
    v20 = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(a1 + 8) = v20;
    *(_QWORD *)(a1 + 16) = v20;
    *(_QWORD *)(a1 + 24) = v20;
    result = v8;
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    *(_BYTE *)(a1 + 169) = 0;
    return result;
  }
LABEL_29:
  if ( (*(_DWORD *)(a1 + 120) & 0x11) != 0 )
  {
    v26 = *(_QWORD *)(a1 + 160);
    v27 = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(a1 + 8) = v27;
    *(_QWORD *)(a1 + 16) = v27;
    *(_QWORD *)(a1 + 24) = v27;
    if ( v26 > 1 )
    {
      *(_QWORD *)(a1 + 40) = v27;
      *(_QWORD *)(a1 + 32) = v27;
      *(_QWORD *)(a1 + 48) = v27 + 4 * v26 - 4;
      goto LABEL_32;
    }
  }
  else
  {
    v25 = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(a1 + 8) = v25;
    *(_QWORD *)(a1 + 16) = v25;
    *(_QWORD *)(a1 + 24) = v25;
  }
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = 0;
LABEL_32:
  *(_BYTE *)(a1 + 169) = 1;
  return v8;
}

