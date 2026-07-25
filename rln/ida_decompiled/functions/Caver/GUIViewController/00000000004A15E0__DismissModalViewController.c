/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A15E0
 * Mangled: _ZN5Caver17GUIViewController26DismissModalViewControllerEv
 * Demangled: Caver::GUIViewController::DismissModalViewController(void)
 *
 * Callers: 1
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *   0x00000000001F8750  Caver::GUIView::DismissModalView(Caver::GUIView*)
 *   0x00000000001FCA30  Caver::GUIView::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 137
 *   insn=0x00000000004A15F4 string=0x00000000004A15F8 "@\n"
 *   insn=0x00000000004A15F8 string=0x00000000004A15FC ""
 *   insn=0x00000000004A15FC string=0x00000000004A1600 "!@"
 *   insn=0x00000000004A1614 string=0x00000000004A1618 "@"
 *   insn=0x00000000004A1628 string=0x00000000004A162C "h"
 *   insn=0x00000000004A162C string=0x00000000004A1630 ""
 *   insn=0x00000000004A1630 string=0x00000000004A1634 "h"
 *   insn=0x00000000004A1644 string=0x00000000004A1648 "@"
 *   insn=0x00000000004A1660 string=0x00000000004A1664 ""
 *   insn=0x00000000004A166C string=0x00000000004A1670 "8\"
 *   insn=0x00000000004A1670 string=0x00000000004A1674 "5"
 *   insn=0x00000000004A1670 string=0x00000000001F8750 "0'"
 *   insn=0x00000000004A1674 string=0x00000000004A16B8 "3"
 *   insn=0x00000000004A1678 string=0x00000000004A167C ""
 *   insn=0x00000000004A1688 string=0x00000000004A168C "\t@"
 *   insn=0x00000000004A1698 string=0x00000000004A169C ""
 *   insn=0x00000000004A16A8 string=0x00000000004A16AC "@"
 *   insn=0x00000000004A16B8 string=0x00000000004A16BC "h"
 *   insn=0x00000000004A16BC string=0x00000000004A16C0 ""
 *   insn=0x00000000004A16C0 string=0x00000000004A16C4 "h"
 *   insn=0x00000000004A16C8 string=0x00000000004A16CC "h"
 *   insn=0x00000000004A16D0 string=0x00000000004A16D4 "\t@"
 *   insn=0x00000000004A16D8 string=0x00000000004A16DC "h\n@"
 *   insn=0x00000000004A16DC string=0x00000000004A16E0 ""
 *   insn=0x00000000004A16E0 string=0x00000000004A16E4 "h\n"
 *   insn=0x00000000004A16E8 string=0x00000000004A16EC "h"
 *   insn=0x00000000004A16F0 string=0x00000000004A16F4 "@"
 *   insn=0x00000000004A170C string=0x00000000004A1710 "h"
 *   insn=0x00000000004A1710 string=0x00000000004A1714 ""
 *   insn=0x00000000004A1714 string=0x00000000004A1718 "h"
 *   insn=0x00000000004A1718 string=0x00000000004A171C "!"
 *   insn=0x00000000004A171C string=0x00000000004A1720 "h"
 *   insn=0x00000000004A1724 string=0x00000000004A1728 "\t@"
 *   insn=0x00000000004A172C string=0x00000000004A1730 "h\n@"
 *   insn=0x00000000004A1730 string=0x00000000004A1734 ""
 *   insn=0x00000000004A1734 string=0x00000000004A1738 "h\n"
 *   insn=0x00000000004A173C string=0x00000000004A1750 "h"
 *   insn=0x00000000004A1764 string=0x00000000004A1768 " "
 *   insn=0x00000000004A1770 string=0x00000000004A1774 "$"
 *   insn=0x00000000004A1770 string=0x00000000004A17C4 "h"
 *   insn=0x00000000004A1778 string=0x00000000004A177C "5"
 *   insn=0x00000000004A177C string=0x00000000004A17C0 "3"
 *   insn=0x00000000004A1780 string=0x00000000004A1784 ""
 *   insn=0x00000000004A1790 string=0x00000000004A1794 "\t@"
 *   insn=0x00000000004A17A0 string=0x00000000004A17A4 ""
 *   insn=0x00000000004A17B0 string=0x00000000004A17B4 "@"
 *   insn=0x00000000004A17C4 string=0x00000000004A17C8 ""
 *   insn=0x00000000004A17C8 string=0x00000000004A17CC "h"
 *   insn=0x00000000004A17D0 string=0x00000000004A17D4 "h"
 *   insn=0x00000000004A17D4 string=0x00000000004A17D8 "\t@"
 *   insn=0x00000000004A17E0 string=0x00000000004A17E4 "h\n@"
 *   insn=0x00000000004A17E4 string=0x00000000004A17E8 ""
 *   insn=0x00000000004A17E8 string=0x00000000004A17EC "h\n"
 *   insn=0x00000000004A17F0 string=0x00000000004A17F4 "h"
 *   insn=0x00000000004A17F4 string=0x00000000004A17F8 "@"
 *   insn=0x00000000004A1804 string=0x00000000004A1808 "/"
 *   insn=0x00000000004A182C string=0x00000000004A1830 "h"
 *   insn=0x00000000004A182C string=0x00000000004A183C ""
 *   insn=0x00000000004A1830 string=0x00000000004A1834 ""
 *   insn=0x00000000004A1834 string=0x00000000004A1838 "h"
 *   insn=0x00000000004A183C string=0x00000000004A1840 "%@"
 *   insn=0x00000000004A1848 string=0x00000000004A184C "h"
 *   insn=0x00000000004A184C string=0x00000000004A1850 ""
 *   insn=0x00000000004A1850 string=0x00000000004A1854 "h"
 *   insn=0x00000000004A1854 string=0x00000000004A1858 "!"
 *   insn=0x00000000004A1858 string=0x00000000004A185C "h"
 *   insn=0x00000000004A1860 string=0x00000000004A1864 "\t@"
 *   insn=0x00000000004A1868 string=0x00000000004A186C "h\n@"
 *   insn=0x00000000004A186C string=0x00000000004A1870 ""
 *   insn=0x00000000004A1870 string=0x00000000004A1874 "h\n"
 *   insn=0x00000000004A1878 string=0x00000000004A1888 "h"
 *   insn=0x00000000004A1898 string=0x00000000004A189C " "
 *   insn=0x00000000004A18A0 string=0x00000000004A18A4 "3"
 *   insn=0x00000000004A18A4 string=0x00000000004A18A8 "h"
 *   insn=0x00000000004A18A8 string=0x00000000004A18AC ""
 *   insn=0x00000000004A18AC string=0x00000000004A18B0 "h"
 *   insn=0x00000000004A18B4 string=0x00000000004A18B8 "h"
 *   insn=0x00000000004A18B8 string=0x00000000004A18BC "\t@"
 *   insn=0x00000000004A18C4 string=0x00000000004A18C8 "h\n@"
 *   insn=0x00000000004A18C8 string=0x00000000004A18CC ""
 *   insn=0x00000000004A18CC string=0x00000000004A18D0 "h\n"
 *   insn=0x00000000004A18D4 string=0x00000000004A18D8 "h"
 *   insn=0x00000000004A18D8 string=0x00000000004A18DC "@"
 *   insn=0x00000000004A1908 string=0x00000000004A190C "W"
 *   insn=0x00000000004A1920 string=0x00000000004A1924 "h"
 *   insn=0x00000000004A1924 string=0x00000000004A1930 "i"@"
 *   insn=0x00000000004A192C string=0x00000000001F7010 "0'"
 *   insn=0x00000000004A1934 string=0x00000000004A1938 "\n"
 *   insn=0x00000000004A1938 string=0x00000000004A193C "J"
 *   insn=0x00000000004A193C string=0x00000000004A1940 "\n"
 *   insn=0x00000000004A1950 string=0x00000000004A1954 ""
 *   insn=0x00000000004A1958 string=0x00000000004A195C "!"
 *   insn=0x00000000004A1964 string=0x00000000004A1968 "\t@"
 *   insn=0x00000000004A1970 string=0x00000000004A1974 ""
 *   insn=0x00000000004A1980 string=0x00000000004A1984 "6"
 *   insn=0x00000000004A198C string=0x00000000004A1A04 "6\t"
 *   insn=0x00000000004A199C string=0x00000000004A19A0 "\t@"
 *   insn=0x00000000004A19A8 string=0x00000000004A19AC ""
 *   insn=0x00000000004A19BC string=0x00000000004A19C0 "@"
 *   insn=0x00000000004A19C8 string=0x00000000004A19CC "W"
 *   insn=0x00000000004A19D4 string=0x00000000004A19D8 "@"
 *   insn=0x00000000004A19E0 string=0x00000000004A19E4 "6"
 *   insn=0x00000000004A19EC string=0x00000000004A19F0 "@"
 *   insn=0x00000000004A1A1C string=0x00000000004A1A20 "@"
 *   insn=0x00000000004A1A30 string=0x00000000004A1A40 "v"
 *   insn=0x00000000004A1A34 string=0x00000000004A1A38 ""
 *   insn=0x00000000004A1A4C string=0x00000000004A1A50 "@"
 *   insn=0x00000000004A1A6C string=0x00000000004A1A70 "\t"
 *   insn=0x00000000004A1A70 string=0x00000000004A1A74 ")"
 *   insn=0x00000000004A1A74 string=0x00000000004A1A78 "\t"
 *   insn=0x00000000004A1A88 string=0x00000000001FCA30 "0'"
 *   insn=0x00000000004A1A8C string=0x00000000004A1A90 "5"
 *   insn=0x00000000004A1A90 string=0x00000000004A1AD4 "4"
 *   insn=0x00000000004A1A94 string=0x00000000004A1A98 ""
 *   insn=0x00000000004A1AA4 string=0x00000000004A1AA8 "\t@"
 *   insn=0x00000000004A1AB4 string=0x00000000004A1AB8 ""
 *   insn=0x00000000004A1AC4 string=0x00000000004A1AC8 "@"
 *   insn=0x00000000004A1AD4 string=0x00000000004A1B18 "`"
 *   insn=0x00000000004A1AD8 string=0x00000000004A1ADC ""
 *   insn=0x00000000004A1AEC string=0x00000000004A1AF0 "\t@"
 *   insn=0x00000000004A1AF8 string=0x00000000004A1AFC ""
 *   insn=0x00000000004A1B0C string=0x00000000004A1B10 "@"
 *   insn=0x00000000004A1B18 string=0x00000000004A1B1C ""
 *   insn=0x00000000004A1B1C string=0x00000000004A1B20 ""
 *   insn=0x00000000004A1B50 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004A1B58 string=0x00000000004A1B5C "%"
 *   insn=0x00000000004A1B64 string=0x00000000004A1B68 "5"
 *   insn=0x00000000004A1B68 string=0x00000000004A1BAC "4"
 *   insn=0x00000000004A1B6C string=0x00000000004A1B70 ""
 *   insn=0x00000000004A1B7C string=0x00000000004A1B80 "\t@"
 *   insn=0x00000000004A1B8C string=0x00000000004A1B90 ""
 *   insn=0x00000000004A1B9C string=0x00000000004A1BA0 "@"
 *   insn=0x00000000004A1BB0 string=0x00000000004A1BB4 ""
 *   insn=0x00000000004A1BC0 string=0x00000000004A1BC4 "\t@"
 *   insn=0x00000000004A1BD0 string=0x00000000004A1BD4 ""
 *   insn=0x00000000004A1BE0 string=0x00000000004A1BE4 "@"
 *   insn=0x00000000004A1BF0 string=0x00000000004A1BF4 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIViewController::DismissModalViewController(Caver::GUIViewController *this)
{
  __int64 v2; // x0
  _QWORD *v3; // x19
  _QWORD *v4; // x21
  _QWORD *v5; // x21
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x8

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
    if ( !*((_QWORD *)this + 3) )
      (*(void (__fastcall **)(Caver::GUIViewController *))(*(_QWORD *)this + 24LL))(this);
    v3 = (_QWORD *)*((_QWORD *)this + 4);
    if ( v3 )
      ++v3[1];
    v4 = (_QWORD *)*((_QWORD *)this + 6);
    if ( !v4[3] )
      (*(void (__fastcall **)(_QWORD))(*v4 + 24LL))(*((_QWORD *)this + 6));
    v5 = (_QWORD *)v4[4];
    if ( v5 )
      ++v5[1];
    Caver::GUIView::DismissModalView();
    if ( v5 )
    {
      v6 = v5[1] - 1LL;
      v5[1] = v6;
      if ( !v6 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v7 = v5[2] - 1LL;
        v5[2] = v7;
        if ( !v7 )
          (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
    if ( v3 )
    {
      v8 = v3[1] - 1LL;
      v3[1] = v8;
      if ( !v8 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
        v9 = v3[2] - 1LL;
        v3[2] = v9;
        if ( !v9 )
          (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
      }
    }
    *(_QWORD *)(*((_QWORD *)this + 6) + 40LL) = 0;
    v10 = (_QWORD *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 6) = 0;
    *((_QWORD *)this + 7) = 0;
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
}

