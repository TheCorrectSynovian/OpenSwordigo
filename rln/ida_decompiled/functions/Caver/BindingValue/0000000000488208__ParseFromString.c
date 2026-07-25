/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000488208
 * Mangled: _ZN5Caver12BindingValue15ParseFromStringERKSsNS_16BindingValueTypeE
 * Demangled: Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *
 * Callers: 0
 *
 * Callees: 34
 *   0x00000000001F3CD0  Caver::BindingValue::ValueWithUInt(int)
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FAF30  boost::detail::lexical_cast<uint,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *   0x00000000001FB2C0  Caver::BindingValue::ValueWithInt(int)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x00000000002000F0  boost::detail::lexical_cast<float,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *   0x0000000000200260  Caver::Program::Program(std::string const&)
 *   0x0000000000200350  boost::detail::lexical_cast<int,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *   0x0000000000200F70  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x0000000000201100  Caver::Program::InitWithString(std::string const&,std::string *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000488AF4  boost::detail::sp_counted_impl_p<uint>::~sp_counted_impl_p()
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000541620  sub_541620
 *   0x00000000005459D8  sub_5459D8
 *   0x0000000000546A98  sub_546A98
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005689E0  sub_5689E0
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 197
 *   insn=0x0000000000488214 string=0x0000000000488218 "T"
 *   insn=0x0000000000488220 string=0x0000000000488224 "("
 *   insn=0x0000000000488234 string=0x0000000000488238 "j"
 *   insn=0x0000000000488238 string=0x0000000000488240 "Hy"
 *   insn=0x0000000000488240 string=0x0000000000488244 ""
 *   insn=0x0000000000488248 string=0x00000000004882AC "a"
 *   insn=0x000000000048829C string=0x00000000001FA5F0 "0'"
 *   insn=0x00000000004882A0 string=0x00000000004882A4 "3"
 *   insn=0x00000000004882AC string=0x000000000059692C "yes"
 *   insn=0x00000000004882B8 string=0x00000000004882BC "@"
 *   insn=0x00000000004882E4 string=0x00000000001FB2C0 "0'"
 *   insn=0x00000000004882F8 string=0x00000000001FAF30 "0'"
 *   insn=0x00000000004882FC string=0x0000000000488300 "t"
 *   insn=0x0000000000488300 string=0x00000000001F3CD0 "P'"
 *   insn=0x0000000000488310 string=0x0000000000488314 "w"
 *   insn=0x0000000000488318 string=0x000000000048831C "Y"
 *   insn=0x0000000000488324 string=0x0000000000000001 "ELF"
 *   insn=0x0000000000488328 string=0x000000000048832C "q"
 *   insn=0x0000000000488334 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000488344 string=0x0000000000488348 "_"
 *   insn=0x0000000000488360 string=0x0000000000488364 "V"
 *   insn=0x000000000048837C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000488394 string=0x0000000000488398 ")UD"
 *   insn=0x00000000004883A4 string=0x00000000004883A8 "(A"
 *   insn=0x00000000004883AC string=0x00000000004883B0 ""
 *   insn=0x00000000004883C0 string=0x00000000004883C4 "c"
 *   insn=0x00000000004883D4 string=0x00000000004883D8 "h"
 *   insn=0x00000000004883D8 string=0x00000000004883DC "j"
 *   insn=0x00000000004883DC string=0x00000000004883E0 "("
 *   insn=0x00000000004883E8 string=0x00000000004883EC "A"
 *   insn=0x00000000004883F0 string=0x00000000004883F4 "\t@"
 *   insn=0x0000000000488400 string=0x0000000000488404 ""
 *   insn=0x0000000000488408 string=0x000000000048840C "A"
 *   insn=0x0000000000488410 string=0x0000000000488414 "@"
 *   insn=0x0000000000488428 string=0x000000000048842C "i"
 *   insn=0x000000000048842C string=0x0000000000488430 "h"
 *   insn=0x0000000000488434 string=0x0000000000488438 "3"
 *   insn=0x0000000000488438 string=0x000000000048843C "h"
 *   insn=0x000000000048843C string=0x0000000000488440 ""
 *   insn=0x0000000000488440 string=0x0000000000488444 "h"
 *   insn=0x0000000000488448 string=0x000000000048844C "h"
 *   insn=0x0000000000488450 string=0x0000000000488454 "\t@"
 *   insn=0x0000000000488458 string=0x000000000048845C "h\n@"
 *   insn=0x000000000048845C string=0x0000000000488460 ""
 *   insn=0x0000000000488460 string=0x0000000000488464 "h\n"
 *   insn=0x0000000000488468 string=0x000000000048846C "h"
 *   insn=0x0000000000488470 string=0x0000000000488474 "@"
 *   insn=0x00000000004884A8 string=0x00000000004884AC "4"
 *   insn=0x00000000004884B0 string=0x00000000004884B4 ""
 *   insn=0x00000000004884C0 string=0x00000000004884C4 "\t@"
 *   insn=0x00000000004884D0 string=0x00000000004884D4 ""
 *   insn=0x00000000004884E0 string=0x00000000004884E4 "@"
 *   insn=0x00000000004884F8 string=0x00000000004884FC "9"
 *   insn=0x00000000004884FC string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000488500 string=0x0000000000488504 "k"
 *   insn=0x0000000000488504 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000048850C string=0x0000000000488510 " "
 *   insn=0x0000000000488510 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000488528 string=0x000000000048852C "T"
 *   insn=0x0000000000488534 string=0x0000000000488538 ""
 *   insn=0x0000000000488540 string=0x0000000000488544 "a"
 *   insn=0x000000000048854C string=0x0000000000488550 "h"
 *   insn=0x0000000000488568 string=0x000000000048857C "U"
 *   insn=0x0000000000488588 string=0x000000000048858C "4"
 *   insn=0x0000000000488590 string=0x0000000000488594 ""
 *   insn=0x00000000004885A0 string=0x00000000004885A4 "\t@"
 *   insn=0x00000000004885B0 string=0x00000000004885B4 ""
 *   insn=0x00000000004885C0 string=0x00000000004885C4 "@"
 *   insn=0x00000000004885D4 string=0x00000000004885D8 "4"
 *   insn=0x00000000004885DC string=0x00000000004885E0 ""
 *   insn=0x00000000004885EC string=0x00000000004885F0 "\t@"
 *   insn=0x00000000004885FC string=0x0000000000488600 ""
 *   insn=0x000000000048860C string=0x0000000000488610 "@"
 *   insn=0x0000000000488620 string=0x0000000000488624 ""
 *   insn=0x0000000000488624 string=0x0000000000488628 ")"
 *   insn=0x0000000000488638 string=0x000000000048863C ")=G"
 *   insn=0x000000000048863C string=0x0000000000488640 "!"
 *   insn=0x0000000000488640 string=0x0000000000488644 "i"
 *   insn=0x0000000000488644 string=0x0000000000488648 "\t"
 *   insn=0x0000000000488644 string=0x0000000000488670 "\t"
 *   insn=0x0000000000488648 string=0x000000000048864C "*"
 *   insn=0x000000000048864C string=0x0000000000488650 "\n"
 *   insn=0x0000000000488654 string=0x0000000000488658 "?"
 *   insn=0x0000000000488658 string=0x000000000048865C "l"
 *   insn=0x0000000000488660 string=0x0000000000488664 "P"
 *   insn=0x0000000000488670 string=0x0000000000488674 "*"
 *   insn=0x0000000000488674 string=0x0000000000488678 "\n"
 *   insn=0x0000000000488678 string=0x000000000048867C "?"
 *   insn=0x000000000048867C string=0x0000000000488680 ""
 *   insn=0x00000000004886A4 string=0x00000000004886A8 "U"
 *   insn=0x00000000004886BC string=0x00000000004886C0 ")"
 *   insn=0x00000000004886C0 string=0x00000000004886C4 "?%"
 *   insn=0x00000000004886C8 string=0x00000000004886CC "h"
 *   insn=0x00000000004886CC string=0x00000000004886D4 "\ty"
 *   insn=0x00000000004886D4 string=0x00000000004886D8 "("
 *   insn=0x00000000004886E0 string=0x00000000004886E4 ""
 *   insn=0x00000000004886E4 string=0x00000000004886E8 "a"
 *   insn=0x00000000004886E8 string=0x00000000004886EC "h"
 *   insn=0x00000000004886F8 string=0x00000000004886FC "a"
 *   insn=0x00000000004886FC string=0x0000000000488968 "Z"
 *   insn=0x0000000000488734 string=0x0000000000488738 "|"
 *   insn=0x0000000000488744 string=0x0000000000488748 "\t"
 *   insn=0x0000000000488748 string=0x000000000048874C ")"
 *   insn=0x000000000048874C string=0x0000000000488750 "\t"
 *   insn=0x0000000000488764 string=0x0000000000488768 "\t"
 *   insn=0x0000000000488768 string=0x000000000048876C ")"
 *   insn=0x000000000048876C string=0x0000000000488770 "\t"
 *   insn=0x0000000000488774 string=0x00000000004888EC "!"
 *   insn=0x0000000000488778 string=0x000000000048877C "k"
 *   insn=0x000000000048877C string=0x0000000000488780 "`"
 *   insn=0x0000000000488784 string=0x0000000000488788 ""
 *   insn=0x0000000000488788 string=0x000000000048878C ""
 *   insn=0x000000000048878C string=0x0000000000488790 "a"
 *   insn=0x000000000048878C string=0x000000000048890C "a"
 *   insn=0x00000000004887B0 string=0x00000000004887B4 "4Q"
 *   insn=0x00000000004887C8 string=0x00000000004887CC "w"
 *   insn=0x00000000004887E0 string=0x00000000004887E4 "\t"
 *   insn=0x00000000004887E4 string=0x00000000004887E8 "w"
 *   insn=0x0000000000488810 string=0x0000000000488814 "4M"
 *   insn=0x0000000000488820 string=0x0000000000488824 "h"
 *   insn=0x0000000000488844 string=0x0000000000488848 "u"
 *   insn=0x000000000048886C string=0x0000000000488870 "l"
 *   insn=0x0000000000488878 string=0x000000000048887C "W"
 *   insn=0x0000000000488880 string=0x0000000000488884 ""
 *   insn=0x000000000048888C string=0x0000000000488890 "\t"
 *   insn=0x0000000000488890 string=0x0000000000488894 "@"
 *   insn=0x0000000000488898 string=0x000000000048889C ")"
 *   insn=0x000000000048889C string=0x00000000004888A0 "J"
 *   insn=0x000000000048889C string=0x00000000006B7280 "X"
 *   insn=0x00000000004888A0 string=0x00000000004888A4 "hj)"
 *   insn=0x00000000004888A4 string=0x00000000004888A8 "JA"
 *   insn=0x00000000004888B4 string=0x00000000004888B8 ")"
 *   insn=0x00000000004888C8 string=0x00000000004888CC "%E"
 *   insn=0x00000000004888CC string=0x00000000004888D0 "`"
 *   insn=0x00000000004888D0 string=0x00000000004888D4 "A"
 *   insn=0x00000000004888DC string=0x00000000004888E0 "`b"
 *   insn=0x00000000004888E0 string=0x00000000004888E4 ">f"
 *   insn=0x0000000000488904 string=0x0000000000488908 "z"
 *   insn=0x000000000048890C string=0x0000000000596930 "no"
 *   insn=0x000000000048891C string=0x0000000000488920 "t"
 *   insn=0x0000000000488924 string=0x0000000000488928 ")=G"
 *   insn=0x0000000000488928 string=0x000000000048892C "!"
 *   insn=0x0000000000488930 string=0x0000000000488934 "\t"
 *   insn=0x0000000000488930 string=0x0000000000488948 "\t"
 *   insn=0x0000000000488934 string=0x0000000000488938 "*"
 *   insn=0x0000000000488938 string=0x000000000048893C "\n"
 *   insn=0x0000000000488944 string=0x0000000000488954 "?"
 *   insn=0x0000000000488948 string=0x000000000048894C "*"
 *   insn=0x000000000048894C string=0x0000000000488950 "\n"
 *   insn=0x0000000000488984 string=0x0000000000488988 "z"
 *   insn=0x0000000000488988 string=0x000000000048898C "X"
 *   insn=0x0000000000488990 string=0x0000000000488994 ""
 *   insn=0x000000000048899C string=0x00000000004889A0 "\t"
 *   insn=0x00000000004889A0 string=0x00000000004889A4 "@"
 *   insn=0x00000000004889A8 string=0x00000000004889AC ")"
 *   insn=0x00000000004889AC string=0x00000000004889B0 "J"
 *   insn=0x00000000004889B4 string=0x00000000004889B8 "JA"
 *   insn=0x00000000004889C4 string=0x00000000004889C8 "J"
 *   insn=0x00000000004889C8 string=0x00000000004889CC "(a"
 *   insn=0x00000000004889D8 string=0x00000000004889DC "J=G"
 *   insn=0x00000000004889DC string=0x00000000004889E0 ")!"
 *   insn=0x00000000004889E4 string=0x00000000004889E8 "*"
 *   insn=0x00000000004889E4 string=0x0000000000488A34 "*"
 *   insn=0x00000000004889E8 string=0x00000000004889EC "K"
 *   insn=0x00000000004889EC string=0x00000000004889F0 "+"
 *   insn=0x00000000004889F4 string=0x00000000004889F8 "_"
 *   insn=0x0000000000488A04 string=0x0000000000488A08 "g"
 *   insn=0x0000000000488A0C string=0x0000000000488A10 "%E"
 *   insn=0x0000000000488A18 string=0x0000000000488A1C "A"
 *   insn=0x0000000000488A2C string=0x0000000000488A30 "/"
 *   insn=0x0000000000488A34 string=0x0000000000488A38 "K"
 *   insn=0x0000000000488A38 string=0x0000000000488A3C "+"
 *   insn=0x0000000000488A3C string=0x0000000000488A40 "_"
 *   insn=0x0000000000488A4C string=0x0000000000488A50 "i"
 *   insn=0x0000000000488A54 string=0x0000000000488A58 "(a"
 *   insn=0x0000000000488A5C string=0x0000000000488A60 "`"
 *   insn=0x0000000000488A64 string=0x0000000000488A68 "J=G"
 *   insn=0x0000000000488A68 string=0x0000000000488A6C ")!"
 *   insn=0x0000000000488A6C string=0x0000000000488A70 "J"
 *   insn=0x0000000000488A70 string=0x0000000000488A74 "*"
 *   insn=0x0000000000488A70 string=0x0000000000488AD8 "*"
 *   insn=0x0000000000488A74 string=0x0000000000488A78 "K"
 *   insn=0x0000000000488A78 string=0x0000000000488A7C "+"
 *   insn=0x0000000000488A84 string=0x0000000000488ABC "_"
 *   insn=0x0000000000488A8C string=0x0000000000488A90 "(a"
 *   insn=0x0000000000488A9C string=0x0000000000488AA0 "J=G"
 *   insn=0x0000000000488AA0 string=0x0000000000488AA4 ")!"
 *   insn=0x0000000000488AA8 string=0x0000000000488AAC "*"
 *   insn=0x0000000000488AAC string=0x0000000000488AB0 "K"
 *   insn=0x0000000000488AB0 string=0x0000000000488AB4 "+"
 *   insn=0x0000000000488ABC string=0x0000000000488AC0 "l"
 *   insn=0x0000000000488AC8 string=0x0000000000488ACC "6"
 *   insn=0x0000000000488AD0 string=0x0000000000488AD4 "|"
 *   insn=0x0000000000488AD8 string=0x0000000000488ADC "K"
 *   insn=0x0000000000488ADC string=0x0000000000488AE0 "+"
 *   insn=0x0000000000488AE0 string=0x0000000000488AE4 "_"
 *   insn=0x0000000000488AEC string=0x0000000000488AF0 "u"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::BindingValue::ParseFromString(int a1@<W0>, int a2@<W1>, __int64 *a3@<X8>)
{
  const Caver::Program *v4; // x1
  bool v5; // w1
  Caver::BindingValue *v6; // x0
  int v7; // w1
  Caver::BindingValue *v8; // x0
  Caver::BindingValue *v9; // x0
  float v10; // s0
  _QWORD v11[6]; // [xsp+278h] [xbp-40h] BYREF

  v11[5] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 1:
      Caver::BindingValue::ValueWithString();
      break;
    case 2:
      v6 = (Caver::BindingValue *)boost::detail::lexical_cast<int,std::string,false,char>();
      Caver::BindingValue::ValueWithInt(a3, v6, v7);
      break;
    case 3:
      v8 = (Caver::BindingValue *)boost::detail::lexical_cast<unsigned int,std::string,false,char>();
      Caver::BindingValue::ValueWithUInt(v8);
      break;
    case 4:
      if ( (unsigned int)sub_5689E0(a1, "yes") )
        Caver::BindingValue::ValueWithBool(0, v5);
      else
        Caver::BindingValue::ValueWithBool((Caver::BindingValue *)((char *)&dword_0 + 1), v5);
      break;
    case 5:
      boost::detail::lexical_cast<float,std::string,false,char>();
      Caver::BindingValue::ValueWithFloat(v9, v10);
      break;
    case 6:
      Caver::Program::Program();
      Caver::BindingValue::ValueWithProgram((Caver::BindingValue *)v11, v4);
      Caver::Program::~Program((Caver::Program *)v11);
      break;
    default:
      *(_DWORD *)a3 = 0;
      a3[3] = 0;
      a3[4] = 0;
      a3[1] = 0;
      a3[2] = 0;
      break;
  }
}

