/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201910
 * Mangled: ._ZNSt6vectorIN5Caver8FontText8LineInfoESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::FontText::LineInfo,std::allocator<Caver::FontText::LineInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FontText::LineInfo*,std::vector<Caver::FontText::LineInfo,std::allocator<Caver::FontText::LineInfo>>>,Caver::FontText::LineInfo const&)
 *
 * Callers: 1
 *   0x00000000004C53E4  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000004C67FC  std::vector<Caver::FontText::LineInfo,std::allocator<Caver::FontText::LineInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FontText::LineInfo*,std::vector<Caver::FontText::LineInfo,std::allocator<Caver::FontText::LineInfo>>>,Caver::FontText::LineInfo const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201918 string=0x000000000020191C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall std::vector<Caver::FontText::LineInfo>::_M_insert_aux(int a1, void *a2)
{
  return _ZNSt6vectorIN5Caver8FontText8LineInfoESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_(
           a1,
           a2);
}

