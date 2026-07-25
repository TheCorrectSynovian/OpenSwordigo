/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CF5C4
 * Mangled: _ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPPN5Caver7TextureESt6vectorIS4_SaIS4_EEEENS0_5__ops15_Iter_comp_iterIPFbPKS3_SD_EEEEvT_SH_SH_T0_
 * Demangled: std::__heap_select<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>(__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>)
 *
 * Callers: 1
 *   0x00000000002003E0  std::__heap_select<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>(__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>)
 *
 * Callees: 0
 *
 * Referenced strings: 32
 *   insn=0x00000000004CF5F8 string=0x00000000004CF5FC ""
 *   insn=0x00000000004CF608 string=0x00000000004CF60C "H\t"
 *   insn=0x00000000004CF60C string=0x00000000004CF610 "I"
 *   insn=0x00000000004CF614 string=0x00000000004CF618 "("
 *   insn=0x00000000004CF618 string=0x00000000004CF61C "?"
 *   insn=0x00000000004CF620 string=0x00000000004CF624 "I"
 *   insn=0x00000000004CF624 string=0x00000000004CF628 ""
 *   insn=0x00000000004CF628 string=0x00000000004CF62C ";"
 *   insn=0x00000000004CF644 string=0x00000000004CF648 ""
 *   insn=0x00000000004CF664 string=0x00000000004CF668 "`"
 *   insn=0x00000000004CF680 string=0x00000000004CF684 "k"
 *   insn=0x00000000004CF6A8 string=0x00000000004CF6AC ""
 *   insn=0x00000000004CF6B0 string=0x00000000004CF6B4 ""
 *   insn=0x00000000004CF6C0 string=0x00000000004CF6C4 "`"
 *   insn=0x00000000004CF6E0 string=0x00000000004CF6E8 "("
 *   insn=0x00000000004CF6EC string=0x00000000004CF6F0 "Y"
 *   insn=0x00000000004CF700 string=0x00000000004CF704 "H"
 *   insn=0x00000000004CF704 string=0x00000000004CF708 "I\t"
 *   insn=0x00000000004CF70C string=0x00000000004CF710 "J"
 *   insn=0x00000000004CF710 string=0x00000000004CF714 "?"
 *   insn=0x00000000004CF714 string=0x00000000004CF718 ""
 *   insn=0x00000000004CF718 string=0x00000000004CF71C "Y"
 *   insn=0x00000000004CF720 string=0x00000000004CF724 ""
 *   insn=0x00000000004CF734 string=0x00000000004CF738 "!"
 *   insn=0x00000000004CF740 string=0x00000000004CF744 "`"
 *   insn=0x00000000004CF754 string=0x00000000004CF758 "?E"
 *   insn=0x00000000004CF75C string=0x00000000004CF760 "k"
 *   insn=0x00000000004CF764 string=0x00000000004CF768 ""
 *   insn=0x00000000004CF77C string=0x00000000004CF780 "`"
 *   insn=0x00000000004CF798 string=0x00000000004CF79C "k"
 *   insn=0x00000000004CF7D8 string=0x00000000004CF7DC "`"
 *   insn=0x00000000004CF80C string=0x00000000004CF810 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::__heap_select<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>(
        __int64 result,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 (__fastcall *a4)(__int64, __int64))
{
  __int64 *v4; // x21
  __int64 *v5; // x22
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 v9; // x26
  __int64 v10; // x27
  __int64 v11; // x8
  __int64 v12; // x25
  __int64 v13; // x23
  __int64 v14; // x24
  __int64 v15; // x20
  __int64 v16; // x8
  __int64 v17; // x20
  unsigned __int64 v18; // x20
  __int64 v19; // x10
  __int64 v20; // x8
  __int64 v21; // x25
  __int64 v22; // x26
  __int64 v23; // x27
  __int64 v24; // x20
  __int64 v25; // x23
  __int64 v26; // x24
  __int64 v27; // x8
  __int64 v28; // x24
  bool v29; // cc
  __int64 v30; // [xsp+0h] [xbp-70h]
  __int64 v31; // [xsp+8h] [xbp-68h]
  __int64 v33; // [xsp+18h] [xbp-58h]

  v4 = a2;
  v5 = (__int64 *)result;
  v33 = (__int64)a2 - result;
  v30 = ((__int64)a2 - result) >> 3;
  if ( (__int64)a2 - result >= 16 )
  {
    v7 = v30 - 2;
    v8 = v30 - 1;
    if ( v30 - 2 < 0 )
      v7 = v30 - 1;
    v9 = v7 >> 1;
    if ( v8 < 0 )
      v8 = ((__int64)a2 - result) >> 3;
    v10 = v8 >> 1;
    v31 = v7 | 1;
    v11 = v7 >> 1;
    do
    {
      v12 = v11;
      v13 = v5[v11];
      v14 = v11;
      if ( v10 > v11 )
      {
        v15 = v11;
        do
        {
          v14 = (2 * v15) | 1;
          result = a4(v5[2 * v15 + 2], v5[v14]);
          if ( (result & 1) == 0 )
            v14 = 2 * v15 + 2;
          v5[v15] = v5[v14];
          v15 = v14;
        }
        while ( v14 < v10 );
      }
      if ( (v33 & 8) == 0 && v14 == v9 )
      {
        v14 = v31;
        v5[v9] = v5[v31];
      }
      if ( v14 > v12 )
      {
        while ( 1 )
        {
          v16 = v14 - 1;
          if ( v14 - 1 < 0 )
            v16 = v14;
          v17 = v16 >> 1;
          result = a4(v5[v16 >> 1], v13);
          if ( (result & 1) == 0 )
            break;
          v5[v14] = v5[v17];
          v14 = v17;
          if ( v17 <= v12 )
            goto LABEL_22;
        }
      }
      v17 = v14;
LABEL_22:
      v11 = v12 - 1;
      v5[v17] = v13;
    }
    while ( v12 );
  }
  v18 = a3;
  if ( (unsigned __int64)v4 < a3 )
  {
    v19 = v30;
    v20 = v30 - 1;
    if ( v30 - 1 >= 0 )
      v19 = v30 - 1;
    if ( v30 - 2 >= 0 )
      v20 = v30 - 2;
    v21 = v19 >> 1;
    v22 = v20 >> 1;
    v23 = v20 | 1;
    while ( 1 )
    {
      result = a4(*v4, *v5);
      if ( (result & 1) != 0 )
        break;
LABEL_49:
      if ( (unsigned __int64)++v4 >= v18 )
        return result;
    }
    v25 = *v4;
    *v4 = *v5;
    if ( v33 < 17 )
    {
      v24 = 0;
      if ( (v33 & 8) != 0 )
      {
LABEL_40:
        if ( v24 >= 1 )
        {
          while ( 1 )
          {
            v27 = v24 - 1;
            if ( v24 - 1 < 0 )
              v27 = v24;
            v28 = v27 >> 1;
            result = a4(v5[v27 >> 1], v25);
            if ( (result & 1) == 0 )
              break;
            v29 = v24 <= 2;
            v5[v24] = v5[v28];
            v24 = v28;
            if ( v29 )
              goto LABEL_48;
          }
        }
        v28 = v24;
LABEL_48:
        v18 = a3;
        v5[v28] = v25;
        goto LABEL_49;
      }
    }
    else
    {
      v26 = 0;
      do
      {
        v24 = (2 * v26) | 1;
        result = a4(v5[2 * v26 + 2], v5[v24]);
        if ( (result & 1) == 0 )
          v24 = 2 * v26 + 2;
        v5[v26] = v5[v24];
        v26 = v24;
      }
      while ( v24 < v21 );
      if ( (v33 & 8) != 0 )
        goto LABEL_40;
    }
    if ( v24 == v22 )
    {
      v24 = v23;
      v5[v22] = v5[v23];
    }
    goto LABEL_40;
  }
  return result;
}

