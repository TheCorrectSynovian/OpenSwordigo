/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002036F0
 * Mangled: ._ZNSt6vectorISsSaISsEE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKSsS1_EEEEPSsmT_S9_
 * Demangled: std::vector<std::string,std::allocator<std::string>>::_M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>>(ulong,__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>)
 *
 * Callers: 1
 *   0x0000000000428DF4  std::vector<std::string,std::allocator<std::string>>::operator=(std::vector<std::string,std::allocator<std::string>> const&)
 *
 * Callees: 1
 *   0x0000000000429048  std::vector<std::string,std::allocator<std::string>>::_M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>>(ulong,__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>)
 *
 * Referenced strings: 1
 *   insn=0x00000000002036F8 string=0x00000000002036FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<std::string>::_M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>>()
{
  return _ZNSt6vectorISsSaISsEE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKSsS1_EEEEPSsmT_S9_();
}

