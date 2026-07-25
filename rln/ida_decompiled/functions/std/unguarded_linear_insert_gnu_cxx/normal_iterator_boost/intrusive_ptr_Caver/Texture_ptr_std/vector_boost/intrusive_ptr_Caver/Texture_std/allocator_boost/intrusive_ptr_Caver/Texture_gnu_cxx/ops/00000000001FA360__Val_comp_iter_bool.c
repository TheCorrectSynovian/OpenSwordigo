/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA360
 * Mangled: ._ZSt25__unguarded_linear_insertIN9__gnu_cxx17__normal_iteratorIPN5boost13intrusive_ptrIN5Caver7TextureEEESt6vectorIS6_SaIS6_EEEENS0_5__ops14_Val_comp_iterIPFbRKS6_SF_EEEEvT_T0_
 * Demangled: std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *
 * Callers: 2
 *   0x00000000004CD7DC  Caver::TextureLibrary::RefreshUnusedTexturesList(void)
 *   0x00000000004CE8DC  std::__make_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *
 * Callees: 1
 *   0x00000000004CE8DC  std::__make_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA368 string=0x00000000001FA36C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>>>,__gnu_cxx::__ops::_Val_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>()
{
  JUMPOUT(0x4CF02C);
}

