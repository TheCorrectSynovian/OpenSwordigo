/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D7578
 * Mangled: _ZN5Caver15GameOverlayView16LayoutForSubviewERKSsPNS_7GUIViewE
 * Demangled: Caver::GameOverlayView::LayoutForSubview(std::string const&,Caver::GUIView *)
 *
 * Callers: 1
 *   0x00000000001FE4B0  Caver::GameOverlayView::LayoutForSubview(std::string const&,Caver::GUIView *)
 *
 * Callees: 20
 *   0x00000000001F4E60  Caver::GameOverlayView::LayoutBoundsForSubview(std::string const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5FC0  Caver::GUIViewLayout::GUIViewLayout(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC260  Caver::GUIViewLayout::SubviewWithIdentifier(std::string const&)
 *   0x00000000001FE470  boost::detail::shared_count::shared_count<Caver::GUIViewLayout>(Caver::GUIViewLayout *)
 *   0x00000000001FE4B0  Caver::GameOverlayView::LayoutForSubview(std::string const&,Caver::GUIView *)
 *   0x00000000001FEA40  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_copy(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>> const*,std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>*)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000203420  Caver::GUIViewLayout::LayoutForViewWithFrameInBounds(Caver::Rectangle const&,Caver::Rectangle const&,float)
 *   0x0000000000203BA0  Caver::GUIViewLayout::AddSubview(boost::shared_ptr<Caver::GUIViewLayout> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C640  sub_54C640
 *   0x0000000000565294  sub_565294
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 122
 *   insn=0x00000000003D758C string=0x00000000003D7590 "W"
 *   insn=0x00000000003D75B0 string=0x00000000003D75B4 "+"
 *   insn=0x00000000003D75B4 string=0x00000000001FC260 "0'"
 *   insn=0x00000000003D75C0 string=0x00000000003D75C4 "'v"
 *   insn=0x00000000003D75C4 string=0x00000000001F4E60 "P'"
 *   insn=0x00000000003D75CC string=0x00000000003D75D0 "h"
 *   insn=0x00000000003D75E8 string=0x00000000003D75EC "`"
 *   insn=0x00000000003D75F0 string=0x00000000003D75F4 "-L"
 *   insn=0x00000000003D75F8 string=0x00000000003D75FC "3"
 *   insn=0x00000000003D75FC string=0x00000000003D7600 "h"
 *   insn=0x00000000003D7600 string=0x00000000003D7604 ""
 *   insn=0x00000000003D7604 string=0x00000000003D7608 "h"
 *   insn=0x00000000003D760C string=0x00000000003D7610 "h"
 *   insn=0x00000000003D7614 string=0x00000000003D7618 "\t@"
 *   insn=0x00000000003D761C string=0x00000000003D7620 "h\n@"
 *   insn=0x00000000003D7620 string=0x00000000003D7624 ""
 *   insn=0x00000000003D7624 string=0x00000000003D7628 "h\n"
 *   insn=0x00000000003D762C string=0x00000000003D7630 "h"
 *   insn=0x00000000003D7634 string=0x00000000003D7638 "@"
 *   insn=0x00000000003D7668 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003D7670 string=0x00000000003D7674 "t"
 *   insn=0x00000000003D7678 string=0x00000000003D767C ""
 *   insn=0x00000000003D7688 string=0x00000000003D768C "\t@"
 *   insn=0x00000000003D7698 string=0x00000000003D769C ""
 *   insn=0x00000000003D76A8 string=0x00000000003D76AC "@"
 *   insn=0x00000000003D76C0 string=0x00000000003D76C4 "4"
 *   insn=0x00000000003D76C8 string=0x00000000003D76CC ""
 *   insn=0x00000000003D76D8 string=0x00000000003D76DC "\t@"
 *   insn=0x00000000003D76E8 string=0x00000000003D76EC ""
 *   insn=0x00000000003D76F8 string=0x00000000003D76FC "@"
 *   insn=0x00000000003D7708 string=0x00000000003D770C "n"
 *   insn=0x00000000003D7728 string=0x00000000003D772C "W"
 *   insn=0x00000000003D7744 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003D774C string=0x00000000001F5FC0 "P'"
 *   insn=0x00000000003D7758 string=0x00000000003D775C "E"
 *   insn=0x00000000003D7768 string=0x00000000003D776C "y"
 *   insn=0x00000000003D777C string=0x00000000003D7780 """
 *   insn=0x00000000003D777C string=0x00000000003D7798 "v"
 *   insn=0x00000000003D77A8 string=0x00000000003D77AC "A"
 *   insn=0x00000000003D77BC string=0x00000000003D77C0 "6"
 *   insn=0x00000000003D77C4 string=0x00000000003D77C8 ""
 *   insn=0x00000000003D77D4 string=0x00000000003D77D8 "\t@"
 *   insn=0x00000000003D77E4 string=0x00000000003D77E8 ""
 *   insn=0x00000000003D77F4 string=0x00000000003D77F8 "@"
 *   insn=0x00000000003D783C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003D7840 string=0x00000000003D7844 " "
 *   insn=0x00000000003D784C string=0x00000000003D7850 "5"
 *   insn=0x00000000003D7850 string=0x00000000003D7894 "s"
 *   insn=0x00000000003D7854 string=0x00000000003D7858 ""
 *   insn=0x00000000003D7864 string=0x00000000003D7868 "\t@"
 *   insn=0x00000000003D7874 string=0x00000000003D7878 ""
 *   insn=0x00000000003D7884 string=0x00000000003D7888 "@"
 *   insn=0x00000000003D7898 string=0x00000000003D78AC "h"
 *   insn=0x00000000003D78A0 string=0x00000000003D78A4 "s"
 *   insn=0x00000000003D78A4 string=0x00000000003D78A8 "3"
 *   insn=0x00000000003D78AC string=0x00000000003D78B0 ""
 *   insn=0x00000000003D78B0 string=0x00000000003D78B4 "h"
 *   insn=0x00000000003D78B8 string=0x00000000003D78BC "h"
 *   insn=0x00000000003D78BC string=0x00000000003D78C0 "\t@"
 *   insn=0x00000000003D78C8 string=0x00000000003D78CC "h\n@"
 *   insn=0x00000000003D78CC string=0x00000000003D78D0 ""
 *   insn=0x00000000003D78D0 string=0x00000000003D78D4 "h\n"
 *   insn=0x00000000003D78D8 string=0x00000000003D78DC "h"
 *   insn=0x00000000003D78DC string=0x00000000003D78E0 "@"
 *   insn=0x00000000003D790C string=0x00000000003D7910 "V"
 *   insn=0x00000000003D7934 string=0x00000000003D7938 " "
 *   insn=0x00000000003D7940 string=0x00000000003D7950 ""
 *   insn=0x00000000003D7944 string=0x00000000003D7948 "h"
 *   insn=0x00000000003D7948 string=0x00000000003D794C "%w"
 *   insn=0x00000000003D7950 string=0x00000000003D7954 "`"
 *   insn=0x00000000003D7954 string=0x00000000003D7958 "h"
 *   insn=0x00000000003D795C string=0x00000000003D7960 "?"
 *   insn=0x00000000003D7964 string=0x00000000003D7968 "*A"
 *   insn=0x00000000003D7970 string=0x00000000003D7974 ""
 *   insn=0x00000000003D7978 string=0x00000000003D797C ""
 *   insn=0x00000000003D7984 string=0x00000000003D7994 "A"
 *   insn=0x00000000003D79A0 string=0x00000000003D79A4 "H"
 *   insn=0x00000000003D79A4 string=0x00000000003D79A8 ""
 *   insn=0x00000000003D79A8 string=0x00000000003D79AC ""
 *   insn=0x00000000003D79B4 string=0x00000000003D79B8 "_"
 *   insn=0x00000000003D79B8 string=0x00000000003D79BC "@"
 *   insn=0x00000000003D79BC string=0x00000000003D79C0 "_"
 *   insn=0x00000000003D79C0 string=0x00000000003D79C4 "B"
 *   insn=0x00000000003D79CC string=0x00000000003D79D0 "`"
 *   insn=0x00000000003D79D0 string=0x00000000003D79D4 ""
 *   insn=0x00000000003D79D8 string=0x00000000003D79DC "`"
 *   insn=0x00000000003D79E0 string=0x00000000003D79E4 "\t\t@"
 *   insn=0x00000000003D79E8 string=0x00000000003D79EC "h"
 *   insn=0x00000000003D79F8 string=0x00000000003D79FC "h""
 *   insn=0x00000000003D7A00 string=0x00000000003D7A04 "h&"
 *   insn=0x00000000003D7A08 string=0x00000000003D7A0C "hb"
 *   insn=0x00000000003D7A10 string=0x00000000003D7A14 "`"
 *   insn=0x00000000003D7A18 string=0x00000000003D7A1C "hB"
 *   insn=0x00000000003D7A20 string=0x00000000003D7A24 "hn"
 *   insn=0x00000000003D7A34 string=0x00000000003D7A50 " z"
 *   insn=0x00000000003D7A58 string=0x00000000003D7A5C "u"
 *   insn=0x00000000003D7A6C string=0x00000000003D7A70 "6"
 *   insn=0x00000000003D7A74 string=0x00000000003D7A78 ""
 *   insn=0x00000000003D7A84 string=0x00000000003D7A88 "\t@"
 *   insn=0x00000000003D7A94 string=0x00000000003D7A98 ""
 *   insn=0x00000000003D7AA4 string=0x00000000003D7AA8 "@"
 *   insn=0x00000000003D7AC8 string=0x00000000003D7AFC "h"
 *   insn=0x00000000003D7AD0 string=0x00000000003D7AD4 "\n"
 *   insn=0x00000000003D7ADC string=0x00000000003D7AE0 ""
 *   insn=0x00000000003D7AE0 string=0x00000000003D7AE4 "h"
 *   insn=0x00000000003D7AFC string=0x00000000003D7B00 "i"
 *   insn=0x00000000003D7B00 string=0x00000000003D7B04 ")"
 *   insn=0x00000000003D7B10 string=0x00000000003D7B14 "i"
 *   insn=0x00000000003D7B14 string=0x00000000003D7B18 ")=G"
 *   insn=0x00000000003D7B18 string=0x00000000003D7B1C "!"
 *   insn=0x00000000003D7B1C string=0x00000000003D7B20 "i"
 *   insn=0x00000000003D7B20 string=0x00000000003D7B24 "\t"
 *   insn=0x00000000003D7B20 string=0x00000000003D7B4C "\t"
 *   insn=0x00000000003D7B24 string=0x00000000003D7B28 "*"
 *   insn=0x00000000003D7B28 string=0x00000000003D7B2C "\n"
 *   insn=0x00000000003D7B30 string=0x00000000003D7B34 "?"
 *   insn=0x00000000003D7B34 string=0x00000000003D7B38 "l"
 *   insn=0x00000000003D7B44 string=0x00000000003D7B48 "_"
 *   insn=0x00000000003D7B4C string=0x00000000003D7B50 "*"
 *   insn=0x00000000003D7B50 string=0x00000000003D7B54 "\n"
 *   insn=0x00000000003D7B54 string=0x00000000003D7B58 "?"
 *   insn=0x00000000003D7B58 string=0x00000000003D7B5C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::GameOverlayView::LayoutForSubview@<X0>(
        int a1@<W0>,
        int a2@<W1>,
        __int64 a3@<X2>,
        _QWORD *a4@<X8>)
{
  const Caver::Rectangle *v8; // x2
  float v9; // s0
  __int64 result; // x0
  _QWORD *v11; // x19
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14[2]; // [xsp+C0h] [xbp-58h] BYREF
  __int64 v15; // [xsp+D0h] [xbp-48h]
  _QWORD *v16; // [xsp+D8h] [xbp-40h]
  __int64 v17; // [xsp+E0h] [xbp-38h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIViewLayout::SubviewWithIdentifier();
  Caver::GameOverlayView::LayoutBoundsForSubview(v14, a1, a2);
  if ( v15 )
    v9 = *(float *)(v15 + 108);
  else
    v9 = 1.0;
  Caver::GUIViewLayout::LayoutForViewWithFrameInBounds(
    (Caver::GUIViewLayout *)(a3 + 116),
    (const Caver::Rectangle *)v14,
    v8,
    v9);
  result = sub_56A6A8(*a4);
  v11 = v16;
  if ( v16 )
  {
    v12 = v16[1] - 1LL;
    v16[1] = v12;
    if ( !v12 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  return result;
}

