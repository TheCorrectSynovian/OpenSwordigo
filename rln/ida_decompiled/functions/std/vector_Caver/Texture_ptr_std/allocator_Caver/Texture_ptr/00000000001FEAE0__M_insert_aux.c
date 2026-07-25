/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEAE0
 * Mangled: ._ZNSt6vectorIPN5Caver7TextureESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Texture **,std::vector<Caver::Texture *,std::allocator<Caver::Texture *>>>,Caver::Texture * const&)
 *
 * Callers: 1
 *   0x00000000004CDAB4  Caver::TextureLibrary::PrintMemoryUsageStats(void)
 *
 * Callees: 1
 *   0x00000000004CE8DC  std::__make_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEAE8 string=0x00000000001FEAEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<Caver::Texture *>::_M_insert_aux()
{
  JUMPOUT(0x4CF184);
}

