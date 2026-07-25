/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC740
 * Mangled: ._ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPN5boost10shared_ptrIN5Caver13PlayerProfileEEESt6vectorIS6_SaIS6_EEEElS6_NS0_5__ops14_Iter_comp_valIPFbRKS6_SF_EEEEvT_T0_SK_T1_T2_
 * Demangled: std::__push_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,boost::shared_ptr<Caver::PlayerProfile>,__gnu_cxx::__ops::_Iter_comp_val<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,long,boost::shared_ptr<Caver::PlayerProfile>,__gnu_cxx::__ops::_Iter_comp_val<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *
 * Callers: 1
 *   0x00000000003A31E8  std::__make_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *
 * Callees: 1
 *   0x00000000003A31E8  std::__make_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC748 string=0x00000000001FC74C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::__push_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>>>,long,boost::shared_ptr<Caver::PlayerProfile>,__gnu_cxx::__ops::_Iter_comp_val<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>()
{
  JUMPOUT(0x3A38D4);
}

