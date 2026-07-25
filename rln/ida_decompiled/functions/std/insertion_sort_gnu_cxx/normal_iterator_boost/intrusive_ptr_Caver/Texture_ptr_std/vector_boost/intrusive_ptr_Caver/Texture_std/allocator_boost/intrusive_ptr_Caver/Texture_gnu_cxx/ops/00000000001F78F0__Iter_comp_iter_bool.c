/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F78F0
 * Mangled: ._ZSt16__insertion_sortIN9__gnu_cxx17__normal_iteratorIPN5boost13intrusive_ptrIN5Caver7TextureEEESt6vectorIS6_SaIS6_EEEENS0_5__ops15_Iter_comp_iterIPFbRKS6_SF_EEEEvT_SJ_T0_
 * Demangled: std::__insertion_sort<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *
 * Callers: 1
 *   0x00000000004CD7DC  Caver::TextureLibrary::RefreshUnusedTexturesList(void)
 *
 * Callees: 1
 *   0x00000000004CE8DC  std::__make_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F78F8 string=0x00000000001F78FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::__insertion_sort<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>()
{
  JUMPOUT(0x4CEE94);
}

