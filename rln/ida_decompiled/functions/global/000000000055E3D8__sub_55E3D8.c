/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055E3D8
 * Mangled: sub_55E3D8
 * Demangled: sub_55E3D8
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000201760  .memcpy
 *   0x0000000000203AC0  .wmemcpy
 *   0x000000000051F714  sub_51F714
 *   0x00000000005652C8  sub_5652C8
 *   0x0000000000565AD8  sub_565AD8
 *
 * Referenced strings: 124
 *   insn=0x000000000055E408 string=0x000000000055E40C "a"
 *   insn=0x000000000055E410 string=0x000000000055E414 "a"
 *   insn=0x000000000055E410 string=0x000000000055E56C "a"
 *   insn=0x000000000055E414 string=0x000000000055E418 "?"
 *   insn=0x000000000055E418 string=0x000000000055E41C "H"
 *   insn=0x000000000055E41C string=0x000000000055E420 "uR@"
 *   insn=0x000000000055E428 string=0x000000000055E564 "5"
 *   insn=0x000000000055E42C string=0x000000000055E430 "`f@"
 *   insn=0x000000000055E430 string=0x000000000055E434 " !"
 *   insn=0x000000000055E438 string=0x000000000055E43C "!"
 *   insn=0x000000000055E43C string=0x000000000055E440 " "
 *   insn=0x000000000055E448 string=0x000000000055E44C "a"
 *   insn=0x000000000055E448 string=0x000000000055E5A8 "af@"
 *   insn=0x000000000055E44C string=0x000000000055E450 "`"
 *   insn=0x000000000055E460 string=0x000000000055E464 "a"
 *   insn=0x000000000055E464 string=0x000000000055E468 "`z@"
 *   insn=0x000000000055E464 string=0x000000000055E790 ","
 *   insn=0x000000000055E46C string=0x000000000055E470 "@"
 *   insn=0x000000000055E470 string=0x000000000055E474 "aN@"
 *   insn=0x000000000055E470 string=0x000000000055E798 "aN@"
 *   insn=0x000000000055E478 string=0x000000000055E47C "a"
 *   insn=0x000000000055E480 string=0x000000000055E484 "a\n"
 *   insn=0x000000000055E484 string=0x000000000055E488 "a"
 *   insn=0x000000000055E4A0 string=0x000000000059F660 "basic_filebuf::underflow incomplete character in file"
 *   insn=0x000000000055E4D0 string=0x000000000055E4D4 "`z@"
 *   insn=0x000000000055E4D8 string=0x000000000055E4DC "`N@"
 *   insn=0x000000000055E4D8 string=0x000000000055E778 "aN@"
 *   insn=0x000000000055E4DC string=0x000000000055E4E0 "`"
 *   insn=0x000000000055E4E4 string=0x000000000055E4E8 "`\n"
 *   insn=0x000000000055E4E8 string=0x000000000055E4EC "t"
 *   insn=0x000000000055E4EC string=0x000000000055E4F0 "!"
 *   insn=0x000000000055E4FC string=0x000000000055E500 "a"
 *   insn=0x000000000055E528 string=0x000000000055E52C "B4@"
 *   insn=0x000000000055E52C string=0x000000000055E530 "@"
 *   insn=0x000000000055E538 string=0x000000000055E53C "aN@"
 *   insn=0x000000000055E53C string=0x000000000055E540 "a"
 *   insn=0x000000000055E540 string=0x000000000055E544 "a\n"
 *   insn=0x000000000055E548 string=0x000000000055E54C "a"
 *   insn=0x000000000055E56C string=0x000000000055E570 "cZ@"
 *   insn=0x000000000055E570 string=0x000000000055E574 "?"
 *   insn=0x000000000055E574 string=0x000000000055E578 "`^@"
 *   insn=0x000000000055E57C string=0x000000000055E580 "aN@"
 *   insn=0x000000000055E580 string=0x000000000055E584 "a"
 *   insn=0x000000000055E588 string=0x000000000055E58C "b"
 *   insn=0x000000000055E58C string=0x000000000055E590 "`"
 *   insn=0x000000000055E590 string=0x000000000055E594 "bZ"
 *   insn=0x000000000055E598 string=0x000000000055E59C "b\n"
 *   insn=0x000000000055E5AC string=0x000000000055E5B0 "!"
 *   insn=0x000000000055E5B0 string=0x000000000055E5B4 "!"
 *   insn=0x000000000055E5B4 string=0x000000000055E5B8 " "
 *   insn=0x000000000055E5C0 string=0x000000000055E814 "af@"
 *   insn=0x000000000055E5CC string=0x000000000055E5D0 "ar@"
 *   insn=0x000000000055E5D0 string=0x000000000055E5D4 "wv@"
 *   insn=0x000000000055E5D4 string=0x000000000055E5D8 "`"
 *   insn=0x000000000055E5E4 string=0x000000000055E5E8 "{"
 *   insn=0x000000000055E5EC string=0x000000000055E5F0 "b"
 *   insn=0x000000000055E5EC string=0x000000000055E608 "`n@"
 *   insn=0x000000000055E5F0 string=0x000000000055E5F4 "`"
 *   insn=0x000000000055E5F4 string=0x000000000055E5F8 "_"
 *   insn=0x000000000055E5F8 string=0x000000000055E5FC "a"
 *   insn=0x000000000055E600 string=0x000000000055E604 "{"
 *   insn=0x000000000055E614 string=0x000000000055E618 "`j@"
 *   insn=0x000000000055E614 string=0x000000000055E7F0 "`j@"
 *   insn=0x000000000055E61C string=0x000000000055E620 "aBH"
 *   insn=0x000000000055E624 string=0x000000000055E628 "`r"
 *   insn=0x000000000055E62C string=0x000000000055E630 "cv"
 *   insn=0x000000000055E634 string=0x000000000055E638 "a"
 *   insn=0x000000000055E640 string=0x000000000055E644 "v"
 *   insn=0x000000000055E644 string=0x000000000055E648 "x"
 *   insn=0x000000000055E648 string=0x000000000055E64C "y"
 *   insn=0x000000000055E650 string=0x000000000055E654 "L"
 *   insn=0x000000000055E654 string=0x000000000055E658 "@"
 *   insn=0x000000000055E654 string=0x000000000055E6BC "`j@"
 *   insn=0x000000000055E658 string=0x000000000055E758 ""
 *   insn=0x000000000055E65C string=0x000000000055E660 ""
 *   insn=0x000000000055E660 string=0x000000000055E664 "@"
 *   insn=0x000000000055E664 string=0x000000000055E668 "cv@"
 *   insn=0x000000000055E668 string=0x000000000055E66C "c"
 *   insn=0x000000000055E66C string=0x000000000055E670 "cv"
 *   insn=0x000000000055E670 string=0x000000000055E674 "br@"
 *   insn=0x000000000055E674 string=0x000000000055E678 "e"
 *   insn=0x000000000055E680 string=0x000000000055E684 "h"
 *   insn=0x000000000055E684 string=0x000000000055E6F0 "df@"
 *   insn=0x000000000055E68C string=0x000000000055E724 "tj@"
 *   insn=0x000000000055E694 string=0x000000000055E698 "4"
 *   insn=0x000000000055E69C string=0x000000000055E6A0 "`"
 *   insn=0x000000000055E6B0 string=0x000000000055E6B4 "cv@"
 *   insn=0x000000000055E6B4 string=0x000000000055E6B8 ";"
 *   insn=0x000000000055E6BC string=0x000000000055E6C0 "an@"
 *   insn=0x000000000055E6C0 string=0x000000000055E6C4 "`"
 *   insn=0x000000000055E6DC string=0x000000000055E6E0 ""
 *   insn=0x000000000055E6E4 string=0x000000000055E6E8 ";"
 *   insn=0x000000000055E708 string=0x000000000055E70C ""
 *   insn=0x000000000055E718 string=0x000000000055E71C "e"
 *   insn=0x000000000055E728 string=0x000000000055E72C "bv@"
 *   insn=0x000000000055E730 string=0x000000000055E734 "T"
 *   insn=0x000000000055E744 string=0x000000000055E748 "`j@"
 *   insn=0x000000000055E74C string=0x000000000055E750 "`r"
 *   insn=0x000000000055E76C string=0x000000000059F6D0 "basic_filebuf::underflow error reading the file"
 *   insn=0x000000000055E778 string=0x000000000055E77C "a"
 *   insn=0x000000000055E77C string=0x000000000055E780 "a\n"
 *   insn=0x000000000055E784 string=0x000000000055E788 "a"
 *   insn=0x000000000055E788 string=0x000000000055E78C "Y"
 *   insn=0x000000000055E79C string=0x000000000055E7A0 "a"
 *   insn=0x000000000055E7A0 string=0x000000000055E7A4 "a\n"
 *   insn=0x000000000055E7A4 string=0x000000000055E7A8 "a"
 *   insn=0x000000000055E7B8 string=0x000000000055E7BC "="
 *   insn=0x000000000055E7C4 string=0x000000000055E7C8 "jg"
 *   insn=0x000000000055E7C8 string=0x00000000001F8570 "0'"
 *   insn=0x000000000055E7CC string=0x000000000055E7D0 "W"
 *   insn=0x000000000055E7D0 string=0x000000000055E7D4 "`j@"
 *   insn=0x000000000055E7D0 string=0x000000000055E838 "ar@"
 *   insn=0x000000000055E7D4 string=0x000000000055E7D8 "@"
 *   insn=0x000000000055E7D8 string=0x000000000055E7E0 "xj"
 *   insn=0x000000000055E7DC string=0x00000000001F4F60 "P'"
 *   insn=0x000000000055E7E4 string=0x000000000055E7E8 "vn"
 *   insn=0x000000000055E7FC string=0x000000000055E800 "`j@"
 *   insn=0x000000000055E7FC string=0x00000000001FBBB0 "0'"
 *   insn=0x000000000055E808 string=0x000000000059F698 "basic_filebuf::underflow invalid byte sequence in file"
 *   insn=0x000000000055E820 string=0x000000000055E824 "!"
 *   insn=0x000000000055E824 string=0x000000000055E828 "! @"
 *   insn=0x000000000055E828 string=0x000000000055E82C " "
 *   insn=0x000000000055E830 string=0x000000000055E834 "g"
 *   insn=0x000000000055E84C string=0x000000000059F620 "basic_filebuf::underflow codecvt::max_length() is not valid"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55E3D8(__int64 a1)
{
  unsigned int *v2; // x0
  unsigned __int64 v3; // x1
  unsigned __int64 v4; // x21
  size_t v5; // x21
  __int64 v6; // x0
  ssize_t v7; // x0
  signed __int64 v8; // x20
  int v9; // w28
  __int64 v10; // x1
  __int64 result; // x0
  unsigned int *v12; // x1
  __int64 v13; // x3
  bool v14; // zf
  unsigned __int64 v15; // x0
  __int64 v16; // x2
  unsigned int *v17; // x2
  int v18; // w0
  signed __int64 v19; // x22
  signed __int64 v20; // x20
  const void *v21; // x1
  signed __int64 v22; // x23
  signed __int64 v23; // x27
  char *v24; // x0
  size_t v25; // x20
  __int64 v26; // x1
  char *v27; // x3
  wchar_t *v28; // x5
  ssize_t v29; // x0
  const wchar_t *v30; // x1
  unsigned int v31; // w27
  unsigned int *v32; // x1
  __int64 v33; // x1
  char *v34; // x0
  char *v35; // x24
  void *v36; // x0
  wchar_t *v37; // [xsp+68h] [xbp+68h]

  if ( (*(_DWORD *)(a1 + 120) & 8) == 0 )
    return 0xFFFFFFFFLL;
  if ( *(_BYTE *)(a1 + 170) )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, 0xFFFFFFFFLL);
    if ( (_DWORD)result == -1 )
      return result;
    v12 = *(unsigned int **)(a1 + 152);
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
    v2 = *(unsigned int **)(a1 + 16);
  }
  if ( *(_BYTE *)(a1 + 192) )
  {
    v13 = *(_QWORD *)(a1 + 176);
    v14 = *(_QWORD *)(a1 + 8) == (_QWORD)v2;
    v15 = *(_QWORD *)(a1 + 184);
    v16 = !v14;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 152);
    v3 = v15;
    v17 = (unsigned int *)(v13 + 4 * v16);
    *(_QWORD *)(a1 + 24) = v15;
    *(_QWORD *)(a1 + 176) = v17;
    v2 = v17;
    *(_QWORD *)(a1 + 16) = v17;
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
      v33 = *(_QWORD *)(a1 + 152);
      result = 0xFFFFFFFFLL;
      *(_QWORD *)(a1 + 8) = v33;
      *(_QWORD *)(a1 + 16) = v33;
      *(_QWORD *)(a1 + 24) = v33;
      *(_QWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 48) = 0;
      *(_BYTE *)(a1 + 169) = 0;
      return result;
    }
    if ( v7 <= 0 )
      goto LABEL_58;
LABEL_18:
    if ( (*(_DWORD *)(a1 + 120) & 8) != 0 )
    {
      v2 = *(unsigned int **)(a1 + 152);
      *(_QWORD *)(a1 + 8) = v2;
      *(_QWORD *)(a1 + 16) = v2;
      *(_QWORD *)(a1 + 24) = &v2[v8];
    }
    else
    {
      v32 = *(unsigned int **)(a1 + 152);
      *(_QWORD *)(a1 + 8) = v32;
      *(_QWORD *)(a1 + 16) = v32;
      v2 = v32;
      *(_QWORD *)(a1 + 24) = v32;
    }
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    *(_BYTE *)(a1 + 169) = 1;
    return *v2;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 200) + 40LL))(*(_QWORD *)(a1 + 200));
  if ( v18 <= 0 )
  {
    v20 = v5;
    v19 = v5 - 1 + (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 200) + 64LL))(*(_QWORD *)(a1 + 200));
  }
  else
  {
    v19 = v18 * v5;
    v20 = v19;
  }
  v21 = *(const void **)(a1 + 224);
  v22 = *(_QWORD *)(a1 + 232) - (_QWORD)v21;
  v23 = v20 - v22;
  if ( v20 <= v22 )
    v23 = 0;
  if ( *(_BYTE *)(a1 + 169) && *(_QWORD *)(a1 + 24) == *(_QWORD *)(a1 + 8) && v22 )
    v23 = 0;
  if ( v19 > *(_QWORD *)(a1 + 216) )
  {
    v25 = 0;
    v34 = (char *)operator new[](v19);
    v35 = v34;
    if ( v22 )
    {
      v25 = v22;
      memcpy(v34, *(const void **)(a1 + 224), v22);
    }
    v36 = *(void **)(a1 + 208);
    if ( v36 )
      operator delete[](v36);
    *(_QWORD *)(a1 + 208) = v35;
    v24 = v35;
    *(_QWORD *)(a1 + 216) = v19;
  }
  else if ( v22 )
  {
    v25 = *(_QWORD *)(a1 + 232) - (_QWORD)v21;
    memmove(*(void **)(a1 + 208), v21, v25);
    v24 = *(char **)(a1 + 208);
  }
  else
  {
    v24 = *(char **)(a1 + 208);
    v25 = 0;
  }
  v26 = *(_QWORD *)(a1 + 132);
  v27 = &v24[v25];
  *(_QWORD *)(a1 + 224) = v24;
  *(_QWORD *)(a1 + 232) = &v24[v25];
  *(_QWORD *)(a1 + 140) = v26;
  v9 = 0;
  v8 = 0;
  if ( v23 > 0 )
    goto LABEL_49;
  v31 = 0;
  while ( 1 )
  {
    v28 = *(wchar_t **)(a1 + 8);
    v37 = v28;
    if ( (unsigned __int64)v27 > *(_QWORD *)(a1 + 224) )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 200) + 32LL))(
             *(_QWORD *)(a1 + 200),
             a1 + 132);
      v28 = *(wchar_t **)(a1 + 8);
      if ( v9 == 3 )
      {
LABEL_53:
        v30 = *(const wchar_t **)(a1 + 208);
        v8 = *(_QWORD *)(a1 + 232) - (_QWORD)v30;
        if ( v5 <= v8 )
          v8 = v5;
        wmemcpy(v28, v30, v8);
        *(_QWORD *)(a1 + 224) = *(_QWORD *)(a1 + 208) + v8;
        goto LABEL_47;
      }
    }
    else if ( v9 == 3 )
    {
      goto LABEL_53;
    }
    v8 = v37 - v28;
    if ( v9 == 2 )
      break;
LABEL_47:
    if ( (v8 == 0) <= v31 )
      break;
    v27 = *(char **)(a1 + 232);
    v23 = 1;
LABEL_49:
    if ( (__int64)&v27[v23 - *(_QWORD *)(a1 + 208)] > *(_QWORD *)(a1 + 216) )
      sub_565AD8("basic_filebuf::underflow codecvt::max_length() is not valid");
    v29 = sub_51F714((FILE **)(a1 + 104), v27, v23);
    if ( v29 )
    {
      v31 = 0;
      if ( v29 == -1 )
        break;
    }
    else
    {
      v31 = 1;
    }
    v27 = (char *)(*(_QWORD *)(a1 + 232) + v29);
    *(_QWORD *)(a1 + 232) = v27;
  }
  if ( v8 > 0 )
    goto LABEL_18;
  if ( !v31 )
  {
    if ( v9 == 2 )
      sub_565AD8("basic_filebuf::underflow invalid byte sequence in file");
LABEL_58:
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

