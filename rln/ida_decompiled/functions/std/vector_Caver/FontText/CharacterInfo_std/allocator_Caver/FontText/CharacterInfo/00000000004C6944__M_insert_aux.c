/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C6944
 * Mangled: _ZNSt6vectorIN5Caver8FontText13CharacterInfoESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,Caver::FontText::CharacterInfo const&)
 *
 * Callers: 1
 *   0x00000000001FEEA0  std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,Caver::FontText::CharacterInfo const&)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000565294  sub_565294
 *
 * Referenced strings: 59
 *   insn=0x00000000004C695C string=0x00000000004C6960 "W"
 *   insn=0x00000000004C697C string=0x00000000004C6980 "@"
 *   insn=0x00000000004C6980 string=0x00000000004C6984 "\t"
 *   insn=0x00000000004C6988 string=0x00000000004C698C "\n-~)"
 *   insn=0x00000000004C6990 string=0x00000000004C6994 "\t"
 *   insn=0x00000000004C6998 string=0x00000000004C699C "\n"
 *   insn=0x00000000004C69D0 string=0x00000000004C6A20 "l"
 *   insn=0x00000000004C6A24 string=0x00000000004C6A28 "l"
 *   insn=0x00000000004C6A2C string=0x00000000004C6A30 "hB"
 *   insn=0x00000000004C6A30 string=0x00000000004C6A34 "i"
 *   insn=0x00000000004C6A34 string=0x00000000004C6A38 "jB"
 *   insn=0x00000000004C6A38 string=0x00000000004C6A3C "l"
 *   insn=0x00000000004C6A3C string=0x00000000004C6A40 "k"
 *   insn=0x00000000004C6A40 string=0x00000000004C6A44 "U"
 *   insn=0x00000000004C6A48 string=0x00000000004C6A4C ")"
 *   insn=0x00000000004C6A4C string=0x00000000004C6A58 ""
 *   insn=0x00000000004C6A58 string=0x00000000004C6A5C "\t"
 *   insn=0x00000000004C6A60 string=0x00000000004C6A64 ""
 *   insn=0x00000000004C6A64 string=0x00000000004C6A68 "+"
 *   insn=0x00000000004C6A68 string=0x00000000004C6A6C "}\t"
 *   insn=0x00000000004C6A90 string=0x00000000004C6A94 "x"
 *   insn=0x00000000004C6A98 string=0x00000000004C6A9C "h\t"
 *   insn=0x00000000004C6A9C string=0x00000000004C6AA0 "h"
 *   insn=0x00000000004C6AA0 string=0x00000000004C6AA4 "\n"
 *   insn=0x00000000004C6AA4 string=0x00000000004C6AA8 ""
 *   insn=0x00000000004C6AA8 string=0x00000000004C6AAC "@"
 *   insn=0x00000000004C6AB4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004C6AC0 string=0x00000000004C6AC4 ")W\t"
 *   insn=0x00000000004C6AC4 string=0x00000000004C6AC8 "("
 *   insn=0x00000000004C6ACC string=0x00000000004C6AD0 " A"
 *   insn=0x00000000004C6AD4 string=0x00000000004C6AD8 "("
 *   insn=0x00000000004C6ADC string=0x00000000004C6AE0 "("
 *   insn=0x00000000004C6AE4 string=0x00000000004C6AE8 "("
 *   insn=0x00000000004C6AF0 string=0x00000000004C6AF4 "?"
 *   insn=0x00000000004C6AF8 string=0x00000000004C6AFC "*"
 *   insn=0x00000000004C6AFC string=0x00000000004C6B00 "\n"
 *   insn=0x00000000004C6B00 string=0x00000000004C6B04 " A"
 *   insn=0x00000000004C6B08 string=0x00000000004C6B0C "*"
 *   insn=0x00000000004C6B0C string=0x00000000004C6B10 "\n"
 *   insn=0x00000000004C6B10 string=0x00000000004C6B14 "*"
 *   insn=0x00000000004C6B14 string=0x00000000004C6B18 "\n"
 *   insn=0x00000000004C6B18 string=0x00000000004C6B1C "*"
 *   insn=0x00000000004C6B1C string=0x00000000004C6B20 ")"
 *   insn=0x00000000004C6B20 string=0x00000000004C6B24 "?"
 *   insn=0x00000000004C6B24 string=0x00000000004C6B28 "\n"
 *   insn=0x00000000004C6B28 string=0x00000000004C6B2C ""
 *   insn=0x00000000004C6B2C string=0x00000000004C6B30 "a"
 *   insn=0x00000000004C6B38 string=0x00000000004C6B3C "?"
 *   insn=0x00000000004C6B40 string=0x00000000004C6B44 "h"
 *   insn=0x00000000004C6B48 string=0x00000000004C6B4C "`B"
 *   insn=0x00000000004C6B50 string=0x00000000004C6B54 "h"
 *   insn=0x00000000004C6B58 string=0x00000000004C6B5C "h"
 *   insn=0x00000000004C6B60 string=0x00000000004C6B64 "h"
 *   insn=0x00000000004C6B64 string=0x00000000004C6B68 "s"
 *   insn=0x00000000004C6B74 string=0x00000000004C6B78 "a"
 *   insn=0x00000000004C6B7C string=0x00000000004C6B80 "@"
 *   insn=0x00000000004C6B84 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004C6B88 string=0x00000000004C6B8C "W"
 *   insn=0x00000000004C6BC4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<Caver::FontText::CharacterInfo>::_M_insert_aux(__int64 *a1, _BYTE *a2, char *a3)
{
  char *v5; // x19
  __int64 v6; // x8
  __int128 v7; // q0
  int v8; // w10
  int v9; // w11
  __int64 v10; // x12
  __int64 v11; // x13
  char v12; // w12
  __int64 v13; // x8
  __int64 v14; // x9
  __int64 v15; // x10
  __int64 v16; // x11
  __int64 v17; // x13
  signed __int64 v18; // x14
  __int128 v19; // q0
  __int64 v20; // x16
  __int64 v21; // x17
  bool v22; // zf
  __int64 v23; // x8
  unsigned __int64 v24; // x8
  __int64 v25; // x12
  bool v26; // cf
  unsigned __int64 v27; // x8
  int v28; // w12
  unsigned __int64 v29; // x24
  unsigned __int64 v30; // x25
  __int64 v31; // x21
  unsigned __int64 v32; // x9
  char *v33; // x9
  __int64 i; // x8
  __int64 v35; // x10
  char *v36; // x9
  __int64 j; // x22
  __int64 v38; // x8
  __int16 v39; // [xsp+4h] [xbp-4Ch]
  char v40; // [xsp+6h] [xbp-4Ah]

  v5 = a2;
  _ReadStatusReg(TPIDR_EL0);
  v6 = a1[1];
  if ( v6 == a1[2] )
  {
    v23 = v6 - *a1;
    v22 = v23 == 0;
    v24 = 0x8E38E38E38E38E39LL * (v23 >> 2);
    if ( v22 )
      v25 = 1;
    else
      v25 = v24;
    v26 = __CFADD__(v25, v24);
    v27 = v25 + v24;
    v28 = v26;
    if ( v28 | (v27 > 0x71C71C71C71C71CLL) )
      v29 = 0x71C71C71C71C71CLL;
    else
      v29 = v27;
    if ( v29 > 0x71C71C71C71C71CLL )
      sub_565294(a1, a2, a3);
    v30 = 0x8E38E38E38E38E39LL * ((__int64)&a2[-*a1] >> 2);
    v31 = operator new(36 * v29);
    v32 = v31 + 36 * v30;
    *(_BYTE *)v32 = *a3;
    *(_OWORD *)(v32 + 4) = *(_OWORD *)(a3 + 4);
    *(_DWORD *)(v32 + 20) = *((_DWORD *)a3 + 5);
    *(_DWORD *)(v32 + 24) = *((_DWORD *)a3 + 6);
    *(_QWORD *)(v32 + 28) = *(_QWORD *)(a3 + 28);
    v33 = (char *)*a1;
    for ( i = v31; v33 != v5; i += 36 )
    {
      *(_BYTE *)i = *v33;
      *(_OWORD *)(i + 4) = *(_OWORD *)(v33 + 4);
      *(_DWORD *)(i + 20) = *((_DWORD *)v33 + 5);
      *(_DWORD *)(i + 24) = *((_DWORD *)v33 + 6);
      v35 = *(_QWORD *)(v33 + 28);
      v33 += 36;
      *(_QWORD *)(i + 28) = v35;
    }
    v36 = (char *)a1[1];
    for ( j = i + 36; v5 != v36; j += 36 )
    {
      *(_BYTE *)j = *v5;
      *(_OWORD *)(j + 4) = *(_OWORD *)(v5 + 4);
      *(_DWORD *)(j + 20) = *((_DWORD *)v5 + 5);
      *(_DWORD *)(j + 24) = *((_DWORD *)v5 + 6);
      v38 = *(_QWORD *)(v5 + 28);
      v5 += 36;
      *(_QWORD *)(j + 28) = v38;
    }
    if ( *a1 )
      operator delete((void *)*a1);
    *a1 = v31;
    a1[1] = j;
    a1[2] = v31 + 36 * v29;
  }
  else
  {
    v7 = *(_OWORD *)(v6 - 32);
    v8 = *(_DWORD *)(v6 - 16);
    v9 = *(_DWORD *)(v6 - 12);
    v10 = *(_QWORD *)(v6 - 8);
    *(_BYTE *)v6 = *(_BYTE *)(v6 - 36);
    *(_OWORD *)(v6 + 4) = v7;
    *(_DWORD *)(v6 + 20) = v8;
    *(_DWORD *)(v6 + 24) = v9;
    *(_QWORD *)(v6 + 28) = v10;
    v11 = a1[1];
    a1[1] = v11 + 36;
    v12 = *a3;
    v13 = *(_QWORD *)(a3 + 4);
    v14 = *(_QWORD *)(a3 + 12);
    v15 = *(_QWORD *)(a3 + 20);
    v16 = *(_QWORD *)(a3 + 28);
    v17 = v11 - 36;
    if ( v17 - (__int64)a2 >= 1 )
    {
      v18 = (v17 - (__int64)a2) / 0x24uLL + 1;
      do
      {
        v19 = *(_OWORD *)(v17 - 36);
        v20 = *(_QWORD *)(v17 - 16);
        v21 = *(_QWORD *)(v17 - 8);
        --v18;
        *(_DWORD *)(v17 + 16) = *(_DWORD *)(v17 - 20);
        *(_OWORD *)v17 = v19;
        *(_QWORD *)(v17 + 20) = v20;
        *(_QWORD *)(v17 + 28) = v21;
        v17 -= 36;
      }
      while ( v18 > 1 );
    }
    *a2 = v12;
    a2[3] = v40;
    *(_QWORD *)(a2 + 4) = v13;
    *(_QWORD *)(a2 + 12) = v14;
    *(_QWORD *)(a2 + 20) = v15;
    *(_WORD *)(a2 + 1) = v39;
    *(_QWORD *)(a2 + 28) = v16;
  }
}

