/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002023D0
 * Mangled: ._ZSt16__introsort_loopIN9__gnu_cxx17__normal_iteratorIPN5boost13intrusive_ptrIN5Caver7TextureEEESt6vectorIS6_SaIS6_EEEElNS0_5__ops15_Iter_comp_iterIPFbRKS6_SF_EEEEvT_SJ_T0_T1_
 * Demangled: std::__introsort_loop<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *
 * Callers: 2
 *   0x00000000004CD7DC  Caver::TextureLibrary::RefreshUnusedTexturesList(void)
 *   0x00000000004CE724  std::__introsort_loop<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *
 * Callees: 1
 *   0x00000000004CE724  std::__introsort_loop<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *
 * Referenced strings: 1
 *   insn=0x00000000002023D8 string=0x00000000002023DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::__introsort_loop<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>()
{
  return _ZSt16__introsort_loopIN9__gnu_cxx17__normal_iteratorIPN5boost13intrusive_ptrIN5Caver7TextureEEESt6vectorIS6_SaIS6_EEEElNS0_5__ops15_Iter_comp_iterIPFbRKS6_SF_EEEEvT_SJ_T0_T1_();
}

