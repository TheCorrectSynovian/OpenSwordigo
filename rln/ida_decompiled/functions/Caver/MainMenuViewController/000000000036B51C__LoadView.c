/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036B51C
 * Mangled: _ZN5Caver22MainMenuViewController8LoadViewEv
 * Demangled: Caver::MainMenuViewController::LoadView(void)
 *
 * Callers: 1
 *   0x000000000036B0D0  Caver::MainMenuViewController::~MainMenuViewController()
 *
 * Callees: 23
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5F30  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x00000000001FAC70  Caver::MainMenuView::MainMenuView(void)
 *   0x00000000001FDF70  Caver::SceneView::InitWithScene(boost::shared_ptr<Caver::Scene> const&)
 *   0x00000000001FE0A0  boost::shared_ptr<Caver::MainMenuView>::shared_ptr<Caver::MainMenuView>(Caver::MainMenuView *)
 *   0x00000000001FF2A0  boost::shared_ptr<Caver::Scene>::shared_ptr<Caver::Scene>(Caver::Scene *)
 *   0x00000000001FF740  Caver::MainMenuView::SetGoogleSignInVisible(bool)
 *   0x0000000000200070  std::exception::~exception()
 *   0x00000000002011A0  Caver::Scene::LoadFromFile(std::string const&)
 *   0x0000000000201510  Caver::Scene::Scene(void)
 *   0x0000000000202180  Caver::Scene::FinishLoad(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000036BE98  Caver::MainMenuViewController::GoogleSignInCompletion(bool,std::string const&)
 *   0x000000000036FB9C  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MainMenuView,Caver::MainMenuView>(boost::shared_ptr<Caver::MainMenuView> const*,Caver::MainMenuView *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 252
 *   insn=0x000000000036B534 string=0x000000000036B538 "V"
 *   insn=0x000000000036B548 string=0x000000000036B54C "%("
 *   insn=0x000000000036B54C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000036B554 string=0x00000000001FAC70 "0'"
 *   insn=0x000000000036B560 string=0x000000000036B564 "hRG"
 *   insn=0x000000000036B570 string=0x000000000036B574 "i""
 *   insn=0x000000000036B578 string=0x000000000036B57C "4"
 *   insn=0x000000000036B580 string=0x000000000036B584 ""
 *   insn=0x000000000036B594 string=0x000000000036B598 "\t@"
 *   insn=0x000000000036B5A0 string=0x000000000036B5A4 ""
 *   insn=0x000000000036B5B4 string=0x000000000036B5B8 "@"
 *   insn=0x000000000036B5C0 string=0x000000000036B5C4 "("
 *   insn=0x000000000036B5D4 string=0x000000000036B5D8 "2O"
 *   insn=0x000000000036B5E0 string=0x000000000058EEBB "menu"
 *   insn=0x000000000036B5EC string=0x000000000036B5F0 "r"
 *   insn=0x000000000036B5F4 string=0x00000000005834B5 "scene"
 *   insn=0x000000000036B600 string=0x000000000036B604 "m"
 *   insn=0x000000000036B610 string=0x000000000036B614 "G*"
 *   insn=0x000000000036B614 string=0x00000000001F5F30 "P'"
 *   insn=0x000000000036B644 string=0x000000000036B648 "a"
 *   insn=0x000000000036B658 string=0x000000000036B65C "h:@"
 *   insn=0x000000000036B664 string=0x000000000036B668 "BJ"
 *   insn=0x000000000036B668 string=0x00000000001FDF70 "0'"
 *   insn=0x000000000036B670 string=0x000000000036B674 "h:@"
 *   insn=0x000000000036B674 string=0x000000000036B678 "iB"
 *   insn=0x000000000036B678 string=0x000000000036B67C "\ty"
 *   insn=0x000000000036B67C string=0x000000000036B680 "t>@"
 *   insn=0x000000000036B684 string=0x000000000036B694 "u"
 *   insn=0x000000000036B688 string=0x000000000036B68C ")\t"
 *   insn=0x000000000036B694 string=0x000000000036B698 "h"
 *   insn=0x000000000036B698 string=0x000000000036B69C "5"
 *   insn=0x000000000036B69C string=0x000000000036B6E0 "`"@"
 *   insn=0x000000000036B6A0 string=0x000000000036B6A4 ""
 *   insn=0x000000000036B6B0 string=0x000000000036B6B4 "\t@"
 *   insn=0x000000000036B6C0 string=0x000000000036B6C4 ""
 *   insn=0x000000000036B6D0 string=0x000000000036B6D4 "@"
 *   insn=0x000000000036B6E4 string=0x000000000036B6E8 ""
 *   insn=0x000000000036B6E4 string=0x000000000036B6F8 "4"
 *   insn=0x000000000036B6E8 string=0x000000000036B6EC ""
 *   insn=0x000000000036B6FC string=0x000000000036B700 ""
 *   insn=0x000000000036B70C string=0x000000000036B710 "\t@"
 *   insn=0x000000000036B71C string=0x000000000036B720 ""
 *   insn=0x000000000036B72C string=0x000000000036B730 "@"
 *   insn=0x000000000036B73C string=0x000000000036B740 ""
 *   insn=0x000000000036B73C string=0x00000000001F93B0 "0'"
 *   insn=0x000000000036B740 string=0x000000000036B744 "y@"
 *   insn=0x000000000036B74C string=0x000000000036B750 "`:@"
 *   insn=0x000000000036B760 string=0x000000000036B764 "t\n@"
 *   insn=0x000000000036B76C string=0x000000000036B770 "h"
 *   insn=0x000000000036B774 string=0x000000000036B778 "\t"
 *   insn=0x000000000036B778 string=0x000000000036B77C "x"
 *   insn=0x000000000036B780 string=0x000000000036B784 "7}@"
 *   insn=0x000000000036B790 string=0x000000000036B794 "%B"
 *   insn=0x000000000036B7A0 string=0x000000000036B7A4 " "
 *   insn=0x000000000036B7AC string=0x000000000036B7B0 "`"
 *   insn=0x000000000036B7AC string=0x00000000001F6B70 "0'"
 *   insn=0x000000000036B7B4 string=0x000000000036B7B8 ""
 *   insn=0x000000000036B7BC string=0x000000000036B7C0 " "
 *   insn=0x000000000036B7CC string=0x000000000036B7D0 ""
 *   insn=0x000000000036B7DC string=0x000000000036B7E0 ")"
 *   insn=0x000000000036B7E8 string=0x000000000036B7EC ""
 *   insn=0x000000000036B7F0 string=0x000000000036B7F4 "H"
 *   insn=0x000000000036B7F4 string=0x000000000036B7F8 ""
 *   insn=0x000000000036B7F8 string=0x000000000036B7FC ""
 *   insn=0x000000000036B800 string=0x000000000036B804 " !"
 *   insn=0x000000000036B808 string=0x000000000036B80C "!a"
 *   insn=0x000000000036B838 string=0x000000000036B83C "h"
 *   insn=0x000000000036B83C string=0x000000000036B840 "("
 *   insn=0x000000000036B840 string=0x000000000036B844 ""
 *   insn=0x000000000036B844 string=0x000000000036B848 ""
 *   insn=0x000000000036B850 string=0x000000000036B854 " a"
 *   insn=0x000000000036B86C string=0x000000000036B870 "@"
 *   insn=0x000000000036B870 string=0x000000000036B874 ""
 *   insn=0x000000000036B874 string=0x000000000036B878 ""
 *   insn=0x000000000036B87C string=0x000000000036B880 ""
 *   insn=0x000000000036B880 string=0x000000000036B884 "@"
 *   insn=0x000000000036B88C string=0x000000000036B890 "h"
 *   insn=0x000000000036B890 string=0x000000000036B894 "("
 *   insn=0x000000000036B894 string=0x000000000036B898 ""
 *   insn=0x000000000036B898 string=0x000000000036B89C ""
 *   insn=0x000000000036B8A4 string=0x000000000036B8A8 " !"
 *   insn=0x000000000036B8BC string=0x000000000036B8C0 ""
 *   insn=0x000000000036B8CC string=0x000000000036B8D0 "\t@"
 *   insn=0x000000000036B8DC string=0x000000000036B8E0 ""
 *   insn=0x000000000036B8EC string=0x000000000036B8F0 "@"
 *   insn=0x000000000036B8FC string=0x000000000036B900 ""
 *   insn=0x000000000036B90C string=0x000000000036B910 "\t@"
 *   insn=0x000000000036B91C string=0x000000000036B920 ""
 *   insn=0x000000000036B92C string=0x000000000036B930 "@"
 *   insn=0x000000000036B93C string=0x000000000036B940 "3"
 *   insn=0x000000000036B940 string=0x000000000036B944 "h"
 *   insn=0x000000000036B944 string=0x000000000036B948 ""
 *   insn=0x000000000036B948 string=0x000000000036B94C "h"
 *   insn=0x000000000036B950 string=0x000000000036B954 "h"
 *   insn=0x000000000036B958 string=0x000000000036B95C "\t@"
 *   insn=0x000000000036B960 string=0x000000000036B964 "h\n@"
 *   insn=0x000000000036B964 string=0x000000000036B968 ""
 *   insn=0x000000000036B968 string=0x000000000036B96C "h\n"
 *   insn=0x000000000036B970 string=0x000000000036B974 "h"
 *   insn=0x000000000036B978 string=0x000000000036B97C "@"
 *   insn=0x000000000036B98C string=0x000000000036B990 "!"
 *   insn=0x000000000036B9B0 string=0x000000000036B9B4 ")=G"
 *   insn=0x000000000036B9B4 string=0x000000000036B9B8 "!"
 *   insn=0x000000000036B9B8 string=0x000000000036B9BC "\t"
 *   insn=0x000000000036B9BC string=0x000000000036B9C0 "\t"
 *   insn=0x000000000036B9BC string=0x000000000036BA1C "\t"
 *   insn=0x000000000036B9C0 string=0x000000000036B9C4 "*"
 *   insn=0x000000000036B9C4 string=0x000000000036B9C8 "\n"
 *   insn=0x000000000036B9D0 string=0x000000000036BA28 "?"
 *   insn=0x000000000036B9D4 string=0x000000000036B9D8 ")=G"
 *   insn=0x000000000036B9D8 string=0x000000000036B9DC "!"
 *   insn=0x000000000036B9E0 string=0x000000000036B9E4 "\t"
 *   insn=0x000000000036B9E0 string=0x000000000036BA3C "\t"
 *   insn=0x000000000036B9E4 string=0x000000000036B9E8 "*"
 *   insn=0x000000000036B9E8 string=0x000000000036B9EC "\n"
 *   insn=0x000000000036B9F4 string=0x000000000036BA48 "?"
 *   insn=0x000000000036B9F8 string=0x000000000036B9FC ")=G"
 *   insn=0x000000000036B9FC string=0x000000000036BA00 "!"
 *   insn=0x000000000036BA04 string=0x000000000036BA08 "\t"
 *   insn=0x000000000036BA04 string=0x000000000036BA5C "\t"
 *   insn=0x000000000036BA08 string=0x000000000036BA0C "*"
 *   insn=0x000000000036BA0C string=0x000000000036BA10 "\n"
 *   insn=0x000000000036BA18 string=0x000000000036BA68 "?"
 *   insn=0x000000000036BA1C string=0x000000000036BA20 "*"
 *   insn=0x000000000036BA20 string=0x000000000036BA24 "\n"
 *   insn=0x000000000036BA30 string=0x000000000036BA34 "\"
 *   insn=0x000000000036BA3C string=0x000000000036BA40 "*"
 *   insn=0x000000000036BA40 string=0x000000000036BA44 "\n"
 *   insn=0x000000000036BA50 string=0x000000000036BA54 "T"
 *   insn=0x000000000036BA5C string=0x000000000036BA60 "*"
 *   insn=0x000000000036BA60 string=0x000000000036BA64 "\n"
 *   insn=0x000000000036BA70 string=0x000000000036BA74 "L"
 *   insn=0x000000000036BA7C string=0x000000000036BA80 ""
 *   insn=0x000000000036BA80 string=0x000000000036BA84 "A"
 *   insn=0x000000000036BA90 string=0x00000000001FA980 "0'"
 *   insn=0x000000000036BA94 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000036BA9C string=0x000000000036BAA0 "tQ"
 *   insn=0x000000000036BAB0 string=0x000000000036BAB4 "X"
 *   insn=0x000000000036BABC string=0x000000000036BAC0 "(\t"
 *   insn=0x000000000036BAC0 string=0x000000000036BAC4 "\t\t@"
 *   insn=0x000000000036BAC4 string=0x000000000036BAC8 ")"
 *   insn=0x000000000036BAC8 string=0x000000000036BACC "\t\t"
 *   insn=0x000000000036BAD0 string=0x000000000036BAD4 "\t"
 *   insn=0x000000000036BAD4 string=0x000000000036BAD8 ")@"
 *   insn=0x000000000036BADC string=0x000000000036BAE0 " "
 *   insn=0x000000000036BAE0 string=0x000000000036BAE4 "@"
 *   insn=0x000000000036BAF4 string=0x000000000036BAF8 "G"
 *   insn=0x000000000036BAF4 string=0x000000000036BBEC "("
 *   insn=0x000000000036BB00 string=0x000000000036BB04 ""
 *   insn=0x000000000036BB04 string=0x000000000036BB08 "\t\t@"
 *   insn=0x000000000036BB08 string=0x000000000036BB0C ")"
 *   insn=0x000000000036BB0C string=0x000000000036BB10 "\t\t"
 *   insn=0x000000000036BB14 string=0x000000000036BB18 "\t"
 *   insn=0x000000000036BB18 string=0x000000000036BB1C ")@"
 *   insn=0x000000000036BB20 string=0x000000000036BB24 " "
 *   insn=0x000000000036BB24 string=0x000000000036BB28 "/"
 *   insn=0x000000000036BB38 string=0x000000000036BB3C "H"
 *   insn=0x000000000036BB48 string=0x000000000036BB4C ""
 *   insn=0x000000000036BB50 string=0x000000000036BB54 "A"
 *   insn=0x000000000036BB58 string=0x000000000036BB5C "\t@"
 *   insn=0x000000000036BB68 string=0x000000000036BB6C ""
 *   insn=0x000000000036BB70 string=0x000000000036BB74 "A"
 *   insn=0x000000000036BB78 string=0x000000000036BB7C "@"
 *   insn=0x000000000036BB90 string=0x000000000036BB94 "h"
 *   insn=0x000000000036BB94 string=0x000000000036BB98 "("
 *   insn=0x000000000036BB98 string=0x000000000036BB9C ""
 *   insn=0x000000000036BB9C string=0x000000000036BBA0 ""
 *   insn=0x000000000036BBA8 string=0x000000000036BBAC " a"
 *   insn=0x000000000036BBC4 string=0x000000000036BBC8 "@"
 *   insn=0x000000000036BBC8 string=0x000000000036BBCC ""
 *   insn=0x000000000036BBCC string=0x000000000036BBD0 ""
 *   insn=0x000000000036BBD4 string=0x000000000036BBD8 ""
 *   insn=0x000000000036BBD8 string=0x000000000036BBDC "@"
 *   insn=0x000000000036BBE4 string=0x000000000036BBE8 "h"
 *   insn=0x000000000036BBEC string=0x000000000036BBF0 ""
 *   insn=0x000000000036BBF0 string=0x000000000036BBF4 ""
 *   insn=0x000000000036BBFC string=0x000000000036BC00 " !"
 *   insn=0x000000000036BC14 string=0x000000000036BC18 "\t"
 *   insn=0x000000000036BC18 string=0x000000000036BC1C ")"
 *   insn=0x000000000036BC1C string=0x000000000036BC20 "\t"
 *   insn=0x000000000036BC28 string=0x000000000036BC2C ""
 *   insn=0x000000000036BC2C string=0x000000000036BC30 "\t@"
 *   insn=0x000000000036BC38 string=0x000000000036BC3C "\t\t@"
 *   insn=0x000000000036BC3C string=0x000000000036BC40 ")"
 *   insn=0x000000000036BC40 string=0x000000000036BC44 "\t\t"
 *   insn=0x000000000036BC4C string=0x000000000036BC50 ""
 *   insn=0x000000000036BC50 string=0x000000000036BC54 "@"
 *   insn=0x000000000036BC5C string=0x000000000036BC60 "\t"
 *   insn=0x000000000036BC60 string=0x000000000036BC64 ")"
 *   insn=0x000000000036BC64 string=0x000000000036BC68 "\t"
 *   insn=0x000000000036BC70 string=0x000000000036BC74 ""
 *   insn=0x000000000036BC74 string=0x000000000036BC78 "\t@"
 *   insn=0x000000000036BC80 string=0x000000000036BC84 "\t\t@"
 *   insn=0x000000000036BC84 string=0x000000000036BC88 ")"
 *   insn=0x000000000036BC88 string=0x000000000036BC8C "\t\t"
 *   insn=0x000000000036BC8C string=0x000000000036BC90 "a"
 *   insn=0x000000000036BC94 string=0x000000000036BC98 ""
 *   insn=0x000000000036BC98 string=0x000000000036BC9C "@"
 *   insn=0x000000000036BCA0 string=0x000000000036BCA4 "f"
 *   insn=0x000000000036BCAC string=0x000000000036BCB0 ""
 *   insn=0x000000000036BCB0 string=0x000000000036BCB4 "\t\t@"
 *   insn=0x000000000036BCB4 string=0x000000000036BCB8 ")"
 *   insn=0x000000000036BCB8 string=0x000000000036BCBC "\t\t"
 *   insn=0x000000000036BCC0 string=0x000000000036BCC4 "\t"
 *   insn=0x000000000036BCC4 string=0x000000000036BCC8 ")@"
 *   insn=0x000000000036BCCC string=0x000000000036BCD0 " "
 *   insn=0x000000000036BCD0 string=0x000000000036BCD4 "o"
 *   insn=0x000000000036BCE0 string=0x000000000036BCE4 "J"
 *   insn=0x000000000036BCE8 string=0x000000000036BCEC "(a"
 *   insn=0x000000000036BCF8 string=0x000000000036BCFC "J=G"
 *   insn=0x000000000036BCFC string=0x000000000036BD00 ")!"
 *   insn=0x000000000036BD04 string=0x000000000036BD08 "*"
 *   insn=0x000000000036BD04 string=0x000000000036BD1C "*"
 *   insn=0x000000000036BD08 string=0x000000000036BD0C "K"
 *   insn=0x000000000036BD0C string=0x000000000036BD10 "+"
 *   insn=0x000000000036BD18 string=0x000000000036BD28 "_"
 *   insn=0x000000000036BD1C string=0x000000000036BD20 "K"
 *   insn=0x000000000036BD20 string=0x000000000036BD24 "+"
 *   insn=0x000000000036BD48 string=0x000000000036BD4C ")"
 *   insn=0x000000000036BD54 string=0x000000000036BD58 "`"
 *   insn=0x000000000036BD5C string=0x000000000036BD60 ")=G"
 *   insn=0x000000000036BD60 string=0x000000000036BD64 "!"
 *   insn=0x000000000036BD68 string=0x000000000036BD6C "\t"
 *   insn=0x000000000036BD68 string=0x000000000036BD80 "\t"
 *   insn=0x000000000036BD6C string=0x000000000036BD70 "*"
 *   insn=0x000000000036BD70 string=0x000000000036BD74 "\n"
 *   insn=0x000000000036BD7C string=0x000000000036BD8C "?"
 *   insn=0x000000000036BD80 string=0x000000000036BD84 "*"
 *   insn=0x000000000036BD84 string=0x000000000036BD88 "\n"
 *   insn=0x000000000036BDA8 string=0x000000000036BDAC ")"
 *   insn=0x000000000036BDB4 string=0x000000000036BDB8 " "
 *   insn=0x000000000036BDBC string=0x000000000036BDC0 ")=G"
 *   insn=0x000000000036BDC0 string=0x000000000036BDC4 "!"
 *   insn=0x000000000036BDC8 string=0x000000000036BDCC "\t"
 *   insn=0x000000000036BDC8 string=0x000000000036BDF8 "\t"
 *   insn=0x000000000036BDCC string=0x000000000036BDD0 "*"
 *   insn=0x000000000036BDD0 string=0x000000000036BDD4 "\n"
 *   insn=0x000000000036BDD8 string=0x000000000036BDDC "?"
 *   insn=0x000000000036BDE4 string=0x000000000036BDE8 "o"
 *   insn=0x000000000036BDF0 string=0x000000000036BDF4 "$"
 *   insn=0x000000000036BDF8 string=0x000000000036BDFC "*"
 *   insn=0x000000000036BDFC string=0x000000000036BE00 "\n"
 *   insn=0x000000000036BE00 string=0x000000000036BE04 "?"
 *   insn=0x000000000036BE14 string=0x000000000036BE18 "t"
 *   insn=0x000000000036BE28 string=0x000000000036BE2C "!-"
 *   insn=0x000000000036BE2C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000036BE3C string=0x000000000036BE40 "4"
 *   insn=0x000000000036BE44 string=0x000000000036BE48 ""
 *   insn=0x000000000036BE54 string=0x000000000036BE58 "\t@"
 *   insn=0x000000000036BE64 string=0x000000000036BE68 ""
 *   insn=0x000000000036BE74 string=0x000000000036BE78 "@"
 *   insn=0x000000000036BE90 string=0x000000000036BE94 "."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MainMenuViewController::LoadView(Caver::MainMenuViewController *this)
{
  Caver::MainMenuView *v2; // x0
  _QWORD *v3; // x20
  unsigned __int64 v4; // x9
  unsigned __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  Caver::Scene *v8; // x0
  void *v9; // x0
  void *v10; // x0
  void *v11; // x0
  __int64 v12; // x8
  _QWORD *v13; // x20
  _QWORD *v14; // x21
  __int64 v15; // x8
  __int64 v16; // x8
  Caver::OnlineController *v17; // x0
  __int64 v18; // x8
  __int64 v19; // x8
  __int64 v20; // x0
  Caver::OnlineController *v21; // x0
  __int64 v22; // x0
  __int64 v23; // x21
  _QWORD *v24; // x20
  __int64 v25; // x8
  __int64 v26; // x24
  int64x2_t v27; // q0
  void (__fastcall *v28)(__int64, __int64 *); // x23
  unsigned __int64 v29; // x8
  void (__fastcall *v30)(int64x2_t *, int64x2_t *, __int64); // x8
  __int64 result; // x0
  __int64 v32; // x8
  __int64 (__fastcall *v33)(int64x2_t *, int64x2_t *, __int64); // x8
  __int64 v34; // x8
  __int64 v35; // x8
  __int64 v36; // x8
  __int64 v37; // x8
  _QWORD *v38; // x19
  __int64 v39; // x8
  __int64 v40; // x8
  unsigned int *v41; // x8
  int v42; // w9
  unsigned int *v43; // x8
  int v44; // w9
  unsigned int *v45; // x8
  int v46; // w9
  unsigned __int64 v47; // [xsp+8h] [xbp-E8h]
  int64x2_t v48; // [xsp+10h] [xbp-E0h] BYREF
  Caver::MainMenuViewController *v49; // [xsp+20h] [xbp-D0h]
  __int64 v50; // [xsp+28h] [xbp-C8h] BYREF
  __int64 v51; // [xsp+30h] [xbp-C0h]
  unsigned __int64 v52; // [xsp+38h] [xbp-B8h]
  int64x2_t v53; // [xsp+40h] [xbp-B0h] BYREF
  Caver::MainMenuViewController *v54; // [xsp+50h] [xbp-A0h]
  __int64 v55; // [xsp+60h] [xbp-90h] BYREF
  _QWORD v56[2]; // [xsp+70h] [xbp-80h] BYREF
  _QWORD *v57; // [xsp+80h] [xbp-70h]
  int64x2_t v58; // [xsp+90h] [xbp-60h]
  Caver::MainMenuViewController *v59; // [xsp+A0h] [xbp-50h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (Caver::MainMenuView *)operator new(0x298u);
  Caver::MainMenuView::MainMenuView(v2);
  boost::shared_ptr<Caver::MainMenuView>::shared_ptr<Caver::MainMenuView>();
  v3 = (_QWORD *)*((_QWORD *)this + 15);
  v4 = v58.n128_u64[0];
  v58.n128_u64[0] = *((_QWORD *)this + 14);
  v5 = v58.n128_u64[1];
  *((_QWORD *)this + 14) = v4;
  *((_QWORD *)this + 15) = v5;
  v58.n128_u64[1] = (unsigned __int64)v3;
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
  v8 = (Caver::Scene *)operator new(0x408u);
  Caver::Scene::Scene(v8);
  boost::shared_ptr<Caver::Scene>::shared_ptr<Caver::Scene>();
  sub_566BB8((int)v56, "menu");
  sub_566BB8((int)&v55, "scene");
  Caver::PathForResourceOfType();
  Caver::Scene::LoadFromFile();
  v9 = (void *)(v58.n128_u64[0] - 24);
  if ( (__int64 *)(v58.n128_u64[0] - 24) != &qword_6FD2E0 )
  {
    v41 = (unsigned int *)(v58.n128_u64[0] - 8);
    if ( &pthread_create )
    {
      do
        v42 = __ldaxr(v41);
      while ( __stlxr(v42 - 1, v41) );
    }
    else
    {
      v42 = (*v41)--;
    }
    if ( v42 <= 0 )
      operator delete(v9);
  }
  v10 = (void *)(v55 - 24);
  if ( (__int64 *)(v55 - 24) != &qword_6FD2E0 )
  {
    v43 = (unsigned int *)(v55 - 8);
    if ( &pthread_create )
    {
      do
        v44 = __ldaxr(v43);
      while ( __stlxr(v44 - 1, v43) );
    }
    else
    {
      v44 = (*v43)--;
    }
    if ( v44 <= 0 )
      operator delete(v10);
  }
  v11 = (void *)(v56[0] - 24LL);
  if ( (__int64 *)(v56[0] - 24LL) != &qword_6FD2E0 )
  {
    v45 = (unsigned int *)(v56[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v46 = __ldaxr(v45);
      while ( __stlxr(v46 - 1, v45) );
    }
    else
    {
      v46 = (*v45)--;
    }
    if ( v46 <= 0 )
      operator delete(v11);
  }
  Caver::SceneView::InitWithScene();
  Caver::Scene::FinishLoad((Caver::Scene *)v56[1]);
  v12 = *((_QWORD *)this + 14);
  *(_QWORD *)(v12 + 240) = (char *)this + 80;
  v13 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v13 )
    v13[1] += 2LL;
  v14 = (_QWORD *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 3) = v12;
  *((_QWORD *)this + 4) = v13;
  if ( v14 )
  {
    v15 = v14[1] - 1LL;
    v14[1] = v15;
    if ( !v15 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      v16 = v14[2] - 1LL;
      v14[2] = v16;
      if ( !v16 )
        (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
    }
  }
  v17 = (Caver::OnlineController *)*((_QWORD *)this + 8);
  if ( v17 )
    v17 = (Caver::OnlineController *)(**(__int64 (__fastcall ***)(Caver::OnlineController *, Caver::MainMenuViewController *))v17)(
                                       v17,
                                       this);
  if ( v13 )
  {
    v18 = v13[1] - 1LL;
    v13[1] = v18;
    if ( !v18 )
    {
      v17 = (Caver::OnlineController *)(*(__int64 (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      v19 = v13[2] - 1LL;
      v13[2] = v19;
      if ( !v19 )
        v17 = (Caver::OnlineController *)(*(__int64 (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
    }
  }
  v20 = Caver::OnlineController::SharedController(v17);
  v21 = (Caver::OnlineController *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 240LL))(v20);
  if ( ((unsigned __int8)v21 & 1) != 0 )
    Caver::MainMenuView::SetGoogleSignInVisible(*((Caver::MainMenuView **)this + 14));
  v22 = Caver::OnlineController::SharedController(v21);
  v23 = v22;
  v24 = (_QWORD *)*((_QWORD *)this + 2);
  if ( !v24 || (v25 = v24[1]) == 0 )
  {
    v58.n128_u64[0] = (unsigned __int64)off_6CC4E8;
    boost::throw_exception<boost::bad_weak_ptr>();
  }
  v26 = *((_QWORD *)this + 1);
  v27 = vdupq_n_s64(0);
  v28 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 248LL);
  v24[1] = v25 + 2;
  v27.n128_u64[0] = (unsigned __int64)&Caver::MainMenuViewController::GoogleSignInCompletion;
  v58 = v27;
  v59 = this;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v29 = 0;
  }
  else
  {
    v49 = v59;
    v48 = v58;
    v29 = (unsigned __int64)&boost::function2<void,bool,std::string const&>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::MainMenuViewController,bool,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::MainMenuViewController*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::MainMenuViewController,bool,std::string const&>,boost::_bi::list3<boost::_bi::value<Caver::MainMenuViewController*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  v47 = v29;
  v50 = v26;
  v51 = (__int64)v24;
  ++v24[2];
  v52 = 0;
  if ( v29 )
  {
    v52 = v29;
    if ( (v29 & 1) != 0 )
    {
      v54 = v49;
      v53 = v48;
    }
    else
    {
      (*(void (__fastcall **)(int64x2_t *, int64x2_t *, _QWORD))(v29 & 0xFFFFFFFFFFFFFFFELL))(&v48, &v53, 0);
    }
  }
  v28(v23, &v50);
  if ( v52 )
  {
    if ( (v52 & 1) == 0 )
    {
      v30 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v52 & 0xFFFFFFFFFFFFFFFELL);
      if ( v30 )
        v30(&v53, &v53, 2);
    }
    v52 = 0;
  }
  result = v51;
  if ( v51 )
  {
    v32 = *(_QWORD *)(v51 + 16) - 1LL;
    *(_QWORD *)(v51 + 16) = v32;
    if ( !v32 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 24LL))(result);
  }
  if ( v47 )
  {
    if ( (v47 & 1) == 0 )
    {
      v33 = *(__int64 (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v47 & 0xFFFFFFFFFFFFFFFELL);
      if ( v33 )
        result = v33(&v48, &v48, 2);
    }
  }
  v34 = v24[1] - 1LL;
  v24[1] = v34;
  if ( !v34 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
    v35 = v24[2] - 1LL;
    v24[2] = v35;
    if ( !v35 )
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
  }
  v36 = v24[1] - 1LL;
  v24[1] = v36;
  if ( !v36 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
    v37 = v24[2] - 1LL;
    v24[2] = v37;
    if ( !v37 )
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
  }
  v38 = v57;
  if ( v57 )
  {
    v39 = v57[1] - 1LL;
    v57[1] = v39;
    if ( !v39 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v38 + 16LL))(v38);
      v40 = v38[2] - 1LL;
      v38[2] = v40;
      if ( !v40 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v38 + 24LL))(v38);
    }
  }
  return result;
}

