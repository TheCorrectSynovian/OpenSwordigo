/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000496510
 * Mangled: _ZN5Caver10GUIControlD2Ev
 * Demangled: Caver::GUIControl::~GUIControl()
 *
 * Callers: 2
 *   0x00000000001F4DB0  Caver::GUIControl::~GUIControl()
 *   0x00000000004964D8  Caver::GUIButton::~GUIButton()
 *
 * Callees: 9
 *   0x00000000001F38C0  Caver::GUIApplication::sharedApplication(void)
 *   0x00000000001F3F70  Caver::GUIApplication::CancelEventsWithSender(void *)
 *   0x00000000001F4DB0  Caver::GUIControl::~GUIControl()
 *   0x00000000001F6880  std::_Rb_tree<int,std::pair<int const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int const,Caver::GUIControl::TargetAction>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,Caver::GUIControl::TargetAction>> *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004965BC  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x000000000049651C string=0x0000000000496520 "!@"
 *   insn=0x0000000000496524 string=0x0000000000496528 "A"
 *   insn=0x0000000000496528 string=0x000000000049652C "h"
 *   insn=0x0000000000496530 string=0x00000000001F38C0 "P'"
 *   insn=0x0000000000496538 string=0x000000000049653C "a"
 *   insn=0x0000000000496538 string=0x00000000001F3F70 "P'"
 *   insn=0x000000000049653C string=0x0000000000496540 "`"
 *   insn=0x0000000000496544 string=0x00000000001F6880 "0'"
 *   insn=0x0000000000496550 string=0x0000000000496554 "7"
 *   insn=0x0000000000496564 string=0x0000000000496568 "`"
 *   insn=0x0000000000496570 string=0x0000000000496574 "/"
 *   insn=0x000000000049657C string=0x0000000000496580 "s"
 *   insn=0x0000000000496590 string=0x0000000000496594 "z"
 *   insn=0x0000000000496594 string=0x00000000001F4DB0 "P'"
 *   insn=0x00000000004965A0 string=0x00000000004965A4 "C"
 *   insn=0x00000000004965A4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004965AC string=0x00000000004965B0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIControl::~GUIControl(Caver::GUIControl *this)
{
  Caver::GUIApplication *v2; // x0

  *(_QWORD *)this = off_6D5AA0;
  Caver::GUIApplication::sharedApplication(this);
  Caver::GUIApplication::CancelEventsWithSender(v2, this);
  std::_Rb_tree<int,std::pair<int const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int const,Caver::GUIControl::TargetAction>>>::_M_erase();
  Caver::GUIView::~GUIView(this);
}

