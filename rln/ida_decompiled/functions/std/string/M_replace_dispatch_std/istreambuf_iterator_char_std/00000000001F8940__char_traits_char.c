/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8940
 * Mangled: ._ZNSs19_M_replace_dispatchISt19istreambuf_iteratorIcSt11char_traitsIcEEEERSsN9__gnu_cxx17__normal_iteratorIPcSsEES8_T_S9_St12__false_type
 * Demangled: std::string::_M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>(__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>,std::istreambuf_iterator<char,std::char_traits<char>>,std::istreambuf_iterator<char,std::char_traits<char>>,std::__false_type)
 *
 * Callers: 1
 *   0x0000000000488F20  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *
 * Callees: 1
 *   0x0000000000489FE0  std::string::_M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>(__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>,std::istreambuf_iterator<char,std::char_traits<char>>,std::istreambuf_iterator<char,std::char_traits<char>>,std::__false_type)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8948 string=0x00000000001F894C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::string::_M_replace_dispatch<std::istreambuf_iterator<char>>()
{
  return _ZNSs19_M_replace_dispatchISt19istreambuf_iteratorIcSt11char_traitsIcEEEERSsN9__gnu_cxx17__normal_iteratorIPcSsEES8_T_S9_St12__false_type();
}

