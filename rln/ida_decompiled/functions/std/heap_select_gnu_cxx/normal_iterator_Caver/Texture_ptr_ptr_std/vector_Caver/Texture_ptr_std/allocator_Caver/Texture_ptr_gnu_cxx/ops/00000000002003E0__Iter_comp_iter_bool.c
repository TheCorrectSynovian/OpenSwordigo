/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002003E0
 * Mangled: ._ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPPN5Caver7TextureESt6vectorIS4_SaIS4_EEEENS0_5__ops15_Iter_comp_iterIPFbPKS3_SD_EEEEvT_SH_SH_T0_
 * Demangled: std::__heap_select<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>(__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>)
 *
 * Callers: 1
 *   0x00000000004CF2CC  std::__introsort_loop<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>(__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>)
 *
 * Callees: 1
 *   0x00000000004CF5C4  std::__heap_select<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>(__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>)
 *
 * Referenced strings: 1
 *   insn=0x00000000002003E8 string=0x00000000002003EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::__heap_select<__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*,Caver::Texture const*)>>()
{
  return _ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPPN5Caver7TextureESt6vectorIS4_SaIS4_EEEENS0_5__ops15_Iter_comp_iterIPFbPKS3_SD_EEEEvT_SH_SH_T0_();
}

