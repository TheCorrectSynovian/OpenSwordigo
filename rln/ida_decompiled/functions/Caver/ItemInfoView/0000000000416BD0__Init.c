/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000416BD0
 * Mangled: _ZN5Caver12ItemInfoView4InitEv
 * Demangled: Caver::ItemInfoView::Init(void)
 *
 * Callers: 1
 *   0x0000000000201F30  Caver::ItemInfoView::Init(void)
 *
 * Callees: 32
 *   0x00000000001F42C0  Caver::ItemInfoView::AddAnimations(bool)
 *   0x00000000001F53C0  Caver::GUILabel::GUILabel(void)
 *   0x00000000001F5420  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>(Caver::GUIFrameView *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5660  Caver::MenuItemSlot::Init(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F6C10  boost::shared_ptr<Caver::MenuItemSlot>::shared_ptr<Caver::MenuItemSlot>(Caver::MenuItemSlot *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7430  Caver::GUIFrameView::GUIFrameView(void)
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001F8750  Caver::GUIView::DismissModalView(Caver::GUIView*)
 *   0x00000000001F8F40  boost::shared_ptr<Caver::GUIButton>::shared_ptr<Caver::GUIButton>(Caver::GUIButton *)
 *   0x00000000001F9BE0  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FB580  Caver::MenuItemSlot::MenuItemSlot(void)
 *   0x00000000001FD9B0  Caver::FontLibrary::DefaultFont(void)
 *   0x00000000001FEAD0  Caver::GUIButton::GUIButton(Caver::GUIButtonType)
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x00000000001FFDC0  Caver::SceneObject::GetComponentsWithInterface<Caver::ProgramComponent>(std::vector<Caver::ProgramComponent *,std::allocator<Caver::ProgramComponent *>> *)
 *   0x0000000000200250  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>(Caver::GUILabel *)
 *   0x00000000002009F0  Caver::ProgramComponent::Execute(void)
 *   0x0000000000201F70  Caver::GUIFrameView::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,bool)
 *   0x0000000000202F10  Caver::GUIButton::SetFrameTextureForState(Caver::GUIControl::State,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000417F1C  Caver::ItemInfoView::EnablePurchasing(int,boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 422
 *   insn=0x0000000000416BE8 string=0x0000000000416BEC "V"
 *   insn=0x0000000000416BFC string=0x00000000001FA350 "0'"
 *   insn=0x0000000000416C04 string=0x00000000005944D0 "ui_close_button"
 *   insn=0x0000000000416C24 string=0x0000000000416C28 "b"
 *   insn=0x0000000000416C2C string=0x0000000000416C30 "w"
 *   insn=0x0000000000416C40 string=0x0000000000417820 "i"
 *   insn=0x0000000000416C44 string=0x0000000000416C48 "fz"
 *   insn=0x0000000000416C48 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000416C64 string=0x0000000000416C68 "hRO"
 *   insn=0x0000000000416C64 string=0x00000000001F8F40 "0'"
 *   insn=0x0000000000416C74 string=0x0000000000416C78 "i""
 *   insn=0x0000000000416C7C string=0x0000000000416C80 "4"
 *   insn=0x0000000000416C80 string=0x0000000000416CC4 "`z@"
 *   insn=0x0000000000416C84 string=0x0000000000416C88 ""
 *   insn=0x0000000000416C94 string=0x0000000000416C98 "\t@"
 *   insn=0x0000000000416CA4 string=0x0000000000416CA8 ""
 *   insn=0x0000000000416CB4 string=0x0000000000416CB8 "@"
 *   insn=0x0000000000416CD4 string=0x0000000000416CD8 "`z@"
 *   insn=0x0000000000416CD8 string=0x0000000000416CDC "AE"
 *   insn=0x0000000000416CE4 string=0x0000000000416CE8 """
 *   insn=0x0000000000416CE8 string=0x0000000000416CEC "tz@"
 *   insn=0x0000000000416CE8 string=0x00000000001FB170 "0'"
 *   insn=0x0000000000416CF4 string=0x0000000000416CF8 ""
 *   insn=0x0000000000416D10 string=0x0000000000416D14 "`"
 *   insn=0x0000000000416D10 string=0x00000000001F6B70 "0'"
 *   insn=0x0000000000416D18 string=0x0000000000416D1C ""
 *   insn=0x0000000000416D30 string=0x0000000000416D34 ""
 *   insn=0x0000000000416D4C string=0x00000000001F9BE0 "0'"
 *   insn=0x0000000000416D50 string=0x0000000000416D54 "h"
 *   insn=0x0000000000416D54 string=0x0000000000416D58 "("
 *   insn=0x0000000000416D54 string=0x0000000000416D80 "h"
 *   insn=0x0000000000416D58 string=0x0000000000416D5C ""
 *   insn=0x0000000000416D5C string=0x0000000000416D60 ""
 *   insn=0x0000000000416D68 string=0x0000000000416D6C " !"
 *   insn=0x0000000000416D80 string=0x0000000000416D84 "iz@"
 *   insn=0x0000000000416D84 string=0x0000000000416D88 "1@"
 *   insn=0x0000000000416D8C string=0x0000000000416D90 "i~@"
 *   insn=0x0000000000416D98 string=0x0000000000416D9C "*"
 *   insn=0x0000000000416D9C string=0x0000000000416DA0 "J"
 *   insn=0x0000000000416DA0 string=0x0000000000416DA4 "*"
 *   insn=0x0000000000416DB4 string=0x0000000000416DB8 "4"
 *   insn=0x0000000000416DBC string=0x0000000000416DC0 ""
 *   insn=0x0000000000416DCC string=0x0000000000416DD0 "\t@"
 *   insn=0x0000000000416DDC string=0x0000000000416DE0 ""
 *   insn=0x0000000000416DEC string=0x0000000000416DF0 "@"
 *   insn=0x0000000000416E0C string=0x00000000001F7430 "0'"
 *   insn=0x0000000000416E18 string=0x0000000000416E1C "hRQ"
 *   insn=0x0000000000416E18 string=0x00000000001F5420 "P'"
 *   insn=0x0000000000416E28 string=0x0000000000416E2C "i""
 *   insn=0x0000000000416E30 string=0x0000000000416E34 "4"
 *   insn=0x0000000000416E34 string=0x0000000000416E78 "t"
 *   insn=0x0000000000416E38 string=0x0000000000416E3C ""
 *   insn=0x0000000000416E48 string=0x0000000000416E4C "\t@"
 *   insn=0x0000000000416E58 string=0x0000000000416E5C ""
 *   insn=0x0000000000416E68 string=0x0000000000416E6C "@"
 *   insn=0x0000000000416E78 string=0x0000000000416E7C "5"
 *   insn=0x0000000000416E84 string=0x0000000000593251 "ui_frame_dark"
 *   insn=0x0000000000416E90 string=0x0000000000416E94 "I?"
 *   insn=0x0000000000416EB4 string=0x0000000000416EB8 "."
 *   insn=0x0000000000416EC0 string=0x0000000000416EC4 "@"
 *   insn=0x0000000000416EC4 string=0x0000000000416EC8 ""
 *   insn=0x0000000000416EC8 string=0x0000000000416ECC ""
 *   insn=0x0000000000416ED0 string=0x0000000000416ED4 ""
 *   insn=0x0000000000416ED4 string=0x0000000000416ED8 ""
 *   insn=0x0000000000416EEC string=0x0000000000417844 "i"
 *   insn=0x0000000000416EF4 string=0x0000000000416EF8 "`"
 *   insn=0x0000000000416F04 string=0x0000000000416F08 "h"
 *   insn=0x0000000000416F08 string=0x0000000000416F0C "i"
 *   insn=0x0000000000416F0C string=0x0000000000416F10 "1@"
 *   insn=0x0000000000416F14 string=0x0000000000416F18 "i"
 *   insn=0x0000000000416F20 string=0x0000000000416F24 "*"
 *   insn=0x0000000000416F24 string=0x0000000000416F28 "J"
 *   insn=0x0000000000416F28 string=0x0000000000416F2C "*"
 *   insn=0x0000000000416F3C string=0x0000000000416F40 "4"
 *   insn=0x0000000000416F44 string=0x0000000000416F48 ""
 *   insn=0x0000000000416F54 string=0x0000000000416F58 "\t@"
 *   insn=0x0000000000416F64 string=0x0000000000416F68 ""
 *   insn=0x0000000000416F74 string=0x0000000000416F78 "@"
 *   insn=0x0000000000416F90 string=0x0000000000416F94 "y"
 *   insn=0x0000000000416F94 string=0x00000000001F53C0 "P'"
 *   insn=0x0000000000416FA0 string=0x0000000000416FA4 "hRS"
 *   insn=0x0000000000416FB0 string=0x0000000000416FB4 "i""
 *   insn=0x0000000000416FB8 string=0x0000000000416FBC "4"
 *   insn=0x0000000000416FBC string=0x0000000000417000 "t"
 *   insn=0x0000000000416FC0 string=0x0000000000416FC4 ""
 *   insn=0x0000000000416FD0 string=0x0000000000416FD4 "\t@"
 *   insn=0x0000000000416FE0 string=0x0000000000416FE4 ""
 *   insn=0x0000000000416FF0 string=0x0000000000416FF4 "@"
 *   insn=0x0000000000417000 string=0x0000000000417004 ""
 *   insn=0x0000000000417008 string=0x000000000041700C "i"
 *   insn=0x000000000041700C string=0x00000000001FD9B0 "0'"
 *   insn=0x0000000000417018 string=0x000000000041701C "`"
 *   insn=0x0000000000417024 string=0x0000000000417028 "*"
 *   insn=0x0000000000417028 string=0x000000000041702C "J"
 *   insn=0x000000000041702C string=0x0000000000417030 "*"
 *   insn=0x0000000000417038 string=0x000000000041703C "5"
 *   insn=0x0000000000417040 string=0x0000000000417044 ""
 *   insn=0x0000000000417050 string=0x0000000000417054 "\t@"
 *   insn=0x0000000000417060 string=0x0000000000417064 ""
 *   insn=0x0000000000417070 string=0x0000000000417074 "@"
 *   insn=0x0000000000417080 string=0x0000000000417084 "#"
 *   insn=0x0000000000417084 string=0x00000000001F8510 "0'"
 *   insn=0x0000000000417088 string=0x000000000041708C "4"
 *   insn=0x000000000041708C string=0x00000000004170D0 "t"
 *   insn=0x0000000000417090 string=0x0000000000417094 ""
 *   insn=0x00000000004170A0 string=0x00000000004170A4 "\t@"
 *   insn=0x00000000004170B0 string=0x00000000004170B4 ""
 *   insn=0x00000000004170C0 string=0x00000000004170C4 "@"
 *   insn=0x00000000004170D8 string=0x00000000004170DC "A"
 *   insn=0x00000000004170FC string=0x0000000000417100 " "
 *   insn=0x0000000000417100 string=0x0000000000417164 "i"
 *   insn=0x0000000000417104 string=0x0000000000417108 ""
 *   insn=0x0000000000417110 string=0x0000000000417114 "5"
 *   insn=0x0000000000417118 string=0x000000000041711C ""
 *   insn=0x0000000000417128 string=0x000000000041712C "\t@"
 *   insn=0x0000000000417138 string=0x000000000041713C ""
 *   insn=0x0000000000417148 string=0x000000000041714C "@"
 *   insn=0x000000000041715C string=0x0000000000417160 "t"
 *   insn=0x0000000000417164 string=0x0000000000417168 "("
 *   insn=0x0000000000417178 string=0x000000000041717C "\t"
 *   insn=0x0000000000417188 string=0x000000000041718C "h"
 *   insn=0x0000000000417190 string=0x0000000000417194 " aB"
 *   insn=0x0000000000417194 string=0x0000000000417198 "`"
 *   insn=0x0000000000417198 string=0x000000000041719C ""
 *   insn=0x00000000004171B0 string=0x00000000004171B4 "`"
 *   insn=0x00000000004171B4 string=0x00000000004171B8 "i"
 *   insn=0x00000000004171B8 string=0x00000000004171BC ""
 *   insn=0x00000000004171BC string=0x00000000004171C0 "1@"
 *   insn=0x00000000004171C4 string=0x00000000004171C8 "i"
 *   insn=0x00000000004171D0 string=0x00000000004171D4 "*"
 *   insn=0x00000000004171D4 string=0x00000000004171D8 "J"
 *   insn=0x00000000004171D8 string=0x00000000004171DC "*"
 *   insn=0x00000000004171E8 string=0x00000000004171EC "4"
 *   insn=0x00000000004171F0 string=0x00000000004171F4 ""
 *   insn=0x0000000000417200 string=0x0000000000417204 "\t@"
 *   insn=0x0000000000417210 string=0x0000000000417214 ""
 *   insn=0x0000000000417220 string=0x0000000000417224 "@"
 *   insn=0x0000000000417240 string=0x00000000001FB580 "0'"
 *   insn=0x0000000000417248 string=0x000000000041724C "q~"
 *   insn=0x000000000041724C string=0x0000000000417250 "hRP"
 *   insn=0x000000000041724C string=0x00000000001F6C10 "0'"
 *   insn=0x000000000041725C string=0x0000000000417260 "i""
 *   insn=0x0000000000417264 string=0x0000000000417268 "4"
 *   insn=0x0000000000417268 string=0x00000000004172AC "`"
 *   insn=0x000000000041726C string=0x0000000000417270 ""
 *   insn=0x000000000041727C string=0x0000000000417280 "\t@"
 *   insn=0x000000000041728C string=0x0000000000417290 ""
 *   insn=0x000000000041729C string=0x00000000004172A0 "@"
 *   insn=0x00000000004172B4 string=0x00000000004172B8 "`"
 *   insn=0x00000000004172B4 string=0x00000000001F5660 "P'"
 *   insn=0x00000000004172C0 string=0x00000000004172C4 "h"
 *   insn=0x00000000004172C8 string=0x00000000004172CC "\t|@"
 *   insn=0x00000000004172E0 string=0x00000000004172E4 " ( "
 *   insn=0x00000000004172E4 string=0x00000000004172E8 "a""
 *   insn=0x0000000000417304 string=0x0000000000417308 "`"
 *   insn=0x0000000000417308 string=0x000000000041730C "i"
 *   insn=0x000000000041730C string=0x0000000000417310 ""
 *   insn=0x0000000000417310 string=0x0000000000417314 "1@"
 *   insn=0x0000000000417318 string=0x000000000041731C "i"
 *   insn=0x0000000000417324 string=0x0000000000417328 "*"
 *   insn=0x0000000000417328 string=0x000000000041732C "J"
 *   insn=0x000000000041732C string=0x0000000000417330 "*"
 *   insn=0x000000000041733C string=0x0000000000417340 "4"
 *   insn=0x0000000000417344 string=0x0000000000417348 ""
 *   insn=0x0000000000417354 string=0x0000000000417358 "\t@"
 *   insn=0x0000000000417364 string=0x0000000000417368 ""
 *   insn=0x0000000000417374 string=0x0000000000417378 "@"
 *   insn=0x0000000000417390 string=0x0000000000417394 "'"
 *   insn=0x000000000041739C string=0x00000000004173A0 " x"
 *   insn=0x00000000004173A0 string=0x00000000004173A4 "hRR"
 *   insn=0x00000000004173B0 string=0x00000000004173B4 "i""
 *   insn=0x00000000004173B8 string=0x00000000004173BC "4"
 *   insn=0x00000000004173BC string=0x0000000000417400 "t"
 *   insn=0x00000000004173C0 string=0x00000000004173C4 ""
 *   insn=0x00000000004173D0 string=0x00000000004173D4 "\t@"
 *   insn=0x00000000004173E0 string=0x00000000004173E4 ""
 *   insn=0x00000000004173F0 string=0x00000000004173F4 "@"
 *   insn=0x000000000041742C string=0x0000000000417430 "`"
 *   insn=0x0000000000417448 string=0x000000000041744C "@"
 *   insn=0x000000000041744C string=0x0000000000417450 ""
 *   insn=0x0000000000417450 string=0x0000000000417454 ""
 *   insn=0x0000000000417458 string=0x000000000041745C ""
 *   insn=0x000000000041745C string=0x0000000000417460 ""
 *   insn=0x0000000000417474 string=0x0000000000417868 "i"
 *   insn=0x000000000041747C string=0x0000000000417480 "`"
 *   insn=0x0000000000417488 string=0x000000000041748C "9"
 *   insn=0x000000000041748C string=0x0000000000417490 "h"
 *   insn=0x0000000000417490 string=0x0000000000417494 "i"
 *   insn=0x0000000000417494 string=0x0000000000417498 "1@"
 *   insn=0x000000000041749C string=0x00000000004174A0 "i"
 *   insn=0x00000000004174A8 string=0x00000000004174AC "*"
 *   insn=0x00000000004174AC string=0x00000000004174B0 "J"
 *   insn=0x00000000004174B0 string=0x00000000004174B4 "*"
 *   insn=0x00000000004174C4 string=0x00000000004174C8 "4"
 *   insn=0x00000000004174CC string=0x00000000004174D0 ""
 *   insn=0x00000000004174DC string=0x00000000004174E0 "\t@"
 *   insn=0x00000000004174EC string=0x00000000004174F0 ""
 *   insn=0x00000000004174FC string=0x0000000000417500 "@"
 *   insn=0x000000000041750C string=0x0000000000417510 "4x"
 *   insn=0x0000000000417524 string=0x0000000000417528 "J"
 *   insn=0x0000000000417528 string=0x000000000041752C "hRT"
 *   insn=0x0000000000417538 string=0x000000000041753C "i""
 *   insn=0x0000000000417540 string=0x0000000000417544 "4"
 *   insn=0x0000000000417544 string=0x0000000000417588 "t"
 *   insn=0x0000000000417548 string=0x000000000041754C ""
 *   insn=0x0000000000417558 string=0x000000000041755C "\t@"
 *   insn=0x0000000000417568 string=0x000000000041756C ""
 *   insn=0x0000000000417578 string=0x000000000041757C "@"
 *   insn=0x0000000000417590 string=0x0000000000417594 ""
 *   insn=0x00000000004175A0 string=0x00000000004175A4 "`"
 *   insn=0x00000000004175AC string=0x00000000004175B0 "*"
 *   insn=0x00000000004175B0 string=0x00000000004175B4 "J"
 *   insn=0x00000000004175B4 string=0x00000000004175B8 "*"
 *   insn=0x00000000004175C0 string=0x00000000004175C4 "5"
 *   insn=0x00000000004175C8 string=0x00000000004175CC ""
 *   insn=0x00000000004175D8 string=0x00000000004175DC "\t@"
 *   insn=0x00000000004175E8 string=0x00000000004175EC ""
 *   insn=0x00000000004175F8 string=0x00000000004175FC "@"
 *   insn=0x0000000000417610 string=0x0000000000417614 "4"
 *   insn=0x0000000000417614 string=0x0000000000417658 "t"
 *   insn=0x0000000000417618 string=0x000000000041761C ""
 *   insn=0x0000000000417628 string=0x000000000041762C "\t@"
 *   insn=0x0000000000417638 string=0x000000000041763C ""
 *   insn=0x0000000000417648 string=0x000000000041764C "@"
 *   insn=0x0000000000417660 string=0x0000000000417664 "A"
 *   insn=0x0000000000417684 string=0x0000000000417688 "@"
 *   insn=0x000000000041768C string=0x0000000000417690 "h"
 *   insn=0x000000000041769C string=0x00000000004176A0 "5"
 *   insn=0x00000000004176A4 string=0x00000000004176A8 ""
 *   insn=0x00000000004176B4 string=0x00000000004176B8 "\t@"
 *   insn=0x00000000004176C4 string=0x00000000004176C8 ""
 *   insn=0x00000000004176D4 string=0x00000000004176D8 "@"
 *   insn=0x00000000004176E8 string=0x00000000004176EC "t"
 *   insn=0x00000000004176FC string=0x0000000000417700 "\t"
 *   insn=0x000000000041770C string=0x0000000000417710 "`"
 *   insn=0x0000000000417714 string=0x0000000000417718 "~"
 *   insn=0x0000000000417718 string=0x000000000041771C "h"
 *   insn=0x000000000041771C string=0x0000000000417720 "i"
 *   insn=0x0000000000417724 string=0x0000000000417728 " %C"
 *   insn=0x000000000041772C string=0x0000000000417730 "AeB"
 *   insn=0x0000000000417730 string=0x0000000000417734 "`"
 *   insn=0x0000000000417734 string=0x0000000000417738 ""
 *   insn=0x0000000000417738 string=0x000000000041773C "@( "
 *   insn=0x0000000000417750 string=0x0000000000417754 "`"
 *   insn=0x0000000000417754 string=0x0000000000417758 "i"
 *   insn=0x0000000000417758 string=0x000000000041775C ""
 *   insn=0x000000000041775C string=0x0000000000417760 "1@"
 *   insn=0x0000000000417764 string=0x0000000000417768 "i"
 *   insn=0x0000000000417770 string=0x0000000000417774 "*"
 *   insn=0x0000000000417774 string=0x0000000000417778 "J"
 *   insn=0x0000000000417778 string=0x000000000041777C "*"
 *   insn=0x0000000000417788 string=0x000000000041778C "3"
 *   insn=0x000000000041778C string=0x0000000000417790 "h"
 *   insn=0x0000000000417790 string=0x0000000000417794 ""
 *   insn=0x0000000000417794 string=0x0000000000417798 "h"
 *   insn=0x000000000041779C string=0x00000000004177A0 "h"
 *   insn=0x00000000004177A0 string=0x00000000004177A4 "\t@"
 *   insn=0x00000000004177AC string=0x00000000004177B0 "h\n@"
 *   insn=0x00000000004177B0 string=0x00000000004177B4 ""
 *   insn=0x00000000004177B4 string=0x00000000004177B8 "h\n"
 *   insn=0x00000000004177BC string=0x00000000004177C0 "h"
 *   insn=0x00000000004177C0 string=0x00000000004177C4 "@"
 *   insn=0x00000000004177D4 string=0x00000000004177D8 "@"
 *   insn=0x00000000004177D8 string=0x00000000004177DC ""
 *   insn=0x00000000004177DC string=0x00000000004177E0 ""
 *   insn=0x00000000004177E4 string=0x00000000004177E8 ""
 *   insn=0x00000000004177E8 string=0x00000000004177EC ""
 *   insn=0x00000000004177FC string=0x0000000000417800 "a"
 *   insn=0x0000000000417800 string=0x00000000004178EC "yz"
 *   insn=0x0000000000417820 string=0x0000000000417824 ")=G"
 *   insn=0x0000000000417824 string=0x0000000000417828 "!"
 *   insn=0x0000000000417828 string=0x000000000041782C "\t"
 *   insn=0x000000000041782C string=0x0000000000417830 "\t"
 *   insn=0x000000000041782C string=0x000000000041788C "\t"
 *   insn=0x0000000000417830 string=0x0000000000417834 "*"
 *   insn=0x0000000000417834 string=0x0000000000417838 "\n"
 *   insn=0x0000000000417840 string=0x0000000000417898 "?"
 *   insn=0x0000000000417844 string=0x0000000000417848 ")=G"
 *   insn=0x0000000000417848 string=0x000000000041784C "!"
 *   insn=0x0000000000417850 string=0x0000000000417854 "\t"
 *   insn=0x0000000000417850 string=0x00000000004178AC "\t"
 *   insn=0x0000000000417854 string=0x0000000000417858 "*"
 *   insn=0x0000000000417858 string=0x000000000041785C "\n"
 *   insn=0x0000000000417864 string=0x00000000004178B8 "?"
 *   insn=0x0000000000417868 string=0x000000000041786C ")=G"
 *   insn=0x000000000041786C string=0x0000000000417870 "!"
 *   insn=0x0000000000417874 string=0x0000000000417878 "\t"
 *   insn=0x0000000000417874 string=0x00000000004178CC "\t"
 *   insn=0x0000000000417878 string=0x000000000041787C "*"
 *   insn=0x000000000041787C string=0x0000000000417880 "\n"
 *   insn=0x0000000000417888 string=0x00000000004178D8 "?"
 *   insn=0x000000000041788C string=0x0000000000417890 "*"
 *   insn=0x0000000000417890 string=0x0000000000417894 "\n"
 *   insn=0x0000000000417898 string=0x000000000041789C "L"
 *   insn=0x00000000004178AC string=0x00000000004178B0 "*"
 *   insn=0x00000000004178B0 string=0x00000000004178B4 "\n"
 *   insn=0x00000000004178CC string=0x00000000004178D0 "*"
 *   insn=0x00000000004178D0 string=0x00000000004178D4 "\n"
 *   insn=0x00000000004178EC string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000417918 string=0x000000000041791C ""
 *   insn=0x0000000000417928 string=0x000000000041792C "\t@"
 *   insn=0x0000000000417938 string=0x000000000041793C ""
 *   insn=0x0000000000417948 string=0x000000000041794C "@"
 *   insn=0x0000000000417968 string=0x000000000041796C ""
 *   insn=0x0000000000417978 string=0x000000000041797C "\t@"
 *   insn=0x0000000000417988 string=0x000000000041798C ""
 *   insn=0x0000000000417998 string=0x000000000041799C "@"
 *   insn=0x00000000004179B8 string=0x00000000004179BC ""
 *   insn=0x00000000004179C8 string=0x00000000004179CC "\t@"
 *   insn=0x00000000004179D8 string=0x00000000004179DC ""
 *   insn=0x00000000004179E8 string=0x00000000004179EC "@"
 *   insn=0x0000000000417A0C string=0x0000000000417A10 "4"
 *   insn=0x0000000000417A14 string=0x0000000000417A18 ""
 *   insn=0x0000000000417A24 string=0x0000000000417A28 "\t@"
 *   insn=0x0000000000417A34 string=0x0000000000417A38 ""
 *   insn=0x0000000000417A44 string=0x0000000000417A48 "@"
 *   insn=0x0000000000417A64 string=0x0000000000417A68 "\t\t@"
 *   insn=0x0000000000417A68 string=0x0000000000417A6C ")"
 *   insn=0x0000000000417A6C string=0x0000000000417A70 "\t\t"
 *   insn=0x0000000000417A70 string=0x0000000000417A74 "a"
 *   insn=0x0000000000417A74 string=0x0000000000417A78 "\t"
 *   insn=0x0000000000417A78 string=0x0000000000417A7C ")"
 *   insn=0x0000000000417A80 string=0x0000000000417A84 " "
 *   insn=0x0000000000417AA4 string=0x0000000000417AA8 ""
 *   insn=0x0000000000417AAC string=0x0000000000417AB0 "!"
 *   insn=0x0000000000417AB4 string=0x0000000000417AB8 "\t@"
 *   insn=0x0000000000417AC4 string=0x0000000000417AC8 ""
 *   insn=0x0000000000417ACC string=0x0000000000417AD0 "!"
 *   insn=0x0000000000417AD4 string=0x0000000000417AD8 "@"
 *   insn=0x0000000000417AFC string=0x0000000000417B00 ""
 *   insn=0x0000000000417B04 string=0x0000000000417B08 "a"
 *   insn=0x0000000000417B0C string=0x0000000000417B10 "\t@"
 *   insn=0x0000000000417B1C string=0x0000000000417B20 ""
 *   insn=0x0000000000417B24 string=0x0000000000417B28 "a"
 *   insn=0x0000000000417B2C string=0x0000000000417B30 "@"
 *   insn=0x0000000000417B58 string=0x0000000000417B5C ""
 *   insn=0x0000000000417B68 string=0x0000000000417B6C "\t@"
 *   insn=0x0000000000417B78 string=0x0000000000417B7C ""
 *   insn=0x0000000000417B88 string=0x0000000000417B8C "@"
 *   insn=0x0000000000417BA8 string=0x0000000000417BAC "\t\t@"
 *   insn=0x0000000000417BAC string=0x0000000000417BB0 ")"
 *   insn=0x0000000000417BB0 string=0x0000000000417BB4 "\t\t"
 *   insn=0x0000000000417BB8 string=0x0000000000417BBC "\t"
 *   insn=0x0000000000417BBC string=0x0000000000417BC0 ")"
 *   insn=0x0000000000417BC4 string=0x0000000000417BC8 " "
 *   insn=0x0000000000417BC8 string=0x0000000000417BCC "["
 *   insn=0x0000000000417BE8 string=0x0000000000417BEC ""
 *   insn=0x0000000000417BF8 string=0x0000000000417BFC "\t@"
 *   insn=0x0000000000417C08 string=0x0000000000417C0C ""
 *   insn=0x0000000000417C18 string=0x0000000000417C1C "@"
 *   insn=0x0000000000417C24 string=0x0000000000417C28 "c"
 *   insn=0x0000000000417C30 string=0x0000000000417C34 ""
 *   insn=0x0000000000417C34 string=0x0000000000417C38 "("
 *   insn=0x0000000000417C38 string=0x0000000000417C3C ""
 *   insn=0x0000000000417C3C string=0x0000000000417C40 ""
 *   insn=0x0000000000417C48 string=0x0000000000417C4C " !"
 *   insn=0x0000000000417C64 string=0x0000000000417C68 "\"
 *   insn=0x0000000000417C64 string=0x0000000000417DBC "@"
 *   insn=0x0000000000417C78 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000417C80 string=0x0000000000417C84 "U"
 *   insn=0x0000000000417C88 string=0x0000000000417C8C "j"
 *   insn=0x0000000000417C8C string=0x0000000000417C90 "J"
 *   insn=0x0000000000417C94 string=0x0000000000417C98 "(a"
 *   insn=0x0000000000417CA0 string=0x0000000000417CA4 "j"
 *   insn=0x0000000000417CA4 string=0x0000000000417CA8 "J=G"
 *   insn=0x0000000000417CA8 string=0x0000000000417CAC ")!"
 *   insn=0x0000000000417CB0 string=0x0000000000417CB4 "*"
 *   insn=0x0000000000417CB0 string=0x0000000000417CE0 "*"
 *   insn=0x0000000000417CB4 string=0x0000000000417CB8 "K"
 *   insn=0x0000000000417CB8 string=0x0000000000417CBC "+"
 *   insn=0x0000000000417CC0 string=0x0000000000417CC4 "_"
 *   insn=0x0000000000417CE0 string=0x0000000000417CE4 "K"
 *   insn=0x0000000000417CE4 string=0x0000000000417CE8 "+"
 *   insn=0x0000000000417CE8 string=0x0000000000417CEC "_"
 *   insn=0x0000000000417CF0 string=0x0000000000417CF4 "9"
 *   insn=0x0000000000417D08 string=0x0000000000417D0C "@"
 *   insn=0x0000000000417D0C string=0x0000000000417D10 "i"
 *   insn=0x0000000000417D10 string=0x0000000000417D14 ")=G"
 *   insn=0x0000000000417D14 string=0x0000000000417D18 "!"
 *   insn=0x0000000000417D18 string=0x0000000000417D1C "I"
 *   insn=0x0000000000417D1C string=0x0000000000417D20 "\t"
 *   insn=0x0000000000417D1C string=0x0000000000417D84 "\t"
 *   insn=0x0000000000417D20 string=0x0000000000417D24 "*"
 *   insn=0x0000000000417D24 string=0x0000000000417D28 "\n"
 *   insn=0x0000000000417D30 string=0x0000000000417D68 "?"
 *   insn=0x0000000000417D44 string=0x0000000000417D48 "i"
 *   insn=0x0000000000417D48 string=0x0000000000417D4C ")=G"
 *   insn=0x0000000000417D4C string=0x0000000000417D50 "!"
 *   insn=0x0000000000417D54 string=0x0000000000417D58 "\t"
 *   insn=0x0000000000417D58 string=0x0000000000417D5C "*"
 *   insn=0x0000000000417D5C string=0x0000000000417D60 "\n"
 *   insn=0x0000000000417D68 string=0x0000000000417D6C "L"
 *   insn=0x0000000000417D84 string=0x0000000000417D88 "*"
 *   insn=0x0000000000417D88 string=0x0000000000417D8C "\n"
 *   insn=0x0000000000417D8C string=0x0000000000417D90 "?"
 *   insn=0x0000000000417D94 string=0x0000000000417D98 ""
 *   insn=0x0000000000417DA8 string=0x0000000000417DAC ""
 *   insn=0x0000000000417DBC string=0x0000000000417DC0 ""
 *   insn=0x0000000000417DC0 string=0x0000000000417DC4 ""
 *   insn=0x0000000000417DC8 string=0x0000000000417DCC ""
 *   insn=0x0000000000417DCC string=0x0000000000417DD0 ""
 *   insn=0x0000000000417DDC string=0x0000000000417DE0 "["
 *   insn=0x0000000000417DF4 string=0x0000000000417DF8 "U"
 *   insn=0x0000000000417E10 string=0x0000000000417E14 "`"
 *   insn=0x0000000000417E14 string=0x0000000000417E18 "`"
 *   insn=0x0000000000417E18 string=0x0000000000417E24 "h"
 *   insn=0x0000000000417E2C string=0x0000000000417E30 "hz@"
 *   insn=0x0000000000417E40 string=0x0000000000417E44 " "
 *   insn=0x0000000000417E48 string=0x0000000000417E4C "t@"
 *   insn=0x0000000000417E50 string=0x0000000000417E54 "A"
 *   insn=0x0000000000417E60 string=0x0000000000417E64 "!"
 *   insn=0x0000000000417E70 string=0x00000000001F42C0 "P'"
 *   insn=0x0000000000417E78 string=0x0000000000417E7C "5"
 *   insn=0x0000000000417E7C string=0x00000000001F8750 "0'"
 *   insn=0x0000000000417E88 string=0x0000000000417E8C " "
 *   insn=0x0000000000417E90 string=0x0000000000417E94 "t@"
 *   insn=0x0000000000417E98 string=0x0000000000417E9C "A"
 *   insn=0x0000000000417EA8 string=0x0000000000417EAC "!"
 *   insn=0x0000000000417EC0 string=0x0000000000417EC4 "#"
 *   insn=0x0000000000417EC8 string=0x0000000000417ECC "@"
 *   insn=0x0000000000417F08 string=0x0000000000417F0C "@"
 *   insn=0x0000000000417F14 string=0x0000000000417F18 "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ItemInfoView::Init(Caver::MenuItemSlot **this)
{
  void *v2; // x0
  Caver::MenuItemSlot *v3; // x20
  Caver::MenuItemSlot *v4; // x9
  Caver::MenuItemSlot *v5; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  Caver::GUIView *v8; // x0
  __int64 v9; // x8
  int64x2_t v10; // q0
  __int64 (__fastcall **v11)(); // x8
  void (__fastcall *v12)(_BYTE *, _BYTE *, __int64); // x8
  void (__fastcall *v13)(Caver::MenuItemSlot **, _BYTE *); // x8
  Caver::MenuItemSlot *v14; // x9
  _QWORD *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x8
  Caver::GUIFrameView *v18; // x0
  Caver::TextureLibrary *v19; // x0
  Caver::MenuItemSlot *v20; // x20
  Caver::MenuItemSlot *v21; // x9
  Caver::MenuItemSlot *v22; // x8
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x0
  int v26; // w8
  void *v27; // x0
  Caver::GUIView *v28; // x0
  void (__fastcall *v29)(Caver::MenuItemSlot **, _BYTE *); // x8
  Caver::MenuItemSlot *v30; // x9
  _QWORD *v31; // x20
  __int64 v32; // x8
  __int64 v33; // x8
  Caver::GUILabel *v34; // x0
  Caver::FontLibrary *v35; // x0
  Caver::MenuItemSlot *v36; // x20
  Caver::MenuItemSlot *v37; // x9
  Caver::MenuItemSlot *v38; // x8
  __int64 v39; // x8
  __int64 v40; // x8
  Caver::GUILabel *v41; // x20
  Caver::FontLibrary *v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  _QWORD *v45; // x21
  __int64 v46; // x8
  __int64 v47; // x8
  _QWORD *v48; // x20
  __int64 v49; // x8
  __int64 v50; // x8
  Caver::MenuItemSlot *v51; // x20
  _QWORD *v52; // x21
  __int64 v53; // x8
  __int64 v54; // x8
  Caver::GUIView *v55; // x0
  int v56; // w8
  void (*v57)(void); // x8
  Caver::MenuItemSlot *v58; // x9
  _QWORD *v59; // x20
  __int64 v60; // x8
  __int64 v61; // x8
  Caver::MenuItemSlot *v62; // x0
  Caver::MenuItemSlot *v63; // x20
  Caver::MenuItemSlot *v64; // x9
  Caver::MenuItemSlot *v65; // x8
  __int64 v66; // x8
  __int64 v67; // x8
  Caver::MenuItemSlot *v68; // x0
  Caver::MenuItemSlot *v69; // x8
  float v70; // s3
  int v71; // w9
  float v72; // s0
  float v73; // s1
  void (*v74)(void); // x8
  Caver::MenuItemSlot *v75; // x9
  _QWORD *v76; // x20
  __int64 v77; // x8
  __int64 v78; // x8
  Caver::GUIFrameView *v79; // x0
  Caver::TextureLibrary *v80; // x0
  Caver::MenuItemSlot *v81; // x20
  Caver::MenuItemSlot *v82; // x9
  Caver::MenuItemSlot *v83; // x8
  __int64 v84; // x8
  __int64 v85; // x8
  __int64 v86; // x0
  int v87; // w8
  void *v88; // x0
  Caver::GUIView *v89; // x0
  void (__fastcall *v90)(Caver::MenuItemSlot **, _BYTE *); // x8
  Caver::MenuItemSlot *v91; // x9
  _QWORD *v92; // x20
  __int64 v93; // x8
  __int64 v94; // x8
  Caver::GUILabel *v95; // x0
  Caver::FontLibrary *v96; // x0
  Caver::MenuItemSlot *v97; // x20
  Caver::MenuItemSlot *v98; // x9
  Caver::MenuItemSlot *v99; // x8
  __int64 v100; // x8
  __int64 v101; // x8
  Caver::GUILabel *v102; // x20
  Caver::FontLibrary *v103; // x0
  __int64 v104; // x8
  __int64 v105; // x9
  _QWORD *v106; // x21
  __int64 v107; // x8
  __int64 v108; // x8
  _QWORD *v109; // x20
  __int64 v110; // x8
  __int64 v111; // x8
  Caver::MenuItemSlot *v112; // x20
  _QWORD *v113; // x21
  __int64 v114; // x8
  __int64 v115; // x8
  Caver::GUILabel *v116; // x0
  Caver::MenuItemSlot *v117; // x8
  float v118; // s2
  Caver::GUIView *v119; // x0
  void (*v120)(void); // x8
  Caver::MenuItemSlot *v121; // x9
  _QWORD *v122; // x19
  __int64 v123; // x8
  __int64 v124; // x8
  __int64 result; // x0
  int v126; // w8
  unsigned int *v127; // x8
  int v128; // w9
  unsigned int *v129; // x8
  int v130; // w9
  unsigned int *v131; // x8
  int v132; // w9
  _BYTE v133[24]; // [xsp+60h] [xbp-90h] BYREF
  Caver::MenuItemSlot **v134; // [xsp+78h] [xbp-78h]
  __int64 v135; // [xsp+88h] [xbp-68h]
  int64x2_t v136; // [xsp+90h] [xbp-60h] BYREF
  Caver::MenuItemSlot **v137; // [xsp+A0h] [xbp-50h]
  __int64 v138; // [xsp+B8h] [xbp-38h]

  v138 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::TextureLibrary::sharedLibrary((Caver::TextureLibrary *)this);
  sub_566BB8((int)v133, "ui_close_button");
  Caver::TextureLibrary::TextureForName();
  v2 = (void *)(*(_QWORD *)v133 - 24LL);
  if ( (__int64 *)(*(_QWORD *)v133 - 24LL) != &qword_6FD2E0 )
  {
    v127 = (unsigned int *)(*(_QWORD *)v133 - 8LL);
    if ( &pthread_create )
    {
      do
        v128 = __ldaxr(v127);
      while ( __stlxr(v128 - 1, v127) );
    }
    else
    {
      v128 = (*v127)--;
    }
    if ( v128 <= 0 )
      operator delete(v2);
  }
  operator new(0x1D0u);
  Caver::GUIButton::GUIButton();
  boost::shared_ptr<Caver::GUIButton>::shared_ptr<Caver::GUIButton>();
  v3 = this[31];
  v4 = *(Caver::MenuItemSlot **)v133;
  *(_QWORD *)v133 = this[30];
  v5 = *(Caver::MenuItemSlot **)&v133[8];
  this[30] = v4;
  this[31] = v5;
  *(_QWORD *)&v133[8] = v3;
  if ( v3 )
  {
    v6 = *((_QWORD *)v3 + 1) - 1LL;
    *((_QWORD *)v3 + 1) = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(Caver::MenuItemSlot *))(*(_QWORD *)v3 + 16LL))(v3);
      v7 = *((_QWORD *)v3 + 2) - 1LL;
      *((_QWORD *)v3 + 2) = v7;
      if ( !v7 )
        (*(void (__fastcall **)(Caver::MenuItemSlot *))(*(_QWORD *)v3 + 24LL))(v3);
    }
  }
  Caver::GUIButton::SetFrameTextureForState();
  v8 = this[30];
  v9 = *(_QWORD *)(v135 + 84);
  *(_QWORD *)v133 = 0;
  *(_QWORD *)&v133[8] = v9;
  Caver::GUIView::SetFrame(v8, (const Caver::Rectangle *)v133);
  *(_QWORD *)v133 = 0;
  v10 = vdupq_n_s64(0);
  v137 = this;
  v10.n128_u64[0] = (unsigned __int64)&Caver::ItemInfoView::ButtonPressed;
  v136 = v10;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v11 = 0;
  }
  else
  {
    v134 = v137;
    *(int64x2_t *)&v133[8] = v136;
    v11 = boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::ItemInfoView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::ItemInfoView*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::ItemInfoView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::ItemInfoView*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  *(_QWORD *)v133 = v11;
  Caver::GUIControl::AddTargetActionForControlEvent();
  if ( *(_QWORD *)v133 )
  {
    if ( (v133[0] & 1) == 0 )
    {
      v12 = *(void (__fastcall **)(_BYTE *, _BYTE *, __int64))(*(_QWORD *)v133 & 0xFFFFFFFFFFFFFFFELL);
      if ( v12 )
        v12(&v133[8], &v133[8], 2);
    }
    *(_QWORD *)v133 = 0;
  }
  v13 = (void (__fastcall *)(Caver::MenuItemSlot **, _BYTE *))*((_QWORD *)*this + 12);
  *(_QWORD *)v133 = this[30];
  v14 = this[31];
  *(_QWORD *)&v133[8] = v14;
  if ( v14 )
    ++*((_QWORD *)v14 + 1);
  v13(this, v133);
  v15 = *(_QWORD **)&v133[8];
  if ( *(_QWORD *)&v133[8] )
  {
    v16 = *(_QWORD *)(*(_QWORD *)&v133[8] + 8LL) - 1LL;
    *(_QWORD *)(*(_QWORD *)&v133[8] + 8LL) = v16;
    if ( !v16 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      v17 = v15[2] - 1LL;
      v15[2] = v17;
      if ( !v17 )
        (*(void (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
    }
  }
  v18 = (Caver::GUIFrameView *)operator new(0x110u);
  Caver::GUIFrameView::GUIFrameView(v18);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>();
  v20 = this[35];
  v21 = *(Caver::MenuItemSlot **)v133;
  *(_QWORD *)v133 = this[34];
  v22 = *(Caver::MenuItemSlot **)&v133[8];
  this[34] = v21;
  this[35] = v22;
  *(_QWORD *)&v133[8] = v20;
  if ( v20 )
  {
    v23 = *((_QWORD *)v20 + 1) - 1LL;
    *((_QWORD *)v20 + 1) = v23;
    if ( !v23 )
    {
      v19 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(Caver::MenuItemSlot *))(*(_QWORD *)v20 + 16LL))(v20);
      v24 = *((_QWORD *)v20 + 2) - 1LL;
      *((_QWORD *)v20 + 2) = v24;
      if ( !v24 )
        v19 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(Caver::MenuItemSlot *))(*(_QWORD *)v20 + 24LL))(v20);
    }
  }
  Caver::TextureLibrary::sharedLibrary(v19);
  sub_566BB8((int)&v136, "ui_frame_dark");
  Caver::TextureLibrary::TextureForName();
  Caver::GUIFrameView::SetFrameTexture();
  v25 = *(_QWORD *)v133;
  if ( *(_QWORD *)v133 )
  {
    v26 = *(_DWORD *)(*(_QWORD *)v133 + 8LL) - 1;
    *(_DWORD *)(*(_QWORD *)v133 + 8LL) = v26;
    if ( !v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
  }
  v27 = (void *)(v136.n128_u64[0] - 24);
  if ( (__int64 *)(v136.n128_u64[0] - 24) != &qword_6FD2E0 )
  {
    v129 = (unsigned int *)(v136.n128_u64[0] - 8);
    if ( &pthread_create )
    {
      do
        v130 = __ldaxr(v129);
      while ( __stlxr(v130 - 1, v129) );
    }
    else
    {
      v130 = (*v129)--;
    }
    if ( v130 <= 0 )
      operator delete(v27);
  }
  v28 = this[34];
  *(_OWORD *)v133 = xmmword_594480;
  Caver::GUIView::SetFrame(v28, (const Caver::Rectangle *)v133);
  v29 = (void (__fastcall *)(Caver::MenuItemSlot **, _BYTE *))*((_QWORD *)*this + 12);
  *(_QWORD *)v133 = this[34];
  v30 = this[35];
  *(_QWORD *)&v133[8] = v30;
  if ( v30 )
    ++*((_QWORD *)v30 + 1);
  v29(this, v133);
  v31 = *(_QWORD **)&v133[8];
  if ( *(_QWORD *)&v133[8] )
  {
    v32 = *(_QWORD *)(*(_QWORD *)&v133[8] + 8LL) - 1LL;
    *(_QWORD *)(*(_QWORD *)&v133[8] + 8LL) = v32;
    if ( !v32 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
      v33 = v31[2] - 1LL;
      v31[2] = v33;
      if ( !v33 )
        (*(void (__fastcall **)(_QWORD *))(*v31 + 24LL))(v31);
    }
  }
  v34 = (Caver::GUILabel *)operator new(0x150u);
  Caver::GUILabel::GUILabel(v34);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>();
  v36 = this[39];
  v37 = *(Caver::MenuItemSlot **)v133;
  *(_QWORD *)v133 = this[38];
  v38 = *(Caver::MenuItemSlot **)&v133[8];
  this[38] = v37;
  this[39] = v38;
  *(_QWORD *)&v133[8] = v36;
  if ( v36 )
  {
    v39 = *((_QWORD *)v36 + 1) - 1LL;
    *((_QWORD *)v36 + 1) = v39;
    if ( !v39 )
    {
      v35 = (Caver::FontLibrary *)(*(__int64 (__fastcall **)(Caver::MenuItemSlot *))(*(_QWORD *)v36 + 16LL))(v36);
      v40 = *((_QWORD *)v36 + 2) - 1LL;
      *((_QWORD *)v36 + 2) = v40;
      if ( !v40 )
        v35 = (Caver::FontLibrary *)(*(__int64 (__fastcall **)(Caver::MenuItemSlot *))(*(_QWORD *)v36 + 24LL))(v36);
    }
  }
  v41 = this[38];
  v42 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary(v35);
  Caver::FontLibrary::DefaultFont(v42);
  v43 = *(_QWORD *)v133;
  if ( *(_QWORD *)v133 != *((_QWORD *)v41 + 30) )
  {
    v44 = *(_QWORD *)&v133[8];
    if ( *(_QWORD *)&v133[8] )
      ++*(_QWORD *)(*(_QWORD *)&v133[8] + 8LL);
    v45 = (_QWORD *)*((_QWORD *)v41 + 31);
    *((_QWORD *)v41 + 30) = v43;
    *((_QWORD *)v41 + 31) = v44;
    if ( v45 )
    {
      v46 = v45[1] - 1LL;
      v45[1] = v46;
      if ( !v46 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v45 + 16LL))(v45);
        v47 = v45[2] - 1LL;
        v45[2] = v47;
        if ( !v47 )
          (*(void (__fastcall **)(_QWORD *))(*v45 + 24LL))(v45);
      }
    }
    Caver::GUILabel::UpdateText(v41);
  }
  v48 = *(_QWORD **)&v133[8];
  if ( *(_QWORD *)&v133[8] )
  {
    v49 = *(_QWORD *)(*(_QWORD *)&v133[8] + 8LL) - 1LL;
    *(_QWORD *)(*(_QWORD *)&v133[8] + 8LL) = v49;
    if ( !v49 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v48 + 16LL))(v48);
      v50 = v48[2] - 1LL;
      v48[2] = v50;
      if ( !v50 )
        (*(void (__fastcall **)(_QWORD *))(*v48 + 24LL))(v48);
    }
  }
  v51 = this[38];
  if ( *((unsigned __int8 *)v51 + 264) != 255
    || *((unsigned __int8 *)v51 + 265) != 255
    || *((unsigned __int8 *)v51 + 266) != 255
    || *((unsigned __int8 *)v51 + 267) != 255 )
  {
    v52 = (_QWORD *)*((_QWORD *)v51 + 35);
    *((_DWORD *)v51 + 66) = -1;
    *((_QWORD *)v51 + 34) = 0;
    *((_QWORD *)v51 + 35) = 0;
    if ( v52 )
    {
      v53 = v52[1] - 1LL;
      v52[1] = v53;
      if ( !v53 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v52 + 16LL))(v52);
        v54 = v52[2] - 1LL;
        v52[2] = v54;
        if ( !v54 )
          (*(void (__fastcall **)(_QWORD *))(*v52 + 24LL))(v52);
      }
    }
    Caver::GUILabel::UpdateText(v51);
    v51 = this[38];
  }
  *((_BYTE *)v51 + 320) = 1;
  *(_DWORD *)((char *)v51 + 321) = -16777216;
  *((_QWORD *)v51 + 41) = 0xBF8000003F800000LL;
  Caver::GUILabel::UpdateText(v51);
  v55 = this[38];
  v56 = *((_DWORD *)this[34] + 36);
  *(_QWORD *)v133 = 1115684864;
  *(_DWORD *)&v133[8] = 1130758144;
  *(_DWORD *)&v133[12] = v56;
  Caver::GUIView::SetFrame(v55, (const Caver::Rectangle *)v133);
  v57 = *(void (**)(void))(*(_QWORD *)this[34] + 96LL);
  *(_QWORD *)v133 = this[38];
  v58 = this[39];
  *(_QWORD *)&v133[8] = v58;
  if ( v58 )
    ++*((_QWORD *)v58 + 1);
  v57();
  v59 = *(_QWORD **)&v133[8];
  if ( *(_QWORD *)&v133[8] )
  {
    v60 = *(_QWORD *)(*(_QWORD *)&v133[8] + 8LL) - 1LL;
    *(_QWORD *)(*(_QWORD *)&v133[8] + 8LL) = v60;
    if ( !v60 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v59 + 16LL))(v59);
      v61 = v59[2] - 1LL;
      v59[2] = v61;
      if ( !v61 )
        (*(void (__fastcall **)(_QWORD *))(*v59 + 24LL))(v59);
    }
  }
  v62 = (Caver::MenuItemSlot *)operator new(0x280u);
  Caver::MenuItemSlot::MenuItemSlot(v62);
  boost::shared_ptr<Caver::MenuItemSlot>::shared_ptr<Caver::MenuItemSlot>();
  v63 = this[33];
  v64 = *(Caver::MenuItemSlot **)v133;
  *(_QWORD *)v133 = this[32];
  v65 = *(Caver::MenuItemSlot **)&v133[8];
  this[32] = v64;
  this[33] = v65;
  *(_QWORD *)&v133[8] = v63;
  if ( v63 )
  {
    v66 = *((_QWORD *)v63 + 1) - 1LL;
    *((_QWORD *)v63 + 1) = v66;
    if ( !v66 )
    {
      (*(void (__fastcall **)(Caver::MenuItemSlot *))(*(_QWORD *)v63 + 16LL))(v63);
      v67 = *((_QWORD *)v63 + 2) - 1LL;
      *((_QWORD *)v63 + 2) = v67;
      if ( !v67 )
        (*(void (__fastcall **)(Caver::MenuItemSlot *))(*(_QWORD *)v63 + 24LL))(v63);
    }
  }
  Caver::MenuItemSlot::Init(this[32], 1.0);
  v68 = this[32];
  *((_BYTE *)v68 + 288) = 0;
  v69 = this[34];
  v70 = *((float *)v68 + 32);
  v71 = *((_DWORD *)v68 + 31);
  v72 = *((float *)v69 + 36);
  v73 = *((float *)v69 + 34);
  *(_DWORD *)v133 = -1073741824;
  *(_DWORD *)&v133[4] = roundf((float)(v73 + (float)(v72 * 0.5)) - (float)(v70 * 0.5));
  *(_DWORD *)&v133[8] = v71;
  *(float *)&v133[12] = v70;
  Caver::GUIView::SetFrame(v68, (const Caver::Rectangle *)v133);
  v74 = *(void (**)(void))(*(_QWORD *)this[34] + 96LL);
  *(_QWORD *)v133 = this[32];
  v75 = this[33];
  *(_QWORD *)&v133[8] = v75;
  if ( v75 )
    ++*((_QWORD *)v75 + 1);
  v74();
  v76 = *(_QWORD **)&v133[8];
  if ( *(_QWORD *)&v133[8] )
  {
    v77 = *(_QWORD *)(*(_QWORD *)&v133[8] + 8LL) - 1LL;
    *(_QWORD *)(*(_QWORD *)&v133[8] + 8LL) = v77;
    if ( !v77 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v76 + 16LL))(v76);
      v78 = v76[2] - 1LL;
      v76[2] = v78;
      if ( !v78 )
        (*(void (__fastcall **)(_QWORD *))(*v76 + 24LL))(v76);
    }
  }
  v79 = (Caver::GUIFrameView *)operator new(0x110u);
  Caver::GUIFrameView::GUIFrameView(v79);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>();
  v81 = this[37];
  v82 = *(Caver::MenuItemSlot **)v133;
  *(_QWORD *)v133 = this[36];
  v83 = *(Caver::MenuItemSlot **)&v133[8];
  this[36] = v82;
  this[37] = v83;
  *(_QWORD *)&v133[8] = v81;
  if ( v81 )
  {
    v84 = *((_QWORD *)v81 + 1) - 1LL;
    *((_QWORD *)v81 + 1) = v84;
    if ( !v84 )
    {
      v80 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(Caver::MenuItemSlot *))(*(_QWORD *)v81 + 16LL))(v81);
      v85 = *((_QWORD *)v81 + 2) - 1LL;
      *((_QWORD *)v81 + 2) = v85;
      if ( !v85 )
        v80 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(Caver::MenuItemSlot *))(*(_QWORD *)v81 + 24LL))(v81);
    }
  }
  Caver::TextureLibrary::sharedLibrary(v80);
  sub_566BB8((int)&v136, "ui_frame_dark");
  Caver::TextureLibrary::TextureForName();
  Caver::GUIFrameView::SetFrameTexture();
  v86 = *(_QWORD *)v133;
  if ( *(_QWORD *)v133 )
  {
    v87 = *(_DWORD *)(*(_QWORD *)v133 + 8LL) - 1;
    *(_DWORD *)(*(_QWORD *)v133 + 8LL) = v87;
    if ( !v87 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 8LL))(v86);
  }
  v88 = (void *)(v136.n128_u64[0] - 24);
  if ( (__int64 *)(v136.n128_u64[0] - 24) != &qword_6FD2E0 )
  {
    v131 = (unsigned int *)(v136.n128_u64[0] - 8);
    if ( &pthread_create )
    {
      do
        v132 = __ldaxr(v131);
      while ( __stlxr(v132 - 1, v131) );
    }
    else
    {
      v132 = (*v131)--;
    }
    if ( v132 <= 0 )
      operator delete(v88);
  }
  v89 = this[36];
  *(_OWORD *)v133 = xmmword_594490;
  Caver::GUIView::SetFrame(v89, (const Caver::Rectangle *)v133);
  v90 = (void (__fastcall *)(Caver::MenuItemSlot **, _BYTE *))*((_QWORD *)*this + 12);
  *(_QWORD *)v133 = this[36];
  v91 = this[37];
  *(_QWORD *)&v133[8] = v91;
  if ( v91 )
    ++*((_QWORD *)v91 + 1);
  v90(this, v133);
  v92 = *(_QWORD **)&v133[8];
  if ( *(_QWORD *)&v133[8] )
  {
    v93 = *(_QWORD *)(*(_QWORD *)&v133[8] + 8LL) - 1LL;
    *(_QWORD *)(*(_QWORD *)&v133[8] + 8LL) = v93;
    if ( !v93 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v92 + 16LL))(v92);
      v94 = v92[2] - 1LL;
      v92[2] = v94;
      if ( !v94 )
        (*(void (__fastcall **)(_QWORD *))(*v92 + 24LL))(v92);
    }
  }
  v95 = (Caver::GUILabel *)operator new(0x150u);
  Caver::GUILabel::GUILabel(v95);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>();
  v97 = this[41];
  v98 = *(Caver::MenuItemSlot **)v133;
  *(_QWORD *)v133 = this[40];
  v99 = *(Caver::MenuItemSlot **)&v133[8];
  this[40] = v98;
  this[41] = v99;
  *(_QWORD *)&v133[8] = v97;
  if ( v97 )
  {
    v100 = *((_QWORD *)v97 + 1) - 1LL;
    *((_QWORD *)v97 + 1) = v100;
    if ( !v100 )
    {
      v96 = (Caver::FontLibrary *)(*(__int64 (__fastcall **)(Caver::MenuItemSlot *))(*(_QWORD *)v97 + 16LL))(v97);
      v101 = *((_QWORD *)v97 + 2) - 1LL;
      *((_QWORD *)v97 + 2) = v101;
      if ( !v101 )
        v96 = (Caver::FontLibrary *)(*(__int64 (__fastcall **)(Caver::MenuItemSlot *))(*(_QWORD *)v97 + 24LL))(v97);
    }
  }
  v102 = this[40];
  v103 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary(v96);
  Caver::FontLibrary::DefaultFont(v103);
  v104 = *(_QWORD *)v133;
  if ( *(_QWORD *)v133 != *((_QWORD *)v102 + 30) )
  {
    v105 = *(_QWORD *)&v133[8];
    if ( *(_QWORD *)&v133[8] )
      ++*(_QWORD *)(*(_QWORD *)&v133[8] + 8LL);
    v106 = (_QWORD *)*((_QWORD *)v102 + 31);
    *((_QWORD *)v102 + 30) = v104;
    *((_QWORD *)v102 + 31) = v105;
    if ( v106 )
    {
      v107 = v106[1] - 1LL;
      v106[1] = v107;
      if ( !v107 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v106 + 16LL))(v106);
        v108 = v106[2] - 1LL;
        v106[2] = v108;
        if ( !v108 )
          (*(void (__fastcall **)(_QWORD *))(*v106 + 24LL))(v106);
      }
    }
    Caver::GUILabel::UpdateText(v102);
  }
  v109 = *(_QWORD **)&v133[8];
  if ( *(_QWORD *)&v133[8] )
  {
    v110 = *(_QWORD *)(*(_QWORD *)&v133[8] + 8LL) - 1LL;
    *(_QWORD *)(*(_QWORD *)&v133[8] + 8LL) = v110;
    if ( !v110 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v109 + 16LL))(v109);
      v111 = v109[2] - 1LL;
      v109[2] = v111;
      if ( !v111 )
        (*(void (__fastcall **)(_QWORD *))(*v109 + 24LL))(v109);
    }
  }
  v112 = this[40];
  if ( *((unsigned __int8 *)v112 + 264) != 251
    || *((unsigned __int8 *)v112 + 265) != 176
    || *((_BYTE *)v112 + 266) != 59
    || *((unsigned __int8 *)v112 + 267) != 255 )
  {
    v113 = (_QWORD *)*((_QWORD *)v112 + 35);
    *((_DWORD *)v112 + 66) = -12865285;
    *((_QWORD *)v112 + 34) = 0;
    *((_QWORD *)v112 + 35) = 0;
    if ( v113 )
    {
      v114 = v113[1] - 1LL;
      v113[1] = v114;
      if ( !v114 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v113 + 16LL))(v113);
        v115 = v113[2] - 1LL;
        v113[2] = v115;
        if ( !v115 )
          (*(void (__fastcall **)(_QWORD *))(*v113 + 24LL))(v113);
      }
    }
    Caver::GUILabel::UpdateText(v112);
    v112 = this[40];
  }
  *((_BYTE *)v112 + 320) = 1;
  *(_DWORD *)((char *)v112 + 321) = -16777216;
  *((_QWORD *)v112 + 41) = 0xBF8000003F800000LL;
  Caver::GUILabel::UpdateText(v112);
  v116 = this[40];
  *((_BYTE *)v116 + 312) = 1;
  Caver::GUILabel::UpdateText(v116);
  v117 = this[36];
  v118 = *((float *)v117 + 35);
  v119 = this[40];
  LODWORD(v117) = *((_DWORD *)v117 + 36);
  *(_QWORD *)v133 = 1101004800;
  *(float *)&v133[8] = v118 + -40.0;
  *(_DWORD *)&v133[12] = (_DWORD)v117;
  Caver::GUIView::SetFrame(v119, (const Caver::Rectangle *)v133);
  v120 = *(void (**)(void))(*(_QWORD *)this[36] + 96LL);
  *(_QWORD *)v133 = this[40];
  v121 = this[41];
  *(_QWORD *)&v133[8] = v121;
  if ( v121 )
    ++*((_QWORD *)v121 + 1);
  v120();
  v122 = *(_QWORD **)&v133[8];
  if ( *(_QWORD *)&v133[8] )
  {
    v123 = *(_QWORD *)(*(_QWORD *)&v133[8] + 8LL) - 1LL;
    *(_QWORD *)(*(_QWORD *)&v133[8] + 8LL) = v123;
    if ( !v123 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v122 + 16LL))(v122);
      v124 = v122[2] - 1LL;
      v122[2] = v124;
      if ( !v124 )
        (*(void (__fastcall **)(_QWORD *))(*v122 + 24LL))(v122);
    }
  }
  result = v135;
  if ( v135 )
  {
    v126 = *(_DWORD *)(v135 + 8) - 1;
    *(_DWORD *)(v135 + 8) = v126;
    if ( !v126 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

