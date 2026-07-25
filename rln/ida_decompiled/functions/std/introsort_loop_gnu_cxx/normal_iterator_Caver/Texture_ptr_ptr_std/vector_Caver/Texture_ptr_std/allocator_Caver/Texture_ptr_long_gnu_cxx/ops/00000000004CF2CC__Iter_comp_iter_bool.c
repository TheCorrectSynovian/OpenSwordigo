/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CF2CC
 * Mangled: _ZSt16__introsort_loopIN9__gnu_cxx17__normal_iteratorIPPN5Caver7TextureESt6vectorIS4_SaIS4_EEEElNS0_5__ops15_Iter_comp_iterIPFbPKS3_SD_EEEEvT_SH_T0_T1_
 * Demangled: std::__introsort_loop<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>(__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>)
 *
 * Callers: 1
 *   0x00000000001F8A70  std::__introsort_loop<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>(__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>)
 *
 * Callees: 3
 *   0x00000000001F8A70  std::__introsort_loop<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>(__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>)
 *   0x00000000002003E0  std::__heap_select<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>(__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>)
 *   0x0000000000201650  std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>(__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>)
 *
 * Referenced strings: 21
 *   insn=0x00000000004CF300 string=0x00000000004CF304 "V"
 *   insn=0x00000000004CF330 string=0x00000000001F8A70 "0'"
 *   insn=0x00000000004CF340 string=0x00000000004CF344 ","
 *   insn=0x00000000004CF344 string=0x00000000004CF348 "C"
 *   insn=0x00000000004CF350 string=0x00000000004CF354 "#"
 *   insn=0x00000000004CF360 string=0x00000000004CF364 "Z"
 *   insn=0x00000000004CF364 string=0x00000000004CF368 "Y"
 *   insn=0x00000000004CF368 string=0x00000000004CF36C "?"
 *   insn=0x00000000004CF36C string=0x00000000004CF370 "H"
 *   insn=0x00000000004CF370 string=0x00000000004CF374 "_E"
 *   insn=0x00000000004CF384 string=0x00000000004CF388 ""
 *   insn=0x00000000004CF3A0 string=0x00000000004CF3A4 "`"
 *   insn=0x00000000004CF3BC string=0x00000000004CF3C0 "k"
 *   insn=0x00000000004CF3C8 string=0x00000000004CF3DC "H"
 *   insn=0x00000000004CF3D4 string=0x00000000004CF3D8 "w"
 *   insn=0x00000000004CF3E0 string=0x00000000004CF3E4 "("
 *   insn=0x00000000004CF3F0 string=0x00000000004CF3F4 ""
 *   insn=0x00000000004CF408 string=0x00000000004CF40C ""
 *   insn=0x00000000004CF410 string=0x00000000004CF414 ""
 *   insn=0x00000000004CF420 string=0x00000000004CF424 "`"
 *   insn=0x00000000004CF44C string=0x00000000004CF450 "L"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>(
        __int64 result,
        char *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(_QWORD, __int64))
{
  char *v4; // x21
  char *v5; // x20
  __int64 i; // x22
  __int64 v8; // x23
  __int64 v9; // x22
  __int64 v10; // t1
  __int64 v11; // x26
  __int64 v12; // x8
  __int64 v13; // x28
  __int64 v14; // x27
  __int64 v15; // x24
  __int64 v16; // x23
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // x25
  bool v20; // cc

  v4 = a2;
  v5 = (char *)result;
  if ( (__int64)&a2[-result] >= 129 )
  {
    for ( i = a3 - 1; i != -1; --i )
    {
      v8 = std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>();
      result = std::__introsort_loop<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>();
      v4 = (char *)v8;
      if ( v8 - (__int64)v5 <= 128 )
        return result;
    }
    result = std::__heap_select<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>();
    while ( 1 )
    {
      v10 = *((_QWORD *)v4 - 1);
      v4 -= 8;
      v9 = v10;
      v11 = (v4 - v5) >> 3;
      v12 = v11 - 1 >= 0 ? v11 - 1 : (v4 - v5) >> 3;
      *(_QWORD *)v4 = *(_QWORD *)v5;
      if ( v4 - v5 >= 17 )
        break;
      v15 = 0;
      v16 = v4 - v5;
      if ( (((_BYTE)v4 - (_BYTE)v5) & 8) == 0 )
        goto LABEL_18;
LABEL_22:
      if ( v15 >= 1 )
      {
        while ( 1 )
        {
          v18 = v15 - 1;
          if ( v15 - 1 < 0 )
            v18 = v15;
          v19 = v18 >> 1;
          result = a4(*(_QWORD *)&v5[8 * (v18 >> 1)], v9);
          if ( (result & 1) == 0 )
            break;
          v20 = v15 <= 2;
          *(_QWORD *)&v5[8 * v15] = *(_QWORD *)&v5[8 * v19];
          v15 = v19;
          if ( v20 )
            goto LABEL_30;
        }
      }
      v19 = v15;
LABEL_30:
      *(_QWORD *)&v5[8 * v19] = v9;
      if ( v16 <= 8 )
        return result;
    }
    v13 = 0;
    v14 = v12 >> 1;
    do
    {
      v15 = (2 * v13) | 1;
      result = a4(*(_QWORD *)&v5[16 * v13 + 16], *(_QWORD *)&v5[8 * v15]);
      if ( (result & 1) == 0 )
        v15 = 2 * v13 + 2;
      *(_QWORD *)&v5[8 * v13] = *(_QWORD *)&v5[8 * v15];
      v13 = v15;
    }
    while ( v15 < v14 );
    v16 = v4 - v5;
    if ( (((_BYTE)v4 - (_BYTE)v5) & 8) != 0 )
      goto LABEL_22;
LABEL_18:
    v17 = v11 - 2;
    if ( v11 - 2 < 0 )
      v17 = v11 - 1;
    if ( v15 == v17 >> 1 )
    {
      *(_QWORD *)&v5[8 * v15] = *(_QWORD *)&v5[8 * ((2 * v15) | 1)];
      v15 = (2 * v15) | 1;
    }
    goto LABEL_22;
  }
  return result;
}

