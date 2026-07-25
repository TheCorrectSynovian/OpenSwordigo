/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000342F7C
 * Mangled: _ZN5Caver22GameMenuViewController8LoadViewEv
 * Demangled: Caver::GameMenuViewController::LoadView(void)
 *
 * Callers: 1
 *   0x0000000000342C90  Caver::GameMenuViewController::~GameMenuViewController()
 *
 * Callees: 14
 *   0x00000000001F4D90  Caver::TabbedMenuView::TabbedMenuView(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8270  Caver::TabbedMenuView::AddTab(std::string const&)
 *   0x00000000001FE3D0  Caver::TabbedMenuView::SetSelectedTab(std::string const&)
 *   0x0000000000203200  boost::shared_ptr<Caver::TabbedMenuView>::shared_ptr<Caver::TabbedMenuView>(Caver::TabbedMenuView *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003437C4  Caver::GameMenuViewController::ViewWillDisappear(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 256
 *   insn=0x0000000000342F90 string=0x0000000000342F94 "V"
 *   insn=0x0000000000342FA8 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000342FAC string=0x0000000000342FB0 "x"
 *   insn=0x0000000000342FB0 string=0x00000000001F4D90 "P'"
 *   insn=0x0000000000342FBC string=0x0000000000342FC0 "h"
 *   insn=0x0000000000342FCC string=0x0000000000342FD0 "i"
 *   insn=0x0000000000342FD4 string=0x0000000000342FD8 "4"
 *   insn=0x0000000000342FD8 string=0x000000000034301C "tN@"
 *   insn=0x0000000000342FDC string=0x0000000000342FE0 ""
 *   insn=0x0000000000342FF0 string=0x0000000000342FF4 "\t@"
 *   insn=0x0000000000342FFC string=0x0000000000343000 ""
 *   insn=0x0000000000343010 string=0x0000000000343014 "@"
 *   insn=0x0000000000343028 string=0x0000000000343060 "hb"
 *   insn=0x000000000034302C string=0x0000000000343030 "H"
 *   insn=0x0000000000343034 string=0x0000000000343038 "@"
 *   insn=0x0000000000343038 string=0x000000000034303C ""
 *   insn=0x000000000034303C string=0x0000000000583734 "o"
 *   insn=0x000000000034304C string=0x0000000000343050 ""
 *   insn=0x0000000000343050 string=0x0000000000343054 "-@"
 *   insn=0x0000000000343058 string=0x000000000034305C "tN@"
 *   insn=0x0000000000343064 string=0x0000000000343068 "a"
 *   insn=0x0000000000343068 string=0x000000000059143D "close"
 *   insn=0x0000000000343080 string=0x0000000000343084 "{"
 *   insn=0x0000000000343084 string=0x00000000001F8270 "0'"
 *   insn=0x0000000000343098 string=0x000000000034309C "A"
 *   insn=0x000000000034309C string=0x00000000003430A0 "tN@"
 *   insn=0x000000000034309C string=0x0000000000343324 "\t"
 *   insn=0x00000000003430A0 string=0x00000000003430A4 "A"
 *   insn=0x00000000003430A4 string=0x000000000058E4DC "settings"
 *   insn=0x00000000003430BC string=0x00000000003430C0 "l"
 *   insn=0x00000000003430D0 string=0x00000000003430D4 "tN@"
 *   insn=0x00000000003430D0 string=0x0000000000343348 "\t"
 *   insn=0x00000000003430D4 string=0x00000000003430D8 "A"
 *   insn=0x00000000003430D8 string=0x000000000058E4E5 "quests"
 *   insn=0x00000000003430F0 string=0x00000000003430F4 "_"
 *   insn=0x0000000000343100 string=0x0000000000343104 "A"
 *   insn=0x0000000000343104 string=0x0000000000343108 "tN@"
 *   insn=0x0000000000343104 string=0x000000000034336C "\t"
 *   insn=0x0000000000343108 string=0x000000000034310C "a"
 *   insn=0x000000000034310C string=0x0000000000591F83 "map"
 *   insn=0x0000000000343124 string=0x0000000000343128 "R"
 *   insn=0x0000000000343138 string=0x000000000034313C "tN@"
 *   insn=0x0000000000343138 string=0x0000000000343390 "\t"
 *   insn=0x000000000034313C string=0x0000000000343140 "A"
 *   insn=0x0000000000343140 string=0x000000000058E4EC "inventory"
 *   insn=0x0000000000343158 string=0x000000000034315C "E"
 *   insn=0x0000000000343168 string=0x000000000034316C "A"
 *   insn=0x000000000034316C string=0x0000000000343170 "tN@"
 *   insn=0x000000000034316C string=0x00000000003433B4 "\t"
 *   insn=0x0000000000343170 string=0x0000000000343174 "A"
 *   insn=0x0000000000343174 string=0x000000000058E4F6 "char"
 *   insn=0x000000000034318C string=0x0000000000343190 "8"
 *   insn=0x00000000003431A0 string=0x00000000003431A4 "iF@"
 *   insn=0x00000000003431A0 string=0x00000000003433D8 "\t"
 *   insn=0x00000000003431A4 string=0x00000000003431A8 "uN@"
 *   insn=0x00000000003431A8 string=0x00000000003431AC "(QH"
 *   insn=0x00000000003431B4 string=0x00000000003431B8 ")"
 *   insn=0x00000000003431E4 string=0x00000000003431E8 "4"
 *   insn=0x00000000003431E4 string=0x00000000003433FC "\t"
 *   insn=0x00000000003431E8 string=0x000000000034322C "h"
 *   insn=0x00000000003431EC string=0x00000000003431F0 ""
 *   insn=0x0000000000343200 string=0x0000000000343204 "\t@"
 *   insn=0x000000000034320C string=0x0000000000343210 ""
 *   insn=0x0000000000343220 string=0x0000000000343224 "@"
 *   insn=0x000000000034322C string=0x0000000000343230 "aN@"
 *   insn=0x0000000000343234 string=0x0000000000343238 "-@"
 *   insn=0x000000000034323C string=0x0000000000343240 "h"
 *   insn=0x0000000000343244 string=0x0000000000343254 "u"
 *   insn=0x0000000000343248 string=0x000000000034324C ")\t"
 *   insn=0x0000000000343254 string=0x0000000000343258 "h"
 *   insn=0x0000000000343258 string=0x000000000034325C "5"
 *   insn=0x000000000034325C string=0x00000000003432A0 "`"@"
 *   insn=0x0000000000343260 string=0x0000000000343264 ""
 *   insn=0x0000000000343270 string=0x0000000000343274 "\t@"
 *   insn=0x0000000000343280 string=0x0000000000343284 ""
 *   insn=0x0000000000343290 string=0x0000000000343294 "@"
 *   insn=0x00000000003432A4 string=0x00000000003432A8 ""
 *   insn=0x00000000003432A4 string=0x00000000003432B8 "4"
 *   insn=0x00000000003432A8 string=0x00000000003432AC ""
 *   insn=0x00000000003432BC string=0x00000000003432C0 ""
 *   insn=0x00000000003432D0 string=0x00000000003432D4 "\t@"
 *   insn=0x00000000003432DC string=0x00000000003432E0 ""
 *   insn=0x00000000003432F0 string=0x00000000003432F4 "@"
 *   insn=0x0000000000343308 string=0x0000000000343504 "s"
 *   insn=0x0000000000343324 string=0x0000000000343328 ")=G"
 *   insn=0x0000000000343328 string=0x000000000034332C "!"
 *   insn=0x0000000000343330 string=0x0000000000343334 "\t"
 *   insn=0x0000000000343330 string=0x0000000000343420 "\t"
 *   insn=0x0000000000343334 string=0x0000000000343338 "*"
 *   insn=0x0000000000343338 string=0x000000000034333C "\n"
 *   insn=0x0000000000343340 string=0x0000000000343344 ":"
 *   insn=0x0000000000343344 string=0x000000000034342C "?"
 *   insn=0x0000000000343348 string=0x000000000034334C ")=G"
 *   insn=0x000000000034334C string=0x0000000000343350 "!"
 *   insn=0x0000000000343350 string=0x0000000000343354 "i"
 *   insn=0x0000000000343354 string=0x0000000000343358 "\t"
 *   insn=0x0000000000343354 string=0x0000000000343440 "\t"
 *   insn=0x0000000000343358 string=0x000000000034335C "*"
 *   insn=0x000000000034335C string=0x0000000000343360 "\n"
 *   insn=0x0000000000343364 string=0x0000000000343368 "9"
 *   insn=0x0000000000343368 string=0x000000000034344C "?"
 *   insn=0x000000000034336C string=0x0000000000343370 ")=G"
 *   insn=0x0000000000343370 string=0x0000000000343374 "!"
 *   insn=0x0000000000343374 string=0x0000000000343378 "I"
 *   insn=0x0000000000343378 string=0x000000000034337C "\t"
 *   insn=0x0000000000343378 string=0x0000000000343460 "\t"
 *   insn=0x000000000034337C string=0x0000000000343380 "*"
 *   insn=0x0000000000343380 string=0x0000000000343384 "\n"
 *   insn=0x0000000000343388 string=0x000000000034338C "8"
 *   insn=0x000000000034338C string=0x000000000034346C "?"
 *   insn=0x0000000000343390 string=0x0000000000343394 ")=G"
 *   insn=0x0000000000343394 string=0x0000000000343398 "!"
 *   insn=0x0000000000343398 string=0x000000000034339C ")"
 *   insn=0x000000000034339C string=0x00000000003433A0 "\t"
 *   insn=0x000000000034339C string=0x0000000000343480 "\t"
 *   insn=0x00000000003433A0 string=0x00000000003433A4 "*"
 *   insn=0x00000000003433A4 string=0x00000000003433A8 "\n"
 *   insn=0x00000000003433AC string=0x00000000003433B0 "7"
 *   insn=0x00000000003433B0 string=0x000000000034348C "?"
 *   insn=0x00000000003433B4 string=0x00000000003433B8 ")=G"
 *   insn=0x00000000003433B8 string=0x00000000003433BC "!"
 *   insn=0x00000000003433BC string=0x00000000003433C0 "\t"
 *   insn=0x00000000003433C0 string=0x00000000003433C4 "\t"
 *   insn=0x00000000003433C0 string=0x00000000003434A0 "\t"
 *   insn=0x00000000003433C4 string=0x00000000003433C8 "*"
 *   insn=0x00000000003433C8 string=0x00000000003433CC "\n"
 *   insn=0x00000000003433D0 string=0x00000000003433D4 "6"
 *   insn=0x00000000003433D4 string=0x00000000003434AC "?"
 *   insn=0x00000000003433D8 string=0x00000000003433DC ")=G"
 *   insn=0x00000000003433DC string=0x00000000003433E0 "!"
 *   insn=0x00000000003433E4 string=0x00000000003433E8 "\t"
 *   insn=0x00000000003433E4 string=0x00000000003434C0 "\t"
 *   insn=0x00000000003433E8 string=0x00000000003433EC "*"
 *   insn=0x00000000003433EC string=0x00000000003433F0 "\n"
 *   insn=0x00000000003433F4 string=0x00000000003433F8 "5"
 *   insn=0x00000000003433F8 string=0x00000000003434CC "?"
 *   insn=0x00000000003433FC string=0x0000000000343400 ")=G"
 *   insn=0x0000000000343400 string=0x0000000000343404 "!"
 *   insn=0x0000000000343408 string=0x000000000034340C "\t"
 *   insn=0x0000000000343408 string=0x00000000003434E0 "\t"
 *   insn=0x000000000034340C string=0x0000000000343410 "*"
 *   insn=0x0000000000343410 string=0x0000000000343414 "\n"
 *   insn=0x0000000000343418 string=0x000000000034341C "4"
 *   insn=0x000000000034341C string=0x00000000003434EC "?"
 *   insn=0x0000000000343420 string=0x0000000000343424 "*"
 *   insn=0x0000000000343424 string=0x0000000000343428 "\n"
 *   insn=0x0000000000343440 string=0x0000000000343444 "*"
 *   insn=0x0000000000343444 string=0x0000000000343448 "\n"
 *   insn=0x000000000034344C string=0x0000000000343450 ","
 *   insn=0x0000000000343460 string=0x0000000000343464 "*"
 *   insn=0x0000000000343464 string=0x0000000000343468 "\n"
 *   insn=0x0000000000343478 string=0x000000000034347C "#"
 *   insn=0x0000000000343480 string=0x0000000000343484 "*"
 *   insn=0x0000000000343484 string=0x0000000000343488 "\n"
 *   insn=0x000000000034348C string=0x0000000000343490 "l"
 *   insn=0x0000000000343498 string=0x000000000034349C "("
 *   insn=0x00000000003434A0 string=0x00000000003434A4 "*"
 *   insn=0x00000000003434A4 string=0x00000000003434A8 "\n"
 *   insn=0x00000000003434B8 string=0x00000000003434BC "-"
 *   insn=0x00000000003434C0 string=0x00000000003434C4 "*"
 *   insn=0x00000000003434C4 string=0x00000000003434C8 "\n"
 *   insn=0x00000000003434D8 string=0x00000000003434DC "2"
 *   insn=0x00000000003434E0 string=0x00000000003434E4 "*"
 *   insn=0x00000000003434E4 string=0x00000000003434E8 "\n"
 *   insn=0x00000000003434FC string=0x0000000000343500 "K"
 *   insn=0x0000000000343504 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000343510 string=0x0000000000343514 ""
 *   insn=0x0000000000343518 string=0x000000000034351C "A"
 *   insn=0x0000000000343520 string=0x0000000000343524 "\t@"
 *   insn=0x0000000000343530 string=0x0000000000343534 ""
 *   insn=0x0000000000343538 string=0x000000000034353C "A"
 *   insn=0x0000000000343540 string=0x0000000000343544 "@"
 *   insn=0x0000000000343558 string=0x000000000034355C "(a"
 *   insn=0x0000000000343564 string=0x0000000000343568 "\n"
 *   insn=0x0000000000343564 string=0x00000000003435C0 "4"
 *   insn=0x0000000000343568 string=0x000000000034356C "J=G"
 *   insn=0x000000000034356C string=0x0000000000343570 ")!"
 *   insn=0x0000000000343574 string=0x0000000000343578 "*"
 *   insn=0x0000000000343574 string=0x00000000003435A4 "*"
 *   insn=0x0000000000343578 string=0x000000000034357C "K"
 *   insn=0x000000000034357C string=0x0000000000343580 "+"
 *   insn=0x0000000000343584 string=0x0000000000343588 "_"
 *   insn=0x0000000000343598 string=0x000000000034359C "T"
 *   insn=0x00000000003435A4 string=0x00000000003435A8 "K"
 *   insn=0x00000000003435A8 string=0x00000000003435AC "+"
 *   insn=0x00000000003435AC string=0x00000000003435B0 "_"
 *   insn=0x00000000003435C4 string=0x00000000003435C8 ""
 *   insn=0x00000000003435D4 string=0x00000000003435D8 "\t@"
 *   insn=0x00000000003435E4 string=0x00000000003435E8 ""
 *   insn=0x00000000003435F4 string=0x00000000003435F8 "@"
 *   insn=0x0000000000343600 string=0x0000000000343604 "h"
 *   insn=0x0000000000343610 string=0x0000000000343614 "(a"
 *   insn=0x0000000000343618 string=0x000000000034361C "@"
 *   insn=0x000000000034361C string=0x0000000000343620 "\n"
 *   insn=0x0000000000343620 string=0x0000000000343624 "J=G"
 *   insn=0x0000000000343624 string=0x0000000000343628 ")!"
 *   insn=0x0000000000343628 string=0x000000000034362C "*"
 *   insn=0x000000000034362C string=0x0000000000343630 "*"
 *   insn=0x000000000034362C string=0x0000000000343790 "*"
 *   insn=0x0000000000343630 string=0x0000000000343634 "K"
 *   insn=0x0000000000343634 string=0x0000000000343638 "+"
 *   insn=0x000000000034363C string=0x0000000000343640 "M"
 *   insn=0x0000000000343640 string=0x0000000000343774 "_"
 *   insn=0x000000000034364C string=0x0000000000343650 "(a"
 *   insn=0x0000000000343654 string=0x0000000000343658 "`\n"
 *   insn=0x0000000000343658 string=0x000000000034365C "\n"
 *   insn=0x000000000034365C string=0x0000000000343660 "J=G"
 *   insn=0x0000000000343660 string=0x0000000000343664 ")!"
 *   insn=0x0000000000343664 string=0x0000000000343668 "J\t"
 *   insn=0x0000000000343668 string=0x000000000034366C "*"
 *   insn=0x000000000034366C string=0x0000000000343670 "K"
 *   insn=0x0000000000343670 string=0x0000000000343674 "+"
 *   insn=0x0000000000343678 string=0x000000000034367C ">"
 *   insn=0x0000000000343688 string=0x000000000034368C "(a"
 *   insn=0x0000000000343694 string=0x0000000000343698 "\n"
 *   insn=0x0000000000343698 string=0x000000000034369C "J=G"
 *   insn=0x000000000034369C string=0x00000000003436A0 ")!"
 *   insn=0x00000000003436A0 string=0x00000000003436A4 "j"
 *   insn=0x00000000003436A4 string=0x00000000003436A8 "*"
 *   insn=0x00000000003436A8 string=0x00000000003436AC "K"
 *   insn=0x00000000003436AC string=0x00000000003436B0 "+"
 *   insn=0x00000000003436B4 string=0x00000000003436B8 "/"
 *   insn=0x00000000003436C4 string=0x00000000003436C8 "(a"
 *   insn=0x00000000003436D0 string=0x00000000003436D4 "\n"
 *   insn=0x00000000003436D4 string=0x00000000003436D8 "J=G"
 *   insn=0x00000000003436D8 string=0x00000000003436DC ")!"
 *   insn=0x00000000003436E0 string=0x00000000003436E4 "*"
 *   insn=0x00000000003436E4 string=0x00000000003436E8 "K"
 *   insn=0x00000000003436E8 string=0x00000000003436EC "+"
 *   insn=0x00000000003436F0 string=0x00000000003436F4 " "
 *   insn=0x0000000000343700 string=0x0000000000343704 "(a"
 *   insn=0x000000000034370C string=0x0000000000343710 "\n"
 *   insn=0x0000000000343710 string=0x0000000000343714 "J=G"
 *   insn=0x0000000000343714 string=0x0000000000343718 ")!"
 *   insn=0x000000000034371C string=0x0000000000343720 "*"
 *   insn=0x0000000000343720 string=0x0000000000343724 "K"
 *   insn=0x0000000000343724 string=0x0000000000343728 "+"
 *   insn=0x0000000000343738 string=0x000000000034373C "\n"
 *   insn=0x000000000034373C string=0x0000000000343740 "J"
 *   insn=0x0000000000343744 string=0x0000000000343748 "(a"
 *   insn=0x0000000000343750 string=0x0000000000343754 "\n"
 *   insn=0x0000000000343754 string=0x0000000000343758 "J=G"
 *   insn=0x0000000000343758 string=0x000000000034375C ")!"
 *   insn=0x0000000000343760 string=0x0000000000343764 "*"
 *   insn=0x0000000000343764 string=0x0000000000343768 "K"
 *   insn=0x0000000000343768 string=0x000000000034376C "+"
 *   insn=0x0000000000343774 string=0x0000000000343778 "l"
 *   insn=0x0000000000343780 string=0x0000000000343784 ""
 *   insn=0x0000000000343788 string=0x000000000034378C "N"
 *   insn=0x0000000000343790 string=0x0000000000343794 "K"
 *   insn=0x0000000000343794 string=0x0000000000343798 "+"
 *   insn=0x0000000000343798 string=0x000000000034379C "_"
 *   insn=0x00000000003437A4 string=0x00000000003437A8 "G"
 *   insn=0x00000000003437A8 string=0x00000000003437AC "F"
 *   insn=0x00000000003437B8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003437BC string=0x00000000003437C0 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall ***__fastcall Caver::GameMenuViewController::LoadView(
        Caver::GameMenuViewController *this))(_QWORD, Caver::GameMenuViewController *)
{
  Caver::TabbedMenuView *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x9
  _QWORD *v5; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x20
  float *v9; // x0
  void *v10; // x0
  void *v11; // x0
  void *v12; // x0
  void *v13; // x0
  void *v14; // x0
  void *v15; // x0
  __int64 v16; // x9
  __int64 v17; // x8
  _QWORD *v18; // x20
  void *v19; // x0
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  _QWORD *v23; // x20
  _QWORD *v24; // x21
  __int64 v25; // x8
  __int64 v26; // x8
  __int64 (__fastcall ***result)(_QWORD, Caver::GameMenuViewController *); // x0
  __int64 v28; // x8
  __int64 v29; // x8
  unsigned int *v30; // x8
  int v31; // w9
  unsigned int *v32; // x8
  int v33; // w9
  unsigned int *v34; // x8
  int v35; // w9
  unsigned int *v36; // x8
  int v37; // w9
  unsigned int *v38; // x8
  int v39; // w9
  unsigned int *v40; // x8
  int v41; // w9
  unsigned int *v42; // x8
  int v43; // w9
  __int64 v44; // [xsp+10h] [xbp-50h] BYREF
  _QWORD *v45; // [xsp+18h] [xbp-48h]
  __int64 v46; // [xsp+28h] [xbp-38h]

  v46 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::TabbedMenuView *)operator new(0x188u);
  Caver::TabbedMenuView::TabbedMenuView(v2);
  boost::shared_ptr<Caver::TabbedMenuView>::shared_ptr<Caver::TabbedMenuView>();
  v3 = (_QWORD *)*((_QWORD *)this + 20);
  v4 = v44;
  v44 = *((_QWORD *)this + 19);
  v5 = v45;
  *((_QWORD *)this + 19) = v4;
  *((_QWORD *)this + 20) = v5;
  v45 = v3;
  if ( v3 )
  {
    v6 = v3[1] - 1LL;
    v3[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v7 = v3[2] - 1LL;
      v3[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  v8 = *((_QWORD *)this + 19);
  if ( *(_DWORD *)(v8 + 112) != 18 )
  {
    v9 = *(float **)(v8 + 88);
    *(_DWORD *)(v8 + 112) = 18;
    if ( v9 )
    {
      if ( v9[35] > 0.001 )
      {
        (*(void (__fastcall **)(float *))(*(_QWORD *)v9 + 88LL))(v9);
        v8 = *((_QWORD *)this + 19);
      }
    }
  }
  *(_QWORD *)(v8 + 248) = (char *)this + 88;
  sub_566BB8((int)&v44, "close");
  Caver::TabbedMenuView::AddTab();
  v10 = (void *)(v44 - 24);
  if ( (__int64 *)(v44 - 24) != &qword_6FD2E0 )
  {
    v30 = (unsigned int *)(v44 - 8);
    if ( &pthread_create )
    {
      do
        v31 = __ldaxr(v30);
      while ( __stlxr(v31 - 1, v30) );
    }
    else
    {
      v31 = (*v30)--;
    }
    if ( v31 <= 0 )
      operator delete(v10);
  }
  sub_566BB8((int)&v44, "settings");
  Caver::TabbedMenuView::AddTab();
  v11 = (void *)(v44 - 24);
  if ( (__int64 *)(v44 - 24) != &qword_6FD2E0 )
  {
    v32 = (unsigned int *)(v44 - 8);
    if ( &pthread_create )
    {
      do
        v33 = __ldaxr(v32);
      while ( __stlxr(v33 - 1, v32) );
    }
    else
    {
      v33 = (*v32)--;
    }
    if ( v33 <= 0 )
      operator delete(v11);
  }
  sub_566BB8((int)&v44, "quests");
  Caver::TabbedMenuView::AddTab();
  v12 = (void *)(v44 - 24);
  if ( (__int64 *)(v44 - 24) != &qword_6FD2E0 )
  {
    v34 = (unsigned int *)(v44 - 8);
    if ( &pthread_create )
    {
      do
        v35 = __ldaxr(v34);
      while ( __stlxr(v35 - 1, v34) );
    }
    else
    {
      v35 = (*v34)--;
    }
    if ( v35 <= 0 )
      operator delete(v12);
  }
  sub_566BB8((int)&v44, "map");
  Caver::TabbedMenuView::AddTab();
  v13 = (void *)(v44 - 24);
  if ( (__int64 *)(v44 - 24) != &qword_6FD2E0 )
  {
    v36 = (unsigned int *)(v44 - 8);
    if ( &pthread_create )
    {
      do
        v37 = __ldaxr(v36);
      while ( __stlxr(v37 - 1, v36) );
    }
    else
    {
      v37 = (*v36)--;
    }
    if ( v37 <= 0 )
      operator delete(v13);
  }
  sub_566BB8((int)&v44, "inventory");
  Caver::TabbedMenuView::AddTab();
  v14 = (void *)(v44 - 24);
  if ( (__int64 *)(v44 - 24) != &qword_6FD2E0 )
  {
    v38 = (unsigned int *)(v44 - 8);
    if ( &pthread_create )
    {
      do
        v39 = __ldaxr(v38);
      while ( __stlxr(v39 - 1, v38) );
    }
    else
    {
      v39 = (*v38)--;
    }
    if ( v39 <= 0 )
      operator delete(v14);
  }
  sub_566BB8((int)&v44, "char");
  Caver::TabbedMenuView::AddTab();
  v15 = (void *)(v44 - 24);
  if ( (__int64 *)(v44 - 24) != &qword_6FD2E0 )
  {
    v40 = (unsigned int *)(v44 - 8);
    if ( &pthread_create )
    {
      do
        v41 = __ldaxr(v40);
      while ( __stlxr(v41 - 1, v40) );
    }
    else
    {
      v41 = (*v40)--;
    }
    if ( v41 <= 0 )
      operator delete(v15);
  }
  v16 = *((_QWORD *)this + 17);
  v17 = *(_QWORD *)(v16 + 128);
  v18 = *(_QWORD **)(v16 + 136);
  if ( v18 )
    ++v18[1];
  sub_56A528(&v44, v17 + 400);
  Caver::TabbedMenuView::SetSelectedTab();
  v19 = (void *)(v44 - 24);
  if ( (__int64 *)(v44 - 24) == &qword_6FD2E0 )
    goto LABEL_18;
  v42 = (unsigned int *)(v44 - 8);
  if ( &pthread_create )
  {
    do
      v43 = __ldaxr(v42);
    while ( __stlxr(v43 - 1, v42) );
  }
  else
  {
    v43 = (*v42)--;
  }
  if ( v43 > 0 )
  {
LABEL_18:
    if ( !v18 )
      goto LABEL_22;
  }
  else
  {
    operator delete(v19);
    if ( !v18 )
      goto LABEL_22;
  }
  v20 = v18[1] - 1LL;
  v18[1] = v20;
  if ( !v20 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
    v21 = v18[2] - 1LL;
    v18[2] = v21;
    if ( !v21 )
      (*(void (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
  }
LABEL_22:
  (*(void (__fastcall **)(Caver::GameMenuViewController *, _QWORD))(*(_QWORD *)this + 88LL))(
    this,
    *((_QWORD *)this + 19));
  v22 = *((_QWORD *)this + 19);
  v23 = (_QWORD *)*((_QWORD *)this + 20);
  if ( v23 )
    v23[1] += 2LL;
  v24 = (_QWORD *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 3) = v22;
  *((_QWORD *)this + 4) = v23;
  if ( v24 )
  {
    v25 = v24[1] - 1LL;
    v24[1] = v25;
    if ( !v25 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
      v26 = v24[2] - 1LL;
      v24[2] = v26;
      if ( !v26 )
        (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
    }
  }
  result = (__int64 (__fastcall ***)(_QWORD, Caver::GameMenuViewController *))*((_QWORD *)this + 8);
  if ( result )
    result = (__int64 (__fastcall ***)(_QWORD, Caver::GameMenuViewController *))(**result)(result, this);
  if ( v23 )
  {
    v28 = v23[1] - 1LL;
    v23[1] = v28;
    if ( !v28 )
    {
      result = (__int64 (__fastcall ***)(_QWORD, Caver::GameMenuViewController *))(*(__int64 (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
      v29 = v23[2] - 1LL;
      v23[2] = v29;
      if ( !v29 )
        return (__int64 (__fastcall ***)(_QWORD, Caver::GameMenuViewController *))(*(__int64 (__fastcall **)(_QWORD *))(*v23 + 24LL))(v23);
    }
  }
  return result;
}

