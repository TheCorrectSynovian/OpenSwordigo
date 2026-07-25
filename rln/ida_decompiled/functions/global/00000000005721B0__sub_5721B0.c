/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005721B0
 * Mangled: sub_5721B0
 * Demangled: sub_5721B0
 *
 * Callers: 2
 *   0x0000000000574B04  sub_574B04
 *   0x0000000000576A34  sub_576A34
 *
 * Callees: 0
 *
 * Referenced strings: 112
 *   insn=0x00000000005721B0 string=0x00000000005721B4 "C"
 *   insn=0x00000000005721BC string=0x00000000005721CC "C"
 *   insn=0x00000000005721D0 string=0x00000000005721D4 "C"
 *   insn=0x00000000005721D8 string=0x00000000005721DC "C"
 *   insn=0x00000000005721E0 string=0x00000000005721E4 "B"
 *   insn=0x00000000005721E4 string=0x00000000005721E8 "E"
 *   insn=0x00000000005721F0 string=0x00000000005721F4 "i"
 *   insn=0x00000000005721F4 string=0x00000000005721F8 "_|"
 *   insn=0x00000000005721F4 string=0x0000000000572200 "_|"
 *   insn=0x00000000005721FC string=0x000000000057245C "C"
 *   insn=0x0000000000572208 string=0x000000000057220C "ahS"
 *   insn=0x0000000000572210 string=0x0000000000572214 "F"
 *   insn=0x0000000000572214 string=0x0000000000572218 "!"
 *   insn=0x0000000000572218 string=0x000000000057221C "dhS"
 *   insn=0x0000000000572220 string=0x0000000000572224 "!"
 *   insn=0x000000000057222C string=0x0000000000572230 "!"
 *   insn=0x0000000000572234 string=0x0000000000572238 "("
 *   insn=0x0000000000572238 string=0x000000000057223C "A"
 *   insn=0x000000000057225C string=0x0000000000572270 "E"
 *   insn=0x0000000000572264 string=0x0000000000572268 "_|"
 *   insn=0x000000000057226C string=0x00000000005722E8 "!"
 *   insn=0x000000000057227C string=0x0000000000572280 "?"
 *   insn=0x0000000000572284 string=0x0000000000572288 "a"
 *   insn=0x000000000057228C string=0x0000000000572290 "h"
 *   insn=0x0000000000572290 string=0x0000000000572294 "_"
 *   insn=0x0000000000572294 string=0x0000000000572298 "`"
 *   insn=0x0000000000572298 string=0x000000000057229C "_"
 *   insn=0x0000000000572298 string=0x0000000000572404 ""\n"
 *   insn=0x00000000005722A0 string=0x00000000005722A4 "_"
 *   insn=0x00000000005722A0 string=0x0000000000572410 ""\n"
 *   insn=0x00000000005722A8 string=0x00000000005722AC "_"
 *   insn=0x00000000005722A8 string=0x0000000000572338 ""\n"
 *   insn=0x00000000005722B0 string=0x00000000005722B4 "_"
 *   insn=0x00000000005722B0 string=0x0000000000572430 ""\n"
 *   insn=0x00000000005722B4 string=0x00000000005722B8 "@"
 *   insn=0x00000000005722B8 string=0x00000000005722BC "_"
 *   insn=0x00000000005722B8 string=0x0000000000572420 ""\n"
 *   insn=0x00000000005722BC string=0x00000000005722C0 "`"
 *   insn=0x00000000005722C0 string=0x00000000005722C4 "_"
 *   insn=0x00000000005722C0 string=0x000000000057244C ""\n"
 *   insn=0x00000000005722C8 string=0x00000000005722CC ""\n"
 *   insn=0x00000000005722CC string=0x00000000005722D4 "B@"
 *   insn=0x00000000005722CC string=0x00000000006B8760 "t"
 *   insn=0x00000000005722D4 string=0x00000000005722D8 ""
 *   insn=0x00000000005722D4 string=0x00000000006B88B0 "d"
 *   insn=0x00000000005722D8 string=0x0000000000572344 "F"
 *   insn=0x00000000005722DC string=0x00000000005722E0 "\t"
 *   insn=0x00000000005722EC string=0x00000000005722F0 "?"
 *   insn=0x00000000005722F0 string=0x00000000005722F4 "b"
 *   insn=0x00000000005722FC string=0x0000000000572300 "aXa"
 *   insn=0x0000000000572300 string=0x0000000000572304 "B"
 *   insn=0x000000000057231C string=0x0000000000572320 "!"
 *   insn=0x0000000000572320 string=0x0000000000572324 "!"
 *   insn=0x0000000000572324 string=0x0000000000572328 "!"
 *   insn=0x0000000000572328 string=0x000000000057232C "?"
 *   insn=0x0000000000572338 string=0x0000000000572340 "B"
 *   insn=0x0000000000572340 string=0x00000000006B87D0 "b"
 *   insn=0x0000000000572344 string=0x00000000005A09E8 "allocator"
 *   insn=0x0000000000572344 string=0x00000000005A0A10 "basic_string"
 *   insn=0x0000000000572344 string=0x00000000005A0AC0 "basic_istream"
 *   insn=0x0000000000572344 string=0x00000000005A0B18 "basic_ostream"
 *   insn=0x0000000000572344 string=0x00000000005A0B70 "basic_iostream"
 *   insn=0x000000000057234C string=0x0000000000572350 ""
 *   insn=0x0000000000572354 string=0x0000000000572358 "J0@"
 *   insn=0x0000000000572358 string=0x00000000006B87C8 "\t"
 *   insn=0x0000000000572358 string=0x00000000006B8870 ""
 *   insn=0x0000000000572358 string=0x00000000006B88A8 ""
 *   insn=0x0000000000572360 string=0x0000000000572364 "d|@"
 *   insn=0x0000000000572360 string=0x0000000000572398 "$"
 *   insn=0x0000000000572364 string=0x0000000000572368 "\t"
 *   insn=0x000000000057236C string=0x0000000000572370 "c"
 *   insn=0x0000000000572378 string=0x000000000057237C "'"
 *   insn=0x0000000000572380 string=0x0000000000572384 ""
 *   insn=0x0000000000572384 string=0x0000000000572388 "(i$"
 *   insn=0x000000000057239C string=0x00000000005723A0 "F"
 *   insn=0x000000000057239C string=0x00000000005723F8 "F"
 *   insn=0x00000000005723A0 string=0x00000000005723A4 "D @"
 *   insn=0x00000000005723A0 string=0x00000000005A06C0 "std"
 *   insn=0x00000000005723A0 string=0x00000000005A09D8 "std::allocator"
 *   insn=0x00000000005723A0 string=0x00000000005A09F8 "std::basic_string"
 *   insn=0x00000000005723A0 string=0x00000000005A0A30 "std::basic_string<char, std::char_traits<char>, std::allocator<char> >"
 *   insn=0x00000000005723A0 string=0x00000000005A0A88 "std::basic_istream<char, std::char_traits<char> >"
 *   insn=0x00000000005723A0 string=0x00000000005A0AE0 "std::basic_ostream<char, std::char_traits<char> >"
 *   insn=0x00000000005723A0 string=0x00000000005A0B38 "std::basic_iostream<char, std::char_traits<char> >"
 *   insn=0x00000000005723A4 string=0x00000000006B8828 "F"
 *   insn=0x00000000005723A4 string=0x00000000006B8860 "1"
 *   insn=0x00000000005723A4 string=0x00000000006B8898 "1"
 *   insn=0x00000000005723A4 string=0x00000000006B88D0 "2"
 *   insn=0x00000000005723AC string=0x00000000005723B0 "!"
 *   insn=0x00000000005723B4 string=0x00000000005723B8 "M"
 *   insn=0x00000000005723B8 string=0x00000000005723BC "b|@"
 *   insn=0x00000000005723C0 string=0x00000000005723C4 "G"
 *   insn=0x00000000005723C4 string=0x00000000005723C8 "a"
 *   insn=0x00000000005723D8 string=0x00000000005723DC "@"
 *   insn=0x00000000005723F0 string=0x00000000005723F4 "t"
 *   insn=0x00000000005723F8 string=0x00000000005723FC "D"
 *   insn=0x00000000005723F8 string=0x00000000005A0A20 "std::string"
 *   insn=0x00000000005723F8 string=0x00000000005A0A78 "std::istream"
 *   insn=0x00000000005723F8 string=0x00000000005A0AD0 "std::ostream"
 *   insn=0x00000000005723F8 string=0x00000000005A0B28 "std::iostream"
 *   insn=0x00000000005723FC string=0x00000000006B8818 ""
 *   insn=0x00000000005723FC string=0x00000000006B88C0 ""
 *   insn=0x0000000000572410 string=0x0000000000572418 "B"
 *   insn=0x0000000000572418 string=0x00000000006B8798 "a"
 *   insn=0x0000000000572420 string=0x0000000000572428 "B"
 *   insn=0x0000000000572428 string=0x00000000006B8840 "i"
 *   insn=0x0000000000572430 string=0x0000000000572438 "B"
 *   insn=0x0000000000572438 string=0x00000000006B8808 "s"
 *   insn=0x000000000057244C string=0x0000000000572454 "B`"
 *   insn=0x0000000000572454 string=0x00000000006B8878 "o"
 *   insn=0x000000000057245C string=0x0000000000572460 "c"
 *   insn=0x0000000000572464 string=0x0000000000572468 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5721B0(__int64 a1, int a2)
{
  _BYTE *v2; // x2
  __int64 v3; // x1
  int v5; // w2
  unsigned __int8 v6; // w5
  unsigned int v7; // w3
  unsigned int v8; // w6
  unsigned int v9; // w1
  int v10; // w2
  bool v11; // cc
  _BYTE *v12; // x4
  unsigned int v13; // w4
  unsigned __int64 v14; // x1
  _QWORD *v15; // x2
  unsigned int v16; // w1
  __int64 v17; // x1
  __int64 v18; // x6
  int v19; // w3
  __int64 v20; // x8
  int v21; // w5
  int v22; // w10
  __int64 v23; // x4
  __int64 v24; // x9
  __int64 v25; // x7
  __int64 v26; // x4
  __int64 v27; // x7
  __int64 v28; // x6
  int v29; // w4
  __int64 v30; // x5
  __int64 v31; // x2
  __int64 v32; // x0

  v2 = *(_BYTE **)(a1 + 24);
  if ( *v2 != 83 )
    return 0;
  *(_QWORD *)(a1 + 24) = v2 + 1;
  if ( !v2[1] )
  {
    v5 = 0;
    goto LABEL_16;
  }
  *(_QWORD *)(a1 + 24) = v2 + 2;
  v5 = (unsigned __int8)v2[1];
  v6 = v5 - 48;
  if ( (unsigned __int8)(v5 - 48) > 9u && v5 != 95 )
  {
    if ( (unsigned __int8)(v5 - 65) <= 0x19u )
      goto LABEL_8;
LABEL_16:
    v13 = a2 != 0;
    v14 = ((unsigned __int64)*(unsigned int *)(a1 + 16) >> 3) & 1;
    if ( v13 > (unsigned int)v14 )
      LODWORD(v14) = (unsigned __int8)(**(_BYTE **)(a1 + 24) - 67) <= 1u;
    switch ( v5 )
    {
      case 't':
        v15 = &unk_6B8760;
        break;
      case 'a':
        v15 = &unk_6B8798;
        break;
      case 'b':
        v15 = &unk_6B87D0;
        break;
      case 's':
        v15 = &unk_6B8808;
        break;
      case 'i':
        v15 = &unk_6B8840;
        break;
      case 'o':
        v15 = &unk_6B8878;
        break;
      case 'd':
        v15 = &unk_6B88B0;
        break;
      default:
        return 0;
    }
    v18 = v15[5];
    if ( v18 )
    {
      v19 = *(_DWORD *)(a1 + 40);
      v20 = 0;
      v21 = *(_DWORD *)(a1 + 44);
      v22 = *((_DWORD *)v15 + 12);
      if ( v19 < v21 )
      {
        v23 = v19;
        v24 = *(_QWORD *)(a1 + 32);
        v25 = 32LL * v19++;
        v26 = v25 - 8 * v23;
        *(_DWORD *)(a1 + 40) = v19;
        v27 = v24 + v26;
        if ( v24 + v26 )
        {
          *(_DWORD *)(v24 + v26) = 24;
          *(_QWORD *)(v27 + 8) = v18;
          v20 = v24 + v26;
          *(_DWORD *)(v27 + 16) = v22;
        }
      }
      *(_QWORD *)(a1 + 72) = v20;
    }
    else
    {
      v21 = *(_DWORD *)(a1 + 44);
      v19 = *(_DWORD *)(a1 + 40);
    }
    if ( (_DWORD)v14 )
    {
      v28 = v15[3];
      v29 = *((_DWORD *)v15 + 8);
    }
    else
    {
      v28 = v15[1];
      v29 = *((_DWORD *)v15 + 4);
    }
    *(_DWORD *)(a1 + 80) += v29;
    if ( v21 > v19 )
    {
      v30 = *(_QWORD *)(a1 + 32);
      v31 = 24LL * v19;
      *(_DWORD *)(a1 + 40) = v19 + 1;
      v32 = v30 + v31;
      v3 = 0;
      if ( v30 + v31 )
      {
        *(_DWORD *)(v30 + 24LL * v19) = 24;
        *(_QWORD *)(v32 + 8) = v28;
        v3 = v30 + v31;
        *(_DWORD *)(v32 + 16) = v29;
      }
      return v3;
    }
    return 0;
  }
  if ( v5 == 95 )
  {
    v16 = 0;
    goto LABEL_29;
  }
LABEL_8:
  v7 = 0;
  while ( 1 )
  {
    v8 = (unsigned __int8)(v5 - 65);
    v9 = 36 * v7 + v5 - 55;
    v10 = 36 * v7 + v5;
    if ( v6 > 9u )
    {
      if ( v8 > 0x19 )
        return 0;
    }
    else
    {
      v9 = v10 - 48;
    }
    v11 = v7 > v9;
    v5 = 0;
    v7 = v9;
    if ( v11 )
      return 0;
    v12 = *(_BYTE **)(a1 + 24);
    if ( *v12 )
    {
      *(_QWORD *)(a1 + 24) = v12 + 1;
      v5 = (unsigned __int8)*v12;
      if ( v5 == 95 )
        break;
    }
    v6 = v5 - 48;
  }
  v16 = v9 + 1;
LABEL_29:
  if ( v16 >= *(_DWORD *)(a1 + 56) )
    return 0;
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v16);
  ++*(_DWORD *)(a1 + 64);
  return v17;
}

