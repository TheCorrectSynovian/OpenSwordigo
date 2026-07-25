/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEEA0
 * Mangled: ._ZNSt6vectorIN5Caver8FontText13CharacterInfoESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,Caver::FontText::CharacterInfo const&)
 *
 * Callers: 1
 *   0x00000000004C53E4  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000004C6944  std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,Caver::FontText::CharacterInfo const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEEA8 string=0x00000000001FEEAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<Caver::FontText::CharacterInfo>::_M_insert_aux()
{
  return _ZNSt6vectorIN5Caver8FontText13CharacterInfoESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_();
}

