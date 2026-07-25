/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004997FC
 * Mangled: _ZN5Caver23GUINavigationController26TransitionToViewControllerERKN5boost10shared_ptrINS_17GUIViewControllerEEEffb
 * Demangled: Caver::GUINavigationController::TransitionToViewController(boost::shared_ptr<Caver::GUIViewController> const&,float,float,bool)
 *
 * Callers: 1
 *   0x00000000001F5080  Caver::GUINavigationController::TransitionToViewController(boost::shared_ptr<Caver::GUIViewController> const&,float,float,bool)
 *
 * Callees: 10
 *   0x00000000001F3F00  ._ZN5boost8functionIFvPvPN5Caver8GUIEventEEEC2INS_3_bi6bind_tIvNS_4_mfi3mf3IvNS2_23GUINavigationControllerERKNS_10shared_ptrINS2_17GUIViewControllerEEES1_S4_EENS8_5list4INS8_5valueIPSC_EENSK_ISF_EENS_3argILi1EEENSO_ILi2EEEEEEEEET_NS_11enable_if_cIXsr5boost11type_traits7ice_notIXsr11is_integralIST_EE5valueEEE5valueEiE4typeE
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x00000000001FECE0  boost::bind<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *,Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>>(void (Caver::GUINavigationController::*)(boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *),Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>)
 *   0x0000000000200070  std::exception::~exception()
 *   0x00000000002024B0  Caver::GUINavigationController::SetCurrentViewController(boost::shared_ptr<Caver::GUIViewController> const&)
 *   0x00000000002033A0  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(boost::function<void ()(void *,Caver::GUIEvent *)> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000049A2AC  boost::bind<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *,Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>>(void (Caver::GUINavigationController::*)(boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *),Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 320
 *   insn=0x0000000000499818 string=0x000000000049981C "W"
 *   insn=0x0000000000499824 string=0x0000000000499828 ")"
 *   insn=0x0000000000499828 string=0x000000000049982C ""
 *   insn=0x000000000049983C string=0x0000000000499840 ""2"
 *   insn=0x0000000000499840 string=0x0000000000499844 ""
 *   insn=0x0000000000499844 string=0x0000000000499848 "=@"
 *   insn=0x0000000000499854 string=0x0000000000499858 "3"
 *   insn=0x0000000000499858 string=0x000000000049985C "h"
 *   insn=0x000000000049985C string=0x0000000000499860 ""
 *   insn=0x0000000000499860 string=0x0000000000499864 "h"
 *   insn=0x0000000000499868 string=0x000000000049986C "h"
 *   insn=0x0000000000499870 string=0x0000000000499874 "\t@"
 *   insn=0x0000000000499878 string=0x000000000049987C "h\n@"
 *   insn=0x000000000049987C string=0x0000000000499880 ""
 *   insn=0x0000000000499880 string=0x0000000000499884 "h\n"
 *   insn=0x0000000000499888 string=0x000000000049988C "h"
 *   insn=0x0000000000499890 string=0x0000000000499894 "@"
 *   insn=0x000000000049989C string=0x00000000004998A0 "s"
 *   insn=0x00000000004998A0 string=0x00000000004998A4 "v"
 *   insn=0x00000000004998A4 string=0x00000000004998A8 "v"
 *   insn=0x00000000004998A8 string=0x00000000004998AC "s"
 *   insn=0x00000000004998A8 string=0x00000000004998F4 "h"
 *   insn=0x00000000004998B0 string=0x00000000004998B4 "h"
 *   insn=0x00000000004998B8 string=0x00000000004998BC "h"
 *   insn=0x00000000004998C0 string=0x00000000004998C4 "\t@"
 *   insn=0x00000000004998C8 string=0x00000000004998CC "h\n@"
 *   insn=0x00000000004998CC string=0x00000000004998D0 ""
 *   insn=0x00000000004998D0 string=0x00000000004998D4 "h\n"
 *   insn=0x00000000004998D8 string=0x00000000004998DC "h"
 *   insn=0x00000000004998E0 string=0x00000000004998E4 "@"
 *   insn=0x00000000004998E8 string=0x00000000004998EC "V"
 *   insn=0x00000000004998EC string=0x00000000004998F0 "'"
 *   insn=0x00000000004998F8 string=0x00000000004998FC "@"
 *   insn=0x0000000000499900 string=0x0000000000499904 "v"
 *   insn=0x0000000000499904 string=0x0000000000499908 "s"
 *   insn=0x0000000000499908 string=0x000000000049990C "S"
 *   insn=0x0000000000499914 string=0x0000000000499918 "h"
 *   insn=0x000000000049991C string=0x0000000000499920 "s"
 *   insn=0x000000000049991C string=0x000000000049996C "h"
 *   insn=0x0000000000499920 string=0x0000000000499924 "3"
 *   insn=0x0000000000499924 string=0x0000000000499928 "i"
 *   insn=0x000000000049992C string=0x0000000000499930 "i"
 *   insn=0x0000000000499934 string=0x0000000000499938 "h"
 *   insn=0x000000000049993C string=0x0000000000499940 "\t@"
 *   insn=0x0000000000499944 string=0x0000000000499948 "h\n@"
 *   insn=0x0000000000499948 string=0x000000000049994C ""
 *   insn=0x000000000049994C string=0x0000000000499950 "h\n"
 *   insn=0x0000000000499954 string=0x0000000000499958 "h"
 *   insn=0x000000000049995C string=0x0000000000499960 "@"
 *   insn=0x0000000000499964 string=0x0000000000499968 "\t"
 *   insn=0x0000000000499970 string=0x0000000000499974 "@"
 *   insn=0x0000000000499978 string=0x000000000049997C "h"
 *   insn=0x000000000049997C string=0x0000000000499980 "s"
 *   insn=0x0000000000499980 string=0x0000000000499984 "3"
 *   insn=0x000000000049998C string=0x0000000000499990 ""
 *   insn=0x0000000000499990 string=0x0000000000499994 "\t\t@"
 *   insn=0x0000000000499998 string=0x000000000049999C " "
 *   insn=0x00000000004999A4 string=0x00000000004999A8 "\n"
 *   insn=0x00000000004999A8 string=0x00000000004999AC "J"
 *   insn=0x00000000004999AC string=0x00000000004999B0 "\n"
 *   insn=0x00000000004999B8 string=0x00000000004999BC "3"
 *   insn=0x00000000004999BC string=0x00000000004999C0 "h"
 *   insn=0x00000000004999C0 string=0x00000000004999C4 ""
 *   insn=0x00000000004999C4 string=0x00000000004999C8 "h"
 *   insn=0x00000000004999CC string=0x00000000004999D0 "h"
 *   insn=0x00000000004999D0 string=0x00000000004999D4 "\t@"
 *   insn=0x00000000004999DC string=0x00000000004999E0 "h\n@"
 *   insn=0x00000000004999E0 string=0x00000000004999E4 ""
 *   insn=0x00000000004999E4 string=0x00000000004999E8 "h\n"
 *   insn=0x00000000004999EC string=0x00000000004999F0 "h"
 *   insn=0x00000000004999F0 string=0x00000000004999F4 "@"
 *   insn=0x0000000000499A04 string=0x0000000000499A08 "h"
 *   insn=0x0000000000499A08 string=0x0000000000499A0C ""
 *   insn=0x0000000000499A0C string=0x0000000000499A10 "h"
 *   insn=0x0000000000499A10 string=0x0000000000499A14 "!"
 *   insn=0x0000000000499A14 string=0x0000000000499A18 "h"
 *   insn=0x0000000000499A1C string=0x0000000000499A20 "\t@"
 *   insn=0x0000000000499A24 string=0x0000000000499A28 "h\n@"
 *   insn=0x0000000000499A28 string=0x0000000000499A2C ""
 *   insn=0x0000000000499A2C string=0x0000000000499A30 "h\n"
 *   insn=0x0000000000499A34 string=0x0000000000499C24 "h"
 *   insn=0x0000000000499A38 string=0x0000000000499A3C "H""
 *   insn=0x0000000000499A3C string=0x0000000000499A40 "%"
 *   insn=0x0000000000499A50 string=0x0000000000499A54 "@"
 *   insn=0x0000000000499A64 string=0x0000000000499A68 "h"
 *   insn=0x0000000000499A64 string=0x0000000000499A74 ""
 *   insn=0x0000000000499A68 string=0x0000000000499A6C ""
 *   insn=0x0000000000499A6C string=0x0000000000499A70 "h"
 *   insn=0x0000000000499A78 string=0x0000000000499A7C "1@"
 *   insn=0x0000000000499A8C string=0x0000000000499A90 "*"
 *   insn=0x0000000000499A90 string=0x0000000000499A94 "J"
 *   insn=0x0000000000499A94 string=0x0000000000499A98 "*"
 *   insn=0x0000000000499AA4 string=0x0000000000499AA8 "6"
 *   insn=0x0000000000499AA8 string=0x0000000000499AEC "3"
 *   insn=0x0000000000499AAC string=0x0000000000499AB0 ""
 *   insn=0x0000000000499ABC string=0x0000000000499AC0 "\t@"
 *   insn=0x0000000000499ACC string=0x0000000000499AD0 ""
 *   insn=0x0000000000499ADC string=0x0000000000499AE0 "@"
 *   insn=0x0000000000499AEC string=0x0000000000499AF0 "h"
 *   insn=0x0000000000499AEC string=0x0000000000499B30 "H"
 *   insn=0x0000000000499AF0 string=0x0000000000499AF4 ""
 *   insn=0x0000000000499AF4 string=0x0000000000499AF8 "h"
 *   insn=0x0000000000499AFC string=0x0000000000499B00 "h"
 *   insn=0x0000000000499B04 string=0x0000000000499B08 "\t@"
 *   insn=0x0000000000499B0C string=0x0000000000499B10 "h\n@"
 *   insn=0x0000000000499B10 string=0x0000000000499B14 ""
 *   insn=0x0000000000499B14 string=0x0000000000499B18 "h\n"
 *   insn=0x0000000000499B1C string=0x0000000000499B20 "h"
 *   insn=0x0000000000499B24 string=0x0000000000499B28 "@"
 *   insn=0x0000000000499B30 string=0x0000000000583944 "\n"
 *   insn=0x0000000000499B40 string=0x0000000000499B44 ""
 *   insn=0x0000000000499B44 string=0x0000000000499B48 "\t"
 *   insn=0x0000000000499B4C string=0x0000000000499B50 " "
 *   insn=0x0000000000499B60 string=0x0000000000499B64 "h"
 *   insn=0x0000000000499B60 string=0x0000000000499EB8 "h"
 *   insn=0x0000000000499B68 string=0x0000000000499B6C "\t"
 *   insn=0x0000000000499B70 string=0x0000000000499B74 "h"
 *   insn=0x0000000000499B88 string=0x0000000000499B8C "\t"
 *   insn=0x0000000000499B88 string=0x0000000000499B98 "`"
 *   insn=0x0000000000499B8C string=0x0000000000499B90 ")"
 *   insn=0x0000000000499B90 string=0x0000000000499B94 "\t"
 *   insn=0x0000000000499B9C string=0x000000000049A42C "!"
 *   insn=0x0000000000499BAC string=0x0000000000499BB0 "L"
 *   insn=0x0000000000499BC0 string=0x00000000001F3F00 "P'"
 *   insn=0x0000000000499BC4 string=0x0000000000499BC8 "h\n@"
 *   insn=0x0000000000499BC8 string=0x0000000000499BCC ""
 *   insn=0x0000000000499BCC string=0x0000000000499BD0 "h\n"
 *   insn=0x0000000000499BE4 string=0x0000000000499BE8 ""
 *   insn=0x0000000000499BE8 string=0x0000000000499BEC ""
 *   insn=0x0000000000499BF0 string=0x0000000000499BF4 " !"
 *   insn=0x0000000000499BF8 string=0x0000000000499BFC "!a"
 *   insn=0x0000000000499C18 string=0x0000000000499C1C "%"
 *   insn=0x0000000000499C28 string=0x0000000000499C2C "@"
 *   insn=0x0000000000499C34 string=0x0000000000499C38 "H"
 *   insn=0x0000000000499C68 string=0x0000000000499C6C ""
 *   insn=0x0000000000499C74 string=0x0000000000499C78 "@"
 *   insn=0x0000000000499C78 string=0x0000000000499C7C ""
 *   insn=0x0000000000499C7C string=0x0000000000499C80 ""
 *   insn=0x0000000000499C84 string=0x0000000000499C88 ""
 *   insn=0x0000000000499C88 string=0x0000000000499C8C "@"
 *   insn=0x0000000000499CA8 string=0x0000000000499CAC "h"
 *   insn=0x0000000000499CAC string=0x0000000000499CB0 "("
 *   insn=0x0000000000499CB0 string=0x0000000000499CB4 ""
 *   insn=0x0000000000499CB4 string=0x0000000000499CB8 ""
 *   insn=0x0000000000499CC0 string=0x0000000000499CC4 " a"
 *   insn=0x0000000000499CDC string=0x0000000000499CE0 "@"
 *   insn=0x0000000000499CE0 string=0x0000000000499CE4 ""
 *   insn=0x0000000000499CE4 string=0x0000000000499CE8 ""
 *   insn=0x0000000000499CEC string=0x0000000000499CF0 ""
 *   insn=0x0000000000499CF0 string=0x0000000000499CF4 "@"
 *   insn=0x0000000000499CFC string=0x0000000000499D00 "h"
 *   insn=0x0000000000499D00 string=0x0000000000499D04 "("
 *   insn=0x0000000000499D04 string=0x0000000000499D08 ""
 *   insn=0x0000000000499D08 string=0x0000000000499D0C ""
 *   insn=0x0000000000499D14 string=0x0000000000499D18 " !"
 *   insn=0x0000000000499D2C string=0x0000000000499D30 "4"
 *   insn=0x0000000000499D34 string=0x0000000000499D38 ""
 *   insn=0x0000000000499D44 string=0x0000000000499D48 "\t@"
 *   insn=0x0000000000499D54 string=0x0000000000499D58 ""
 *   insn=0x0000000000499D64 string=0x0000000000499D68 "@"
 *   insn=0x0000000000499D74 string=0x0000000000499D78 "4"
 *   insn=0x0000000000499D78 string=0x0000000000499DBC "h"
 *   insn=0x0000000000499D7C string=0x0000000000499D80 ""
 *   insn=0x0000000000499D8C string=0x0000000000499D90 "\t@"
 *   insn=0x0000000000499D9C string=0x0000000000499DA0 ""
 *   insn=0x0000000000499DAC string=0x0000000000499DB0 "@"
 *   insn=0x0000000000499DBC string=0x0000000000499DC0 ""
 *   insn=0x0000000000499DC0 string=0x0000000000499DC4 "h"
 *   insn=0x0000000000499DC8 string=0x0000000000499DCC "h"
 *   insn=0x0000000000499DC8 string=0x0000000000499DFC "h"
 *   insn=0x0000000000499DCC string=0x0000000000499DD0 "\t@"
 *   insn=0x0000000000499DD8 string=0x0000000000499DDC "h\n@"
 *   insn=0x0000000000499DDC string=0x0000000000499DE0 ""
 *   insn=0x0000000000499DE0 string=0x0000000000499DE4 "h\n"
 *   insn=0x0000000000499DE8 string=0x0000000000499DEC "h"
 *   insn=0x0000000000499DEC string=0x0000000000499DF0 "@"
 *   insn=0x0000000000499DFC string=0x0000000000499E00 ""
 *   insn=0x0000000000499E00 string=0x0000000000499E04 "h"
 *   insn=0x0000000000499E08 string=0x0000000000499E0C "h"
 *   insn=0x0000000000499E0C string=0x0000000000499E10 "\t@"
 *   insn=0x0000000000499E18 string=0x0000000000499E1C "h\n@"
 *   insn=0x0000000000499E1C string=0x0000000000499E20 ""
 *   insn=0x0000000000499E20 string=0x0000000000499E24 "h\n"
 *   insn=0x0000000000499E28 string=0x0000000000499E2C "h"
 *   insn=0x0000000000499E2C string=0x0000000000499E30 "@"
 *   insn=0x0000000000499E3C string=0x0000000000499E40 "3"
 *   insn=0x0000000000499E40 string=0x0000000000499E44 "h"
 *   insn=0x0000000000499E44 string=0x0000000000499E48 ""
 *   insn=0x0000000000499E48 string=0x0000000000499E4C "h"
 *   insn=0x0000000000499E50 string=0x0000000000499E54 "h"
 *   insn=0x0000000000499E58 string=0x0000000000499E5C "\t@"
 *   insn=0x0000000000499E60 string=0x0000000000499E64 "h\n@"
 *   insn=0x0000000000499E64 string=0x0000000000499E68 ""
 *   insn=0x0000000000499E68 string=0x0000000000499E6C "h\n"
 *   insn=0x0000000000499E70 string=0x0000000000499E74 "h"
 *   insn=0x0000000000499E78 string=0x0000000000499E7C "@"
 *   insn=0x0000000000499E8C string=0x0000000000499E90 "!"
 *   insn=0x0000000000499E90 string=0x0000000000499EB4 "q"
 *   insn=0x0000000000499EB4 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000499EB8 string=0x0000000000499EBC ""
 *   insn=0x0000000000499EBC string=0x0000000000499EC0 "A"
 *   insn=0x0000000000499ECC string=0x00000000001FA980 "0'"
 *   insn=0x0000000000499ED4 string=0x0000000000499ED8 "f"
 *   insn=0x0000000000499EDC string=0x0000000000499EE0 "3"
 *   insn=0x0000000000499EE0 string=0x000000000049A1C4 "h"
 *   insn=0x0000000000499EEC string=0x0000000000499EF0 "H"
 *   insn=0x0000000000499EF0 string=0x0000000000499EF4 "\t\t@"
 *   insn=0x0000000000499EF4 string=0x0000000000499EF8 ")"
 *   insn=0x0000000000499EF8 string=0x0000000000499EFC "\t\t"
 *   insn=0x0000000000499F00 string=0x0000000000499F04 "\t"
 *   insn=0x0000000000499F04 string=0x0000000000499F08 ")@"
 *   insn=0x0000000000499F0C string=0x0000000000499F10 " "
 *   insn=0x0000000000499F10 string=0x0000000000499F14 "1"
 *   insn=0x0000000000499F24 string=0x0000000000499F28 "I"
 *   insn=0x0000000000499F24 string=0x0000000000499FE0 "("
 *   insn=0x0000000000499F30 string=0x0000000000499F34 "("
 *   insn=0x0000000000499F34 string=0x0000000000499F38 "\t\t@"
 *   insn=0x0000000000499F38 string=0x0000000000499F3C ")"
 *   insn=0x0000000000499F3C string=0x0000000000499F40 "\t\t"
 *   insn=0x0000000000499F44 string=0x0000000000499F48 "\t"
 *   insn=0x0000000000499F48 string=0x0000000000499F4C ")@"
 *   insn=0x0000000000499F50 string=0x0000000000499F54 " "
 *   insn=0x0000000000499F54 string=0x0000000000499F58 " "
 *   insn=0x0000000000499F60 string=0x0000000000499F64 "`"
 *   insn=0x0000000000499F64 string=0x000000000049A0E4 "h"
 *   insn=0x0000000000499F6C string=0x0000000000499F70 "m"
 *   insn=0x0000000000499F70 string=0x000000000049A124 "h"
 *   insn=0x0000000000499F78 string=0x000000000049A258 "h"
 *   insn=0x0000000000499F84 string=0x0000000000499F88 "h"
 *   insn=0x0000000000499F88 string=0x0000000000499F8C "("
 *   insn=0x0000000000499F8C string=0x0000000000499F90 ""
 *   insn=0x0000000000499F90 string=0x0000000000499F94 ""
 *   insn=0x0000000000499F9C string=0x0000000000499FA0 " a"
 *   insn=0x0000000000499FB8 string=0x0000000000499FBC "@"
 *   insn=0x0000000000499FBC string=0x0000000000499FC0 ""
 *   insn=0x0000000000499FC0 string=0x0000000000499FC4 ""
 *   insn=0x0000000000499FC8 string=0x0000000000499FCC ""
 *   insn=0x0000000000499FCC string=0x0000000000499FD0 "@"
 *   insn=0x0000000000499FE0 string=0x0000000000499FE4 ""
 *   insn=0x0000000000499FE4 string=0x0000000000499FE8 ""
 *   insn=0x0000000000499FF0 string=0x0000000000499FF4 " !"
 *   insn=0x000000000049A008 string=0x000000000049A00C "U"
 *   insn=0x000000000049A00C string=0x000000000049A010 "#"
 *   insn=0x000000000049A018 string=0x000000000049A01C "H"
 *   insn=0x000000000049A01C string=0x000000000049A020 "\t\t@"
 *   insn=0x000000000049A020 string=0x000000000049A024 ")"
 *   insn=0x000000000049A024 string=0x000000000049A028 "\t\t"
 *   insn=0x000000000049A02C string=0x000000000049A030 "\t"
 *   insn=0x000000000049A030 string=0x000000000049A034 ")@"
 *   insn=0x000000000049A038 string=0x000000000049A03C " "
 *   insn=0x000000000049A04C string=0x000000000049A050 "u"
 *   insn=0x000000000049A054 string=0x000000000049A058 ""
 *   insn=0x000000000049A064 string=0x000000000049A068 "\t@"
 *   insn=0x000000000049A074 string=0x000000000049A078 ""
 *   insn=0x000000000049A084 string=0x000000000049A088 "@"
 *   insn=0x000000000049A09C string=0x000000000049A0A0 "5"
 *   insn=0x000000000049A0A4 string=0x000000000049A0A8 ""
 *   insn=0x000000000049A0B4 string=0x000000000049A0B8 "\t@"
 *   insn=0x000000000049A0C4 string=0x000000000049A0C8 ""
 *   insn=0x000000000049A0D4 string=0x000000000049A0D8 "@"
 *   insn=0x000000000049A0E4 string=0x000000000049A0E8 ""
 *   insn=0x000000000049A0E8 string=0x000000000049A0EC "h"
 *   insn=0x000000000049A0F0 string=0x000000000049A0F4 "h"
 *   insn=0x000000000049A0F4 string=0x000000000049A0F8 "\t@"
 *   insn=0x000000000049A100 string=0x000000000049A104 "h\n@"
 *   insn=0x000000000049A104 string=0x000000000049A108 ""
 *   insn=0x000000000049A108 string=0x000000000049A10C "h\n"
 *   insn=0x000000000049A110 string=0x000000000049A114 "h"
 *   insn=0x000000000049A114 string=0x000000000049A118 "@"
 *   insn=0x000000000049A124 string=0x000000000049A128 ""
 *   insn=0x000000000049A128 string=0x000000000049A12C "h"
 *   insn=0x000000000049A12C string=0x000000000049A130 "a"
 *   insn=0x000000000049A130 string=0x000000000049A134 "h"
 *   insn=0x000000000049A134 string=0x000000000049A138 "\t@"
 *   insn=0x000000000049A140 string=0x000000000049A144 "h\n@"
 *   insn=0x000000000049A144 string=0x000000000049A148 ""
 *   insn=0x000000000049A148 string=0x000000000049A14C "h\n"
 *   insn=0x000000000049A14C string=0x000000000049A150 "a"
 *   insn=0x000000000049A150 string=0x000000000049A154 "h"
 *   insn=0x000000000049A154 string=0x000000000049A158 "@"
 *   insn=0x000000000049A16C string=0x000000000049A170 "S\t"
 *   insn=0x000000000049A170 string=0x000000000049A174 "h"
 *   insn=0x000000000049A174 string=0x000000000049A178 ""
 *   insn=0x000000000049A178 string=0x000000000049A17C "h"
 *   insn=0x000000000049A180 string=0x000000000049A184 "h"
 *   insn=0x000000000049A184 string=0x000000000049A188 "\t@"
 *   insn=0x000000000049A190 string=0x000000000049A194 "h\n@"
 *   insn=0x000000000049A194 string=0x000000000049A198 ""
 *   insn=0x000000000049A198 string=0x000000000049A19C "h\n"
 *   insn=0x000000000049A1A0 string=0x000000000049A1A4 "h"
 *   insn=0x000000000049A1A4 string=0x000000000049A1A8 "@"
 *   insn=0x000000000049A1B0 string=0x000000000049A1B4 "9"
 *   insn=0x000000000049A1C4 string=0x000000000049A1C8 ""
 *   insn=0x000000000049A1C8 string=0x000000000049A1CC "h"
 *   insn=0x000000000049A1CC string=0x000000000049A1D0 "A"
 *   insn=0x000000000049A1D0 string=0x000000000049A1D4 "h"
 *   insn=0x000000000049A1D4 string=0x000000000049A1D8 "\t@"
 *   insn=0x000000000049A1E0 string=0x000000000049A1E4 "h\n@"
 *   insn=0x000000000049A1E4 string=0x000000000049A1E8 ""
 *   insn=0x000000000049A1E8 string=0x000000000049A1EC "h\n"
 *   insn=0x000000000049A1EC string=0x000000000049A1F0 "A"
 *   insn=0x000000000049A1F0 string=0x000000000049A1F4 "h"
 *   insn=0x000000000049A1F4 string=0x000000000049A1F8 "@"
 *   insn=0x000000000049A200 string=0x000000000049A204 "%"
 *   insn=0x000000000049A20C string=0x000000000049A210 "5"
 *   insn=0x000000000049A210 string=0x000000000049A254 "3"
 *   insn=0x000000000049A214 string=0x000000000049A218 ""
 *   insn=0x000000000049A224 string=0x000000000049A228 "\t@"
 *   insn=0x000000000049A234 string=0x000000000049A238 ""
 *   insn=0x000000000049A244 string=0x000000000049A248 "@"
 *   insn=0x000000000049A258 string=0x000000000049A25C ""
 *   insn=0x000000000049A25C string=0x000000000049A260 "h"
 *   insn=0x000000000049A264 string=0x000000000049A268 "h"
 *   insn=0x000000000049A268 string=0x000000000049A26C "\t@"
 *   insn=0x000000000049A274 string=0x000000000049A278 "h\n@"
 *   insn=0x000000000049A278 string=0x000000000049A27C ""
 *   insn=0x000000000049A27C string=0x000000000049A280 "h\n"
 *   insn=0x000000000049A284 string=0x000000000049A288 "h"
 *   insn=0x000000000049A288 string=0x000000000049A28C "@"
 *   insn=0x000000000049A2A4 string=0x000000000049A2A8 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::GUINavigationController::TransitionToViewController(
        _QWORD *a1,
        _QWORD *a2,
        char a3,
        float a4,
        float a5)
{
  _QWORD *result; // x0
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x8
  _QWORD *v13; // x19
  __int64 v14; // x22
  _QWORD *v15; // x19
  __int64 v16; // x8
  _QWORD *v17; // x19
  __int64 v18; // x8
  _QWORD *v19; // x19
  __int64 v20; // x9
  __int64 v21; // x8
  _QWORD *v22; // x8
  __int64 v23; // x9
  _QWORD *v24; // x19
  __int64 v25; // x8
  __int64 v26; // x8
  _QWORD *v27; // x19
  __int64 v28; // x8
  __int64 v29; // x8
  __int64 v30; // x8
  __int64 v31; // x0
  _QWORD *v32; // x19
  void (*v33)(void); // x8
  _QWORD *v34; // x9
  _QWORD *v35; // x22
  __int64 v36; // x8
  __int64 v37; // x8
  __int64 v38; // x8
  __int64 v39; // x8
  _QWORD *v40; // x22
  _QWORD *v41; // x19
  __int64 v42; // x8
  __int64 v43; // x24
  _QWORD *v44; // x8
  _QWORD *v45; // x20
  _QWORD *v46; // x0
  __int64 v47; // x8
  void (__fastcall *v48)(__int128 *, __int128 *, __int64); // x8
  __int64 v49; // x8
  __int64 (__fastcall *v50)(__int128 *, __int128 *, __int64); // x8
  __int64 v51; // x8
  __int64 v52; // x8
  __int64 v53; // x8
  __int64 v54; // x8
  __int64 v55; // x8
  __int64 v56; // x8
  __int64 v57; // x8
  __int64 v58; // x8
  _QWORD *v59; // x19
  __int64 v60; // x8
  __int64 v61; // x8
  __int64 v62; // x0
  __int64 v63; // x20
  _QWORD *v64; // x19
  __int64 v65; // x8
  __int64 v66; // x8
  __int64 v67; // x0
  __int64 v68; // x0
  _QWORD *v69; // [xsp+10h] [xbp-F0h]
  _QWORD *v70; // [xsp+38h] [xbp-C8h]
  __int64 v71; // [xsp+40h] [xbp-C0h]
  __int128 v72; // [xsp+48h] [xbp-B8h] BYREF
  __int64 v73; // [xsp+58h] [xbp-A8h]
  __int64 v74; // [xsp+60h] [xbp-A0h] BYREF
  _QWORD *v75; // [xsp+68h] [xbp-98h]
  __int64 v76; // [xsp+70h] [xbp-90h]
  __int128 v77; // [xsp+78h] [xbp-88h] BYREF
  __int64 v78; // [xsp+88h] [xbp-78h]
  _QWORD *v79; // [xsp+90h] [xbp-70h] BYREF
  _QWORD *v80; // [xsp+98h] [xbp-68h]
  _QWORD v81[2]; // [xsp+A0h] [xbp-60h] BYREF

  v81[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = (_QWORD *)a1[12];
  if ( result )
  {
    if ( (a3 & 1) == 0 )
      return result;
    (*(void (__fastcall **)(_QWORD *))(*result + 120LL))(result);
    v10 = (_QWORD *)a1[13];
    a1[12] = 0;
    a1[13] = 0;
    if ( v10 )
    {
      v11 = v10[1] - 1LL;
      v10[1] = v11;
      if ( !v11 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
        v12 = v10[2] - 1LL;
        v10[2] = v12;
        if ( !v12 )
          (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
      }
    }
  }
  v13 = (_QWORD *)a1[10];
  if ( v13 )
  {
    v14 = v13[3];
    if ( v14 )
    {
      v15 = (_QWORD *)v13[4];
      if ( !v15 )
        goto LABEL_15;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(*v13 + 24LL))(a1[10]);
      v14 = v13[3];
      v15 = (_QWORD *)v13[4];
      if ( !v15 )
        goto LABEL_15;
    }
    if ( !v15[1] )
    {
      (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      v16 = v15[2] - 1LL;
      v15[2] = v16;
      if ( !v16 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
        if ( !v14 )
          goto LABEL_23;
LABEL_16:
        v17 = (_QWORD *)a1[10];
        v18 = v17[3];
        if ( v18 )
        {
          v19 = (_QWORD *)v17[4];
          if ( v19 )
          {
LABEL_18:
            v20 = v19[1];
            *(_BYTE *)(v18 + 229) = 0;
            v19[1] = v20;
            if ( !v20 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
              v21 = v19[2] - 1LL;
              v19[2] = v21;
              if ( !v21 )
                (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
            }
            goto LABEL_23;
          }
        }
        else
        {
          (*(void (__fastcall **)(_QWORD))(*v17 + 24LL))(a1[10]);
          v18 = v17[3];
          v19 = (_QWORD *)v17[4];
          if ( v19 )
            goto LABEL_18;
        }
        *(_BYTE *)(v18 + 229) = 0;
        goto LABEL_23;
      }
    }
LABEL_15:
    if ( !v14 )
      goto LABEL_23;
    goto LABEL_16;
  }
LABEL_23:
  result = (*(_QWORD *(__fastcall **)(__int64 *__return_ptr))(*(_QWORD *)*a2 + 16LL))(&v74);
  v23 = v74;
  v22 = v75;
  if ( v75 )
    ++v75[1];
  v24 = (_QWORD *)a1[13];
  a1[12] = v23;
  a1[13] = v22;
  if ( v24 )
  {
    v25 = v24[1] - 1LL;
    v24[1] = v25;
    if ( !v25 )
    {
      result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
      v26 = v24[2] - 1LL;
      v24[2] = v26;
      if ( !v26 )
        result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
    }
  }
  v27 = v75;
  if ( !v75
    || (v28 = v75[1] - 1LL, (v75[1] = v28) != 0)
    || (result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27),
        v29 = v27[2] - 1LL,
        (v27[2] = v29) != 0) )
  {
    v30 = a1[12];
    if ( !v30 )
      return result;
  }
  else
  {
    result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v27 + 24LL))(v27);
    v30 = a1[12];
    if ( !v30 )
      return result;
  }
  *(float *)(v30 + 240) = a4;
  *(float *)(v30 + 244) = a5;
  v31 = a1[3];
  if ( !v31 )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
    v31 = a1[3];
  }
  v32 = (_QWORD *)a1[4];
  if ( v32 )
    ++v32[1];
  v33 = *(void (**)(void))(*(_QWORD *)v31 + 96LL);
  v74 = a1[12];
  v34 = (_QWORD *)a1[13];
  v75 = v34;
  if ( v34 )
    ++v34[1];
  v33();
  v35 = v75;
  if ( v75 )
  {
    v36 = v75[1] - 1LL;
    v75[1] = v36;
    if ( !v36 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
      v37 = v35[2] - 1LL;
      v35[2] = v37;
      if ( !v37 )
        (*(void (__fastcall **)(_QWORD *))(*v35 + 24LL))(v35);
    }
  }
  if ( v32 )
  {
    v38 = v32[1] - 1LL;
    v32[1] = v38;
    if ( !v38 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
      v39 = v32[2] - 1LL;
      v32[2] = v39;
      if ( !v39 )
        (*(void (__fastcall **)(_QWORD *))(*v32 + 24LL))(v32);
    }
  }
  if ( a4 <= 0.01 )
  {
    v79 = 0;
    v80 = 0;
    goto LABEL_57;
  }
  (*(void (__fastcall **)(_QWORD **__return_ptr))(*(_QWORD *)a1[12] + 304LL))(&v79);
  v40 = v79;
  if ( !v79 )
  {
LABEL_57:
    result = (_QWORD *)Caver::GUINavigationController::SetCurrentViewController();
LABEL_95:
    v59 = v80;
    if ( v80 )
    {
      v60 = v80[1] - 1LL;
      v80[1] = v60;
      if ( !v60 )
      {
        result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v59 + 16LL))(v59);
        v61 = v59[2] - 1LL;
        v59[2] = v61;
        if ( !v61 )
          return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v59 + 24LL))(v59);
      }
    }
    return result;
  }
  v41 = (_QWORD *)a1[2];
  if ( v41 )
  {
    v42 = v41[1];
    if ( v42 )
    {
      v43 = a1[1];
      v41[1] = v42 + 2;
      v44 = (_QWORD *)a2[1];
      v69 = v44;
      if ( v44 )
        ++v44[1];
      boost::bind<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *,Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>>();
      boost::function<void ()(void *,Caver::GUIEvent *)>::function<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>();
      v74 = v43;
      v75 = v41;
      ++v41[2];
      v76 = 0;
      if ( v71 )
      {
        v76 = v71;
        if ( (v71 & 1) == 0 )
        {
          (*(void (__fastcall **)(__int128 *, __int128 *, _QWORD))(v71 & 0xFFFFFFFFFFFFFFFELL))(&v72, &v77, 0);
          v43 = v74;
          v45 = v75;
LABEL_62:
          v46 = (_QWORD *)v40[1];
          *v40 = v43;
          if ( v45 != v46 )
          {
            if ( v45 )
              ++v45[2];
            if ( v46 )
            {
              v47 = v46[2] - 1LL;
              v46[2] = v47;
              if ( !v47 )
                (*(void (__fastcall **)(_QWORD *))(*v46 + 24LL))(v46);
            }
            v40[1] = v45;
          }
          boost::function<void ()(void *,Caver::GUIEvent *)>::operator=();
          if ( v76 )
          {
            if ( (v76 & 1) == 0 )
            {
              v48 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(v76 & 0xFFFFFFFFFFFFFFFELL);
              if ( v48 )
                v48(&v77, &v77, 2);
            }
            v76 = 0;
          }
          result = v75;
          if ( v75 )
          {
            v49 = v75[2] - 1LL;
            v75[2] = v49;
            if ( !v49 )
              result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*result + 24LL))(result);
          }
          if ( v71 )
          {
            if ( (v71 & 1) == 0 )
            {
              v50 = *(__int64 (__fastcall **)(__int128 *, __int128 *, __int64))(v71 & 0xFFFFFFFFFFFFFFFELL);
              if ( v50 )
                result = (_QWORD *)v50(&v72, &v72, 2);
            }
          }
          if ( v70 )
          {
            v51 = v70[1] - 1LL;
            v70[1] = v51;
            if ( !v51 )
            {
              result = (_QWORD *)(*(__int64 (__fastcall **)())(*v70 + 16LL))();
              v52 = v70[2] - 1LL;
              v70[2] = v52;
              if ( !v52 )
                result = (_QWORD *)(*(__int64 (__fastcall **)())(*v70 + 24LL))();
            }
          }
          if ( v69 )
          {
            v53 = v69[1] - 1LL;
            v69[1] = v53;
            if ( !v53 )
            {
              result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v69 + 16LL))(v69);
              v54 = v69[2] - 1LL;
              v69[2] = v54;
              if ( !v54 )
                result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v69 + 24LL))(v69);
            }
          }
          v55 = v41[1] - 1LL;
          v41[1] = v55;
          if ( !v55 )
          {
            result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v41 + 16LL))(v41);
            v56 = v41[2] - 1LL;
            v41[2] = v56;
            if ( !v56 )
              result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v41 + 24LL))(v41);
          }
          v57 = v41[1] - 1LL;
          v41[1] = v57;
          if ( !v57 )
          {
            result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v41 + 16LL))(v41);
            v58 = v41[2] - 1LL;
            v41[2] = v58;
            if ( !v58 )
              result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v41 + 24LL))(v41);
          }
          goto LABEL_95;
        }
        v78 = v73;
        v77 = v72;
      }
      v45 = v41;
      goto LABEL_62;
    }
  }
  v81[0] = off_6CC4E8;
  boost::throw_exception<boost::bad_weak_ptr>();
  v63 = v62;
  std::exception::~exception((std::exception *)v81);
  v64 = v80;
  if ( v80 )
  {
    v65 = v80[1] - 1LL;
    v80[1] = v65;
    if ( !v65 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v64 + 16LL))(v64);
      v66 = v64[2] - 1LL;
      v64[2] = v66;
      if ( !v66 )
        (*(void (__fastcall **)(_QWORD *))(*v64 + 24LL))(v64);
    }
  }
  v67 = sub_5818C4(v63);
  v68 = ((__int64 (__fastcall *)(__int64))loc_20E34C)(v67);
  return (_QWORD *)boost::bind<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *,Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>>(v68);
}

