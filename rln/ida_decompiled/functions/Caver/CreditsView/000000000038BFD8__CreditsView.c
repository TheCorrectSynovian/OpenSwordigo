/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000038BFD8
 * Mangled: _ZN5Caver11CreditsViewC2Ev
 * Demangled: Caver::CreditsView::CreditsView(void)
 *
 * Callers: 1
 *   0x00000000001FD070  Caver::CreditsView::CreditsView(void)
 *
 * Callees: 33
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F56B0  Caver::GameInterfaceBuilder::PlainButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001F5960  Caver::GUIButton::SetTintColor(Caver::Color)
 *   0x00000000001F5F30  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6E90  boost::shared_ptr<Caver::SceneView>::shared_ptr<Caver::SceneView>(Caver::SceneView *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FA4A0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIEffectView,Caver::GUIEffectView>(boost::shared_ptr<Caver::GUIEffectView> const*,Caver::GUIEffectView *)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FC750  Caver::GUIButton::SetImage(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001FD100  Caver::GUIButton::SetHighlightedImage(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FDF70  Caver::SceneView::InitWithScene(boost::shared_ptr<Caver::Scene> const&)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x00000000001FF2A0  boost::shared_ptr<Caver::Scene>::shared_ptr<Caver::Scene>(Caver::Scene *)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x00000000002011A0  Caver::Scene::LoadFromFile(std::string const&)
 *   0x0000000000201510  Caver::Scene::Scene(void)
 *   0x0000000000202180  Caver::Scene::FinishLoad(void)
 *   0x0000000000202540  Caver::GUIEffect::ShowBars(float)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000202B80  Caver::GUIEffectView::GUIEffectView(void)
 *   0x0000000000203030  boost::shared_ptr<Caver::GUIEffectView>::shared_ptr<Caver::GUIEffectView>(Caver::GUIEffectView *)
 *   0x0000000000203850  Caver::SceneView::SceneView(void)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 390
 *   insn=0x000000000038BFF0 string=0x000000000038BFF4 "V"
 *   insn=0x000000000038C00C string=0x000000000038C010 "uG"
 *   insn=0x000000000038C01C string=0x000000000038C020 "A"
 *   insn=0x000000000038C020 string=0x000000000038C024 "h"
 *   insn=0x000000000038C024 string=0x000000000038C028 "?"
 *   insn=0x000000000038C02C string=0x000000000038C030 "l"
 *   insn=0x000000000038C030 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000038C038 string=0x000000000038C03C "5"
 *   insn=0x000000000038C04C string=0x000000000038C050 "!"
 *   insn=0x000000000038C050 string=0x0000000000590DE6 "credits"
 *   insn=0x000000000038C064 string=0x00000000005834B5 "scene"
 *   insn=0x000000000038C084 string=0x00000000001F5F30 "P'"
 *   insn=0x000000000038C08C string=0x000000000038C090 "D"
 *   insn=0x000000000038C0A4 string=0x000000000038C0A8 "!4"
 *   insn=0x000000000038C0C4 string=0x000000000038C0C8 "a5"
 *   insn=0x000000000038C0CC string=0x000000000038C0D0 "D"
 *   insn=0x000000000038C0E4 string=0x000000000038C0E8 "j"
 *   insn=0x000000000038C0E8 string=0x000000000038C0EC "hRO"
 *   insn=0x000000000038C0E8 string=0x00000000001F6E90 "0'"
 *   insn=0x000000000038C0F8 string=0x000000000038C0FC "i""
 *   insn=0x000000000038C100 string=0x000000000038C104 "4"
 *   insn=0x000000000038C104 string=0x000000000038C148 " "
 *   insn=0x000000000038C108 string=0x000000000038C10C ""
 *   insn=0x000000000038C118 string=0x000000000038C11C "\t@"
 *   insn=0x000000000038C128 string=0x000000000038C12C ""
 *   insn=0x000000000038C138 string=0x000000000038C13C "@"
 *   insn=0x000000000038C148 string=0x000000000038C14C "p@"
 *   insn=0x000000000038C154 string=0x000000000038C158 ",@"
 *   insn=0x000000000038C158 string=0x000000000038C15C "I"
 *   insn=0x000000000038C15C string=0x000000000038C160 "\tp"
 *   insn=0x000000000038C160 string=0x000000000038C164 "h"
 *   insn=0x000000000038C168 string=0x0000000000583734 "o"
 *   insn=0x000000000038C16C string=0x000000000038C170 "!5G"
 *   insn=0x000000000038C178 string=0x000000000038C17C "\t"
 *   insn=0x000000000038C17C string=0x000000000038C180 ")-@"
 *   insn=0x000000000038C184 string=0x000000000038C188 " "
 *   insn=0x000000000038C188 string=0x000000000038C18C " "
 *   insn=0x000000000038C190 string=0x000000000038C194 "w"
 *   insn=0x000000000038C194 string=0x00000000001FDF70 "0'"
 *   insn=0x000000000038C1AC string=0x000000000038C1B0 "t"
 *   insn=0x000000000038C1CC string=0x000000000038C1D0 "("
 *   insn=0x000000000038C1DC string=0x00000000001FB170 "0'"
 *   insn=0x000000000038C1E0 string=0x000000000038C1E4 "\tq@"
 *   insn=0x000000000038C1E4 string=0x000000000038C1E8 "?I"
 *   insn=0x000000000038C1EC string=0x000000000038C224 " "
 *   insn=0x000000000038C1F0 string=0x000000000038C1F4 "I"
 *   insn=0x000000000038C1F4 string=0x000000000038C1F8 "\tq"
 *   insn=0x000000000038C1F8 string=0x000000000038C1FC "@"
 *   insn=0x000000000038C204 string=0x000000000038C208 "!5G"
 *   insn=0x000000000038C210 string=0x000000000038C214 ""
 *   insn=0x000000000038C214 string=0x000000000038C218 "-@"
 *   insn=0x000000000038C228 string=0x000000000038C22C "\t"
 *   insn=0x000000000038C22C string=0x000000000038C230 ")1@"
 *   insn=0x000000000038C238 string=0x000000000038C23C "H"
 *   insn=0x000000000038C23C string=0x000000000038C240 ""
 *   insn=0x000000000038C240 string=0x000000000038C244 "H"
 *   insn=0x000000000038C248 string=0x000000000038C24C " "
 *   insn=0x000000000038C250 string=0x000000000038C254 "4"
 *   insn=0x000000000038C258 string=0x000000000038C25C ""
 *   insn=0x000000000038C268 string=0x000000000038C26C "\t@"
 *   insn=0x000000000038C278 string=0x000000000038C27C ""
 *   insn=0x000000000038C288 string=0x000000000038C28C "@"
 *   insn=0x000000000038C2AC string=0x00000000001F56B0 "P'"
 *   insn=0x000000000038C2B4 string=0x000000000038C2B8 "\n"
 *   insn=0x000000000038C2B4 string=0x000000000038C2C4 "t"
 *   insn=0x000000000038C2B8 string=0x000000000038C2BC "J"
 *   insn=0x000000000038C2BC string=0x000000000038C2C0 "\n"
 *   insn=0x000000000038C2C4 string=0x000000000038C2C8 "i""
 *   insn=0x000000000038C2C8 string=0x000000000038C2CC "4"
 *   insn=0x000000000038C2D0 string=0x000000000038C2D4 ""
 *   insn=0x000000000038C2E0 string=0x000000000038C2E4 "\t@"
 *   insn=0x000000000038C2F0 string=0x000000000038C2F4 ""
 *   insn=0x000000000038C300 string=0x000000000038C304 "@"
 *   insn=0x000000000038C310 string=0x000000000038C314 "4"
 *   insn=0x000000000038C318 string=0x000000000038C31C ""
 *   insn=0x000000000038C328 string=0x000000000038C32C "\t@"
 *   insn=0x000000000038C338 string=0x000000000038C33C ""
 *   insn=0x000000000038C348 string=0x000000000038C34C "@"
 *   insn=0x000000000038C35C string=0x000000000038C360 "@"
 *   insn=0x000000000038C360 string=0x000000000038C364 ""
 *   insn=0x000000000038C364 string=0x000000000038C368 ""
 *   insn=0x000000000038C36C string=0x000000000038C370 ""
 *   insn=0x000000000038C370 string=0x000000000038C374 ""
 *   insn=0x000000000038C380 string=0x000000000038C384 "@"
 *   insn=0x000000000038C380 string=0x000000000038C3A0 "t"
 *   insn=0x000000000038C384 string=0x000000000038C388 ""
 *   insn=0x000000000038C388 string=0x000000000038C38C ""
 *   insn=0x000000000038C390 string=0x000000000038C394 ""
 *   insn=0x000000000038C394 string=0x000000000038C398 ""
 *   insn=0x000000000038C3A4 string=0x00000000001FA350 "0'"
 *   insn=0x000000000038C3AC string=0x000000000058EC00 "ui_button_arrow"
 *   insn=0x000000000038C3CC string=0x000000000038C3D0 "x"
 *   insn=0x000000000038C3DC string=0x00000000001FC750 "0'"
 *   insn=0x000000000038C3E4 string=0x000000000038C3E8 "@"
 *   insn=0x000000000038C3E8 string=0x000000000038C3EC ""
 *   insn=0x000000000038C3EC string=0x000000000038C3F0 ""
 *   insn=0x000000000038C3F4 string=0x000000000038C3F8 ""
 *   insn=0x000000000038C3F8 string=0x000000000038C3FC ""
 *   insn=0x000000000038C40C string=0x000000000038C410 "A"
 *   insn=0x000000000038C410 string=0x000000000038C414 "t"
 *   insn=0x000000000038C420 string=0x000000000058EC10 "ui_button_arrow_pressed"
 *   insn=0x000000000038C440 string=0x000000000038C444 "["
 *   insn=0x000000000038C44C string=0x000000000038C450 ","
 *   insn=0x000000000038C450 string=0x00000000001FD100 "0'"
 *   insn=0x000000000038C458 string=0x000000000038C45C "@"
 *   insn=0x000000000038C45C string=0x000000000038C460 ""
 *   insn=0x000000000038C460 string=0x000000000038C464 ""
 *   insn=0x000000000038C468 string=0x000000000038C46C ""
 *   insn=0x000000000038C46C string=0x000000000038C470 ""
 *   insn=0x000000000038C484 string=0x000000000038C488 "`"
 *   insn=0x000000000038C488 string=0x000000000038C48C "("
 *   insn=0x000000000038C490 string=0x000000000038C494 "\t@G"
 *   insn=0x000000000038C4A0 string=0x000000000038C4A4 "3"
 *   insn=0x000000000038C4A4 string=0x000000000038C4A8 "`"
 *   insn=0x000000000038C4A8 string=0x000000000038C4AC "HV"
 *   insn=0x000000000038C4B8 string=0x000000000038C4BC ")"
 *   insn=0x000000000038C4BC string=0x00000000001F5960 "P'"
 *   insn=0x000000000038C4D0 string=0x000000000038C4D4 "h"
 *   insn=0x000000000038C4D4 string=0x000000000038C4D8 "\n+"
 *   insn=0x000000000038C4DC string=0x000000000038C4E0 " "
 *   insn=0x000000000038C4E4 string=0x000000000038C4E8 "q"
 *   insn=0x000000000038C4E8 string=0x000000000038C4EC "J"
 *   insn=0x000000000038C4F0 string=0x000000000038C4F4 " "
 *   insn=0x000000000038C4F4 string=0x000000000038C4F8 "\ta"
 *   insn=0x000000000038C4F8 string=0x000000000038C4FC "?"
 *   insn=0x000000000038C4FC string=0x000000000038C500 "+"
 *   insn=0x000000000038C500 string=0x000000000038C504 "j"
 *   insn=0x000000000038C504 string=0x000000000038C508 "J"
 *   insn=0x000000000038C508 string=0x000000000038C50C "L"
 *   insn=0x000000000038C51C string=0x000000000038C520 "\na"
 *   insn=0x000000000038C528 string=0x000000000038C56C "lE@"
 *   insn=0x000000000038C534 string=0x000000000038C538 "\n"
 *   insn=0x000000000038C53C string=0x000000000038C540 "Ja"
 *   insn=0x000000000038C55C string=0x000000000038C560 "a"
 *   insn=0x000000000038C568 string=0x000000000038C57C "`z@"
 *   insn=0x000000000038C56C string=0x000000000038C570 "LE"
 *   insn=0x000000000038C570 string=0x000000000038C574 "_"
 *   insn=0x000000000038C57C string=0x000000000038C580 "\t"
 *   insn=0x000000000038C580 string=0x000000000038C584 ")1@"
 *   insn=0x000000000038C588 string=0x000000000038C58C "h"
 *   insn=0x000000000038C594 string=0x000000000038C598 "\n"
 *   insn=0x000000000038C598 string=0x000000000038C59C "J"
 *   insn=0x000000000038C59C string=0x000000000038C5A0 "\n"
 *   insn=0x000000000038C5A4 string=0x000000000038C5A8 " "
 *   insn=0x000000000038C5AC string=0x000000000038C5B0 "4"
 *   insn=0x000000000038C5B0 string=0x000000000038C5F4 "h"
 *   insn=0x000000000038C5B4 string=0x000000000038C5B8 ""
 *   insn=0x000000000038C5C4 string=0x000000000038C5C8 "\t@"
 *   insn=0x000000000038C5D4 string=0x000000000038C5D8 ""
 *   insn=0x000000000038C5E4 string=0x000000000038C5E8 "@"
 *   insn=0x000000000038C5F4 string=0x000000000038C5F8 "iz@"
 *   insn=0x000000000038C5F8 string=0x000000000038C5FC "1@"
 *   insn=0x000000000038C600 string=0x000000000038C604 "i~@"
 *   insn=0x000000000038C60C string=0x000000000038C610 "*"
 *   insn=0x000000000038C610 string=0x000000000038C614 "J"
 *   insn=0x000000000038C614 string=0x000000000038C618 "*"
 *   insn=0x000000000038C628 string=0x000000000038C62C "4"
 *   insn=0x000000000038C630 string=0x000000000038C634 ""
 *   insn=0x000000000038C640 string=0x000000000038C644 "\t@"
 *   insn=0x000000000038C650 string=0x000000000038C654 ""
 *   insn=0x000000000038C660 string=0x000000000038C664 "@"
 *   insn=0x000000000038C670 string=0x000000000038C674 "4"
 *   insn=0x000000000038C678 string=0x000000000038C67C ""
 *   insn=0x000000000038C688 string=0x000000000038C68C "\t@"
 *   insn=0x000000000038C698 string=0x000000000038C69C ""
 *   insn=0x000000000038C6A8 string=0x000000000038C6AC "@"
 *   insn=0x000000000038C6B8 string=0x000000000038C6BC "4"
 *   insn=0x000000000038C6C0 string=0x000000000038C6C4 ""
 *   insn=0x000000000038C6D0 string=0x000000000038C6D4 "\t@"
 *   insn=0x000000000038C6E0 string=0x000000000038C6E4 ""
 *   insn=0x000000000038C6F0 string=0x000000000038C6F4 "@"
 *   insn=0x000000000038C72C string=0x000000000038C730 ")=G"
 *   insn=0x000000000038C730 string=0x000000000038C734 "!"
 *   insn=0x000000000038C734 string=0x000000000038C738 "I"
 *   insn=0x000000000038C738 string=0x000000000038C73C "\t"
 *   insn=0x000000000038C738 string=0x000000000038C7E0 "\t"
 *   insn=0x000000000038C73C string=0x000000000038C740 "*"
 *   insn=0x000000000038C740 string=0x000000000038C744 "\n"
 *   insn=0x000000000038C748 string=0x000000000038C74C "("
 *   insn=0x000000000038C74C string=0x000000000038C7EC "?"
 *   insn=0x000000000038C750 string=0x000000000038C754 ")=G"
 *   insn=0x000000000038C754 string=0x000000000038C758 "!"
 *   insn=0x000000000038C758 string=0x000000000038C75C ")"
 *   insn=0x000000000038C75C string=0x000000000038C760 "\t"
 *   insn=0x000000000038C75C string=0x000000000038C800 "\t"
 *   insn=0x000000000038C760 string=0x000000000038C764 "*"
 *   insn=0x000000000038C764 string=0x000000000038C768 "\n"
 *   insn=0x000000000038C76C string=0x000000000038C770 "'"
 *   insn=0x000000000038C770 string=0x000000000038C80C "?"
 *   insn=0x000000000038C774 string=0x000000000038C778 ")=G"
 *   insn=0x000000000038C778 string=0x000000000038C77C "!"
 *   insn=0x000000000038C77C string=0x000000000038C780 "\t"
 *   insn=0x000000000038C780 string=0x000000000038C784 "\t"
 *   insn=0x000000000038C780 string=0x000000000038C820 "\t"
 *   insn=0x000000000038C784 string=0x000000000038C788 "*"
 *   insn=0x000000000038C788 string=0x000000000038C78C "\n"
 *   insn=0x000000000038C790 string=0x000000000038C794 "&"
 *   insn=0x000000000038C794 string=0x000000000038C82C "?"
 *   insn=0x000000000038C798 string=0x000000000038C79C ")=G"
 *   insn=0x000000000038C79C string=0x000000000038C7A0 "!"
 *   insn=0x000000000038C7A4 string=0x000000000038C7A8 "\t"
 *   insn=0x000000000038C7A4 string=0x000000000038C840 "\t"
 *   insn=0x000000000038C7A8 string=0x000000000038C7AC "*"
 *   insn=0x000000000038C7AC string=0x000000000038C7B0 "\n"
 *   insn=0x000000000038C7B4 string=0x000000000038C7B8 "%"
 *   insn=0x000000000038C7B8 string=0x000000000038C84C "?"
 *   insn=0x000000000038C7BC string=0x000000000038C7C0 ")=G"
 *   insn=0x000000000038C7C0 string=0x000000000038C7C4 "!"
 *   insn=0x000000000038C7C8 string=0x000000000038C7CC "\t"
 *   insn=0x000000000038C7C8 string=0x000000000038C860 "\t"
 *   insn=0x000000000038C7CC string=0x000000000038C7D0 "*"
 *   insn=0x000000000038C7D0 string=0x000000000038C7D4 "\n"
 *   insn=0x000000000038C7D8 string=0x000000000038C7DC "$"
 *   insn=0x000000000038C7DC string=0x000000000038C86C "?"
 *   insn=0x000000000038C7E0 string=0x000000000038C7E4 "*"
 *   insn=0x000000000038C7E4 string=0x000000000038C7E8 "\n"
 *   insn=0x000000000038C7F8 string=0x000000000038C7FC ","
 *   insn=0x000000000038C800 string=0x000000000038C804 "*"
 *   insn=0x000000000038C804 string=0x000000000038C808 "\n"
 *   insn=0x000000000038C80C string=0x000000000038C810 "l"
 *   insn=0x000000000038C818 string=0x000000000038C81C "("
 *   insn=0x000000000038C820 string=0x000000000038C824 "*"
 *   insn=0x000000000038C824 string=0x000000000038C828 "\n"
 *   insn=0x000000000038C838 string=0x000000000038C83C "$"
 *   insn=0x000000000038C840 string=0x000000000038C844 "*"
 *   insn=0x000000000038C844 string=0x000000000038C848 "\n"
 *   insn=0x000000000038C84C string=0x000000000038C850 ","
 *   insn=0x000000000038C860 string=0x000000000038C864 "*"
 *   insn=0x000000000038C864 string=0x000000000038C868 "\n"
 *   insn=0x000000000038C880 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000038C890 string=0x000000000038CCA0 "@"
 *   insn=0x000000000038C8A4 string=0x000000000038C8A8 "u"
 *   insn=0x000000000038C8AC string=0x000000000038C8B0 ""
 *   insn=0x000000000038C8BC string=0x000000000038C8C0 "\t@"
 *   insn=0x000000000038C8CC string=0x000000000038C8D0 ""
 *   insn=0x000000000038C8DC string=0x000000000038C8E0 "@"
 *   insn=0x000000000038C8F8 string=0x000000000038C8FC "U"
 *   insn=0x000000000038C900 string=0x000000000038C904 ""
 *   insn=0x000000000038C910 string=0x000000000038C914 "\t@"
 *   insn=0x000000000038C920 string=0x000000000038C924 ""
 *   insn=0x000000000038C930 string=0x000000000038C934 "@"
 *   insn=0x000000000038C950 string=0x000000000038C954 ""
 *   insn=0x000000000038C958 string=0x000000000038C95C "A"
 *   insn=0x000000000038C960 string=0x000000000038C964 "\t@"
 *   insn=0x000000000038C970 string=0x000000000038C974 ""
 *   insn=0x000000000038C978 string=0x000000000038C97C "A"
 *   insn=0x000000000038C980 string=0x000000000038C984 "@"
 *   insn=0x000000000038C9A0 string=0x000000000038C9A4 "\t\t@"
 *   insn=0x000000000038C9A4 string=0x000000000038C9A8 ")"
 *   insn=0x000000000038C9A8 string=0x000000000038C9AC "\t\t"
 *   insn=0x000000000038C9AC string=0x000000000038C9B0 "!"
 *   insn=0x000000000038C9B0 string=0x000000000038C9B4 "\t"
 *   insn=0x000000000038C9B4 string=0x000000000038C9B8 ")"
 *   insn=0x000000000038C9BC string=0x000000000038C9C0 " "
 *   insn=0x000000000038C9D8 string=0x000000000038C9DC "\t\t@"
 *   insn=0x000000000038C9DC string=0x000000000038C9E0 ")"
 *   insn=0x000000000038C9E0 string=0x000000000038C9E4 "\t\t"
 *   insn=0x000000000038C9E4 string=0x000000000038C9E8 "!"
 *   insn=0x000000000038C9E8 string=0x000000000038C9EC "\t"
 *   insn=0x000000000038C9EC string=0x000000000038C9F0 ")"
 *   insn=0x000000000038C9F4 string=0x000000000038C9F8 " "
 *   insn=0x000000000038CA18 string=0x000000000038CA1C "U"
 *   insn=0x000000000038CA20 string=0x000000000038CA24 ""
 *   insn=0x000000000038CA30 string=0x000000000038CA34 "\t@"
 *   insn=0x000000000038CA40 string=0x000000000038CA44 ""
 *   insn=0x000000000038CA50 string=0x000000000038CA54 "@"
 *   insn=0x000000000038CA70 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000038CA74 string=0x000000000038CA78 "5"
 *   insn=0x000000000038CA7C string=0x000000000038CD7C "u"
 *   insn=0x000000000038CA84 string=0x000000000038CA88 "J"
 *   insn=0x000000000038CA8C string=0x000000000038CA90 "(a"
 *   insn=0x000000000038CA9C string=0x000000000038CAA0 "J=G"
 *   insn=0x000000000038CAA0 string=0x000000000038CAA4 ")!"
 *   insn=0x000000000038CAA8 string=0x000000000038CAAC "*"
 *   insn=0x000000000038CAA8 string=0x000000000038CAC0 "*"
 *   insn=0x000000000038CAAC string=0x000000000038CAB0 "K"
 *   insn=0x000000000038CAB0 string=0x000000000038CAB4 "+"
 *   insn=0x000000000038CABC string=0x000000000038CACC "_"
 *   insn=0x000000000038CAC0 string=0x000000000038CAC4 "K"
 *   insn=0x000000000038CAC4 string=0x000000000038CAC8 "+"
 *   insn=0x000000000038CAD8 string=0x000000000038CADC "2v"
 *   insn=0x000000000038CAEC string=0x000000000038CAF0 ")"
 *   insn=0x000000000038CAF8 string=0x000000000038CAFC "`"
 *   insn=0x000000000038CB00 string=0x000000000038CB04 ")=G"
 *   insn=0x000000000038CB04 string=0x000000000038CB08 "!"
 *   insn=0x000000000038CB0C string=0x000000000038CB10 "\t"
 *   insn=0x000000000038CB0C string=0x000000000038CB24 "\t"
 *   insn=0x000000000038CB10 string=0x000000000038CB14 "*"
 *   insn=0x000000000038CB14 string=0x000000000038CB18 "\n"
 *   insn=0x000000000038CB20 string=0x000000000038CB30 "?"
 *   insn=0x000000000038CB24 string=0x000000000038CB28 "*"
 *   insn=0x000000000038CB28 string=0x000000000038CB2C "\n"
 *   insn=0x000000000038CB4C string=0x000000000038CB50 ")"
 *   insn=0x000000000038CB60 string=0x000000000038CB64 ")=G"
 *   insn=0x000000000038CB64 string=0x000000000038CB68 "!"
 *   insn=0x000000000038CB6C string=0x000000000038CB70 "\t"
 *   insn=0x000000000038CB6C string=0x000000000038CB9C "\t"
 *   insn=0x000000000038CB70 string=0x000000000038CB74 "*"
 *   insn=0x000000000038CB74 string=0x000000000038CB78 "\n"
 *   insn=0x000000000038CB7C string=0x000000000038CB80 "?"
 *   insn=0x000000000038CB90 string=0x000000000038CB94 "U"
 *   insn=0x000000000038CB94 string=0x000000000038CB98 "y"
 *   insn=0x000000000038CB9C string=0x000000000038CBA0 "*"
 *   insn=0x000000000038CBA0 string=0x000000000038CBA4 "\n"
 *   insn=0x000000000038CBA4 string=0x000000000038CBA8 "?"
 *   insn=0x000000000038CBAC string=0x000000000038CBB0 "a"
 *   insn=0x000000000038CBC0 string=0x000000000038CBC4 "u"
 *   insn=0x000000000038CBC8 string=0x000000000038CBCC "~"
 *   insn=0x000000000038CBCC string=0x000000000038CDC4 "u~@"
 *   insn=0x000000000038CBDC string=0x000000000038CBE0 " "
 *   insn=0x000000000038CBE4 string=0x000000000038CBE8 ")=G"
 *   insn=0x000000000038CBE8 string=0x000000000038CBEC "!"
 *   insn=0x000000000038CBEC string=0x000000000038CBF0 "I"
 *   insn=0x000000000038CBF0 string=0x000000000038CBF4 "\t"
 *   insn=0x000000000038CBF0 string=0x000000000038CC58 "\t"
 *   insn=0x000000000038CBF4 string=0x000000000038CBF8 "*"
 *   insn=0x000000000038CBF8 string=0x000000000038CBFC "\n"
 *   insn=0x000000000038CC04 string=0x000000000038CC3C "?"
 *   insn=0x000000000038CC14 string=0x000000000038CC18 "`"
 *   insn=0x000000000038CC1C string=0x000000000038CC20 ")=G"
 *   insn=0x000000000038CC20 string=0x000000000038CC24 "!"
 *   insn=0x000000000038CC28 string=0x000000000038CC2C "\t"
 *   insn=0x000000000038CC2C string=0x000000000038CC30 "*"
 *   insn=0x000000000038CC30 string=0x000000000038CC34 "\n"
 *   insn=0x000000000038CC3C string=0x000000000038CC40 ","
 *   insn=0x000000000038CC50 string=0x000000000038CC54 "8"
 *   insn=0x000000000038CC58 string=0x000000000038CC5C "*"
 *   insn=0x000000000038CC5C string=0x000000000038CC60 "\n"
 *   insn=0x000000000038CC60 string=0x000000000038CC64 "?"
 *   insn=0x000000000038CC78 string=0x000000000038CC7C "@"
 *   insn=0x000000000038CC7C string=0x000000000038CC80 ""
 *   insn=0x000000000038CC80 string=0x000000000038CC84 ""
 *   insn=0x000000000038CC88 string=0x000000000038CC8C ""
 *   insn=0x000000000038CC8C string=0x000000000038CC90 ""
 *   insn=0x000000000038CC98 string=0x000000000038CC9C "@"
 *   insn=0x000000000038CCA0 string=0x000000000038CCA4 ""
 *   insn=0x000000000038CCA4 string=0x000000000038CCA8 ""
 *   insn=0x000000000038CCAC string=0x000000000038CCB0 ""
 *   insn=0x000000000038CCB0 string=0x000000000038CCB4 ""
 *   insn=0x000000000038CCB8 string=0x000000000038CCBC "\n"
 *   insn=0x000000000038CCC8 string=0x000000000038CCCC ","
 *   insn=0x000000000038CCD0 string=0x000000000038CCD4 "u"
 *   insn=0x000000000038CCD4 string=0x000000000038CCD8 "u"
 *   insn=0x000000000038CCD8 string=0x000000000038CCDC ":"
 *   insn=0x000000000038CCE4 string=0x000000000038CCE8 "u"
 *   insn=0x000000000038CCEC string=0x000000000038CCF0 ""
 *   insn=0x000000000038CCFC string=0x000000000038CD00 "\t@"
 *   insn=0x000000000038CD0C string=0x000000000038CD10 ""
 *   insn=0x000000000038CD1C string=0x000000000038CD20 "@"
 *   insn=0x000000000038CD34 string=0x000000000038CD38 "5"
 *   insn=0x000000000038CD3C string=0x000000000038CD40 ""
 *   insn=0x000000000038CD4C string=0x000000000038CD50 "\t@"
 *   insn=0x000000000038CD5C string=0x000000000038CD60 ""
 *   insn=0x000000000038CD6C string=0x000000000038CD70 "@"
 *   insn=0x000000000038CD7C string=0x000000000038CD80 "5"
 *   insn=0x000000000038CD84 string=0x000000000038CD88 ""
 *   insn=0x000000000038CD94 string=0x000000000038CD98 "\t@"
 *   insn=0x000000000038CDA4 string=0x000000000038CDA8 ""
 *   insn=0x000000000038CDB4 string=0x000000000038CDB8 "@"
 *   insn=0x000000000038CDC4 string=0x000000000038CDC8 "5"
 *   insn=0x000000000038CDCC string=0x000000000038CDD0 ""
 *   insn=0x000000000038CDDC string=0x000000000038CDE0 "\t@"
 *   insn=0x000000000038CDEC string=0x000000000038CDF0 ""
 *   insn=0x000000000038CDFC string=0x000000000038CE00 "@"
 *   insn=0x000000000038CE0C string=0x000000000038CE10 ""
 *   insn=0x000000000038CE18 string=0x000000000038CE1C "L"
 *   insn=0x000000000038CE40 string=0x000000000038CE44 ")EE"
 *   insn=0x000000000038CE50 string=0x000000000038CE54 "(A"
 *   insn=0x000000000038CE58 string=0x000000000038CE5C ""
 *   insn=0x000000000038CE64 string=0x000000000038CE68 "`""
 *   insn=0x000000000038CE74 string=0x00000000001FA4A0 "0'"
 *   insn=0x000000000038CE88 string=0x000000000038CE8C "4"
 *   insn=0x000000000038CE90 string=0x000000000038CE94 ""
 *   insn=0x000000000038CEA0 string=0x000000000038CEA4 "\t@"
 *   insn=0x000000000038CEB0 string=0x000000000038CEB4 ""
 *   insn=0x000000000038CEC0 string=0x000000000038CEC4 "@"
 *   insn=0x000000000038CED0 string=0x000000000038CED4 "|"
 *   insn=0x000000000038CEDC string=0x00000000001F45E0 "P'"
 *   insn=0x000000000038CEE0 string=0x000000000038CEE4 "h"
 *   insn=0x000000000038CEE4 string=0x000000000038CEE8 "!@"
 *   insn=0x000000000038CEFC string=0x00000000001FD590 "0'"
 *   insn=0x000000000038CF14 string=0x000000000038CF18 "T"
 *   insn=0x000000000038CF24 string=0x000000000038CF28 "b"
 *   insn=0x000000000038CF28 string=0x000000000038CF2C "`"
 *   insn=0x000000000038CF28 string=0x00000000001F94B0 "0'"
 *   insn=0x000000000038CF2C string=0x000000000038CF30 "`"
 *   insn=0x000000000038CF30 string=0x000000000038CF34 "b"
 *   insn=0x000000000038CF3C string=0x000000000038CF40 "|@"
 *   insn=0x000000000038CF40 string=0x000000000038CF44 "!(""
 *   insn=0x000000000038CF48 string=0x000000000038CF4C "!8$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CreditsView::CreditsView(Caver::CreditsView *this)
{
  char *v2; // x25
  Caver::Scene *v3; // x0
  void *v4; // x0
  void *v5; // x0
  char *v6; // x0
  Caver::SceneView *v7; // x0
  _QWORD *v8; // x20
  __int64 v9; // x9
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x0
  float *v14; // x8
  Caver::GUIEffectView *v15; // x0
  Caver::GUIView *v16; // x8
  float *v17; // x0
  __int64 v18; // x0
  void (__fastcall *v19)(__int64); // x9
  _QWORD *v20; // x20
  __int64 v21; // x8
  __int64 v22; // x8
  __int128 v23; // kr00_16
  _QWORD *v24; // x20
  __int64 v25; // x8
  __int64 v26; // x8
  _QWORD *v27; // x20
  __int64 v28; // x8
  __int64 v29; // x8
  Caver::TextureLibrary *v30; // x0
  int v31; // w8
  __int64 v32; // x0
  int v33; // w8
  void *v34; // x0
  __int64 v35; // x0
  int v36; // w8
  void *v37; // x0
  __int64 v38; // x0
  __int64 v39; // x9
  __int64 v40; // x8
  __int64 v41; // x11
  unsigned __int64 v42; // x12
  _DWORD *v43; // x10
  __int128 *v44; // x11
  __int64 v45; // x10
  _OWORD *v46; // x15
  __int128 *v47; // x14
  __int64 v48; // x16
  __int128 v49; // q0
  __int128 v50; // q1
  int v51; // t1
  __int64 v52; // x0
  void (__fastcall *v53)(__int64); // x9
  __int64 v54; // x8
  _QWORD *v55; // x20
  __int64 v56; // x8
  __int64 v57; // x8
  __int64 (__fastcall *v58)(Caver::CreditsView *, __int128 *); // x8
  __int64 v59; // x9
  __int64 result; // x0
  _QWORD *v61; // x20
  __int64 v62; // x8
  __int64 v63; // x8
  _QWORD *v64; // x20
  __int64 v65; // x8
  __int64 v66; // x8
  _QWORD *v67; // x20
  __int64 v68; // x8
  __int64 v69; // x8
  unsigned int *v70; // x8
  int v71; // w9
  unsigned int *v72; // x8
  int v73; // w9
  unsigned int *v74; // x8
  int v75; // w9
  unsigned int *v76; // x8
  int v77; // w9
  unsigned int *v78; // x8
  int v79; // w9
  Caver::GUIView *v80; // [xsp+50h] [xbp-C8h] BYREF
  _QWORD *v81; // [xsp+58h] [xbp-C0h]
  _QWORD v82[3]; // [xsp+68h] [xbp-B0h] BYREF
  _QWORD *v83; // [xsp+80h] [xbp-98h]
  __int128 v84; // [xsp+88h] [xbp-90h] BYREF
  _OWORD v85[4]; // [xsp+98h] [xbp-80h] BYREF

  _ReadStatusReg(TPIDR_EL0);
  Caver::GUIView::GUIView(this);
  *((_QWORD *)this + 32) = 0;
  *((_QWORD *)this + 33) = 0;
  *((_QWORD *)this + 31) = 0;
  *(_QWORD *)this = off_6CDA70;
  *((_QWORD *)this + 30) = 0;
  v2 = (char *)this + 240;
  v3 = (Caver::Scene *)operator new(0x408u);
  Caver::Scene::Scene(v3);
  boost::shared_ptr<Caver::Scene>::shared_ptr<Caver::Scene>();
  sub_566BB8((int)&v80, "credits");
  sub_566BB8((int)v82, "scene");
  Caver::PathForResourceOfType();
  Caver::Scene::LoadFromFile();
  v4 = (void *)(v84 - 24);
  if ( (__int64 *)(v84 - 24) != &qword_6FD2E0 )
  {
    v70 = (unsigned int *)(v84 - 8);
    if ( &pthread_create )
    {
      do
        v71 = __ldaxr(v70);
      while ( __stlxr(v71 - 1, v70) );
    }
    else
    {
      v71 = (*v70)--;
    }
    if ( v71 <= 0 )
      operator delete(v4);
  }
  v5 = (void *)(v82[0] - 24LL);
  if ( (__int64 *)(v82[0] - 24LL) != &qword_6FD2E0 )
  {
    v72 = (unsigned int *)(v82[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v73 = __ldaxr(v72);
      while ( __stlxr(v73 - 1, v72) );
    }
    else
    {
      v73 = (*v72)--;
    }
    if ( v73 <= 0 )
      operator delete(v5);
  }
  v6 = (char *)v80 - 24;
  if ( (__int64 *)((char *)v80 - 24) != &qword_6FD2E0 )
  {
    v74 = (unsigned int *)((char *)v80 - 8);
    if ( &pthread_create )
    {
      do
        v75 = __ldaxr(v74);
      while ( __stlxr(v75 - 1, v74) );
    }
    else
    {
      v75 = (*v74)--;
    }
    if ( v75 <= 0 )
      operator delete(v6);
  }
  v7 = (Caver::SceneView *)operator new(0x1A8u);
  Caver::SceneView::SceneView(v7);
  boost::shared_ptr<Caver::SceneView>::shared_ptr<Caver::SceneView>();
  v8 = (_QWORD *)*((_QWORD *)this + 31);
  v9 = v84;
  *(_QWORD *)&v84 = *((_QWORD *)this + 30);
  v10 = *((_QWORD *)&v84 + 1);
  *((_QWORD *)this + 30) = v9;
  *((_QWORD *)this + 31) = v10;
  *((_QWORD *)&v84 + 1) = v8;
  if ( v8 )
  {
    v11 = v8[1] - 1LL;
    v8[1] = v11;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v12 = v8[2] - 1LL;
      v8[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  v13 = *(_QWORD *)v2;
  if ( *(_DWORD *)(*(_QWORD *)v2 + 112LL) != 18 )
  {
    v14 = *(float **)(v13 + 88);
    *(_DWORD *)(v13 + 112) = 18;
    if ( v14 )
    {
      if ( v14[35] > 0.001 )
        (*(void (__fastcall **)(float *))(*(_QWORD *)v14 + 88LL))(v14);
    }
  }
  Caver::SceneView::InitWithScene();
  Caver::Scene::FinishLoad((Caver::Scene *)v82[2]);
  v15 = (Caver::GUIEffectView *)operator new(0x168u);
  Caver::GUIEffectView::GUIEffectView(v15);
  boost::shared_ptr<Caver::GUIEffectView>::shared_ptr<Caver::GUIEffectView>();
  Caver::GUIEffect::ShowBars((Caver::GUIView *)((char *)v80 + 240), 0.0);
  Caver::GUIView::SetFrame(v80, (const Caver::Rectangle *)(*(_QWORD *)v2 + 132LL));
  v16 = v80;
  if ( *((_DWORD *)v80 + 28) != 18 )
  {
    v17 = (float *)*((_QWORD *)v80 + 11);
    *((_DWORD *)v80 + 28) = 18;
    if ( v17 )
    {
      if ( v17[35] > 0.001 )
      {
        (*(void (__fastcall **)(float *))(*(_QWORD *)v17 + 88LL))(v17);
        v16 = v80;
      }
    }
  }
  v18 = *(_QWORD *)v2;
  v19 = *(void (__fastcall **)(__int64))(**(_QWORD **)v2 + 96LL);
  *(_QWORD *)&v84 = v16;
  *((_QWORD *)&v84 + 1) = v81;
  if ( v81 )
    ++v81[1];
  v19(v18);
  v20 = (_QWORD *)*((_QWORD *)&v84 + 1);
  if ( *((_QWORD *)&v84 + 1) )
  {
    v21 = *(_QWORD *)(*((_QWORD *)&v84 + 1) + 8LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v84 + 1) + 8LL) = v21;
    if ( !v21 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      v22 = v20[2] - 1LL;
      v20[2] = v22;
      if ( !v22 )
        (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
    }
  }
  v82[0] = 0;
  Caver::GameInterfaceBuilder::PlainButton();
  v23 = v84;
  if ( *((_QWORD *)&v84 + 1) )
    ++*(_QWORD *)(*((_QWORD *)&v84 + 1) + 8LL);
  v24 = (_QWORD *)*((_QWORD *)this + 33);
  *((_OWORD *)this + 16) = v23;
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
  v27 = (_QWORD *)*((_QWORD *)&v84 + 1);
  if ( *((_QWORD *)&v84 + 1) )
  {
    v28 = *(_QWORD *)(*((_QWORD *)&v84 + 1) + 8LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v84 + 1) + 8LL) = v28;
    if ( !v28 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
      v29 = v27[2] - 1LL;
      v27[2] = v29;
      if ( !v29 )
        (*(void (__fastcall **)(_QWORD *))(*v27 + 24LL))(v27);
    }
  }
  v30 = (Caver::TextureLibrary *)v82[0];
  if ( v82[0] )
  {
    v31 = *(_DWORD *)(v82[0] + 8LL) - 1;
    *(_DWORD *)(v82[0] + 8LL) = v31;
    if ( !v31 )
      v30 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(Caver::TextureLibrary *))(*(_QWORD *)v30 + 8LL))(v30);
  }
  Caver::TextureLibrary::sharedLibrary(v30);
  sub_566BB8((int)v82, "ui_button_arrow");
  Caver::TextureLibrary::TextureForName();
  Caver::GUIButton::SetImage();
  v32 = v84;
  if ( (_QWORD)v84 )
  {
    v33 = *(_DWORD *)(v84 + 8) - 1;
    *(_DWORD *)(v84 + 8) = v33;
    if ( !v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
  }
  v34 = (void *)(v82[0] - 24LL);
  if ( (__int64 *)(v82[0] - 24LL) != &qword_6FD2E0 )
  {
    v76 = (unsigned int *)(v82[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v77 = __ldaxr(v76);
      while ( __stlxr(v77 - 1, v76) );
    }
    else
    {
      v77 = (*v76)--;
    }
    if ( v77 <= 0 )
      operator delete(v34);
  }
  Caver::TextureLibrary::sharedLibrary((Caver::TextureLibrary *)v34);
  sub_566BB8((int)v82, "ui_button_arrow_pressed");
  Caver::TextureLibrary::TextureForName();
  Caver::GUIButton::SetHighlightedImage();
  v35 = v84;
  if ( (_QWORD)v84 )
  {
    v36 = *(_DWORD *)(v84 + 8) - 1;
    *(_DWORD *)(v84 + 8) = v36;
    if ( !v36 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
  }
  v37 = (void *)(v82[0] - 24LL);
  if ( (__int64 *)(v82[0] - 24LL) != &qword_6FD2E0 )
  {
    v78 = (unsigned int *)(v82[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v79 = __ldaxr(v78);
      while ( __stlxr(v79 - 1, v78) );
    }
    else
    {
      v79 = (*v78)--;
    }
    if ( v79 <= 0 )
      operator delete(v37);
  }
  v38 = *((_QWORD *)this + 32);
  v39 = *(_QWORD *)(v38 + 116);
  *((_QWORD *)&v84 + 1) = 0x4248000042A00000LL;
  *(_QWORD *)&v84 = v39;
  Caver::GUIView::SetFrame((Caver::GUIView *)v38, (const Caver::Rectangle *)&v84);
  Caver::GUIButton::SetTintColor();
  v40 = *((_QWORD *)this + 32);
  v84 = xmmword_5837D0;
  v85[0] = xmmword_5837E0;
  v41 = v40 + 348;
  v85[1] = xmmword_5837F0;
  if ( v40 + 408 > (unsigned __int64)(v40 + 348) )
    v41 = v40 + 408;
  v42 = ((unsigned __int64)(v41 + -345 - v40) >> 2) + 1;
  v85[2] = xmmword_583800;
  if ( v42 < 8 )
  {
    v43 = (_DWORD *)(v40 + 344);
    v44 = &v84;
    do
    {
LABEL_50:
      v51 = *(_DWORD *)v44;
      v44 = (__int128 *)((char *)v44 + 4);
      *v43++ = v51;
    }
    while ( (unsigned __int64)v43 < v40 + 408 );
    goto LABEL_51;
  }
  v45 = 4 * (v42 & 0x7FFFFFFFFFFFFFF8LL);
  v44 = (_OWORD *)((char *)&v85[-1] + v45);
  v46 = (_OWORD *)(v40 + 360);
  v43 = (_DWORD *)(v40 + v45 + 344);
  v47 = v85;
  v48 = v42 & 0x7FFFFFFFFFFFFFF8LL;
  do
  {
    v49 = *(v47 - 1);
    v50 = *v47;
    v48 -= 8;
    v47 += 2;
    *(v46 - 1) = v49;
    *v46 = v50;
    v46 += 2;
  }
  while ( v48 );
  if ( v42 != (v42 & 0x7FFFFFFFFFFFFFF8LL) )
    goto LABEL_50;
LABEL_51:
  v52 = *((_QWORD *)this + 30);
  v53 = *(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 96LL);
  *(_QWORD *)&v84 = v40;
  v54 = *((_QWORD *)this + 33);
  *((_QWORD *)&v84 + 1) = v54;
  if ( v54 )
    ++*(_QWORD *)(v54 + 8);
  v53(v52);
  v55 = (_QWORD *)*((_QWORD *)&v84 + 1);
  if ( *((_QWORD *)&v84 + 1) )
  {
    v56 = *(_QWORD *)(*((_QWORD *)&v84 + 1) + 8LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v84 + 1) + 8LL) = v56;
    if ( !v56 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v55 + 16LL))(v55);
      v57 = v55[2] - 1LL;
      v55[2] = v57;
      if ( !v57 )
        (*(void (__fastcall **)(_QWORD *))(*v55 + 24LL))(v55);
    }
  }
  v58 = *(__int64 (__fastcall **)(Caver::CreditsView *, __int128 *))(*(_QWORD *)this + 96LL);
  *(_QWORD *)&v84 = *((_QWORD *)this + 30);
  v59 = *((_QWORD *)this + 31);
  *((_QWORD *)&v84 + 1) = v59;
  if ( v59 )
    ++*(_QWORD *)(v59 + 8);
  result = v58(this, &v84);
  v61 = (_QWORD *)*((_QWORD *)&v84 + 1);
  if ( *((_QWORD *)&v84 + 1) )
  {
    v62 = *(_QWORD *)(*((_QWORD *)&v84 + 1) + 8LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v84 + 1) + 8LL) = v62;
    if ( !v62 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v61 + 16LL))(v61);
      v63 = v61[2] - 1LL;
      v61[2] = v63;
      if ( !v63 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v61 + 24LL))(v61);
    }
  }
  v64 = v81;
  if ( v81 )
  {
    v65 = v81[1] - 1LL;
    v81[1] = v65;
    if ( !v65 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v64 + 16LL))(v64);
      v66 = v64[2] - 1LL;
      v64[2] = v66;
      if ( !v66 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v64 + 24LL))(v64);
    }
  }
  v67 = v83;
  if ( v83 )
  {
    v68 = v83[1] - 1LL;
    v83[1] = v68;
    if ( !v68 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v67 + 16LL))(v67);
      v69 = v67[2] - 1LL;
      v67[2] = v69;
      if ( !v69 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v67 + 24LL))(v67);
    }
  }
  return result;
}

