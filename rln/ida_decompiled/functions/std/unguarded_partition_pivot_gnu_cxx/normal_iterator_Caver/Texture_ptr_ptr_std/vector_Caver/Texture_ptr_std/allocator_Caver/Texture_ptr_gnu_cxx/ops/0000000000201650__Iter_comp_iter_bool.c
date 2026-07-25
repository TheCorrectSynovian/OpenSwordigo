/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201650
 * Mangled: ._ZSt27__unguarded_partition_pivotIN9__gnu_cxx17__normal_iteratorIPPN5Caver7TextureESt6vectorIS4_SaIS4_EEEENS0_5__ops15_Iter_comp_iterIPFbPKS3_SD_EEEET_SH_SH_T0_
 * Demangled: std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>(__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>)
 *
 * Callers: 1
 *   0x00000000004CF2CC  std::__introsort_loop<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>(__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>)
 *
 * Callees: 1
 *   0x00000000004CF474  std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>(__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201658 string=0x000000000020165C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>()
{
  return _ZSt27__unguarded_partition_pivotIN9__gnu_cxx17__normal_iteratorIPPN5Caver7TextureESt6vectorIS4_SaIS4_EEEENS0_5__ops15_Iter_comp_iterIPFbPKS3_SD_EEEET_SH_SH_T0_();
}

