/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055EAE0
 * Mangled: sub_55EAE0
 * Demangled: sub_55EAE0
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x0000000000201760  .memcpy
 *   0x000000000051F714  sub_51F714
 *   0x000000000054AD98  sub_54AD98
 *   0x00000000005652C8  sub_5652C8
 *   0x0000000000565AD8  sub_565AD8
 *
 * Referenced strings: 29
 *   insn=0x000000000055EB00 string=0x000000000055EB04 "!"
 *   insn=0x000000000055EB04 string=0x000000000055EB08 "_"
 *   insn=0x000000000055EB0C string=0x000000000055EB10 "m"
 *   insn=0x000000000055EB18 string=0x000000000055EB1C "@"
 *   insn=0x000000000055EB30 string=0x000000000055EB34 "B"
 *   insn=0x000000000055EB54 string=0x000000000055EB58 ")\t"
 *   insn=0x000000000055EB58 string=0x000000000055EC7C " "
 *   insn=0x000000000055EB60 string=0x000000000055EB64 "m"
 *   insn=0x000000000055EB68 string=0x000000000055EB6C "@"
 *   insn=0x000000000055EB6C string=0x000000000055ED74 "U"
 *   insn=0x000000000055EB70 string=0x000000000055EB74 "!"
 *   insn=0x000000000055EB74 string=0x000000000055EB78 " "
 *   insn=0x000000000055EB80 string=0x000000000055EB84 "w"
 *   insn=0x000000000055EBC0 string=0x000000000055EBC4 " "
 *   insn=0x000000000055EBC8 string=0x000000000055EBA0 "s"
 *   insn=0x000000000055EC18 string=0x000000000055EC1C "B4@"
 *   insn=0x000000000055EC1C string=0x000000000055EC20 "@"
 *   insn=0x000000000055EC58 string=0x000000000055EC5C "O"
 *   insn=0x000000000055EC84 string=0x000000000055EC88 "5"
 *   insn=0x000000000055EC8C string=0x000000000055EC90 "S"
 *   insn=0x000000000055ECA4 string=0x000000000055ECA8 "!"
 *   insn=0x000000000055ECC4 string=0x000000000055ECC8 "s"
 *   insn=0x000000000055ECE8 string=0x000000000055ECEC " "
 *   insn=0x000000000055ECEC string=0x000000000055ECF0 "?"
 *   insn=0x000000000055ED10 string=0x000000000055ED14 " "
 *   insn=0x000000000055ED3C string=0x000000000055ED40 "?"
 *   insn=0x000000000055ED4C string=0x000000000055ED50 "!"
 *   insn=0x000000000055ED68 string=0x000000000055ED70 "Z"
 *   insn=0x000000000055ED68 string=0x000000000059F700 "basic_filebuf::xsgetn error reading the file"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55EAE0(__int64 a1, _BYTE *a2, __int64 a3)
{
  signed __int64 v5; // x19
  _BYTE *v6; // x0
  _BYTE *v7; // x1
  __int64 v8; // x21
  __int64 v9; // x2
  bool v10; // zf
  __int64 v11; // x0
  unsigned __int64 v12; // x0
  int v13; // w23
  __int64 v14; // x0
  __int64 v15; // x0
  _BYTE *v16; // x1
  _BYTE *v17; // x0
  size_t v18; // x23
  ssize_t v19; // x0
  __int64 v20; // x0
  __int64 result; // x0
  __int64 v22; // x0
  int v23; // w1
  void *v24; // x0
  __int64 v25; // x0
  unsigned __int64 v26; // x1
  __int64 v27; // x0

  v5 = a3;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v6 = *(_BYTE **)(a1 + 16);
    if ( a3 <= 0 )
    {
      v8 = 0;
      v7 = *(_BYTE **)(a1 + 8);
    }
    else
    {
      v7 = *(_BYTE **)(a1 + 8);
      if ( v6 == v7 )
      {
        v8 = 1;
        *a2 = *v6;
        v5 = a3 - 1;
        ++a2;
        v23 = *(unsigned __int8 *)(a1 + 192);
        v6 = (_BYTE *)(*(_QWORD *)(a1 + 16) + 1LL);
        *(_QWORD *)(a1 + 16) = v6;
        if ( !v23 )
          goto LABEL_8;
        v7 = *(_BYTE **)(a1 + 8);
      }
      else
      {
        v8 = 0;
      }
    }
    v9 = *(_QWORD *)(a1 + 176);
    v10 = v6 == v7;
    v11 = *(_QWORD *)(a1 + 184);
    if ( !v10 )
      ++v9;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(a1 + 176) = v9;
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 24) = v11;
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
LABEL_8:
  v12 = *(_QWORD *)(a1 + 160);
  v13 = *(_DWORD *)(a1 + 120);
  if ( v12 <= 1 )
    v14 = 1;
  else
    v14 = v12 - 1;
  if ( v5 <= v14 )
    goto LABEL_26;
  v15 = *(_QWORD *)(a1 + 200);
  if ( !v15 )
    sub_5652C8(0);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 48LL))(v15) || (v13 & 8) == 0 )
  {
LABEL_26:
    v8 += sub_54AD98((_QWORD *)a1, a2, v5);
    return v8;
  }
  v16 = *(_BYTE **)(a1 + 16);
  v17 = *(_BYTE **)(a1 + 24);
  v18 = v17 - v16;
  if ( v17 != v16 )
  {
    v24 = a2;
    a2 += v18;
    v8 += v18;
    memcpy(v24, v16, v18);
    v5 -= v18;
    *(_QWORD *)(a1 + 16) += v18;
  }
  while ( 1 )
  {
    v19 = sub_51F714((FILE **)(a1 + 104), a2, v5);
    if ( v19 == -1 )
      sub_565AD8("basic_filebuf::xsgetn error reading the file");
    if ( !v19 )
      break;
    v5 -= v19;
    v8 += v19;
    if ( !v5 )
      goto LABEL_32;
    a2 += v19;
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
LABEL_32:
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
      *(_QWORD *)(a1 + 48) = v27 + v26 - 1;
      goto LABEL_35;
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
LABEL_35:
  *(_BYTE *)(a1 + 169) = 1;
  return v8;
}

