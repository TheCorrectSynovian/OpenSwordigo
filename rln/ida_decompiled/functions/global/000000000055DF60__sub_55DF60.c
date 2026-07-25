/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055DF60
 * Mangled: sub_55DF60
 * Demangled: sub_55DF60
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000201760  .memcpy
 *   0x000000000051F714  sub_51F714
 *   0x00000000005652C8  sub_5652C8
 *   0x0000000000565AD8  sub_565AD8
 *
 * Referenced strings: 125
 *   insn=0x000000000055DF90 string=0x000000000055DF94 "a"
 *   insn=0x000000000055DF98 string=0x000000000055DF9C "a"
 *   insn=0x000000000055DF98 string=0x000000000055E0F4 "a"
 *   insn=0x000000000055DF9C string=0x000000000055DFA0 "?"
 *   insn=0x000000000055DFA0 string=0x000000000055DFA4 "H"
 *   insn=0x000000000055DFA4 string=0x000000000055DFA8 "uR@"
 *   insn=0x000000000055DFB0 string=0x000000000055E0EC "5"
 *   insn=0x000000000055DFB4 string=0x000000000055DFB8 "`f@"
 *   insn=0x000000000055DFC0 string=0x000000000055DFC4 "!"
 *   insn=0x000000000055DFC4 string=0x000000000055DFC8 " "
 *   insn=0x000000000055DFD0 string=0x000000000055DFD4 "a"
 *   insn=0x000000000055DFD0 string=0x000000000055E12C "af@"
 *   insn=0x000000000055DFD4 string=0x000000000055DFD8 "`"
 *   insn=0x000000000055DFEC string=0x000000000055DFF0 "`z@"
 *   insn=0x000000000055DFF0 string=0x000000000055DFF4 ""
 *   insn=0x000000000055DFF8 string=0x000000000055DFFC "aN@"
 *   insn=0x000000000055DFF8 string=0x000000000055E314 "aN@"
 *   insn=0x000000000055E000 string=0x000000000055E004 "a"
 *   insn=0x000000000055E008 string=0x000000000055E00C "a\n"
 *   insn=0x000000000055E00C string=0x000000000055E010 "a"
 *   insn=0x000000000055E028 string=0x000000000059F660 "basic_filebuf::underflow incomplete character in file"
 *   insn=0x000000000055E054 string=0x000000000055E058 "-"
 *   insn=0x000000000055E058 string=0x000000000055E05C "`z@"
 *   insn=0x000000000055E060 string=0x000000000055E064 "`N@"
 *   insn=0x000000000055E060 string=0x000000000055E2F4 "aN@"
 *   insn=0x000000000055E064 string=0x000000000055E068 "`"
 *   insn=0x000000000055E06C string=0x000000000055E070 "`\n"
 *   insn=0x000000000055E070 string=0x000000000055E074 "t"
 *   insn=0x000000000055E074 string=0x000000000055E078 "!"
 *   insn=0x000000000055E084 string=0x000000000055E088 "a"
 *   insn=0x000000000055E0B0 string=0x000000000055E0B4 "B4@"
 *   insn=0x000000000055E0B4 string=0x000000000055E0B8 "@"
 *   insn=0x000000000055E0C0 string=0x000000000055E0C4 "aN@"
 *   insn=0x000000000055E0C4 string=0x000000000055E0C8 "a"
 *   insn=0x000000000055E0C8 string=0x000000000055E0CC "a\n"
 *   insn=0x000000000055E0D0 string=0x000000000055E0D4 "a"
 *   insn=0x000000000055E0F4 string=0x000000000055E0F8 "bZ@"
 *   insn=0x000000000055E0F8 string=0x000000000055E0FC "?"
 *   insn=0x000000000055E0FC string=0x000000000055E100 "c^@"
 *   insn=0x000000000055E100 string=0x000000000055E104 "B"
 *   insn=0x000000000055E104 string=0x000000000055E108 "`N@"
 *   insn=0x000000000055E108 string=0x000000000055E10C "`"
 *   insn=0x000000000055E110 string=0x000000000055E114 "bZ"
 *   insn=0x000000000055E118 string=0x000000000055E11C "b\n"
 *   insn=0x000000000055E11C string=0x000000000055E120 "c"
 *   insn=0x000000000055E130 string=0x000000000055E134 "!"
 *   insn=0x000000000055E134 string=0x000000000055E138 "!"
 *   insn=0x000000000055E138 string=0x000000000055E13C " "
 *   insn=0x000000000055E140 string=0x000000000055E144 "m"
 *   insn=0x000000000055E144 string=0x000000000055E390 "af@"
 *   insn=0x000000000055E150 string=0x000000000055E154 "ar@"
 *   insn=0x000000000055E154 string=0x000000000055E158 "wv@"
 *   insn=0x000000000055E158 string=0x000000000055E15C "`"
 *   insn=0x000000000055E160 string=0x000000000055E164 "Z"
 *   insn=0x000000000055E164 string=0x000000000055E168 "_"
 *   insn=0x000000000055E168 string=0x000000000055E16C "Z"
 *   insn=0x000000000055E170 string=0x000000000055E174 "b"
 *   insn=0x000000000055E170 string=0x000000000055E18C "`n@"
 *   insn=0x000000000055E174 string=0x000000000055E178 "`"
 *   insn=0x000000000055E178 string=0x000000000055E17C "_"
 *   insn=0x000000000055E17C string=0x000000000055E180 "a"
 *   insn=0x000000000055E184 string=0x000000000055E188 "Z"
 *   insn=0x000000000055E190 string=0x000000000055E194 "L"
 *   insn=0x000000000055E198 string=0x000000000055E19C "`j@"
 *   insn=0x000000000055E198 string=0x000000000055E36C "`j@"
 *   insn=0x000000000055E1A0 string=0x000000000055E1A4 "aBH"
 *   insn=0x000000000055E1A8 string=0x000000000055E1AC "`r"
 *   insn=0x000000000055E1AC string=0x000000000055E1B0 "_"
 *   insn=0x000000000055E1B0 string=0x000000000055E1B4 "cv"
 *   insn=0x000000000055E1B4 string=0x000000000055E1B8 ""
 *   insn=0x000000000055E1B8 string=0x000000000055E1BC "a"
 *   insn=0x000000000055E1C0 string=0x000000000055E1C4 "v"
 *   insn=0x000000000055E1C4 string=0x000000000055E1C8 "w"
 *   insn=0x000000000055E1C8 string=0x000000000055E1CC "x"
 *   insn=0x000000000055E1D0 string=0x000000000055E1D4 ","
 *   insn=0x000000000055E1D4 string=0x000000000055E1D8 "?"
 *   insn=0x000000000055E1D4 string=0x000000000055E238 "`j@"
 *   insn=0x000000000055E1E4 string=0x000000000055E1E8 "cv@"
 *   insn=0x000000000055E1E8 string=0x000000000055E1EC "c"
 *   insn=0x000000000055E1EC string=0x000000000055E1F0 "cv"
 *   insn=0x000000000055E1F0 string=0x000000000055E1F4 "br@"
 *   insn=0x000000000055E1F4 string=0x000000000055E1F8 "e"
 *   insn=0x000000000055E200 string=0x000000000055E204 "H"
 *   insn=0x000000000055E204 string=0x000000000055E26C "df@"
 *   insn=0x000000000055E20C string=0x000000000055E2A0 "tj@"
 *   insn=0x000000000055E214 string=0x000000000055E218 "4"
 *   insn=0x000000000055E228 string=0x000000000055E22C "I"
 *   insn=0x000000000055E22C string=0x000000000055E230 "cv@"
 *   insn=0x000000000055E230 string=0x000000000055E234 ":"
 *   insn=0x000000000055E238 string=0x000000000055E23C "an@"
 *   insn=0x000000000055E23C string=0x000000000055E240 "`"
 *   insn=0x000000000055E258 string=0x000000000055E25C "."
 *   insn=0x000000000055E260 string=0x000000000055E264 ":"
 *   insn=0x000000000055E284 string=0x000000000055E288 ""
 *   insn=0x000000000055E294 string=0x000000000055E298 "e"
 *   insn=0x000000000055E2A4 string=0x000000000055E2A8 "bv@"
 *   insn=0x000000000055E2AC string=0x000000000055E2B0 "T"
 *   insn=0x000000000055E2BC string=0x000000000055E2C0 "("
 *   insn=0x000000000055E2C0 string=0x000000000055E2C4 "`j@"
 *   insn=0x000000000055E2C8 string=0x000000000055E2CC "`r"
 *   insn=0x000000000055E2E8 string=0x000000000059F6D0 "basic_filebuf::underflow error reading the file"
 *   insn=0x000000000055E2F4 string=0x000000000055E2F8 "a"
 *   insn=0x000000000055E2F8 string=0x000000000055E2FC "a\n"
 *   insn=0x000000000055E300 string=0x000000000055E304 "a"
 *   insn=0x000000000055E304 string=0x000000000055E308 "\"
 *   insn=0x000000000055E318 string=0x000000000055E31C "a"
 *   insn=0x000000000055E31C string=0x000000000055E320 "a\n"
 *   insn=0x000000000055E320 string=0x000000000055E324 "a"
 *   insn=0x000000000055E334 string=0x000000000055E338 "@"
 *   insn=0x000000000055E344 string=0x00000000001F8570 "0'"
 *   insn=0x000000000055E348 string=0x000000000055E34C "W"
 *   insn=0x000000000055E34C string=0x000000000055E350 "`j@"
 *   insn=0x000000000055E34C string=0x000000000055E3B4 "ar@"
 *   insn=0x000000000055E350 string=0x000000000055E354 "@"
 *   insn=0x000000000055E354 string=0x000000000055E35C "xj"
 *   insn=0x000000000055E358 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000055E360 string=0x000000000055E364 "vn"
 *   insn=0x000000000055E378 string=0x000000000055E37C "`j@"
 *   insn=0x000000000055E378 string=0x00000000001FBBB0 "0'"
 *   insn=0x000000000055E384 string=0x000000000059F698 "basic_filebuf::underflow invalid byte sequence in file"
 *   insn=0x000000000055E398 string=0x000000000055E39C "!"
 *   insn=0x000000000055E39C string=0x000000000055E3A0 "! @"
 *   insn=0x000000000055E3A0 string=0x000000000055E3A4 " "
 *   insn=0x000000000055E3AC string=0x000000000055E3B0 "i"
 *   insn=0x000000000055E3C8 string=0x000000000059F620 "basic_filebuf::underflow codecvt::max_length() is not valid"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55DF60(__int64 a1)
{
  unsigned __int8 *v2; // x0
  unsigned __int64 v3; // x1
  unsigned __int64 v4; // x21
  size_t v5; // x21
  __int64 v6; // x0
  ssize_t v7; // x0
  signed __int64 v8; // x20
  int v9; // w27
  __int64 v10; // x1
  __int64 result; // x0
  unsigned __int8 *v12; // x1
  unsigned __int8 *v13; // x2
  unsigned __int64 v14; // x3
  int v15; // w0
  signed __int64 v16; // x22
  signed __int64 v17; // x2
  const void *v18; // x1
  signed __int64 v19; // x23
  signed __int64 v20; // x26
  char *v21; // x0
  size_t v22; // x20
  __int64 v23; // x1
  char *v24; // x3
  _BYTE *v25; // x5
  ssize_t v26; // x0
  const void *v27; // x1
  unsigned int v28; // w26
  unsigned __int8 *v29; // x1
  __int64 v30; // x1
  char *v31; // x0
  char *v32; // x24
  void *v33; // x0
  _BYTE *v34; // [xsp+68h] [xbp+68h]

  if ( (*(_DWORD *)(a1 + 120) & 8) == 0 )
    return 0xFFFFFFFFLL;
  if ( *(_BYTE *)(a1 + 170) )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, 0xFFFFFFFFLL);
    if ( (_DWORD)result == -1 )
      return result;
    v12 = *(unsigned __int8 **)(a1 + 152);
    *(_QWORD *)(a1 + 8) = v12;
    *(_QWORD *)(a1 + 16) = v12;
    v2 = v12;
    *(_QWORD *)(a1 + 24) = v12;
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    *(_BYTE *)(a1 + 170) = 0;
  }
  else
  {
    v2 = *(unsigned __int8 **)(a1 + 16);
  }
  if ( *(_BYTE *)(a1 + 192) )
  {
    v13 = *(unsigned __int8 **)(a1 + 176);
    v14 = *(_QWORD *)(a1 + 184);
    if ( *(unsigned __int8 **)(a1 + 8) != v2 )
      ++v13;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 152);
    v3 = v14;
    *(_QWORD *)(a1 + 176) = v13;
    v2 = v13;
    *(_QWORD *)(a1 + 16) = v13;
    *(_QWORD *)(a1 + 24) = v14;
    *(_BYTE *)(a1 + 192) = 0;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 24);
  }
  if ( v3 > (unsigned __int64)v2 )
    return *v2;
  v4 = *(_QWORD *)(a1 + 160);
  if ( v4 <= 1 )
    v5 = 1;
  else
    v5 = v4 - 1;
  v6 = *(_QWORD *)(a1 + 200);
  if ( !v6 )
    sub_5652C8(0);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6) )
  {
    v7 = sub_51F714((FILE **)(a1 + 104), *(void **)(a1 + 8), v5);
    v8 = v7;
    if ( !v7 )
    {
      v9 = 0;
      if ( (*(_DWORD *)(a1 + 120) & 0x10) == 0 )
        goto LABEL_13;
      v30 = *(_QWORD *)(a1 + 152);
      result = 0xFFFFFFFFLL;
      *(_QWORD *)(a1 + 8) = v30;
      *(_QWORD *)(a1 + 16) = v30;
      *(_QWORD *)(a1 + 24) = v30;
      *(_QWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 48) = 0;
      *(_BYTE *)(a1 + 169) = 0;
      return result;
    }
    if ( v7 <= 0 )
      goto LABEL_57;
LABEL_18:
    if ( (*(_DWORD *)(a1 + 120) & 8) != 0 )
    {
      v2 = *(unsigned __int8 **)(a1 + 152);
      *(_QWORD *)(a1 + 8) = v2;
      *(_QWORD *)(a1 + 16) = v2;
      *(_QWORD *)(a1 + 24) = &v2[v8];
    }
    else
    {
      v29 = *(unsigned __int8 **)(a1 + 152);
      *(_QWORD *)(a1 + 8) = v29;
      *(_QWORD *)(a1 + 16) = v29;
      v2 = v29;
      *(_QWORD *)(a1 + 24) = v29;
    }
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    *(_BYTE *)(a1 + 169) = 1;
    return *v2;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 200) + 40LL))(*(_QWORD *)(a1 + 200));
  if ( v15 <= 0 )
  {
    v16 = v5 - 1 + (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 200) + 64LL))(*(_QWORD *)(a1 + 200));
    v17 = v5;
  }
  else
  {
    v16 = v15 * v5;
    v17 = v16;
  }
  v18 = *(const void **)(a1 + 224);
  v19 = *(_QWORD *)(a1 + 232) - (_QWORD)v18;
  v20 = v17 - v19;
  if ( v17 <= v19 )
    v20 = 0;
  if ( *(_BYTE *)(a1 + 169) && *(_QWORD *)(a1 + 24) == *(_QWORD *)(a1 + 8) && v19 )
    v20 = 0;
  if ( v16 > *(_QWORD *)(a1 + 216) )
  {
    v22 = 0;
    v31 = (char *)operator new[](v16);
    v32 = v31;
    if ( v19 )
    {
      v22 = v19;
      memcpy(v31, *(const void **)(a1 + 224), v19);
    }
    v33 = *(void **)(a1 + 208);
    if ( v33 )
      operator delete[](v33);
    *(_QWORD *)(a1 + 208) = v32;
    v21 = v32;
    *(_QWORD *)(a1 + 216) = v16;
  }
  else if ( v19 )
  {
    v22 = *(_QWORD *)(a1 + 232) - (_QWORD)v18;
    memmove(*(void **)(a1 + 208), v18, v22);
    v21 = *(char **)(a1 + 208);
  }
  else
  {
    v21 = *(char **)(a1 + 208);
    v22 = 0;
  }
  v23 = *(_QWORD *)(a1 + 132);
  v24 = &v21[v22];
  *(_QWORD *)(a1 + 224) = v21;
  *(_QWORD *)(a1 + 232) = &v21[v22];
  v9 = 0;
  *(_QWORD *)(a1 + 140) = v23;
  v8 = 0;
  if ( v20 > 0 )
    goto LABEL_48;
  v28 = 0;
  while ( 1 )
  {
    v25 = *(_BYTE **)(a1 + 8);
    v34 = v25;
    if ( (unsigned __int64)v24 > *(_QWORD *)(a1 + 224) )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 200) + 32LL))(
             *(_QWORD *)(a1 + 200),
             a1 + 132);
      v25 = *(_BYTE **)(a1 + 8);
      if ( v9 == 3 )
      {
LABEL_52:
        v27 = *(const void **)(a1 + 208);
        v8 = *(_QWORD *)(a1 + 232) - (_QWORD)v27;
        if ( v5 <= v8 )
          v8 = v5;
        memcpy(v25, v27, v8);
        *(_QWORD *)(a1 + 224) = *(_QWORD *)(a1 + 208) + v8;
        goto LABEL_46;
      }
    }
    else if ( v9 == 3 )
    {
      goto LABEL_52;
    }
    v8 = v34 - v25;
    if ( v9 == 2 )
      break;
LABEL_46:
    if ( (v8 == 0) <= v28 )
      break;
    v24 = *(char **)(a1 + 232);
    v20 = 1;
LABEL_48:
    if ( (__int64)&v24[v20 - *(_QWORD *)(a1 + 208)] > *(_QWORD *)(a1 + 216) )
      sub_565AD8("basic_filebuf::underflow codecvt::max_length() is not valid");
    v26 = sub_51F714((FILE **)(a1 + 104), v24, v20);
    if ( v26 )
    {
      v28 = 0;
      if ( v26 == -1 )
        break;
    }
    else
    {
      v28 = 1;
    }
    v24 = (char *)(*(_QWORD *)(a1 + 232) + v26);
    *(_QWORD *)(a1 + 232) = v24;
  }
  if ( v8 > 0 )
    goto LABEL_18;
  if ( !v28 )
  {
    if ( v9 == 2 )
      sub_565AD8("basic_filebuf::underflow invalid byte sequence in file");
LABEL_57:
    sub_565AD8("basic_filebuf::underflow error reading the file");
  }
LABEL_13:
  v10 = *(_QWORD *)(a1 + 152);
  *(_QWORD *)(a1 + 8) = v10;
  result = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 16) = v10;
  *(_QWORD *)(a1 + 24) = v10;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 169) = 0;
  if ( v9 == 1 )
    sub_565AD8("basic_filebuf::underflow incomplete character in file");
  return result;
}

