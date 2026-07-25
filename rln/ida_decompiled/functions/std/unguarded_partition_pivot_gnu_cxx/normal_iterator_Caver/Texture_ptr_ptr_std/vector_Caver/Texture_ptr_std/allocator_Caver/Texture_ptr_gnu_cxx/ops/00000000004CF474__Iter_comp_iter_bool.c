/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CF474
 * Mangled: _ZSt27__unguarded_partition_pivotIN9__gnu_cxx17__normal_iteratorIPPN5Caver7TextureESt6vectorIS4_SaIS4_EEEENS0_5__ops15_Iter_comp_iterIPFbPKS3_SD_EEEET_SH_SH_T0_
 * Demangled: std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>(__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>)
 *
 * Callers: 1
 *   0x0000000000201650  std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>(__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>)
 *
 * Callees: 0
 *
 * Referenced strings: 16
 *   insn=0x00000000004CF48C string=0x00000000004CF490 "h"
 *   insn=0x00000000004CF490 string=0x00000000004CF494 ""
 *   insn=0x00000000004CF498 string=0x00000000004CF49C ""
 *   insn=0x00000000004CF4BC string=0x00000000004CF4C0 "a"
 *   insn=0x00000000004CF4E0 string=0x00000000004CF4E4 "#"
 *   insn=0x00000000004CF4E8 string=0x00000000004CF4EC "a"
 *   insn=0x00000000004CF500 string=0x00000000004CF504 ""
 *   insn=0x00000000004CF508 string=0x00000000004CF50C "a"
 *   insn=0x00000000004CF514 string=0x00000000004CF518 "@"
 *   insn=0x00000000004CF518 string=0x00000000004CF540 "i"
 *   insn=0x00000000004CF52C string=0x00000000004CF530 "a"
 *   insn=0x00000000004CF544 string=0x00000000004CF548 "h"
 *   insn=0x00000000004CF54C string=0x00000000004CF550 ""
 *   insn=0x00000000004CF578 string=0x00000000004CF57C "a"
 *   insn=0x00000000004CF590 string=0x00000000004CF594 "h"
 *   insn=0x00000000004CF59C string=0x00000000004CF5A0 "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>(
        __int64 *a1,
        __int64 *a2,
        __int64 (__fastcall *a3)(__int64, __int64))
{
  __int64 *v3; // x19
  __int64 v5; // x23
  __int64 *v6; // x21
  __int64 v8; // x10
  __int64 i; // x0
  __int64 v10; // x9
  char v11; // w0
  __int64 v12; // x8
  char v13; // w0
  __int64 v14; // t1
  __int64 v15; // t1
  __int64 v16; // x9

  v3 = a2;
  v5 = (a2 - a1) / 2;
  v6 = a1 + 1;
  if ( (a3(a1[1], a1[v5]) & 1) != 0 )
  {
    if ( (a3(a1[v5], *(v3 - 1)) & 1) != 0 )
    {
      v8 = *a1;
      *a1 = a1[v5];
      a1[v5] = v8;
      i = *v6;
      goto LABEL_12;
    }
    v11 = a3(a1[1], *(v3 - 1));
    v12 = *a1;
    if ( (v11 & 1) == 0 )
    {
      *a1 = a1[1];
      a1[1] = v12;
      i = *v6;
      goto LABEL_12;
    }
    goto LABEL_9;
  }
  if ( (a3(*v6, *(v3 - 1)) & 1) != 0 )
  {
    v10 = *a1;
    *a1 = a1[1];
    a1[1] = v10;
    i = *v6;
    goto LABEL_12;
  }
  v13 = a3(a1[v5], *(v3 - 1));
  v12 = *a1;
  if ( (v13 & 1) != 0 )
  {
LABEL_9:
    *a1 = *(v3 - 1);
    *(v3 - 1) = v12;
    i = *v6;
    goto LABEL_12;
  }
  *a1 = a1[v5];
  a1[v5] = v12;
  for ( i = *v6; ; i = *v6 )
  {
LABEL_12:
    while ( (a3(i, *a1) & 1) != 0 )
    {
      v14 = v6[1];
      ++v6;
      i = v14;
    }
    do
      v15 = *--v3;
    while ( (a3(*a1, v15) & 1) != 0 );
    if ( v3 <= v6 )
      break;
    v16 = *v6;
    *v6++ = *v3;
    *v3 = v16;
  }
  return v6;
}

