/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000469290
 * Mangled: sub_469290
 * Demangled: sub_469290
 *
 * Callers: 0
 *
 * Callees: 24
 *   0x00000000001F49A0  Caver::Scene::GroupWithIdentifier(std::string const&,bool)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7390  Caver::ProgramState::IsBoolAtStackIndex(int)
 *   0x00000000001F8D80  Caver::ProgramState::BoolAtStackIndex(int)
 *   0x00000000001F9360  std::_Rb_tree<long,std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>>::_M_erase(std::_Rb_tree_node<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>> *)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FB490  Caver::SceneObject::SetIdentifier(std::string const&)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FFD90  Caver::SceneObject::Activate(void)
 *   0x0000000000200980  Caver::ProgramTable::PointerForKey(std::string const&)
 *   0x0000000000200B80  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x0000000000202940  Caver::ProgramState::StringAtStackIndex(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 349
 *   insn=0x00000000004692A8 string=0x00000000004692AC "X"
 *   insn=0x00000000004692AC string=0x00000000004692B0 ""
 *   insn=0x00000000004692B4 string=0x00000000004692B8 "JH"
 *   insn=0x00000000004692B8 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004692C0 string=0x00000000005834B5 "scene"
 *   insn=0x00000000004692CC string=0x00000000004692D0 ":"
 *   insn=0x00000000004692D0 string=0x00000000004692D4 "`"
 *   insn=0x0000000000469320 string=0x0000000000469324 "M"
 *   insn=0x0000000000469324 string=0x0000000000469328 "`"
 *   insn=0x0000000000469324 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000469340 string=0x00000000001F7390 "0'"
 *   insn=0x0000000000469350 string=0x00000000001F8D80 "0'"
 *   insn=0x0000000000469378 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000469384 string=0x00000000001FAB30 "0'"
 *   insn=0x0000000000469398 string=0x00000000001F5A20 "P'"
 *   insn=0x00000000004693A0 string=0x00000000004693A4 ";H"
 *   insn=0x00000000004693A4 string=0x00000000001FB490 "0'"
 *   insn=0x00000000004693A8 string=0x00000000004693AC " s@"
 *   insn=0x00000000004693A8 string=0x0000000000469420 "v"
 *   insn=0x00000000004693BC string=0x00000000004693C0 "!"
 *   insn=0x00000000004693C0 string=0x00000000004693C4 "  ""
 *   insn=0x00000000004693C8 string=0x00000000004693CC ")w@"
 *   insn=0x00000000004693D0 string=0x00000000004693D4 "\t"
 *   insn=0x00000000004693D8 string=0x00000000004693DC "!w@"
 *   insn=0x00000000004693E0 string=0x00000000004693E4 "#8#"
 *   insn=0x00000000004693E4 string=0x00000000004693E8 "c"
 *   insn=0x00000000004693E8 string=0x00000000004693EC "` ""
 *   insn=0x00000000004693EC string=0x00000000004693F0 "I"
 *   insn=0x00000000004693F0 string=0x00000000004693F4 ")"
 *   insn=0x00000000004693F0 string=0x0000000000469418 "({@"
 *   insn=0x00000000004693F8 string=0x00000000004693FC "\t"
 *   insn=0x0000000000469408 string=0x000000000046940C "e2"
 *   insn=0x000000000046940C string=0x00000000001F5DA0 "P'"
 *   insn=0x0000000000469428 string=0x000000000046942C ""
 *   insn=0x000000000046942C string=0x0000000000469430 ")"
 *   insn=0x000000000046944C string=0x0000000000469450 "@"
 *   insn=0x0000000000469450 string=0x0000000000469454 ""
 *   insn=0x0000000000469454 string=0x0000000000469458 ""
 *   insn=0x000000000046945C string=0x0000000000469460 ""
 *   insn=0x0000000000469460 string=0x0000000000469464 ""
 *   insn=0x000000000046947C string=0x0000000000469480 "@"
 *   insn=0x0000000000469480 string=0x0000000000469484 ""
 *   insn=0x0000000000469484 string=0x0000000000469488 ""
 *   insn=0x000000000046948C string=0x0000000000469490 ""
 *   insn=0x0000000000469490 string=0x0000000000469494 ""
 *   insn=0x00000000004694A4 string=0x00000000004694A8 "A"
 *   insn=0x00000000004694B8 string=0x00000000004694BC ""
 *   insn=0x00000000004694C8 string=0x00000000004695B8 "F3"
 *   insn=0x00000000004694EC string=0x00000000004694F0 ")=G"
 *   insn=0x00000000004694F0 string=0x00000000004694F4 "!"
 *   insn=0x00000000004694F4 string=0x00000000004694F8 "\t"
 *   insn=0x00000000004694F8 string=0x00000000004694FC "\t"
 *   insn=0x00000000004694F8 string=0x0000000000469558 "\t"
 *   insn=0x00000000004694FC string=0x0000000000469500 "*"
 *   insn=0x0000000000469500 string=0x0000000000469504 "\n"
 *   insn=0x000000000046950C string=0x0000000000469564 "?"
 *   insn=0x0000000000469510 string=0x0000000000469514 ")=G"
 *   insn=0x0000000000469514 string=0x0000000000469518 "!"
 *   insn=0x000000000046951C string=0x0000000000469520 "\t"
 *   insn=0x000000000046951C string=0x0000000000469578 "\t"
 *   insn=0x0000000000469520 string=0x0000000000469524 "*"
 *   insn=0x0000000000469524 string=0x0000000000469528 "\n"
 *   insn=0x0000000000469530 string=0x0000000000469584 "?"
 *   insn=0x0000000000469534 string=0x0000000000469538 ")=G"
 *   insn=0x0000000000469538 string=0x000000000046953C "!"
 *   insn=0x0000000000469540 string=0x0000000000469544 "\t"
 *   insn=0x0000000000469540 string=0x0000000000469598 "\t"
 *   insn=0x0000000000469544 string=0x0000000000469548 "*"
 *   insn=0x0000000000469548 string=0x000000000046954C "\n"
 *   insn=0x0000000000469554 string=0x00000000004695A4 "?"
 *   insn=0x0000000000469558 string=0x000000000046955C "*"
 *   insn=0x000000000046955C string=0x0000000000469560 "\n"
 *   insn=0x0000000000469570 string=0x0000000000469574 "b"
 *   insn=0x0000000000469578 string=0x000000000046957C "*"
 *   insn=0x000000000046957C string=0x0000000000469580 "\n"
 *   insn=0x0000000000469584 string=0x0000000000469588 ","
 *   insn=0x0000000000469598 string=0x000000000046959C "*"
 *   insn=0x000000000046959C string=0x00000000004695A0 "\n"
 *   insn=0x00000000004695AC string=0x00000000004695B0 "}"
 *   insn=0x00000000004695B8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004695C4 string=0x00000000004695C8 "H"
 *   insn=0x00000000004695C8 string=0x00000000004695CC "\t\t@"
 *   insn=0x00000000004695CC string=0x00000000004695D0 ")"
 *   insn=0x00000000004695D0 string=0x00000000004695D4 "\t\t"
 *   insn=0x00000000004695D8 string=0x00000000004695DC "\t"
 *   insn=0x00000000004695DC string=0x00000000004695E0 ")"
 *   insn=0x00000000004695E4 string=0x00000000004695E8 " "
 *   insn=0x00000000004695E8 string=0x00000000004695EC ")"
 *   insn=0x00000000004695F4 string=0x00000000004695F8 ".7"
 *   insn=0x00000000004695F8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000469600 string=0x0000000000469604 ","
 *   insn=0x0000000000469600 string=0x0000000000469698 "@"
 *   insn=0x000000000046960C string=0x0000000000469610 "-"
 *   insn=0x0000000000469618 string=0x000000000046961C "J"
 *   insn=0x0000000000469620 string=0x0000000000469624 "(a"
 *   insn=0x0000000000469630 string=0x0000000000469634 "J=G"
 *   insn=0x0000000000469634 string=0x0000000000469638 ")!"
 *   insn=0x0000000000469638 string=0x000000000046963C "J"
 *   insn=0x000000000046963C string=0x0000000000469640 "*"
 *   insn=0x000000000046963C string=0x0000000000469664 "*"
 *   insn=0x0000000000469640 string=0x0000000000469644 "K"
 *   insn=0x0000000000469644 string=0x0000000000469648 "+"
 *   insn=0x000000000046964C string=0x0000000000469650 "_"
 *   insn=0x000000000046965C string=0x0000000000469660 "("
 *   insn=0x0000000000469660 string=0x0000000000469700 ")"
 *   insn=0x0000000000469664 string=0x0000000000469668 "K"
 *   insn=0x0000000000469668 string=0x000000000046966C "+"
 *   insn=0x000000000046966C string=0x0000000000469670 "_"
 *   insn=0x0000000000469670 string=0x0000000000469674 "-"
 *   insn=0x0000000000469674 string=0x0000000000469678 "#"
 *   insn=0x0000000000469684 string=0x0000000000469688 ""
 *   insn=0x0000000000469698 string=0x000000000046969C ""
 *   insn=0x000000000046969C string=0x00000000004696A0 ""
 *   insn=0x00000000004696A4 string=0x00000000004696A8 ""
 *   insn=0x00000000004696A8 string=0x00000000004696AC ""
 *   insn=0x00000000004696BC string=0x00000000004696C0 "a"
 *   insn=0x00000000004696D4 string=0x00000000004696D8 ")=G"
 *   insn=0x00000000004696D8 string=0x00000000004696DC "!"
 *   insn=0x00000000004696E0 string=0x00000000004696E4 "\t"
 *   insn=0x00000000004696E0 string=0x0000000000469750 "\t"
 *   insn=0x00000000004696E4 string=0x00000000004696E8 "*"
 *   insn=0x00000000004696E8 string=0x00000000004696EC "\n"
 *   insn=0x00000000004696F0 string=0x00000000004696F4 "?"
 *   insn=0x00000000004696F4 string=0x00000000004696F8 "l"
 *   insn=0x0000000000469704 string=0x0000000000469708 "o`"
 *   insn=0x000000000046970C string=0x0000000000469710 ")=G"
 *   insn=0x0000000000469710 string=0x0000000000469714 "!"
 *   insn=0x0000000000469718 string=0x000000000046971C "\t"
 *   insn=0x0000000000469718 string=0x0000000000469730 "\t"
 *   insn=0x000000000046971C string=0x0000000000469720 "*"
 *   insn=0x0000000000469720 string=0x0000000000469724 "\n"
 *   insn=0x000000000046972C string=0x000000000046973C "?"
 *   insn=0x0000000000469730 string=0x0000000000469734 "*"
 *   insn=0x0000000000469734 string=0x0000000000469738 "\n"
 *   insn=0x000000000046973C string=0x0000000000469740 ","
 *   insn=0x0000000000469750 string=0x0000000000469754 "*"
 *   insn=0x0000000000469754 string=0x0000000000469758 "\n"
 *   insn=0x0000000000469758 string=0x000000000046975C "?"
 *   insn=0x000000000046977C string=0x0000000000469780 "U"
 *   insn=0x00000000004697AC string=0x00000000004697B0 "t\"
 *   insn=0x00000000004697BC string=0x00000000004697C0 ")"
 *   insn=0x00000000004697C8 string=0x00000000004697CC "a"
 *   insn=0x00000000004697DC string=0x00000000004697E0 ""
 *   insn=0x00000000004697E0 string=0x00000000004697E4 "h"
 *   insn=0x00000000004697E4 string=0x00000000004697E8 "i"
 *   insn=0x00000000004697E8 string=0x00000000004697EC ")"
 *   insn=0x00000000004697F0 string=0x00000000004697F4 "\n\t@"
 *   insn=0x00000000004697F4 string=0x00000000004697F8 "J"
 *   insn=0x00000000004697F8 string=0x00000000004697FC "\n\t"
 *   insn=0x0000000000469804 string=0x0000000000469808 " "
 *   insn=0x0000000000469810 string=0x0000000000469814 "@"
 *   insn=0x0000000000469814 string=0x0000000000469818 ""
 *   insn=0x0000000000469818 string=0x000000000046981C ""
 *   insn=0x0000000000469820 string=0x0000000000469824 ""
 *   insn=0x0000000000469824 string=0x0000000000469828 ""
 *   insn=0x0000000000469858 string=0x000000000046985C ")=G"
 *   insn=0x000000000046985C string=0x0000000000469860 "!"
 *   insn=0x0000000000469864 string=0x0000000000469868 "\t"
 *   insn=0x0000000000469864 string=0x000000000046987C "\t"
 *   insn=0x0000000000469868 string=0x000000000046986C "*"
 *   insn=0x000000000046986C string=0x0000000000469870 "\n"
 *   insn=0x0000000000469878 string=0x0000000000469888 "?"
 *   insn=0x000000000046987C string=0x0000000000469880 "*"
 *   insn=0x0000000000469880 string=0x0000000000469884 "\n"
 *   insn=0x0000000000469888 string=0x000000000046988C ","
 *   insn=0x00000000004698A4 string=0x00000000004698A8 ""
 *   insn=0x00000000004698A8 string=0x00000000004698AC "\t\t@"
 *   insn=0x00000000004698AC string=0x00000000004698B0 ")"
 *   insn=0x00000000004698B0 string=0x00000000004698B4 "\t\t"
 *   insn=0x00000000004698B8 string=0x00000000004698BC "\t"
 *   insn=0x00000000004698BC string=0x00000000004698C0 ")"
 *   insn=0x00000000004698C4 string=0x00000000004698C8 " "
 *   insn=0x00000000004698D8 string=0x00000000004698DC "J"
 *   insn=0x00000000004698E0 string=0x00000000004698E4 "(a"
 *   insn=0x00000000004698F0 string=0x00000000004698F4 "J=G"
 *   insn=0x00000000004698F4 string=0x00000000004698F8 ")!"
 *   insn=0x00000000004698FC string=0x0000000000469900 "*"
 *   insn=0x00000000004698FC string=0x000000000046992C "*"
 *   insn=0x0000000000469900 string=0x0000000000469904 "K"
 *   insn=0x0000000000469904 string=0x0000000000469908 "+"
 *   insn=0x000000000046990C string=0x0000000000469910 "_"
 *   insn=0x000000000046992C string=0x0000000000469930 "K"
 *   insn=0x0000000000469930 string=0x0000000000469934 "+"
 *   insn=0x0000000000469934 string=0x0000000000469938 "_"
 *   insn=0x0000000000469960 string=0x0000000000469964 "U"
 *   insn=0x0000000000469988 string=0x000000000046998C "`"
 *   insn=0x00000000004699A0 string=0x00000000004699A4 ")"
 *   insn=0x00000000004699CC string=0x00000000004699D0 "\t"
 *   insn=0x00000000004699D0 string=0x00000000004699D4 ""
 *   insn=0x00000000004699D8 string=0x00000000004699DC "iJ"
 *   insn=0x00000000004699EC string=0x0000000000469A4C "!2"
 *   insn=0x0000000000469A08 string=0x0000000000469A0C ")=G"
 *   insn=0x0000000000469A0C string=0x0000000000469A10 "!"
 *   insn=0x0000000000469A14 string=0x0000000000469A18 "\t"
 *   insn=0x0000000000469A14 string=0x0000000000469A2C "\t"
 *   insn=0x0000000000469A18 string=0x0000000000469A1C "*"
 *   insn=0x0000000000469A1C string=0x0000000000469A20 "\n"
 *   insn=0x0000000000469A28 string=0x0000000000469A38 "?"
 *   insn=0x0000000000469A2C string=0x0000000000469A30 "*"
 *   insn=0x0000000000469A30 string=0x0000000000469A34 "\n"
 *   insn=0x0000000000469A40 string=0x0000000000469A44 "X"
 *   insn=0x0000000000469A54 string=0x0000000000469A58 "J"
 *   insn=0x0000000000469A5C string=0x0000000000469A60 "(a"
 *   insn=0x0000000000469A6C string=0x0000000000469A70 "J=G"
 *   insn=0x0000000000469A70 string=0x0000000000469A74 ")!"
 *   insn=0x0000000000469A78 string=0x0000000000469A7C "*"
 *   insn=0x0000000000469A78 string=0x0000000000469AA8 "*"
 *   insn=0x0000000000469A7C string=0x0000000000469A80 "K"
 *   insn=0x0000000000469A80 string=0x0000000000469A84 "+"
 *   insn=0x0000000000469A88 string=0x0000000000469A8C "_"
 *   insn=0x0000000000469A98 string=0x0000000000469A9C "B"
 *   insn=0x0000000000469AA8 string=0x0000000000469AAC "K"
 *   insn=0x0000000000469AAC string=0x0000000000469AB0 "+"
 *   insn=0x0000000000469AB0 string=0x0000000000469AB4 "_"
 *   insn=0x0000000000469AD4 string=0x0000000000469AD8 "U"
 *   insn=0x0000000000469AE0 string=0x0000000000469AE4 "?F"
 *   insn=0x0000000000469AF8 string=0x0000000000469AFC "/"
 *   insn=0x0000000000469AFC string=0x0000000000469B00 "`"
 *   insn=0x0000000000469B58 string=0x00000000001F49A0 "P'"
 *   insn=0x0000000000469B5C string=0x0000000000469B60 "h"
 *   insn=0x0000000000469B64 string=0x0000000000469B68 "s"
 *   insn=0x0000000000469B78 string=0x0000000000469B7C "+"
 *   insn=0x0000000000469B90 string=0x0000000000469B94 "s"
 *   insn=0x0000000000469B98 string=0x0000000000469B9C "K"
 *   insn=0x0000000000469BA0 string=0x0000000000469BA4 ""
 *   insn=0x0000000000469BB0 string=0x0000000000469BB4 ""
 *   insn=0x0000000000469BD8 string=0x0000000000469BDC "!"
 *   insn=0x0000000000469BF8 string=0x0000000000469BFC ")=G"
 *   insn=0x0000000000469BFC string=0x0000000000469C00 "!"
 *   insn=0x0000000000469C04 string=0x0000000000469C08 "\t"
 *   insn=0x0000000000469C04 string=0x0000000000469C40 "\t"
 *   insn=0x0000000000469C08 string=0x0000000000469C0C "*"
 *   insn=0x0000000000469C0C string=0x0000000000469C10 "\n"
 *   insn=0x0000000000469C14 string=0x0000000000469C18 ""
 *   insn=0x0000000000469C18 string=0x0000000000469C4C "?"
 *   insn=0x0000000000469C1C string=0x0000000000469C20 ")=G"
 *   insn=0x0000000000469C20 string=0x0000000000469C24 "!"
 *   insn=0x0000000000469C28 string=0x0000000000469C2C "\t"
 *   insn=0x0000000000469C28 string=0x0000000000469C60 "\t"
 *   insn=0x0000000000469C2C string=0x0000000000469C30 "*"
 *   insn=0x0000000000469C30 string=0x0000000000469C34 "\n"
 *   insn=0x0000000000469C3C string=0x0000000000469C6C "?"
 *   insn=0x0000000000469C40 string=0x0000000000469C44 "*"
 *   insn=0x0000000000469C44 string=0x0000000000469C48 "\n"
 *   insn=0x0000000000469C60 string=0x0000000000469C64 "*"
 *   insn=0x0000000000469C64 string=0x0000000000469C68 "\n"
 *   insn=0x0000000000469C8C string=0x0000000000469C90 "J"
 *   insn=0x0000000000469C94 string=0x0000000000469C98 "(a"
 *   insn=0x0000000000469CA4 string=0x0000000000469CA8 "J=G"
 *   insn=0x0000000000469CA8 string=0x0000000000469CAC ")!"
 *   insn=0x0000000000469CAC string=0x0000000000469CB0 "J"
 *   insn=0x0000000000469CB0 string=0x0000000000469CB4 "*"
 *   insn=0x0000000000469CB0 string=0x0000000000469CD8 "*"
 *   insn=0x0000000000469CB4 string=0x0000000000469CB8 "K"
 *   insn=0x0000000000469CB8 string=0x0000000000469CBC "+"
 *   insn=0x0000000000469CC0 string=0x0000000000469CC4 "_"
 *   insn=0x0000000000469CD0 string=0x0000000000469CD4 """
 *   insn=0x0000000000469CD8 string=0x0000000000469CDC "K"
 *   insn=0x0000000000469CDC string=0x0000000000469CE0 "+"
 *   insn=0x0000000000469CE0 string=0x0000000000469CE4 "_"
 *   insn=0x0000000000469CE4 string=0x0000000000469CE8 "-"
 *   insn=0x0000000000469CF4 string=0x0000000000469CF8 "\n"
 *   insn=0x0000000000469D00 string=0x0000000000469D04 ""
 *   insn=0x0000000000469D10 string=0x0000000000469D14 ""
 *   insn=0x0000000000469D30 string=0x0000000000469D34 ")=G"
 *   insn=0x0000000000469D34 string=0x0000000000469D38 "!"
 *   insn=0x0000000000469D38 string=0x0000000000469D3C "i"
 *   insn=0x0000000000469D3C string=0x0000000000469D40 "\t"
 *   insn=0x0000000000469D3C string=0x0000000000469D68 "\t"
 *   insn=0x0000000000469D40 string=0x0000000000469D44 "*"
 *   insn=0x0000000000469D44 string=0x0000000000469D48 "\n"
 *   insn=0x0000000000469D4C string=0x0000000000469D50 "?"
 *   insn=0x0000000000469D50 string=0x0000000000469D54 "l"
 *   insn=0x0000000000469D68 string=0x0000000000469D6C "*"
 *   insn=0x0000000000469D6C string=0x0000000000469D70 "\n"
 *   insn=0x0000000000469D70 string=0x0000000000469D74 "?"
 *   insn=0x0000000000469D74 string=0x0000000000469D78 ""
 *   insn=0x0000000000469D98 string=0x0000000000469D9C "U"
 *   insn=0x0000000000469DBC string=0x0000000000469DC0 "~"
 *   insn=0x0000000000469DC0 string=0x0000000000469DC4 "`"
 *   insn=0x0000000000469DD8 string=0x0000000000469DDC ")"
 *   insn=0x0000000000469DF4 string=0x0000000000469DF8 "zC"
 *   insn=0x0000000000469DF8 string=0x00000000001FABE0 "0'"
 *   insn=0x0000000000469E00 string=0x0000000000469E04 ""
 *   insn=0x0000000000469E04 string=0x0000000000469E08 "vC"
 *   insn=0x0000000000469E10 string=0x0000000000469E14 "\t"
 *   insn=0x0000000000469E14 string=0x0000000000469E18 "rC"
 *   insn=0x0000000000469E3C string=0x0000000000469E40 "!"
 *   insn=0x0000000000469E40 string=0x0000000000469EA4 "1"
 *   insn=0x0000000000469E60 string=0x0000000000469E64 ")=G"
 *   insn=0x0000000000469E64 string=0x0000000000469E68 "!"
 *   insn=0x0000000000469E6C string=0x0000000000469E70 "\t"
 *   insn=0x0000000000469E6C string=0x0000000000469E84 "\t"
 *   insn=0x0000000000469E70 string=0x0000000000469E74 "*"
 *   insn=0x0000000000469E74 string=0x0000000000469E78 "\n"
 *   insn=0x0000000000469E80 string=0x0000000000469E90 "?"
 *   insn=0x0000000000469E84 string=0x0000000000469E88 "*"
 *   insn=0x0000000000469E88 string=0x0000000000469E8C "\n"
 *   insn=0x0000000000469E98 string=0x0000000000469E9C "B"
 *   insn=0x0000000000469EAC string=0x0000000000469EB0 "J"
 *   insn=0x0000000000469EB4 string=0x0000000000469EB8 "(a"
 *   insn=0x0000000000469EC4 string=0x0000000000469EC8 "J=G"
 *   insn=0x0000000000469EC8 string=0x0000000000469ECC ")!"
 *   insn=0x0000000000469ED0 string=0x0000000000469ED4 "*"
 *   insn=0x0000000000469ED0 string=0x0000000000469F00 "*"
 *   insn=0x0000000000469ED4 string=0x0000000000469ED8 "K"
 *   insn=0x0000000000469ED8 string=0x0000000000469EDC "+"
 *   insn=0x0000000000469EE0 string=0x0000000000469EE4 "_"
 *   insn=0x0000000000469EF0 string=0x0000000000469EF4 ","
 *   insn=0x0000000000469EF8 string=0x0000000000469EFC "r^"
 *   insn=0x0000000000469F00 string=0x0000000000469F04 "K"
 *   insn=0x0000000000469F04 string=0x0000000000469F08 "+"
 *   insn=0x0000000000469F08 string=0x0000000000469F0C "_"
 *   insn=0x0000000000469F28 string=0x0000000000469F2C "T"
 *   insn=0x0000000000469F34 string=0x0000000000469F38 "*E"
 *   insn=0x0000000000469F50 string=0x0000000000469F54 "`"
 *   insn=0x0000000000469F68 string=0x0000000000469F6C ")"
 *   insn=0x0000000000469F74 string=0x0000000000469F78 "a"
 *   insn=0x0000000000469FA4 string=0x0000000000469FA8 ")=G"
 *   insn=0x0000000000469FA8 string=0x0000000000469FAC "!"
 *   insn=0x0000000000469FB0 string=0x0000000000469FB4 "\t"
 *   insn=0x0000000000469FB0 string=0x0000000000469FC8 "\t"
 *   insn=0x0000000000469FB4 string=0x0000000000469FB8 "*"
 *   insn=0x0000000000469FB8 string=0x0000000000469FBC "\n"
 *   insn=0x0000000000469FC4 string=0x0000000000469FD4 "?"
 *   insn=0x0000000000469FC8 string=0x0000000000469FCC "*"
 *   insn=0x0000000000469FCC string=0x0000000000469FD0 "\n"
 *   insn=0x0000000000469FD4 string=0x0000000000469FD8 ","
 *   insn=0x0000000000469FF0 string=0x0000000000469FF4 "J"
 *   insn=0x0000000000469FF8 string=0x0000000000469FFC "(a"
 *   insn=0x000000000046A008 string=0x000000000046A00C "J=G"
 *   insn=0x000000000046A00C string=0x000000000046A010 ")!"
 *   insn=0x000000000046A014 string=0x000000000046A018 "*"
 *   insn=0x000000000046A014 string=0x000000000046A044 "*"
 *   insn=0x000000000046A018 string=0x000000000046A01C "K"
 *   insn=0x000000000046A01C string=0x000000000046A020 "+"
 *   insn=0x000000000046A024 string=0x000000000046A028 "_"
 *   insn=0x000000000046A03C string=0x000000000046A040 "!^"
 *   insn=0x000000000046A044 string=0x000000000046A048 "K"
 *   insn=0x000000000046A048 string=0x000000000046A04C "+"
 *   insn=0x000000000046A04C string=0x000000000046A050 "_"
 *   insn=0x000000000046A074 string=0x000000000046A078 "t"
 *   insn=0x000000000046A088 string=0x00000000001F9360 "0'"
 *   insn=0x000000000046A090 string=0x000000000046A094 "6"
 *   insn=0x000000000046A098 string=0x000000000046A09C ""
 *   insn=0x000000000046A0AC string=0x000000000046A0B0 "\t@"
 *   insn=0x000000000046A0B8 string=0x000000000046A0BC ""
 *   insn=0x000000000046A0CC string=0x000000000046A0D0 "@"
 *   insn=0x000000000046A0D8 string=0x000000000046A0DC "u4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_469290(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 v2; // x20
  void *v3; // x0
  __int64 *v4; // x0
  __int64 v5; // x25
  char v6; // w22
  __int64 v7; // x21
  Caver::SceneObject *v8; // x2
  float v9; // s0
  int v10; // w9
  _DWORD *v11; // x8
  void (__fastcall *v12)(__int64, __int64 *); // x8
  int v13; // w9
  __int64 v14; // x0
  int v15; // w8
  __int64 v16; // x0
  int v17; // w8
  void *v18; // x0
  void *v19; // x0
  unsigned int *v21; // x8
  int v22; // w9
  unsigned int *v23; // x8
  int v24; // w9
  unsigned int *v25; // x8
  int v26; // w9
  __int64 v27; // [xsp+1C8h] [xbp-68h] BYREF
  __int64 v28; // [xsp+1D0h] [xbp-60h]
  __int64 v29; // [xsp+1D8h] [xbp-58h] BYREF
  __int64 v30[2]; // [xsp+1E0h] [xbp-50h] BYREF

  v30[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  sub_566BB8((int)v30, "scene");
  v2 = Caver::ProgramTable::PointerForKey();
  v3 = (void *)(v30[0] - 24);
  if ( (__int64 *)(v30[0] - 24) != &qword_6FD2E0 )
  {
    v21 = (unsigned int *)(v30[0] - 8);
    if ( &pthread_create )
    {
      do
        v22 = __ldaxr(v21);
      while ( __stlxr(v22 - 1, v21) );
    }
    else
    {
      v22 = (*v21)--;
    }
    if ( v22 <= 0 )
      operator delete(v3);
  }
  Caver::ProgramState::StringAtStackIndex(v30, v1, 1);
  Caver::ProgramState::StringAtStackIndex(&v29, v1, 2);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v4 )
    v5 = *v4;
  else
    v5 = 0;
  if ( (Caver::ProgramState::IsBoolAtStackIndex(v1, 4) & 1) != 0 )
    v6 = Caver::ProgramState::BoolAtStackIndex(v1, 4);
  else
    v6 = 1;
  Caver::ObjectLibrary::TemplateForName();
  v7 = operator new(0x128u);
  Caver::SceneObject::SceneObject((Caver::SceneObject *)v7);
  if ( v28 )
    Caver::SceneObject::InitWithTemplate((Caver::SceneObject *)v7);
  Caver::SceneObject::SetIdentifier();
  if ( v5 )
  {
    v9 = *(float *)(v5 + 112);
    if ( fabsf(v9 - *(float *)(v7 + 112)) <= 0.0001 )
    {
      v11 = (_DWORD *)(v7 + 116);
      if ( fabsf(*(float *)(v5 + 116) - *(float *)(v7 + 116)) <= 0.0001 )
      {
LABEL_17:
        *(_DWORD *)(v7 + 120) = *(_DWORD *)(v5 + 120);
        goto LABEL_18;
      }
      v10 = *(_DWORD *)(v5 + 116);
    }
    else
    {
      v10 = *(_DWORD *)(v5 + 116);
      v11 = (_DWORD *)(v7 + 116);
    }
    *(float *)(v7 + 112) = v9;
    *v11 = v10;
    if ( !*(_BYTE *)(v7 + 180) )
    {
      Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v7);
      *(_BYTE *)(v7 + 180) = 1;
    }
    goto LABEL_17;
  }
LABEL_18:
  if ( (v6 & 1) != 0 )
  {
    v12 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 40LL);
    v13 = *(_DWORD *)(v7 + 8) + 1;
    v27 = v7;
    *(_DWORD *)(v7 + 8) = v13;
    v12(v2, &v27);
    v14 = v27;
    if ( v27 )
    {
      v15 = *(_DWORD *)(v27 + 8) - 1;
      *(_DWORD *)(v27 + 8) = v15;
      if ( !v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  Caver::SceneObjectLib::PushSceneObject(v1, (Caver::ProgramState *)v7, v8);
  v16 = v28;
  if ( v28 )
  {
    v17 = *(_DWORD *)(v28 + 8) - 1;
    *(_DWORD *)(v28 + 8) = v17;
    if ( !v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  }
  v18 = (void *)(v29 - 24);
  if ( (__int64 *)(v29 - 24) != &qword_6FD2E0 )
  {
    v23 = (unsigned int *)(v29 - 8);
    if ( &pthread_create )
    {
      do
        v24 = __ldaxr(v23);
      while ( __stlxr(v24 - 1, v23) );
    }
    else
    {
      v24 = (*v23)--;
    }
    if ( v24 <= 0 )
      operator delete(v18);
  }
  v19 = (void *)(v30[0] - 24);
  if ( (__int64 *)(v30[0] - 24) != &qword_6FD2E0 )
  {
    v25 = (unsigned int *)(v30[0] - 8);
    if ( &pthread_create )
    {
      do
        v26 = __ldaxr(v25);
      while ( __stlxr(v26 - 1, v25) );
    }
    else
    {
      v26 = (*v25)--;
    }
    if ( v26 <= 0 )
      operator delete(v19);
  }
  return 1;
}

