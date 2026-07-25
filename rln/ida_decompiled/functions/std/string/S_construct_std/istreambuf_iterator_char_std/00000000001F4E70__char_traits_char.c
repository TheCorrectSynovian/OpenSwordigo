/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4E70
 * Mangled: ._ZNSs12_S_constructISt19istreambuf_iteratorIcSt11char_traitsIcEEEEPcT_S5_RKSaIcESt18input_iterator_tag
 * Demangled: std::string::_S_construct<std::istreambuf_iterator<char,std::char_traits<char>>>(std::istreambuf_iterator<char,std::char_traits<char>>,std::istreambuf_iterator<char,std::char_traits<char>>,std::allocator<char> const&,std::input_iterator_tag)
 *
 * Callers: 1
 *   0x0000000000489FE0  std::string::_M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>(__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>,std::istreambuf_iterator<char,std::char_traits<char>>,std::istreambuf_iterator<char,std::char_traits<char>>,std::__false_type)
 *
 * Callees: 1
 *   0x0000000000489FE0  std::string::_M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>(__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>,std::istreambuf_iterator<char,std::char_traits<char>>,std::istreambuf_iterator<char,std::char_traits<char>>,std::__false_type)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4E78 string=0x00000000001F4E7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::string::_S_construct<std::istreambuf_iterator<char>>()
{
  JUMPOUT(0x48A174);
}

