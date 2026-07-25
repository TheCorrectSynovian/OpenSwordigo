/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A1538
 * Mangled: _ZN5Caver20ProfileSelectionViewC2Ev
 * Demangled: Caver::ProfileSelectionView::ProfileSelectionView(void)
 *
 * Callers: 1
 *   0x00000000002011E0  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *
 * Callees: 39
 *   0x00000000001F3450  Caver::PlayerProfile::InitWithIdentifier(std::string const&)
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *   0x00000000001F3E50  Caver::ProfilePanelView::ProfilePanelView(void)
 *   0x00000000001F43A0  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000001F4840  boost::shared_ptr<Caver::ProfilePanelView>::shared_ptr<Caver::ProfilePanelView>(Caver::ProfilePanelView *)
 *   0x00000000001F5420  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>(Caver::GUIFrameView *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F6D30  std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000001F6E00  Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7430  Caver::GUIFrameView::GUIFrameView(void)
 *   0x00000000001F7690  boost::shared_ptr<Caver::GUIScrollView>::shared_ptr<Caver::GUIScrollView>(Caver::GUIScrollView *)
 *   0x00000000001F8440  Caver::ProfilesHeaderView::ProfilesHeaderView(void)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F8690  Caver::ProfileSelectionView::LoadProfiles(void)
 *   0x00000000001F9BE0  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *   0x00000000001F9DB0  Caver::PlayerProfile::PlayerProfile(void)
 *   0x00000000001FA830  Caver::UniqueIdentifier(void)
 *   0x00000000001FAE50  Caver::ProfileManager::sharedManager(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x00000000001FFFB0  std::__insertion_sort<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *   0x0000000000200570  boost::shared_ptr<Caver::ProfilesHeaderView>::shared_ptr<Caver::ProfilesHeaderView>(Caver::ProfilesHeaderView *)
 *   0x0000000000201490  boost::detail::shared_count::shared_count<Caver::PlayerProfile>(Caver::PlayerProfile *)
 *   0x0000000000201ED0  std::__introsort_loop<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *   0x0000000000201F20  boost::checked_array_delete<boost::shared_ptr<Caver::ProfilePanelView>>(boost::shared_ptr<Caver::ProfilePanelView> *)
 *   0x00000000002021A0  Caver::GUIScrollView::GUIScrollView(void)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x0000000000203B80  std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003A13FC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUITextField,Caver::GUITextField>(boost::shared_ptr<Caver::GUITextField> const*,Caver::GUITextField *)
 *   0x00000000003A23A0  Caver::ProfileSelectionView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 329
 *   insn=0x00000000003A1548 string=0x00000000003A154C "T"
 *   insn=0x00000000003A1558 string=0x00000000003A155C "y"
 *   insn=0x00000000003A155C string=0x00000000003A1560 "("
 *   insn=0x00000000003A1560 string=0x00000000003A1564 "\tC"
 *   insn=0x00000000003A1570 string=0x00000000003A1574 "\tA"
 *   insn=0x00000000003A1574 string=0x00000000003A1578 ""
 *   insn=0x00000000003A1578 string=0x00000000003A157C "i"
 *   insn=0x00000000003A157C string=0x00000000003A1580 "h~"
 *   insn=0x00000000003A1584 string=0x00000000003A1588 "B\"
 *   insn=0x00000000003A1588 string=0x00000000003A158C "h"
 *   insn=0x00000000003A1588 string=0x00000000001F8690 "0'"
 *   insn=0x00000000003A158C string=0x00000000003A1590 "AO"
 *   insn=0x00000000003A15A0 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003A15B0 string=0x00000000003A15C8 "BS"
 *   insn=0x00000000003A15C8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003A15CC string=0x00000000003A15D0 "u"
 *   insn=0x00000000003A15D4 string=0x00000000003A15D8 "5"
 *   insn=0x00000000003A15D8 string=0x00000000003A161C "hb"
 *   insn=0x00000000003A15DC string=0x00000000003A15E0 ""
 *   insn=0x00000000003A15EC string=0x00000000003A15F0 "\t@"
 *   insn=0x00000000003A15FC string=0x00000000003A1600 ""
 *   insn=0x00000000003A160C string=0x00000000003A1610 "@"
 *   insn=0x00000000003A1620 string=0x00000000003A1624 "?"
 *   insn=0x00000000003A1624 string=0x00000000003A1628 "u"
 *   insn=0x00000000003A1628 string=0x00000000003A162C "5"
 *   insn=0x00000000003A1630 string=0x00000000003A1634 ""
 *   insn=0x00000000003A1640 string=0x00000000003A1644 "\t@"
 *   insn=0x00000000003A1650 string=0x00000000003A1654 ""
 *   insn=0x00000000003A1660 string=0x00000000003A1664 "@"
 *   insn=0x00000000003A167C string=0x00000000003A1680 "3"
 *   insn=0x00000000003A16A4 string=0x00000000003A16A8 "W"
 *   insn=0x00000000003A16B4 string=0x00000000003A16B8 "`"
 *   insn=0x00000000003A16BC string=0x00000000003A16C0 ""
 *   insn=0x00000000003A16C0 string=0x00000000003A16C4 "=@"
 *   insn=0x00000000003A16D0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003A16E4 string=0x00000000003A16E8 "hRP"
 *   insn=0x00000000003A16E4 string=0x00000000001F7690 "0'"
 *   insn=0x00000000003A16F4 string=0x00000000003A16F8 "i""
 *   insn=0x00000000003A16FC string=0x00000000003A1700 "4"
 *   insn=0x00000000003A1700 string=0x00000000003A1744 "h"
 *   insn=0x00000000003A1704 string=0x00000000003A1708 ""
 *   insn=0x00000000003A1718 string=0x00000000003A171C "\t@"
 *   insn=0x00000000003A1724 string=0x00000000003A1728 ""
 *   insn=0x00000000003A1738 string=0x00000000003A173C "@"
 *   insn=0x00000000003A1744 string=0x00000000003A1748 "i"
 *   insn=0x00000000003A1748 string=0x00000000003A174C "1@"
 *   insn=0x00000000003A1750 string=0x00000000003A1754 "i"
 *   insn=0x00000000003A175C string=0x00000000003A1760 "*"
 *   insn=0x00000000003A1760 string=0x00000000003A1764 "J"
 *   insn=0x00000000003A1764 string=0x00000000003A1768 "*"
 *   insn=0x00000000003A1778 string=0x00000000003A177C "4"
 *   insn=0x00000000003A1780 string=0x00000000003A1784 ""
 *   insn=0x00000000003A1794 string=0x00000000003A1798 "\t@"
 *   insn=0x00000000003A17A0 string=0x00000000003A17A4 ""
 *   insn=0x00000000003A17B4 string=0x00000000003A17B8 "@"
 *   insn=0x00000000003A17CC string=0x00000000001F7430 "0'"
 *   insn=0x00000000003A17D8 string=0x00000000001F5420 "P'"
 *   insn=0x00000000003A17E4 string=0x00000000003A17E8 ""
 *   insn=0x00000000003A17E4 string=0x00000000001FAE50 "0'"
 *   insn=0x00000000003A17E8 string=0x00000000003A17EC "@"
 *   insn=0x00000000003A17FC string=0x00000000003A1800 "`"
 *   insn=0x00000000003A1808 string=0x00000000003A180C ""
 *   insn=0x00000000003A1810 string=0x00000000003A1814 """
 *   insn=0x00000000003A1814 string=0x00000000003A1818 "#"
 *   insn=0x00000000003A1818 string=0x00000000003A181C "c"
 *   insn=0x00000000003A181C string=0x00000000003A151C ""
 *   insn=0x00000000003A182C string=0x00000000003A1830 "K"
 *   insn=0x00000000003A1830 string=0x00000000003A1878 """
 *   insn=0x00000000003A1834 string=0x00000000003A1838 """
 *   insn=0x00000000003A1838 string=0x00000000003A183C "B"
 *   insn=0x00000000003A1850 string=0x00000000003A1854 "6"
 *   insn=0x00000000003A186C string=0x00000000003A1870 "a"
 *   insn=0x00000000003A1878 string=0x00000000003A187C "B"
 *   insn=0x00000000003A188C string=0x00000000003A1890 "TO"
 *   insn=0x00000000003A1898 string=0x00000000003A189C "Ea"
 *   insn=0x00000000003A189C string=0x00000000001F9DB0 "0'"
 *   insn=0x00000000003A18BC string=0x00000000003A18C0 "$"
 *   insn=0x00000000003A18CC string=0x00000000001FA830 "0'"
 *   insn=0x00000000003A18D8 string=0x00000000001F3450 "P'"
 *   insn=0x00000000003A18DC string=0x00000000003A18E0 ")"
 *   insn=0x00000000003A18E0 string=0x00000000003A18E4 ")"
 *   insn=0x00000000003A18EC string=0x00000000003A18F0 "!5"
 *   insn=0x00000000003A18F0 string=0x00000000003A1F94 "\t"
 *   insn=0x00000000003A18F4 string=0x00000000003A18F8 "?"
 *   insn=0x00000000003A1900 string=0x00000000003A1904 "("
 *   insn=0x00000000003A1908 string=0x00000000003A190C "("
 *   insn=0x00000000003A1910 string=0x00000000003A1914 "\t"
 *   insn=0x00000000003A1910 string=0x00000000003A1920 "(@"
 *   insn=0x00000000003A1914 string=0x00000000003A1918 ")"
 *   insn=0x00000000003A1918 string=0x00000000003A191C "\t"
 *   insn=0x00000000003A1934 string=0x00000000001F6D30 "0'"
 *   insn=0x00000000003A195C string=0x00000000003A1960 ""
 *   insn=0x00000000003A1964 string=0x00000000003A1968 " "
 *   insn=0x00000000003A1968 string=0x00000000003A196C "v"
 *   insn=0x00000000003A1970 string=0x00000000001F8570 "0'"
 *   insn=0x00000000003A197C string=0x00000000003A1990 "`"
 *   insn=0x00000000003A198C string=0x00000000001FBC40 "0'"
 *   insn=0x00000000003A1990 string=0x00000000003A1994 "t"
 *   insn=0x00000000003A1994 string=0x00000000003A1998 "b"
 *   insn=0x00000000003A1998 string=0x00000000003A199C "h"
 *   insn=0x00000000003A19A0 string=0x00000000003A19A4 "k"
 *   insn=0x00000000003A19AC string=0x00000000003A19B0 "x"
 *   insn=0x00000000003A19B0 string=0x00000000003A19B4 "y"
 *   insn=0x00000000003A19B8 string=0x00000000003A19BC "\tO"
 *   insn=0x00000000003A19C4 string=0x00000000003A19C8 ""I"
 *   insn=0x00000000003A19C8 string=0x00000000001F3E50 "P'"
 *   insn=0x00000000003A19D4 string=0x00000000003A19D8 "("
 *   insn=0x00000000003A19D4 string=0x00000000001F4840 "P'"
 *   insn=0x00000000003A19D8 string=0x00000000003A19DC "\t"
 *   insn=0x00000000003A19E4 string=0x00000000003A19E8 "\n"
 *   insn=0x00000000003A19F0 string=0x00000000003A19F4 "\t"
 *   insn=0x00000000003A19F8 string=0x00000000003A19FC "4"
 *   insn=0x00000000003A19FC string=0x00000000003A1A40 "h"
 *   insn=0x00000000003A1A00 string=0x00000000003A1A04 ""
 *   insn=0x00000000003A1A10 string=0x00000000003A1A14 "\t@"
 *   insn=0x00000000003A1A20 string=0x00000000003A1A24 ""
 *   insn=0x00000000003A1A30 string=0x00000000003A1A34 "@"
 *   insn=0x00000000003A1A50 string=0x00000000003A1A54 "SJ"
 *   insn=0x00000000003A1A54 string=0x00000000003A1A58 "h"
 *   insn=0x00000000003A1A54 string=0x00000000001F43A0 "P'"
 *   insn=0x00000000003A1A64 string=0x00000000003A1A68 "k"
 *   insn=0x00000000003A1A6C string=0x00000000003A1A70 ""
 *   insn=0x00000000003A1A78 string=0x00000000003A1A7C "h"
 *   insn=0x00000000003A1A80 string=0x00000000003A1A84 "\n"
 *   insn=0x00000000003A1A84 string=0x00000000003A1A88 "\t"
 *   insn=0x00000000003A1A88 string=0x00000000003A1A8C "K"
 *   insn=0x00000000003A1A8C string=0x00000000003A1A90 "(1@"
 *   insn=0x00000000003A1A94 string=0x00000000003A1A98 "I"
 *   insn=0x00000000003A1AA0 string=0x00000000003A1AA4 "*"
 *   insn=0x00000000003A1AA4 string=0x00000000003A1AA8 "J"
 *   insn=0x00000000003A1AA8 string=0x00000000003A1AAC "*"
 *   insn=0x00000000003A1AB8 string=0x00000000003A1ABC "4"
 *   insn=0x00000000003A1AC0 string=0x00000000003A1AC4 ""
 *   insn=0x00000000003A1AD0 string=0x00000000003A1AD4 "\t@"
 *   insn=0x00000000003A1AE0 string=0x00000000003A1AE4 ""
 *   insn=0x00000000003A1AF0 string=0x00000000003A1AF4 "@"
 *   insn=0x00000000003A1B1C string=0x00000000003A1B20 "HZ"
 *   insn=0x00000000003A1B20 string=0x00000000001F8440 "0'"
 *   insn=0x00000000003A1B2C string=0x00000000003A1B30 "hRR"
 *   insn=0x00000000003A1B3C string=0x00000000003A1B40 "i""
 *   insn=0x00000000003A1B44 string=0x00000000003A1B48 "4"
 *   insn=0x00000000003A1B48 string=0x00000000003A1B8C "h"
 *   insn=0x00000000003A1B4C string=0x00000000003A1B50 ""
 *   insn=0x00000000003A1B5C string=0x00000000003A1B60 "\t@"
 *   insn=0x00000000003A1B6C string=0x00000000003A1B70 ""
 *   insn=0x00000000003A1B7C string=0x00000000003A1B80 "@"
 *   insn=0x00000000003A1B9C string=0x00000000003A1BA0 "("
 *   insn=0x00000000003A1BA0 string=0x00000000003A1BA4 "%C"
 *   insn=0x00000000003A1BB4 string=0x00000000003A1BB8 "`"
 *   insn=0x00000000003A1BB4 string=0x00000000001F6B70 "0'"
 *   insn=0x00000000003A1BBC string=0x00000000003A1BC0 ""
 *   insn=0x00000000003A1BD0 string=0x00000000003A1BD4 "("
 *   insn=0x00000000003A1BD4 string=0x00000000003A1BD8 "]E"
 *   insn=0x00000000003A1BF0 string=0x00000000001F9BE0 "0'"
 *   insn=0x00000000003A1BF4 string=0x00000000003A1BF8 "h"
 *   insn=0x00000000003A1BF8 string=0x00000000003A1BFC "("
 *   insn=0x00000000003A1BFC string=0x00000000003A1C00 ""
 *   insn=0x00000000003A1C00 string=0x00000000003A1C04 ""
 *   insn=0x00000000003A1C0C string=0x00000000003A1C10 " !"
 *   insn=0x00000000003A1C24 string=0x00000000003A1C28 "i"
 *   insn=0x00000000003A1C28 string=0x00000000003A1C2C ""
 *   insn=0x00000000003A1C2C string=0x00000000003A1C30 "1@"
 *   insn=0x00000000003A1C34 string=0x00000000003A1C38 "i"
 *   insn=0x00000000003A1C40 string=0x00000000003A1C44 "*"
 *   insn=0x00000000003A1C44 string=0x00000000003A1C48 "J"
 *   insn=0x00000000003A1C48 string=0x00000000003A1C4C "*"
 *   insn=0x00000000003A1C58 string=0x00000000003A1C5C "4"
 *   insn=0x00000000003A1C60 string=0x00000000003A1C64 ""
 *   insn=0x00000000003A1C70 string=0x00000000003A1C74 "\t@"
 *   insn=0x00000000003A1C80 string=0x00000000003A1C84 ""
 *   insn=0x00000000003A1C90 string=0x00000000003A1C94 "@"
 *   insn=0x00000000003A1CA0 string=0x00000000003A1CA4 "h"
 *   insn=0x00000000003A1CAC string=0x00000000003A1CB0 ""
 *   insn=0x00000000003A1CB0 string=0x00000000003A1D30 "\t"
 *   insn=0x00000000003A1CB4 string=0x00000000003A1CB8 "*"
 *   insn=0x00000000003A1CB8 string=0x00000000003A1CBC "*QC"
 *   insn=0x00000000003A1CBC string=0x00000000003A1CC0 "K-H"
 *   insn=0x00000000003A1CC4 string=0x00000000003A1CC8 ""
 *   insn=0x00000000003A1CCC string=0x00000000003A1CD0 "\t"
 *   insn=0x00000000003A1CD0 string=0x00000000003A1CD4 ""
 *   insn=0x00000000003A1CD4 string=0x00000000003A1CD8 "h"
 *   insn=0x00000000003A1CEC string=0x00000000003A1CF0 " e"
 *   insn=0x00000000003A1CF0 string=0x00000000003A1CF4 "h"
 *   insn=0x00000000003A1CF4 string=0x00000000003A1CF8 "iv"
 *   insn=0x00000000003A1D08 string=0x00000000001F3C90 "P'"
 *   insn=0x00000000003A1D10 string=0x00000000003A1D14 ";T"
 *   insn=0x00000000003A1D14 string=0x00000000001F6E00 "0'"
 *   insn=0x00000000003A1D18 string=0x00000000003A1D1C "))+"
 *   insn=0x00000000003A1D2C string=0x00000000003A1D34 "`"
 *   insn=0x00000000003A1D34 string=0x00000000003A1D38 "Iu"
 *   insn=0x00000000003A1D38 string=0x00000000003A1D3C ""
 *   insn=0x00000000003A1D4C string=0x00000000003A1D50 "e"
 *   insn=0x00000000003A1D50 string=0x00000000003A1D54 "h"
 *   insn=0x00000000003A1D58 string=0x00000000003A1D5C ""
 *   insn=0x00000000003A1D70 string=0x00000000003A1D74 "#T"
 *   insn=0x00000000003A1D84 string=0x00000000003A1D88 "!(("
 *   insn=0x00000000003A1D88 string=0x00000000003A1D8C " 8 "
 *   insn=0x00000000003A1D90 string=0x00000000003A1D94 ""
 *   insn=0x00000000003A1D94 string=0x00000000003A1D98 "}@"
 *   insn=0x00000000003A1DA0 string=0x00000000003A1DA4 "`"
 *   insn=0x00000000003A1DA8 string=0x00000000003A1DAC ""
 *   insn=0x00000000003A1DAC string=0x00000000003A1DB0 "1@"
 *   insn=0x00000000003A1DB8 string=0x00000000003A1DBC "*"
 *   insn=0x00000000003A1DBC string=0x00000000003A1DC0 "J"
 *   insn=0x00000000003A1DC0 string=0x00000000003A1DC4 "*"
 *   insn=0x00000000003A1DD0 string=0x00000000003A1DD4 "4"
 *   insn=0x00000000003A1DD4 string=0x00000000003A1E18 "`"
 *   insn=0x00000000003A1DD8 string=0x00000000003A1DDC ""
 *   insn=0x00000000003A1DE8 string=0x00000000003A1DEC "\t@"
 *   insn=0x00000000003A1DF8 string=0x00000000003A1DFC ""
 *   insn=0x00000000003A1E08 string=0x00000000003A1E0C "@"
 *   insn=0x00000000003A1E1C string=0x00000000003A1E20 ""
 *   insn=0x00000000003A1E20 string=0x00000000003A1E24 "!"
 *   insn=0x00000000003A1E24 string=0x00000000003A1E28 ""
 *   insn=0x00000000003A1E2C string=0x00000000003A1E30 "h"
 *   insn=0x00000000003A1E34 string=0x00000000003A1E38 "\n"
 *   insn=0x00000000003A1E38 string=0x00000000003A1E3C "AEI"
 *   insn=0x00000000003A1E38 string=0x0000000000583944 "\n"
 *   insn=0x00000000003A1E3C string=0x00000000003A1E40 "\t"
 *   insn=0x00000000003A1E40 string=0x00000000003A1E44 "`"
 *   insn=0x00000000003A1E4C string=0x00000000003A1E50 "h"
 *   insn=0x00000000003A1E50 string=0x00000000003A1E54 "-@"
 *   insn=0x00000000003A1E60 string=0x00000000003A1E64 "3"
 *   insn=0x00000000003A1E64 string=0x00000000003A1E68 "h"
 *   insn=0x00000000003A1E68 string=0x00000000003A1E6C ""
 *   insn=0x00000000003A1E6C string=0x00000000003A1E70 "h"
 *   insn=0x00000000003A1E74 string=0x00000000003A1E78 "h"
 *   insn=0x00000000003A1E78 string=0x00000000003A1E7C "\t@"
 *   insn=0x00000000003A1E84 string=0x00000000003A1E88 "h\n@"
 *   insn=0x00000000003A1E88 string=0x00000000003A1E8C ""
 *   insn=0x00000000003A1E8C string=0x00000000003A1E90 "h\n"
 *   insn=0x00000000003A1E94 string=0x00000000003A1E98 "h"
 *   insn=0x00000000003A1E98 string=0x00000000003A1E9C "@"
 *   insn=0x00000000003A1EB0 string=0x00000000003A1EB4 "t"
 *   insn=0x00000000003A1EB0 string=0x00000000003A1F0C "s"
 *   insn=0x00000000003A1EB4 string=0x00000000003A1EB8 "4"
 *   insn=0x00000000003A1EB8 string=0x00000000003A1EFC "sB"
 *   insn=0x00000000003A1EBC string=0x00000000003A1EC0 ""
 *   insn=0x00000000003A1ECC string=0x00000000003A1ED0 "\t@"
 *   insn=0x00000000003A1EDC string=0x00000000003A1EE0 ""
 *   insn=0x00000000003A1EEC string=0x00000000003A1EF0 "@"
 *   insn=0x00000000003A1F14 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003A1F18 string=0x00000000003A1F1C "3"
 *   insn=0x00000000003A1F1C string=0x00000000003A1F20 "h"
 *   insn=0x00000000003A1F20 string=0x00000000003A1F24 ""
 *   insn=0x00000000003A1F24 string=0x00000000003A1F28 "h"
 *   insn=0x00000000003A1F2C string=0x00000000003A1F30 "h"
 *   insn=0x00000000003A1F34 string=0x00000000003A1F38 "\t@"
 *   insn=0x00000000003A1F3C string=0x00000000003A1F40 "h\n@"
 *   insn=0x00000000003A1F40 string=0x00000000003A1F44 ""
 *   insn=0x00000000003A1F44 string=0x00000000003A1F48 "h\n"
 *   insn=0x00000000003A1F4C string=0x00000000003A1F50 "h"
 *   insn=0x00000000003A1F54 string=0x00000000003A1F58 "@"
 *   insn=0x00000000003A1F68 string=0x00000000003A1F6C "a"
 *   insn=0x00000000003A1F94 string=0x00000000003A1F98 ")=G"
 *   insn=0x00000000003A1F98 string=0x00000000003A1F9C "!"
 *   insn=0x00000000003A1FA0 string=0x00000000003A1FA4 "\t"
 *   insn=0x00000000003A1FA0 string=0x00000000003A1FB8 "\t"
 *   insn=0x00000000003A1FA4 string=0x00000000003A1FA8 "*"
 *   insn=0x00000000003A1FA8 string=0x00000000003A1FAC "\n"
 *   insn=0x00000000003A1FB4 string=0x00000000003A1FC4 "?"
 *   insn=0x00000000003A1FB8 string=0x00000000003A1FBC "*"
 *   insn=0x00000000003A1FBC string=0x00000000003A1FC0 "\n"
 *   insn=0x00000000003A1FC4 string=0x00000000003A1FC8 "l"
 *   insn=0x00000000003A1FD0 string=0x00000000003A1FD4 "H"
 *   insn=0x00000000003A1FF4 string=0x00000000003A1FF8 ""
 *   insn=0x00000000003A1FFC string=0x00000000003A2000 "!"
 *   insn=0x00000000003A2004 string=0x00000000003A2008 "\t@"
 *   insn=0x00000000003A2014 string=0x00000000003A2018 ""
 *   insn=0x00000000003A201C string=0x00000000003A2020 "!"
 *   insn=0x00000000003A2024 string=0x00000000003A2028 "@"
 *   insn=0x00000000003A2048 string=0x00000000003A204C ""
 *   insn=0x00000000003A2058 string=0x00000000003A205C "\t@"
 *   insn=0x00000000003A2068 string=0x00000000003A206C ""
 *   insn=0x00000000003A2078 string=0x00000000003A207C "@"
 *   insn=0x00000000003A2094 string=0x00000000003A2098 "("
 *   insn=0x00000000003A2098 string=0x00000000003A209C ""
 *   insn=0x00000000003A209C string=0x00000000003A20A0 ""
 *   insn=0x00000000003A20A8 string=0x00000000003A20AC " !"
 *   insn=0x00000000003A20D8 string=0x00000000003A20DC "\n"
 *   insn=0x00000000003A20DC string=0x00000000003A20E0 "J"
 *   insn=0x00000000003A20E4 string=0x00000000003A20E8 "(a"
 *   insn=0x00000000003A20F0 string=0x00000000003A20F4 "\n"
 *   insn=0x00000000003A20F4 string=0x00000000003A20F8 "J=G"
 *   insn=0x00000000003A20F8 string=0x00000000003A20FC ")!"
 *   insn=0x00000000003A2100 string=0x00000000003A2104 "*"
 *   insn=0x00000000003A2100 string=0x00000000003A2118 "*"
 *   insn=0x00000000003A2104 string=0x00000000003A2108 "K"
 *   insn=0x00000000003A2108 string=0x00000000003A210C "+"
 *   insn=0x00000000003A2114 string=0x00000000003A2124 "_"
 *   insn=0x00000000003A2118 string=0x00000000003A211C "K"
 *   insn=0x00000000003A211C string=0x00000000003A2120 "+"
 *   insn=0x00000000003A2138 string=0x00000000003A213C "4"
 *   insn=0x00000000003A213C string=0x00000000003A2140 "p"
 *   insn=0x00000000003A214C string=0x00000000003A2150 "XT"
 *   insn=0x00000000003A2150 string=0x00000000003A2154 "k"
 *   insn=0x00000000003A2168 string=0x00000000003A216C ""
 *   insn=0x00000000003A2178 string=0x00000000003A217C "\t@"
 *   insn=0x00000000003A2188 string=0x00000000003A218C ""
 *   insn=0x00000000003A2198 string=0x00000000003A219C "@"
 *   insn=0x00000000003A21A4 string=0x00000000003A21A8 "7"
 *   insn=0x00000000003A21B0 string=0x00000000003A21B4 "?T"
 *   insn=0x00000000003A21C0 string=0x00000000003A21C4 "O"
 *   insn=0x00000000003A21CC string=0x00000000003A21D0 "L"
 *   insn=0x00000000003A21DC string=0x00000000003A21E0 "4"
 *   insn=0x00000000003A21E4 string=0x00000000003A21E8 ""
 *   insn=0x00000000003A21F4 string=0x00000000003A21F8 "\t@"
 *   insn=0x00000000003A2204 string=0x00000000003A2208 ""
 *   insn=0x00000000003A2214 string=0x00000000003A2218 "@"
 *   insn=0x00000000003A2220 string=0x00000000003A2224 " "
 *   insn=0x00000000003A222C string=0x00000000003A2230 "h"
 *   insn=0x00000000003A223C string=0x00000000003A2240 "4"
 *   insn=0x00000000003A2244 string=0x00000000003A2248 ""
 *   insn=0x00000000003A2254 string=0x00000000003A2258 "\t@"
 *   insn=0x00000000003A2264 string=0x00000000003A2268 ""
 *   insn=0x00000000003A2274 string=0x00000000003A2278 "@"
 *   insn=0x00000000003A2288 string=0x00000000003A228C "\n"
 *   insn=0x00000000003A2290 string=0x00000000003A2294 ""
 *   insn=0x00000000003A22B8 string=0x00000000003A22BC "4"
 *   insn=0x00000000003A22C0 string=0x00000000003A22C4 ""
 *   insn=0x00000000003A22D0 string=0x00000000003A22D4 "\t@"
 *   insn=0x00000000003A22E0 string=0x00000000003A22E4 ""
 *   insn=0x00000000003A22F0 string=0x00000000003A22F4 "@"
 *   insn=0x00000000003A230C string=0x00000000003A2310 "5"
 *   insn=0x00000000003A2314 string=0x00000000003A2318 ""
 *   insn=0x00000000003A2324 string=0x00000000003A2328 "\t@"
 *   insn=0x00000000003A2334 string=0x00000000003A2338 ""
 *   insn=0x00000000003A2344 string=0x00000000003A2348 "@"
 *   insn=0x00000000003A2380 string=0x00000000003A2384 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProfileSelectionView::ProfileSelectionView(Caver::ProfileSelectionView *this)
{
  __int64 v2; // x8
  _QWORD v4[3]; // [xsp+F0h] [xbp-38h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::GUIView(this);
  *((_QWORD *)this + 32) = 0;
  *((_QWORD *)this + 33) = 0;
  *((_QWORD *)this + 36) = 0;
  *((_QWORD *)this + 37) = 0;
  *((_QWORD *)this + 35) = 0;
  *(_QWORD *)this = off_6CE430;
  *((_QWORD *)this + 30) = off_6CE580;
  *((_QWORD *)this + 31) = 0;
  Caver::ProfileSelectionView::LoadProfiles(this);
  v2 = *(_QWORD *)(*((_QWORD *)this + 32) + 244LL);
  v4[0] = 0;
  v4[1] = v2;
  return Caver::GUIView::SetFrame(this, (const Caver::Rectangle *)v4);
}

