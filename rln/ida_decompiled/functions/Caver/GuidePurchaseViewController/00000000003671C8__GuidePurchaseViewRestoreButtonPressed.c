/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003671C8
 * Mangled: _ZN5Caver27GuidePurchaseViewController37GuidePurchaseViewRestoreButtonPressedEPNS_17GuidePurchaseViewE
 * Demangled: Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(Caver::GuidePurchaseView *)
 *
 * Callers: 1
 *   0x00000000001F4CA0  Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(Caver::GuidePurchaseView *)
 *
 * Callees: 19
 *   0x00000000001F4080  Caver::GameInterfaceBuilder::AlertView(std::string const&,std::string const&,int,std::string const*,int)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F5960  Caver::GUIButton::SetTintColor(Caver::Color)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x00000000001FC220  Caver::GUIButton::SetTitle(std::string const&)
 *   0x00000000001FDDF0  Caver::GUIAlertView::PresentFromView(Caver::GUIView *)
 *   0x00000000001FF270  Caver::StoreController::SharedController(void)
 *   0x0000000000200070  std::exception::~exception()
 *   0x0000000000203100  Caver::GuidePurchaseViewController::HandlePurchaseSuccess(void)
 *   0x00000000002039E0  Caver::GuidePurchaseViewController::SetRestoreButtonEnabled(bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000367C7C  `non-virtual thunk to'Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(Caver::GuidePurchaseView *)
 *   0x0000000000368BA4  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GuidePurchaseViewController,std::vector<std::string,std::allocator<std::string>> const&,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::GuidePurchaseViewController*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 286
 *   insn=0x00000000003671DC string=0x00000000003671E0 "V"
 *   insn=0x00000000003671F8 string=0x00000000003671FC "("
 *   insn=0x0000000000367200 string=0x0000000000367204 " "
 *   insn=0x0000000000367208 string=0x000000000036720C ""
 *   insn=0x000000000036720C string=0x0000000000367210 ""
 *   insn=0x0000000000367230 string=0x00000000001F5960 "P'"
 *   insn=0x0000000000367238 string=0x000000000036723C "A"
 *   insn=0x000000000036723C string=0x000000000058F6B2 "Loading"
 *   insn=0x0000000000367248 string=0x000000000036724C "["
 *   insn=0x0000000000367258 string=0x00000000001FC220 "0'"
 *   insn=0x0000000000367260 string=0x0000000000367264 ")"
 *   insn=0x0000000000367278 string=0x000000000036727C "\t"
 *   insn=0x000000000036727C string=0x0000000000367280 "*"
 *   insn=0x0000000000367280 string=0x0000000000367284 ""
 *   insn=0x0000000000367284 string=0x0000000000367288 "\n"
 *   insn=0x0000000000367298 string=0x000000000036729C "h"
 *   insn=0x00000000003672A4 string=0x00000000003672A8 "\t"
 *   insn=0x00000000003672B0 string=0x00000000003672B4 "7"
 *   insn=0x00000000003672B4 string=0x00000000003672B8 "h"
 *   insn=0x00000000003672BC string=0x00000000003672C0 ""
 *   insn=0x00000000003672C0 string=0x00000000003672C4 ""
 *   insn=0x00000000003672D4 string=0x00000000003672D8 "&>"
 *   insn=0x00000000003672D8 string=0x00000000003672DC "`"
 *   insn=0x00000000003672D8 string=0x00000000001F6B70 "0'"
 *   insn=0x00000000003672E0 string=0x00000000003672E4 ""
 *   insn=0x00000000003672F8 string=0x00000000003672FC ""
 *   insn=0x0000000000367304 string=0x0000000000367308 "i\n@"
 *   insn=0x0000000000367308 string=0x000000000036730C ")"
 *   insn=0x000000000036730C string=0x0000000000367310 "i\n"
 *   insn=0x0000000000367314 string=0x0000000000367318 ""
 *   insn=0x000000000036731C string=0x0000000000367320 "H"
 *   insn=0x0000000000367320 string=0x0000000000367324 ""
 *   insn=0x0000000000367324 string=0x0000000000367328 ""
 *   insn=0x000000000036732C string=0x0000000000367330 " !"
 *   insn=0x0000000000367334 string=0x0000000000367338 "!a"
 *   insn=0x0000000000367364 string=0x0000000000367368 "h"
 *   insn=0x0000000000367368 string=0x000000000036736C "("
 *   insn=0x000000000036736C string=0x0000000000367370 ""
 *   insn=0x0000000000367370 string=0x0000000000367374 ""
 *   insn=0x000000000036737C string=0x0000000000367380 " a"
 *   insn=0x0000000000367398 string=0x000000000036739C "@"
 *   insn=0x000000000036739C string=0x00000000003673A0 ""
 *   insn=0x00000000003673A0 string=0x00000000003673A4 ""
 *   insn=0x00000000003673A8 string=0x00000000003673AC ""
 *   insn=0x00000000003673AC string=0x00000000003673B0 "@"
 *   insn=0x00000000003673B8 string=0x00000000003673BC "h"
 *   insn=0x00000000003673BC string=0x00000000003673C0 "("
 *   insn=0x00000000003673BC string=0x00000000003673E8 "h"
 *   insn=0x00000000003673C0 string=0x00000000003673C4 ""
 *   insn=0x00000000003673C4 string=0x00000000003673C8 ""
 *   insn=0x00000000003673D0 string=0x00000000003673D4 " !"
 *   insn=0x00000000003673E8 string=0x00000000003673EC ""
 *   insn=0x00000000003673EC string=0x00000000003673F0 "h"
 *   insn=0x00000000003673F4 string=0x00000000003673F8 "h"
 *   insn=0x00000000003673F4 string=0x0000000000367428 "h"
 *   insn=0x00000000003673F8 string=0x00000000003673FC "\t@"
 *   insn=0x0000000000367404 string=0x0000000000367408 "h\n@"
 *   insn=0x0000000000367408 string=0x000000000036740C ""
 *   insn=0x000000000036740C string=0x0000000000367410 "h\n"
 *   insn=0x0000000000367414 string=0x0000000000367418 "h"
 *   insn=0x0000000000367418 string=0x000000000036741C "@"
 *   insn=0x0000000000367428 string=0x000000000036742C ""
 *   insn=0x000000000036742C string=0x0000000000367430 "h"
 *   insn=0x0000000000367434 string=0x0000000000367438 "h"
 *   insn=0x000000000036743C string=0x0000000000367440 "\t@"
 *   insn=0x0000000000367444 string=0x0000000000367448 "h\n@"
 *   insn=0x0000000000367448 string=0x000000000036744C ""
 *   insn=0x000000000036744C string=0x0000000000367450 "h\n"
 *   insn=0x0000000000367454 string=0x0000000000367458 "h"
 *   insn=0x000000000036745C string=0x0000000000367460 "@"
 *   insn=0x0000000000367474 string=0x00000000003674EC "y;"
 *   insn=0x0000000000367490 string=0x0000000000367494 ")=G"
 *   insn=0x0000000000367494 string=0x0000000000367498 "!"
 *   insn=0x000000000036749C string=0x00000000003674A0 "\t"
 *   insn=0x000000000036749C string=0x00000000003674B4 "\t"
 *   insn=0x00000000003674A0 string=0x00000000003674A4 "*"
 *   insn=0x00000000003674A4 string=0x00000000003674A8 "\n"
 *   insn=0x00000000003674B0 string=0x00000000003674C0 "?"
 *   insn=0x00000000003674B4 string=0x00000000003674B8 "*"
 *   insn=0x00000000003674B8 string=0x00000000003674BC "\n"
 *   insn=0x00000000003674CC string=0x00000000003674D0 "i"
 *   insn=0x00000000003674D4 string=0x00000000003674D8 ""
 *   insn=0x00000000003674D8 string=0x00000000003674DC "A"
 *   insn=0x00000000003674E4 string=0x00000000003674E8 "&M"
 *   insn=0x00000000003674E8 string=0x00000000001FA980 "0'"
 *   insn=0x00000000003674EC string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000367504 string=0x0000000000367508 "C"
 *   insn=0x0000000000367508 string=0x0000000000367614 "h"
 *   insn=0x0000000000367514 string=0x0000000000367518 "\t\t@"
 *   insn=0x0000000000367518 string=0x000000000036751C ")"
 *   insn=0x000000000036751C string=0x0000000000367520 "\t\t"
 *   insn=0x0000000000367524 string=0x0000000000367528 "\t"
 *   insn=0x0000000000367528 string=0x000000000036752C ")@"
 *   insn=0x0000000000367530 string=0x0000000000367534 " "
 *   insn=0x0000000000367534 string=0x0000000000367538 "+"
 *   insn=0x0000000000367544 string=0x0000000000367548 "("
 *   insn=0x0000000000367548 string=0x000000000036754C "2"
 *   insn=0x0000000000367548 string=0x00000000003675EC "("
 *   insn=0x0000000000367554 string=0x0000000000367558 "h"
 *   insn=0x0000000000367558 string=0x000000000036755C "\t\t@"
 *   insn=0x000000000036755C string=0x0000000000367560 ")"
 *   insn=0x0000000000367560 string=0x0000000000367564 "\t\t"
 *   insn=0x0000000000367568 string=0x000000000036756C "\t"
 *   insn=0x000000000036756C string=0x0000000000367570 ")@"
 *   insn=0x0000000000367574 string=0x0000000000367578 " "
 *   insn=0x0000000000367584 string=0x0000000000367588 "3"
 *   insn=0x0000000000367588 string=0x0000000000367654 "h"
 *   insn=0x0000000000367590 string=0x0000000000367594 "h"
 *   insn=0x0000000000367594 string=0x0000000000367598 "("
 *   insn=0x0000000000367598 string=0x000000000036759C ""
 *   insn=0x000000000036759C string=0x00000000003675A0 ""
 *   insn=0x00000000003675A8 string=0x00000000003675AC " a"
 *   insn=0x00000000003675C4 string=0x00000000003675C8 "@"
 *   insn=0x00000000003675C8 string=0x00000000003675CC ""
 *   insn=0x00000000003675CC string=0x00000000003675D0 ""
 *   insn=0x00000000003675D4 string=0x00000000003675D8 ""
 *   insn=0x00000000003675D8 string=0x00000000003675DC "@"
 *   insn=0x00000000003675E4 string=0x00000000003675E8 "h"
 *   insn=0x00000000003675EC string=0x00000000003675F0 ""
 *   insn=0x00000000003675F0 string=0x00000000003675F4 ""
 *   insn=0x00000000003675FC string=0x0000000000367600 " !"
 *   insn=0x0000000000367614 string=0x0000000000367618 ""
 *   insn=0x0000000000367618 string=0x000000000036761C "h"
 *   insn=0x0000000000367620 string=0x0000000000367624 "h"
 *   insn=0x0000000000367624 string=0x0000000000367628 "\t@"
 *   insn=0x0000000000367630 string=0x0000000000367634 "h\n@"
 *   insn=0x0000000000367634 string=0x0000000000367638 ""
 *   insn=0x0000000000367638 string=0x000000000036763C "h\n"
 *   insn=0x0000000000367640 string=0x0000000000367644 "h"
 *   insn=0x0000000000367644 string=0x0000000000367648 "@"
 *   insn=0x0000000000367654 string=0x0000000000367658 ""
 *   insn=0x0000000000367658 string=0x000000000036765C "h"
 *   insn=0x000000000036765C string=0x0000000000367660 "!"
 *   insn=0x0000000000367660 string=0x0000000000367664 "h"
 *   insn=0x0000000000367664 string=0x0000000000367668 "\t@"
 *   insn=0x0000000000367670 string=0x0000000000367674 "h\n@"
 *   insn=0x0000000000367674 string=0x0000000000367678 ""
 *   insn=0x0000000000367678 string=0x000000000036767C "h\n"
 *   insn=0x000000000036767C string=0x0000000000367680 "!"
 *   insn=0x0000000000367680 string=0x0000000000367684 "h"
 *   insn=0x0000000000367684 string=0x0000000000367688 "@"
 *   insn=0x0000000000367690 string=0x0000000000367694 ","
 *   insn=0x00000000003676A0 string=0x00000000003676A4 "\t\t@"
 *   insn=0x00000000003676A4 string=0x00000000003676A8 ")"
 *   insn=0x00000000003676A8 string=0x00000000003676AC "\t\t"
 *   insn=0x00000000003676B0 string=0x00000000003676B4 "\t"
 *   insn=0x00000000003676B4 string=0x00000000003676B8 ")@"
 *   insn=0x00000000003676BC string=0x00000000003676C0 " "
 *   insn=0x00000000003676DC string=0x00000000003676E0 "J"
 *   insn=0x00000000003676E4 string=0x00000000003676E8 "(a"
 *   insn=0x00000000003676F4 string=0x00000000003676F8 "J=G"
 *   insn=0x00000000003676F8 string=0x00000000003676FC ")!"
 *   insn=0x0000000000367700 string=0x0000000000367704 "*"
 *   insn=0x0000000000367700 string=0x0000000000367730 "*"
 *   insn=0x0000000000367704 string=0x0000000000367708 "K"
 *   insn=0x0000000000367708 string=0x000000000036770C "+"
 *   insn=0x0000000000367710 string=0x0000000000367714 "_"
 *   insn=0x0000000000367714 string=0x0000000000367718 "l"
 *   insn=0x0000000000367720 string=0x0000000000367724 " "
 *   insn=0x0000000000367728 string=0x000000000036772C "fh"
 *   insn=0x0000000000367730 string=0x0000000000367734 "K"
 *   insn=0x0000000000367734 string=0x0000000000367738 "+"
 *   insn=0x0000000000367738 string=0x000000000036773C "_"
 *   insn=0x0000000000367744 string=0x0000000000367748 "_h"
 *   insn=0x0000000000367748 string=0x000000000036774C "^h"
 *   insn=0x000000000036776C string=0x0000000000367770 "W"
 *   insn=0x0000000000367780 string=0x0000000000367784 "9h@"
 *   insn=0x0000000000367784 string=0x0000000000367788 "?"
 *   insn=0x0000000000367788 string=0x000000000036778C " "
 *   insn=0x0000000000367798 string=0x000000000036779C "5"
 *   insn=0x000000000036779C string=0x000000000058E508 "compass"
 *   insn=0x00000000003677AC string=0x00000000003677B0 ")=G"
 *   insn=0x00000000003677B8 string=0x00000000003677BC "\t"
 *   insn=0x00000000003677B8 string=0x00000000003677D0 "\t"
 *   insn=0x00000000003677BC string=0x00000000003677C0 "*"
 *   insn=0x00000000003677C0 string=0x00000000003677C4 "\n"
 *   insn=0x00000000003677CC string=0x00000000003677DC "?"
 *   insn=0x00000000003677D0 string=0x00000000003677D4 "*"
 *   insn=0x00000000003677D4 string=0x00000000003677D8 "\n"
 *   insn=0x00000000003677DC string=0x00000000003677E0 "l"
 *   insn=0x00000000003677F4 string=0x000000000036785C "9#"
 *   insn=0x0000000000367808 string=0x000000000036780C " "
 *   insn=0x0000000000367818 string=0x000000000036781C "_"
 *   insn=0x0000000000367824 string=0x0000000000367828 "Z6"
 *   insn=0x0000000000367828 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000367844 string=0x0000000000367848 "!"
 *   insn=0x0000000000367850 string=0x0000000000367854 "+n"
 *   insn=0x000000000036785C string=0x0000000000367860 "?"
 *   insn=0x0000000000367868 string=0x000000000036786C "{"
 *   insn=0x0000000000367870 string=0x0000000000367874 ""
 *   insn=0x0000000000367874 string=0x0000000000367878 ""
 *   insn=0x0000000000367878 string=0x000000000036787C "A"
 *   insn=0x000000000036787C string=0x000000000058F6BA "Ok"
 *   insn=0x000000000036788C string=0x0000000000367890 "A"
 *   insn=0x0000000000367890 string=0x000000000058F6BD "STORE ERROR"
 *   insn=0x00000000003678BC string=0x00000000001F4080 "P'"
 *   insn=0x00000000003678C4 string=0x00000000003678C8 "\n"
 *   insn=0x00000000003678C4 string=0x00000000003678D4 "t>@"
 *   insn=0x00000000003678C8 string=0x00000000003678CC "J"
 *   insn=0x00000000003678CC string=0x00000000003678D0 "\n"
 *   insn=0x00000000003678D4 string=0x00000000003678D8 "i""
 *   insn=0x00000000003678D8 string=0x00000000003678DC "4"
 *   insn=0x00000000003678E0 string=0x00000000003678E4 ""
 *   insn=0x00000000003678F0 string=0x00000000003678F4 "\t@"
 *   insn=0x0000000000367900 string=0x0000000000367904 ""
 *   insn=0x0000000000367910 string=0x0000000000367914 "@"
 *   insn=0x0000000000367920 string=0x0000000000367924 "4"
 *   insn=0x0000000000367928 string=0x000000000036792C ""
 *   insn=0x0000000000367938 string=0x000000000036793C "\t@"
 *   insn=0x0000000000367948 string=0x000000000036794C ""
 *   insn=0x0000000000367958 string=0x000000000036795C "@"
 *   insn=0x0000000000367978 string=0x000000000036797C "a"
 *   insn=0x000000000036797C string=0x0000000000367980 "u:@"
 *   insn=0x0000000000367980 string=0x0000000000367984 "hB"
 *   insn=0x0000000000367988 string=0x000000000036798C "a"
 *   insn=0x0000000000367990 string=0x0000000000367994 "h"
 *   insn=0x0000000000367990 string=0x00000000003679A8 "t"
 *   insn=0x0000000000367994 string=0x0000000000367998 "@"
 *   insn=0x00000000003679A0 string=0x00000000003679A4 "a"
 *   insn=0x00000000003679B0 string=0x00000000003679B4 ""
 *   insn=0x00000000003679C0 string=0x00000000003679C4 "4"
 *   insn=0x00000000003679C0 string=0x00000000001FDDF0 "0'"
 *   insn=0x00000000003679C8 string=0x00000000003679CC ""
 *   insn=0x00000000003679D8 string=0x00000000003679DC "\t@"
 *   insn=0x00000000003679E8 string=0x00000000003679EC ""
 *   insn=0x00000000003679F8 string=0x00000000003679FC "@"
 *   insn=0x0000000000367A20 string=0x0000000000367A24 "h2@"
 *   insn=0x0000000000367A24 string=0x0000000000367A28 "\t"
 *   insn=0x0000000000367A28 string=0x0000000000367A2C "?"
 *   insn=0x0000000000367A2C string=0x0000000000367A30 ""
 *   insn=0x0000000000367A40 string=0x0000000000367A44 "a"
 *   insn=0x0000000000367A68 string=0x0000000000367A6C ")=G"
 *   insn=0x0000000000367A6C string=0x0000000000367A70 "!"
 *   insn=0x0000000000367A74 string=0x0000000000367A78 "\t"
 *   insn=0x0000000000367A74 string=0x0000000000367AB0 "\t"
 *   insn=0x0000000000367A78 string=0x0000000000367A7C "*"
 *   insn=0x0000000000367A7C string=0x0000000000367A80 "\n"
 *   insn=0x0000000000367A84 string=0x0000000000367A88 ""
 *   insn=0x0000000000367A88 string=0x0000000000367ABC "?"
 *   insn=0x0000000000367A8C string=0x0000000000367A90 ")=G"
 *   insn=0x0000000000367A90 string=0x0000000000367A94 "!"
 *   insn=0x0000000000367A98 string=0x0000000000367A9C "\t"
 *   insn=0x0000000000367A98 string=0x0000000000367AD0 "\t"
 *   insn=0x0000000000367A9C string=0x0000000000367AA0 "*"
 *   insn=0x0000000000367AA0 string=0x0000000000367AA4 "\n"
 *   insn=0x0000000000367AAC string=0x0000000000367ADC "?"
 *   insn=0x0000000000367AB0 string=0x0000000000367AB4 "*"
 *   insn=0x0000000000367AB4 string=0x0000000000367AB8 "\n"
 *   insn=0x0000000000367AC4 string=0x0000000000367AC8 "7\n"
 *   insn=0x0000000000367AD0 string=0x0000000000367AD4 "*"
 *   insn=0x0000000000367AD4 string=0x0000000000367AD8 "\n"
 *   insn=0x0000000000367AE4 string=0x0000000000367AE8 "/\n"
 *   insn=0x0000000000367B00 string=0x0000000000367B04 ""
 *   insn=0x0000000000367B10 string=0x0000000000367B14 "\t@"
 *   insn=0x0000000000367B20 string=0x0000000000367B24 ""
 *   insn=0x0000000000367B30 string=0x0000000000367B34 "@"
 *   insn=0x0000000000367B3C string=0x0000000000367B40 ""
 *   insn=0x0000000000367B54 string=0x0000000000367B58 ""
 *   insn=0x0000000000367B5C string=0x0000000000367B60 "!"
 *   insn=0x0000000000367B64 string=0x0000000000367B68 "\t@"
 *   insn=0x0000000000367B74 string=0x0000000000367B78 ""
 *   insn=0x0000000000367B7C string=0x0000000000367B80 "!"
 *   insn=0x0000000000367B84 string=0x0000000000367B88 "@"
 *   insn=0x0000000000367B9C string=0x0000000000367BA0 "\t"
 *   insn=0x0000000000367BB0 string=0x0000000000367BB4 ")"
 *   insn=0x0000000000367BC8 string=0x0000000000367BCC ")"
 *   insn=0x0000000000367BDC string=0x0000000000367BE0 ")=G"
 *   insn=0x0000000000367BE0 string=0x0000000000367BE4 "!"
 *   insn=0x0000000000367BE8 string=0x0000000000367BEC "\t"
 *   insn=0x0000000000367BE8 string=0x0000000000367C58 "\t"
 *   insn=0x0000000000367BEC string=0x0000000000367BF0 "*"
 *   insn=0x0000000000367BF0 string=0x0000000000367BF4 "\n"
 *   insn=0x0000000000367BF8 string=0x0000000000367BFC "?"
 *   insn=0x0000000000367C0C string=0x0000000000367C10 "-g"
 *   insn=0x0000000000367C14 string=0x0000000000367C18 ")=G"
 *   insn=0x0000000000367C18 string=0x0000000000367C1C "!"
 *   insn=0x0000000000367C20 string=0x0000000000367C24 "\t"
 *   insn=0x0000000000367C20 string=0x0000000000367C38 "\t"
 *   insn=0x0000000000367C24 string=0x0000000000367C28 "*"
 *   insn=0x0000000000367C28 string=0x0000000000367C2C "\n"
 *   insn=0x0000000000367C34 string=0x0000000000367C44 "?"
 *   insn=0x0000000000367C38 string=0x0000000000367C3C "*"
 *   insn=0x0000000000367C3C string=0x0000000000367C40 "\n"
 *   insn=0x0000000000367C58 string=0x0000000000367C5C "*"
 *   insn=0x0000000000367C5C string=0x0000000000367C60 "\n"
 *   insn=0x0000000000367C60 string=0x0000000000367C64 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(
        Caver::GuidePurchaseViewController *this,
        Caver::GuidePurchaseView *a2)
{
  _DWORD *v3; // x0
  int v4; // w1
  Caver::GUIButton *v5; // x19
  void *v6; // x0
  __int64 v7; // x8
  __int64 v8; // x0
  _QWORD *v9; // x19
  __int64 v10; // x21
  __int64 v11; // x8
  __int64 v12; // x24
  int64x2_t v13; // q0
  void (__fastcall *v14)(__int64, __int64 *); // x23
  unsigned __int64 v15; // x8
  void (__fastcall *v16)(int64x2_t *, int64x2_t *, __int64); // x8
  __int64 result; // x0
  __int64 v18; // x8
  __int64 (__fastcall *v19)(int64x2_t *, int64x2_t *, __int64); // x8
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  unsigned int *v24; // x8
  int v25; // w9
  unsigned __int64 v26; // [xsp+A8h] [xbp-B8h]
  int64x2_t v27; // [xsp+B0h] [xbp-B0h] BYREF
  Caver::GuidePurchaseViewController *v28; // [xsp+C0h] [xbp-A0h]
  __int64 v29; // [xsp+C8h] [xbp-98h] BYREF
  __int64 v30; // [xsp+D0h] [xbp-90h]
  unsigned __int64 v31; // [xsp+D8h] [xbp-88h]
  int64x2_t v32; // [xsp+E0h] [xbp-80h] BYREF
  Caver::GuidePurchaseViewController *v33; // [xsp+F0h] [xbp-70h]
  int64x2_t v34; // [xsp+100h] [xbp-60h] BYREF
  Caver::GuidePurchaseViewController *v35; // [xsp+110h] [xbp-50h]
  __int64 v36; // [xsp+128h] [xbp-38h]

  v36 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_DWORD **)(*((_QWORD *)this + 12) + 336LL);
  v4 = v3[72];
  v3[72] = v4 | 2;
  if ( (v4 | 2) != v4 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 304LL))(v3);
  v34.n128_u32[0] = 1280068684;
  Caver::GUIButton::SetTintColor();
  v5 = *(Caver::GUIButton **)(*((_QWORD *)this + 12) + 336LL);
  sub_566BB8((int)&v34, "Loading");
  Caver::GUIButton::SetTitle(v5);
  v6 = (void *)(v34.n128_u64[0] - 24);
  if ( (__int64 *)(v34.n128_u64[0] - 24) != &qword_6FD2E0 )
  {
    v24 = (unsigned int *)(v34.n128_u64[0] - 8);
    if ( &pthread_create )
    {
      do
        v25 = __ldaxr(v24);
      while ( __stlxr(v25 - 1, v24) );
    }
    else
    {
      v25 = (*v24)--;
    }
    if ( v25 <= 0 )
      operator delete(v6);
  }
  v7 = *((_QWORD *)this + 12);
  *(_BYTE *)(*(_QWORD *)(v7 + 320) + 228LL) = 1;
  *(_BYTE *)(*(_QWORD *)(v7 + 304) + 228LL) = 1;
  v8 = Caver::StoreController::SharedController((Caver::StoreController *)v6);
  v9 = (_QWORD *)*((_QWORD *)this + 2);
  v10 = v8;
  if ( !v9 || (v11 = v9[1]) == 0 )
  {
    v34.n128_u64[0] = (unsigned __int64)off_6CC4E8;
    boost::throw_exception<boost::bad_weak_ptr>();
  }
  v12 = *((_QWORD *)this + 1);
  v13 = vdupq_n_s64(0);
  v14 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 56LL);
  v9[1] = v11 + 2;
  v35 = this;
  v13.n128_u64[0] = (unsigned __int64)&Caver::GuidePurchaseViewController::RestoreCompletion;
  v34 = v13;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v15 = 0;
  }
  else
  {
    v28 = v35;
    v27 = v34;
    v15 = (unsigned __int64)boost::function2<void,std::vector<std::string> const&,std::string const&>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GuidePurchaseViewController,std::vector<std::string> const&,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::GuidePurchaseViewController*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GuidePurchaseViewController,std::vector<std::string> const&,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::GuidePurchaseViewController*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  v26 = v15;
  v29 = v12;
  v30 = (__int64)v9;
  ++v9[2];
  v31 = 0;
  if ( v15 )
  {
    v31 = v15;
    if ( (v15 & 1) != 0 )
    {
      v33 = v28;
      v32 = v27;
    }
    else
    {
      (*(void (__fastcall **)(int64x2_t *, int64x2_t *, _QWORD))(v15 & 0xFFFFFFFFFFFFFFFELL))(&v27, &v32, 0);
    }
  }
  v14(v10, &v29);
  if ( v31 )
  {
    if ( (v31 & 1) == 0 )
    {
      v16 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v31 & 0xFFFFFFFFFFFFFFFELL);
      if ( v16 )
        v16(&v32, &v32, 2);
    }
    v31 = 0;
  }
  result = v30;
  if ( v30 )
  {
    v18 = *(_QWORD *)(v30 + 16) - 1LL;
    *(_QWORD *)(v30 + 16) = v18;
    if ( !v18 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 24LL))(result);
  }
  if ( v26 )
  {
    if ( (v26 & 1) == 0 )
    {
      v19 = *(__int64 (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v26 & 0xFFFFFFFFFFFFFFFELL);
      if ( v19 )
        result = v19(&v27, &v27, 2);
    }
  }
  v20 = v9[1] - 1LL;
  v9[1] = v20;
  if ( !v20 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
    v21 = v9[2] - 1LL;
    v9[2] = v21;
    if ( !v21 )
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
  }
  v22 = v9[1] - 1LL;
  v9[1] = v22;
  if ( !v22 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
    v23 = v9[2] - 1LL;
    v9[2] = v23;
    if ( !v23 )
      return (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
  }
  return result;
}

