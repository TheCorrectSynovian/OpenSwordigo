/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034E1A0
 * Mangled: _ZN5Caver13GameSceneView23InitWithSceneControllerERKN5boost10shared_ptrINS_19GameSceneControllerEEE
 * Demangled: Caver::GameSceneView::InitWithSceneController(boost::shared_ptr<Caver::GameSceneController> const&)
 *
 * Callers: 2
 *   0x00000000001F5F70  Caver::GameSceneView::InitWithSceneController(boost::shared_ptr<Caver::GameSceneController> const&)
 *   0x000000000034D7E8  Caver::GameSceneView::GameSceneView(void)
 *
 * Callees: 20
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5DC0  Caver::Camera::SetAspectRatio(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6390  Caver::GameOverlayView::GameOverlayView(void)
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9400  Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000001F9AE0  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001F9BE0  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FB4E0  Caver::GUIView::RemoveAllSubviews(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000202F10  Caver::GUIButton::SetFrameTextureForState(Caver::GUIControl::State,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000203820  boost::shared_ptr<Caver::GameOverlayView>::shared_ptr<Caver::GameOverlayView>(Caver::GameOverlayView *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 238
 *   insn=0x000000000034E1B4 string=0x000000000034E1B8 "V"
 *   insn=0x000000000034E1CC string=0x00000000001FB4E0 "0'"
 *   insn=0x000000000034E1D4 string=0x000000000034E1D8 "\n"
 *   insn=0x000000000034E1D4 string=0x000000000034E1E4 "u~@"
 *   insn=0x000000000034E1D8 string=0x000000000034E1DC "J"
 *   insn=0x000000000034E1DC string=0x000000000034E1E0 "\n"
 *   insn=0x000000000034E1E4 string=0x000000000034E1E8 "i""
 *   insn=0x000000000034E1E8 string=0x000000000034E1EC "5"
 *   insn=0x000000000034E1F0 string=0x000000000034E1F4 ""
 *   insn=0x000000000034E204 string=0x000000000034E208 "\t@"
 *   insn=0x000000000034E210 string=0x000000000034E214 ""
 *   insn=0x000000000034E224 string=0x000000000034E228 "@"
 *   insn=0x000000000034E230 string=0x000000000034E234 "`"
 *   insn=0x000000000034E230 string=0x0000000000583734 "o"
 *   insn=0x000000000034E234 string=0x000000000034E238 "5G"
 *   insn=0x000000000034E244 string=0x000000000034E248 "`B"
 *   insn=0x000000000034E248 string=0x000000000034E24C ""
 *   insn=0x000000000034E24C string=0x000000000034E250 "!A"
 *   insn=0x000000000034E258 string=0x000000000034E25C "`"
 *   insn=0x000000000034E25C string=0x000000000034E260 ""
 *   insn=0x000000000034E26C string=0x00000000001F5DC0 "P'"
 *   insn=0x000000000034E274 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000034E278 string=0x000000000034E27C "E"
 *   insn=0x000000000034E27C string=0x00000000001F6390 "0'"
 *   insn=0x000000000034E284 string=0x000000000034E288 "f"
 *   insn=0x000000000034E288 string=0x000000000034E28C "hVP"
 *   insn=0x000000000034E298 string=0x000000000034E29C "i""
 *   insn=0x000000000034E2A0 string=0x000000000034E2A4 "5"
 *   insn=0x000000000034E2A4 string=0x000000000034E2E8 "`"
 *   insn=0x000000000034E2A8 string=0x000000000034E2AC ""
 *   insn=0x000000000034E2BC string=0x000000000034E2C0 "\t@"
 *   insn=0x000000000034E2C8 string=0x000000000034E2CC ""
 *   insn=0x000000000034E2DC string=0x000000000034E2E0 "@"
 *   insn=0x000000000034E2E8 string=0x000000000034E2EC "p@"
 *   insn=0x000000000034E2F4 string=0x000000000034E2F8 ",@"
 *   insn=0x000000000034E2F8 string=0x000000000034E2FC "I"
 *   insn=0x000000000034E2FC string=0x000000000034E300 "\tp"
 *   insn=0x000000000034E300 string=0x000000000034E304 "("
 *   insn=0x000000000034E310 string=0x000000000034E314 "\t"
 *   insn=0x000000000034E318 string=0x000000000034E31C ")-@"
 *   insn=0x000000000034E31C string=0x000000000034E320 " "
 *   insn=0x000000000034E320 string=0x000000000034E324 "`"
 *   insn=0x000000000034E32C string=0x000000000034E330 "4"
 *   insn=0x000000000034E330 string=0x000000000034E334 "h"
 *   insn=0x000000000034E330 string=0x00000000001F9400 "0'"
 *   insn=0x000000000034E334 string=0x000000000034E338 "i"
 *   insn=0x000000000034E338 string=0x000000000034E33C "1@"
 *   insn=0x000000000034E340 string=0x000000000034E344 "i"
 *   insn=0x000000000034E34C string=0x000000000034E350 "*"
 *   insn=0x000000000034E350 string=0x000000000034E354 "J"
 *   insn=0x000000000034E354 string=0x000000000034E358 "*"
 *   insn=0x000000000034E368 string=0x000000000034E36C "4"
 *   insn=0x000000000034E370 string=0x000000000034E374 ""
 *   insn=0x000000000034E384 string=0x000000000034E388 "\t@"
 *   insn=0x000000000034E390 string=0x000000000034E394 ""
 *   insn=0x000000000034E3A4 string=0x000000000034E3A8 "@"
 *   insn=0x000000000034E3B0 string=0x00000000001FA350 "0'"
 *   insn=0x000000000034E3B8 string=0x000000000058EC00 "ui_button_arrow"
 *   insn=0x000000000034E3D8 string=0x000000000034E3DC "u"
 *   insn=0x000000000034E3E8 string=0x000000000058EC10 "ui_button_arrow_pressed"
 *   insn=0x000000000034E408 string=0x000000000034E40C "i"
 *   insn=0x000000000034E41C string=0x00000000001F9AE0 "0'"
 *   insn=0x000000000034E424 string=0x000000000034E428 "\n"
 *   insn=0x000000000034E424 string=0x000000000034E434 "t"
 *   insn=0x000000000034E428 string=0x000000000034E42C "J"
 *   insn=0x000000000034E42C string=0x000000000034E430 "\n"
 *   insn=0x000000000034E434 string=0x000000000034E438 "i"
 *   insn=0x000000000034E438 string=0x000000000034E43C "4"
 *   insn=0x000000000034E440 string=0x000000000034E444 ""
 *   insn=0x000000000034E450 string=0x000000000034E454 "\t@"
 *   insn=0x000000000034E460 string=0x000000000034E464 ""
 *   insn=0x000000000034E470 string=0x000000000034E474 "@"
 *   insn=0x000000000034E480 string=0x000000000034E484 "4"
 *   insn=0x000000000034E488 string=0x000000000034E48C ""
 *   insn=0x000000000034E498 string=0x000000000034E49C "\t@"
 *   insn=0x000000000034E4A8 string=0x000000000034E4AC ""
 *   insn=0x000000000034E4B8 string=0x000000000034E4BC "@"
 *   insn=0x000000000034E4CC string=0x000000000034E4D0 "@"
 *   insn=0x000000000034E4D0 string=0x000000000034E4D4 ""
 *   insn=0x000000000034E4D4 string=0x000000000034E4D8 ""
 *   insn=0x000000000034E4DC string=0x000000000034E4E0 ""
 *   insn=0x000000000034E4E0 string=0x000000000034E4E4 ""
 *   insn=0x000000000034E4FC string=0x000000000034E500 "!"
 *   insn=0x000000000034E508 string=0x000000000034E50C "@"
 *   insn=0x000000000034E50C string=0x000000000034E510 ""
 *   insn=0x000000000034E510 string=0x000000000034E514 ""
 *   insn=0x000000000034E518 string=0x000000000034E51C ""
 *   insn=0x000000000034E51C string=0x000000000034E520 ""
 *   insn=0x000000000034E534 string=0x000000000034E538 "`"
 *   insn=0x000000000034E544 string=0x000000000034E548 "r"
 *   insn=0x000000000034E550 string=0x000000000034E554 "@"
 *   insn=0x000000000034E550 string=0x000000000034E570 "`"
 *   insn=0x000000000034E554 string=0x000000000034E558 ""
 *   insn=0x000000000034E558 string=0x000000000034E55C ""
 *   insn=0x000000000034E560 string=0x000000000034E564 ""
 *   insn=0x000000000034E564 string=0x000000000034E568 ""
 *   insn=0x000000000034E57C string=0x000000000034E580 "d"
 *   insn=0x000000000034E588 string=0x000000000034E58C "@"
 *   insn=0x000000000034E588 string=0x000000000034E5A8 ""
 *   insn=0x000000000034E58C string=0x000000000034E590 ""
 *   insn=0x000000000034E590 string=0x000000000034E594 ""
 *   insn=0x000000000034E598 string=0x000000000034E59C ""
 *   insn=0x000000000034E59C string=0x000000000034E5A0 ""
 *   insn=0x000000000034E5AC string=0x000000000034E5B0 "`"
 *   insn=0x000000000034E5BC string=0x000000000034E5C0 ""
 *   insn=0x000000000034E5BC string=0x00000000001FB170 "0'"
 *   insn=0x000000000034E5C4 string=0x000000000034E5C8 ""
 *   insn=0x000000000034E5CC string=0x000000000034E5D0 ""
 *   insn=0x000000000034E5D0 string=0x000000000034E5D4 "t"
 *   insn=0x000000000034E5D4 string=0x000000000034E5D8 "\t+"
 *   insn=0x000000000034E5E8 string=0x000000000034E5EC ")"
 *   insn=0x000000000034E5FC string=0x000000000034E600 "\n"
 *   insn=0x000000000034E600 string=0x000000000034E604 "I"
 *   insn=0x000000000034E604 string=0x000000000034E608 ")"
 *   insn=0x000000000034E608 string=0x000000000034E60C "+"
 *   insn=0x000000000034E61C string=0x000000000034E62C "l"
 *   insn=0x000000000034E628 string=0x000000000034E66C "KE@"
 *   insn=0x000000000034E63C string=0x000000000034E640 ")a"
 *   insn=0x000000000034E65C string=0x000000000034E660 "a"
 *   insn=0x000000000034E66C string=0x000000000034E670 "+E"
 *   insn=0x000000000034E670 string=0x000000000034E674 "?"
 *   insn=0x000000000034E680 string=0x000000000034E684 ""
 *   insn=0x000000000034E698 string=0x000000000034E69C "5"
 *   insn=0x000000000034E69C string=0x000000000034E6A0 "`"
 *   insn=0x000000000034E69C string=0x00000000001F6B70 "0'"
 *   insn=0x000000000034E6A4 string=0x000000000034E6A8 ""
 *   insn=0x000000000034E6BC string=0x000000000034E6C0 ""
 *   insn=0x000000000034E6D4 string=0x000000000034E6D8 "B"
 *   insn=0x000000000034E6D8 string=0x00000000001F9BE0 "0'"
 *   insn=0x000000000034E6DC string=0x000000000034E6E0 "h"
 *   insn=0x000000000034E6E0 string=0x000000000034E6E4 "("
 *   insn=0x000000000034E6E0 string=0x000000000034E70C "h"
 *   insn=0x000000000034E6E4 string=0x000000000034E6E8 ""
 *   insn=0x000000000034E6E8 string=0x000000000034E6EC ""
 *   insn=0x000000000034E6F4 string=0x000000000034E6F8 " !"
 *   insn=0x000000000034E710 string=0x000000000034E714 "-@"
 *   insn=0x000000000034E724 string=0x000000000034E728 "a"
 *   insn=0x000000000034E744 string=0x000000000034E748 ")=G"
 *   insn=0x000000000034E748 string=0x000000000034E74C "!"
 *   insn=0x000000000034E750 string=0x000000000034E754 "\t"
 *   insn=0x000000000034E750 string=0x000000000034E78C "\t"
 *   insn=0x000000000034E754 string=0x000000000034E758 "*"
 *   insn=0x000000000034E758 string=0x000000000034E75C "\n"
 *   insn=0x000000000034E760 string=0x000000000034E764 ""
 *   insn=0x000000000034E764 string=0x000000000034E798 "?"
 *   insn=0x000000000034E768 string=0x000000000034E76C ")=G"
 *   insn=0x000000000034E76C string=0x000000000034E770 "!"
 *   insn=0x000000000034E770 string=0x000000000034E774 "\t"
 *   insn=0x000000000034E774 string=0x000000000034E778 "\t"
 *   insn=0x000000000034E774 string=0x000000000034E7B4 "\t"
 *   insn=0x000000000034E778 string=0x000000000034E77C "*"
 *   insn=0x000000000034E77C string=0x000000000034E780 "\n"
 *   insn=0x000000000034E788 string=0x000000000034E7C0 "?"
 *   insn=0x000000000034E78C string=0x000000000034E790 "*"
 *   insn=0x000000000034E790 string=0x000000000034E794 "\n"
 *   insn=0x000000000034E798 string=0x000000000034E79C "L"
 *   insn=0x000000000034E7AC string=0x000000000034E7B0 "^"
 *   insn=0x000000000034E7B4 string=0x000000000034E7B8 "*"
 *   insn=0x000000000034E7B8 string=0x000000000034E7BC "\n"
 *   insn=0x000000000034E7CC string=0x000000000034E7D0 "Z"
 *   insn=0x000000000034E7D4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000034E7E4 string=0x000000000034E7E8 ""
 *   insn=0x000000000034E7EC string=0x000000000034E7F0 "!"
 *   insn=0x000000000034E7F4 string=0x000000000034E7F8 "\t@"
 *   insn=0x000000000034E804 string=0x000000000034E808 ""
 *   insn=0x000000000034E80C string=0x000000000034E810 "!\n"
 *   insn=0x000000000034E814 string=0x000000000034E818 "@"
 *   insn=0x000000000034E820 string=0x000000000034E824 "L"
 *   insn=0x000000000034E830 string=0x000000000034E834 "("
 *   insn=0x000000000034E834 string=0x000000000034E838 ""
 *   insn=0x000000000034E838 string=0x000000000034E83C ""
 *   insn=0x000000000034E844 string=0x000000000034E848 " !"
 *   insn=0x000000000034E86C string=0x000000000034E870 "\t\t@"
 *   insn=0x000000000034E870 string=0x000000000034E874 ")"
 *   insn=0x000000000034E874 string=0x000000000034E878 "\t\t"
 *   insn=0x000000000034E878 string=0x000000000034E87C "A"
 *   insn=0x000000000034E87C string=0x000000000034E880 "\t"
 *   insn=0x000000000034E880 string=0x000000000034E884 ")"
 *   insn=0x000000000034E888 string=0x000000000034E88C " "
 *   insn=0x000000000034E88C string=0x000000000034E890 "u"
 *   insn=0x000000000034E898 string=0x000000000034E89C "H"
 *   insn=0x000000000034E89C string=0x000000000034E8A0 "\t\t@"
 *   insn=0x000000000034E8A0 string=0x000000000034E8A4 ")"
 *   insn=0x000000000034E8A4 string=0x000000000034E8A8 "\t\t"
 *   insn=0x000000000034E8AC string=0x000000000034E8B0 "\t"
 *   insn=0x000000000034E8B0 string=0x000000000034E8B4 ")"
 *   insn=0x000000000034E8B8 string=0x000000000034E8BC " "
 *   insn=0x000000000034E8BC string=0x000000000034E8C0 "i"
 *   insn=0x000000000034E8CC string=0x000000000034E8D0 "@"
 *   insn=0x000000000034E8D0 string=0x000000000034E8D4 "8"
 *   insn=0x000000000034E8D0 string=0x000000000034E998 "@"
 *   insn=0x000000000034E8E8 string=0x000000000034E8EC ""
 *   insn=0x000000000034E8F8 string=0x000000000034E8FC "\t@"
 *   insn=0x000000000034E908 string=0x000000000034E90C ""
 *   insn=0x000000000034E918 string=0x000000000034E91C "@"
 *   insn=0x000000000034E924 string=0x000000000034E928 "O"
 *   insn=0x000000000034E930 string=0x000000000034E934 "_"
 *   insn=0x000000000034E934 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000034E940 string=0x000000000034E944 ""
 *   insn=0x000000000034E958 string=0x000000000034E95C "@"
 *   insn=0x000000000034E95C string=0x000000000034E960 ""
 *   insn=0x000000000034E960 string=0x000000000034E964 ""
 *   insn=0x000000000034E968 string=0x000000000034E96C ""
 *   insn=0x000000000034E96C string=0x000000000034E970 ""
 *   insn=0x000000000034E97C string=0x000000000034E980 ")"
 *   insn=0x000000000034E998 string=0x000000000034E99C ""
 *   insn=0x000000000034E99C string=0x000000000034E9A0 ""
 *   insn=0x000000000034E9A4 string=0x000000000034E9A8 ""
 *   insn=0x000000000034E9A8 string=0x000000000034E9AC ""
 *   insn=0x000000000034E9B8 string=0x000000000034E9BC ")"
 *   insn=0x000000000034E9CC string=0x000000000034E9D0 ")=G"
 *   insn=0x000000000034E9D0 string=0x000000000034E9D4 "!"
 *   insn=0x000000000034E9D8 string=0x000000000034E9DC "\t"
 *   insn=0x000000000034E9D8 string=0x000000000034EA50 "\t"
 *   insn=0x000000000034E9DC string=0x000000000034E9E0 "*"
 *   insn=0x000000000034E9E0 string=0x000000000034E9E4 "\n"
 *   insn=0x000000000034E9E8 string=0x000000000034E9EC "?"
 *   insn=0x000000000034E9F4 string=0x000000000034E9F8 "kn"
 *   insn=0x000000000034EA04 string=0x000000000034EA08 ")=G"
 *   insn=0x000000000034EA08 string=0x000000000034EA0C "!"
 *   insn=0x000000000034EA10 string=0x000000000034EA14 "\t"
 *   insn=0x000000000034EA10 string=0x000000000034EA28 "\t"
 *   insn=0x000000000034EA14 string=0x000000000034EA18 "*"
 *   insn=0x000000000034EA18 string=0x000000000034EA1C "\n"
 *   insn=0x000000000034EA24 string=0x000000000034EA34 "?"
 *   insn=0x000000000034EA28 string=0x000000000034EA2C "*"
 *   insn=0x000000000034EA2C string=0x000000000034EA30 "\n"
 *   insn=0x000000000034EA3C string=0x000000000034EA40 "Yn"
 *   insn=0x000000000034EA50 string=0x000000000034EA54 "*"
 *   insn=0x000000000034EA54 string=0x000000000034EA58 "\n"
 *   insn=0x000000000034EA58 string=0x000000000034EA5C "?"
 *   insn=0x000000000034EA68 string=0x000000000034EA6C "8"
 *   insn=0x000000000034EA7C string=0x000000000034EA80 "h"
 *   insn=0x000000000034EA88 string=0x000000000034EA8C ""
 *   insn=0x000000000034EA90 string=0x000000000034EA94 ""
 *   insn=0x000000000034EA98 string=0x000000000034EA9C "h"
 *   insn=0x000000000034EAA8 string=0x000000000034EAAC ""
 *   insn=0x000000000034EAB4 string=0x000000000034EAB8 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameSceneView::InitWithSceneController(__int64 a1, _QWORD *a2)
{
  __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8
  Caver::GameOverlayView *v9; // x0
  _QWORD *v10; // x21
  __int64 v11; // x9
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x0
  float *v16; // x8
  __int64 (__fastcall *v17)(__int64, _BYTE *); // x8
  __int64 v18; // x9
  Caver::TextureLibrary *v19; // x0
  _QWORD *v20; // x20
  __int64 v21; // x8
  __int64 v22; // x8
  Caver::TextureLibrary *v23; // x0
  __int128 v24; // kr00_16
  _QWORD *v25; // x20
  __int64 v26; // x8
  __int64 v27; // x8
  _QWORD *v28; // x20
  __int64 v29; // x8
  __int64 v30; // x8
  __int64 v31; // x0
  int v32; // w8
  void *v33; // x0
  _DWORD *v34; // x0
  int v35; // w8
  void *v36; // x0
  __int64 v37; // x0
  int v38; // w8
  __int64 v39; // x0
  int v40; // w8
  Caver::GUIView *v41; // x0
  __int64 v42; // x20
  __int64 v43; // x10
  unsigned __int64 v44; // x11
  _DWORD *v45; // x9
  _BYTE *v46; // x10
  __int64 v47; // x9
  _OWORD *v48; // x14
  __int128 *v49; // x13
  __int64 v50; // x15
  __int128 v51; // q0
  __int128 v52; // q1
  int v53; // t1
  int64x2_t v54; // q0
  _UNKNOWN **v55; // x8
  void (__fastcall *v56)(_BYTE *, _BYTE *, __int64); // x8
  unsigned int *v58; // x8
  int v59; // w9
  unsigned int *v60; // x8
  int v61; // w9
  __int64 v62; // [xsp+30h] [xbp-C0h] BYREF
  __int64 v63; // [xsp+38h] [xbp-B8h]
  __int64 v64; // [xsp+48h] [xbp-A8h] BYREF
  int64x2_t v65; // [xsp+50h] [xbp-A0h]
  __int64 v66; // [xsp+60h] [xbp-90h]
  _BYTE v67[32]; // [xsp+70h] [xbp-80h] BYREF
  __int128 v68; // [xsp+90h] [xbp-60h]
  __int128 v69; // [xsp+A0h] [xbp-50h]
  __int64 v70; // [xsp+B8h] [xbp-38h]

  v70 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::RemoveAllSubviews((Caver::GUIView *)a1);
  v5 = *a2;
  v4 = a2[1];
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  v6 = *(_QWORD **)(a1 + 248);
  *(_QWORD *)(a1 + 240) = v5;
  *(_QWORD *)(a1 + 248) = v4;
  if ( v6 )
  {
    v7 = v6[1] - 1LL;
    v6[1] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  if ( *(float *)(a1 + 140) > 0.001 )
  {
    *(_OWORD *)*(_QWORD *)(*(_QWORD *)(*a2 + 32LL) + 576LL) = *(_OWORD *)(a1 + 132);
    Caver::Camera::SetAspectRatio(
      *(Caver::Camera **)(*(_QWORD *)(*a2 + 32LL) + 576LL),
      *(float *)(a1 + 140) / *(float *)(a1 + 144));
  }
  v9 = (Caver::GameOverlayView *)operator new(0x298u);
  Caver::GameOverlayView::GameOverlayView(v9);
  boost::shared_ptr<Caver::GameOverlayView>::shared_ptr<Caver::GameOverlayView>();
  v10 = *(_QWORD **)(a1 + 264);
  v11 = *(_QWORD *)v67;
  *(_QWORD *)v67 = *(_QWORD *)(a1 + 256);
  v12 = *(_QWORD *)&v67[8];
  *(_QWORD *)(a1 + 256) = v11;
  *(_QWORD *)(a1 + 264) = v12;
  *(_QWORD *)&v67[8] = v10;
  if ( v10 )
  {
    v13 = v10[1] - 1LL;
    v10[1] = v13;
    if ( !v13 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v14 = v10[2] - 1LL;
      v10[2] = v14;
      if ( !v14 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  v15 = *(_QWORD *)(a1 + 256);
  if ( *(_DWORD *)(v15 + 112) != 18 )
  {
    v16 = *(float **)(v15 + 88);
    *(_DWORD *)(v15 + 112) = 18;
    if ( v16 )
    {
      if ( v16[35] > 0.001 )
        (*(void (__fastcall **)(float *__return_ptr, float *))(*(_QWORD *)v16 + 88LL))(v16, v16);
    }
  }
  Caver::GameOverlayView::InitWithGameState();
  v17 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 96LL);
  *(_QWORD *)v67 = *(_QWORD *)(a1 + 256);
  v18 = *(_QWORD *)(a1 + 264);
  *(_QWORD *)&v67[8] = v18;
  if ( v18 )
    ++*(_QWORD *)(v18 + 8);
  v19 = (Caver::TextureLibrary *)v17(a1, v67);
  v20 = *(_QWORD **)&v67[8];
  if ( *(_QWORD *)&v67[8] )
  {
    v21 = *(_QWORD *)(*(_QWORD *)&v67[8] + 8LL) - 1LL;
    *(_QWORD *)(*(_QWORD *)&v67[8] + 8LL) = v21;
    if ( !v21 )
    {
      v19 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      v22 = v20[2] - 1LL;
      v20[2] = v22;
      if ( !v22 )
        v19 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
    }
  }
  Caver::TextureLibrary::sharedLibrary(v19);
  sub_566BB8((int)&v64, "ui_button_arrow");
  v23 = (Caver::TextureLibrary *)Caver::TextureLibrary::TextureForName();
  Caver::TextureLibrary::sharedLibrary(v23);
  sub_566BB8((int)&v62, "ui_button_arrow_pressed");
  Caver::TextureLibrary::TextureForName();
  Caver::GameInterfaceBuilder::IconButton();
  v24 = *(_OWORD *)v67;
  if ( *(_QWORD *)&v67[8] )
    ++*(_QWORD *)(*(_QWORD *)&v67[8] + 8LL);
  v25 = *(_QWORD **)(a1 + 336);
  *(_OWORD *)(a1 + 328) = v24;
  if ( v25 )
  {
    v26 = v25[1] - 1LL;
    v25[1] = v26;
    if ( !v26 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
      v27 = v25[2] - 1LL;
      v25[2] = v27;
      if ( !v27 )
        (*(void (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25);
    }
  }
  v28 = *(_QWORD **)&v67[8];
  if ( *(_QWORD *)&v67[8] )
  {
    v29 = *(_QWORD *)(*(_QWORD *)&v67[8] + 8LL) - 1LL;
    *(_QWORD *)(*(_QWORD *)&v67[8] + 8LL) = v29;
    if ( !v29 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
      v30 = v28[2] - 1LL;
      v28[2] = v30;
      if ( !v30 )
        (*(void (__fastcall **)(_QWORD *))(*v28 + 24LL))(v28);
    }
  }
  v31 = v63;
  if ( v63 )
  {
    v32 = *(_DWORD *)(v63 + 8) - 1;
    *(_DWORD *)(v63 + 8) = v32;
    if ( !v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
  }
  v33 = (void *)(v62 - 24);
  if ( (__int64 *)(v62 - 24) == &qword_6FD2E0 )
    goto LABEL_37;
  v58 = (unsigned int *)(v62 - 8);
  if ( &pthread_create )
  {
    do
      v59 = __ldaxr(v58);
    while ( __stlxr(v59 - 1, v58) );
  }
  else
  {
    v59 = (*v58)--;
  }
  if ( v59 > 0 )
  {
LABEL_37:
    v34 = (_DWORD *)v65.n128_u64[0];
    if ( !v65.n128_u64[0] )
      goto LABEL_40;
  }
  else
  {
    operator delete(v33);
    v34 = (_DWORD *)v65.n128_u64[0];
    if ( !v65.n128_u64[0] )
      goto LABEL_40;
  }
  v35 = v34[2] - 1;
  v34[2] = v35;
  if ( !v35 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v34 + 8LL))(v34);
LABEL_40:
  v36 = (void *)(v64 - 24);
  if ( (__int64 *)(v64 - 24) != &qword_6FD2E0 )
  {
    v60 = (unsigned int *)(v64 - 8);
    if ( &pthread_create )
    {
      do
        v61 = __ldaxr(v60);
      while ( __stlxr(v61 - 1, v60) );
    }
    else
    {
      v61 = (*v60)--;
    }
    if ( v61 <= 0 )
      operator delete(v36);
  }
  *(_QWORD *)v67 = 0;
  Caver::GUIButton::SetFrameTextureForState();
  v37 = *(_QWORD *)v67;
  if ( *(_QWORD *)v67 )
  {
    v38 = *(_DWORD *)(*(_QWORD *)v67 + 8LL) - 1;
    *(_DWORD *)(*(_QWORD *)v67 + 8LL) = v38;
    if ( !v38 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
  }
  *(_QWORD *)v67 = 0;
  Caver::GUIButton::SetFrameTextureForState();
  v39 = *(_QWORD *)v67;
  if ( *(_QWORD *)v67 )
  {
    v40 = *(_DWORD *)(*(_QWORD *)v67 + 8LL) - 1;
    *(_DWORD *)(*(_QWORD *)v67 + 8LL) = v40;
    if ( !v40 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
  }
  v41 = *(Caver::GUIView **)(a1 + 328);
  *(_OWORD *)v67 = xmmword_58EBC0;
  Caver::GUIView::SetFrame(v41, (const Caver::Rectangle *)v67);
  v42 = *(_QWORD *)(a1 + 328);
  *(_OWORD *)v67 = xmmword_58EBD0;
  *(_OWORD *)&v67[16] = xmmword_58EBE0;
  v43 = v42 + 348;
  v68 = xmmword_58EBF0;
  if ( v42 + 408 > (unsigned __int64)(v42 + 348) )
    v43 = v42 + 408;
  v44 = ((unsigned __int64)(v43 + -345 - v42) >> 2) + 1;
  v69 = xmmword_583800;
  if ( v44 >= 8 )
  {
    v47 = 4 * (v44 & 0x7FFFFFFFFFFFFFF8LL);
    v46 = &v67[v47];
    v48 = (_OWORD *)(v42 + 360);
    v45 = (_DWORD *)(v42 + v47 + 344);
    v49 = (__int128 *)&v67[16];
    v50 = v44 & 0x7FFFFFFFFFFFFFF8LL;
    do
    {
      v51 = *(v49 - 1);
      v52 = *v49;
      v50 -= 8;
      v49 += 2;
      *(v48 - 1) = v51;
      *v48 = v52;
      v48 += 2;
    }
    while ( v50 );
    if ( v44 == (v44 & 0x7FFFFFFFFFFFFFF8LL) )
      goto LABEL_55;
  }
  else
  {
    v45 = (_DWORD *)(v42 + 344);
    v46 = v67;
  }
  do
  {
    v53 = *(_DWORD *)v46;
    v46 += 4;
    *v45++ = v53;
  }
  while ( (unsigned __int64)v45 < v42 + 408 );
LABEL_55:
  *(_QWORD *)v67 = 0;
  v54 = vdupq_n_s64(0);
  v66 = a1;
  v54.n128_u64[0] = (unsigned __int64)&Caver::GameSceneView::CinematicSkipButtonPressed;
  v65 = v54;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v55 = 0;
  }
  else
  {
    *(_QWORD *)&v67[24] = v66;
    *(int64x2_t *)&v67[8] = v65;
    v55 = &boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GameSceneView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::GameSceneView*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GameSceneView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::GameSceneView*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  *(_QWORD *)v67 = v55;
  Caver::GUIControl::AddTargetActionForControlEvent();
  if ( *(_QWORD *)v67 )
  {
    if ( (v67[0] & 1) == 0 )
    {
      v56 = *(void (__fastcall **)(_BYTE *, _BYTE *, __int64))(*(_QWORD *)v67 & 0xFFFFFFFFFFFFFFFELL);
      if ( v56 )
        v56(&v67[8], &v67[8], 2);
    }
    *(_QWORD *)v67 = 0;
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
}

