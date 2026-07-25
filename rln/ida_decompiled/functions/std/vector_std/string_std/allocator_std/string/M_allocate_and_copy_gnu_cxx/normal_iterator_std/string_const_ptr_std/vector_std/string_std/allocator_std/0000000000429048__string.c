/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000429048
 * Mangled: _ZNSt6vectorISsSaISsEE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKSsS1_EEEEPSsmT_S9_
 * Demangled: std::vector<std::string,std::allocator<std::string>>::_M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>>(ulong,__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>)
 *
 * Callers: 1
 *   0x00000000002036F0  std::vector<std::string,std::allocator<std::string>>::_M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>>(ulong,__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>)
 *
 * Callees: 9
 *   0x00000000001F3EC0  std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *)
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 26
 *   insn=0x0000000000429060 string=0x0000000000429064 "("
 *   insn=0x0000000000429068 string=0x000000000042906C " "
 *   insn=0x0000000000429068 string=0x00000000004290A4 "|"
 *   insn=0x000000000042906C string=0x0000000000429070 "\1"
 *   insn=0x0000000000429070 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000042908C string=0x00000000001F3EC0 "P'"
 *   insn=0x00000000004290A8 string=0x00000000004290AC "s"
 *   insn=0x00000000004290A8 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004290B4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004290BC string=0x00000000004290C0 "4Q"
 *   insn=0x00000000004290C0 string=0x00000000001FD590 "0'"
 *   insn=0x00000000004290E8 string=0x00000000004290EC "=1"
 *   insn=0x00000000004290F0 string=0x00000000004290F4 ")"
 *   insn=0x0000000000429100 string=0x0000000000429104 "(A"
 *   insn=0x0000000000429108 string=0x000000000042910C ""
 *   insn=0x0000000000429124 string=0x0000000000429128 "t"
 *   insn=0x0000000000429124 string=0x0000000000429178 "~f"
 *   insn=0x0000000000429128 string=0x000000000042912C "4"
 *   insn=0x0000000000429130 string=0x0000000000429134 ""
 *   insn=0x0000000000429140 string=0x0000000000429144 "\t@"
 *   insn=0x0000000000429150 string=0x0000000000429154 ""
 *   insn=0x0000000000429160 string=0x0000000000429164 "@"
 *   insn=0x0000000000429170 string=0x0000000000429174 "O8"
 *   insn=0x0000000000429180 string=0x0000000000429184 "K8"
 *   insn=0x0000000000429198 string=0x000000000042919C "l"
 *   insn=0x000000000042919C string=0x00000000004291A0 "D8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::vector<std::string>::_M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>>(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3)
{
  __int64 v3; // x19

  if ( a2 )
  {
    if ( a2 >> 61 )
      sub_565294(a1, a2, a3);
    v3 = operator new(8 * a2);
  }
  else
  {
    v3 = 0;
  }
  std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>,std::string *>();
  return v3;
}

