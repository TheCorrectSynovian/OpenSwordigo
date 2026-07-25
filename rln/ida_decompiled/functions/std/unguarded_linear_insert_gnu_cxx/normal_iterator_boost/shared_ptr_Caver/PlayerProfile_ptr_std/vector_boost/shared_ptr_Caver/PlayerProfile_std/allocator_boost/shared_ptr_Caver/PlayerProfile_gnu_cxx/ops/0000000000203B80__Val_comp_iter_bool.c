/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203B80
 * Mangled: ._ZSt25__unguarded_linear_insertIN9__gnu_cxx17__normal_iteratorIPN5boost10shared_ptrIN5Caver13PlayerProfileEEESt6vectorIS6_SaIS6_EEEENS0_5__ops14_Val_comp_iterIPFbRKS6_SF_EEEEvT_T0_
 * Demangled: std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *
 * Callers: 2
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *   0x00000000003A3B44  std::__insertion_sort<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *
 * Callees: 1
 *   0x00000000003A3B44  std::__insertion_sort<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203B88 string=0x0000000000203B8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>>>,__gnu_cxx::__ops::_Val_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>()
{
  JUMPOUT(0x3A3D7C);
}

