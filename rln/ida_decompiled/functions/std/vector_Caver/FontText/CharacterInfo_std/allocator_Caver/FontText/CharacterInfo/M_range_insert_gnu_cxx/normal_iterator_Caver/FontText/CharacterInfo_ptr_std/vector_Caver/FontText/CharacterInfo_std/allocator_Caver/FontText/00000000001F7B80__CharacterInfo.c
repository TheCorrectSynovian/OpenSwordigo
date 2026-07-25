/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7B80
 * Mangled: ._ZNSt6vectorIN5Caver8FontText13CharacterInfoESaIS2_EE15_M_range_insertIN9__gnu_cxx17__normal_iteratorIPS2_S4_EEEEvS9_T_SA_St20forward_iterator_tag
 * Demangled: std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>::_M_range_insert<__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>>(__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,std::forward_iterator_tag)
 *
 * Callers: 1
 *   0x00000000004C53E4  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000004C6BCC  std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>::_M_range_insert<__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>>(__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,std::forward_iterator_tag)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7B88 string=0x00000000001F7B8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<Caver::FontText::CharacterInfo>::_M_range_insert<__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo>>>()
{
  return _ZNSt6vectorIN5Caver8FontText13CharacterInfoESaIS2_EE15_M_range_insertIN9__gnu_cxx17__normal_iteratorIPS2_S4_EEEEvS9_T_SA_St20forward_iterator_tag();
}

