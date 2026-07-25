/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003EBEB4
 * Mangled: _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKSsSt6vectorISsSaISsEEEEPSsEET0_T_SC_SB_
 * Demangled: std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *)
 *
 * Callers: 1
 *   0x00000000001F3EC0  std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *)
 *
 * Callees: 10
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA120  .strcmp
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 38
 *   insn=0x00000000003EBEC8 string=0x00000000003EBECC "W"
 *   insn=0x00000000003EBEE4 string=0x00000000003EBEE8 "@"
 *   insn=0x00000000003EBF04 string=0x00000000003EBF08 "A"
 *   insn=0x00000000003EBF40 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003EBF44 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003EBF60 string=0x00000000003EBFA8 "h"
 *   insn=0x00000000003EBF68 string=0x00000000003EBF6C "\t"
 *   insn=0x00000000003EBF68 string=0x00000000003EBF88 "\t"
 *   insn=0x00000000003EBF6C string=0x00000000003EBF70 "*"
 *   insn=0x00000000003EBF70 string=0x00000000003EBF74 "\n"
 *   insn=0x00000000003EBF78 string=0x00000000003EBF7C "?"
 *   insn=0x00000000003EBF80 string=0x00000000003EBFB8 "s""
 *   insn=0x00000000003EBF88 string=0x00000000003EBF8C "*"
 *   insn=0x00000000003EBF8C string=0x00000000003EBF90 "\n"
 *   insn=0x00000000003EBF90 string=0x00000000003EBF94 "?"
 *   insn=0x00000000003EBFB4 string=0x00000000003EBF64 "!"
 *   insn=0x00000000003EBFBC string=0x00000000003EBFC0 "A"
 *   insn=0x00000000003EBFC8 string=0x00000000003EBFCC "qE"
 *   insn=0x00000000003EBFCC string=0x00000000001FD590 "0'"
 *   insn=0x00000000003EBFD0 string=0x00000000003EBFD4 "<V"
 *   insn=0x00000000003EBFE8 string=0x00000000003EBFEC "_"
 *   insn=0x00000000003EBFF4 string=0x00000000003EC00C "_"
 *   insn=0x00000000003EBFF8 string=0x00000000003EBFFC ""
 *   insn=0x00000000003EC000 string=0x00000000003EC004 "h"
 *   insn=0x00000000003EC010 string=0x00000000003EC028 "_"
 *   insn=0x00000000003EC014 string=0x00000000003EC018 "h\n"
 *   insn=0x00000000003EC01C string=0x00000000003EC020 "`"
 *   insn=0x00000000003EC02C string=0x00000000003EC030 "_"
 *   insn=0x00000000003EC030 string=0x00000000003EC034 "!"
 *   insn=0x00000000003EC034 string=0x00000000003EC038 "h"
 *   insn=0x00000000003EC03C string=0x00000000003EC040 ""
 *   insn=0x00000000003EC044 string=0x00000000003EC048 "*"
 *   insn=0x00000000003EC048 string=0x00000000003EC04C "!"
 *   insn=0x00000000003EC04C string=0x00000000003EC050 "_"
 *   insn=0x00000000003EC04C string=0x00000000005931C0 "N5boost3_bi6bind_tIvNS_4_mfi3mf3IvN5Caver22PurchaseViewControllerERKSsbS7_EENS0_5list4INS0_5valueIPS5_EENS_3argILi1EEENSD_ILi2EEENSD_ILi3EEEEEEE"
 *   insn=0x00000000003EC050 string=0x00000000003EC054 " "
 *   insn=0x00000000003EC054 string=0x00000000003EC058 "28"
 *   insn=0x00000000003EC058 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>,std::string *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // x22
  __int64 v5; // x20

  v4 = a1;
  _ReadStatusReg(TPIDR_EL0);
  if ( a1 == a2 )
    return a3;
  v5 = a3;
  do
  {
    sub_56A528(v5, v4);
    v4 += 8;
    v5 += 8;
  }
  while ( v4 != a2 );
  return v5;
}

