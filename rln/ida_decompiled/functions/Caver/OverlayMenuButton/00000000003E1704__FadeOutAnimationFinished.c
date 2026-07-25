/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E1704
 * Mangled: _ZN5Caver17OverlayMenuButton24FadeOutAnimationFinishedEPvPNS_8GUIEventE
 * Demangled: Caver::OverlayMenuButton::FadeOutAnimationFinished(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x00000000003E1EC0  Caver::OverlayMenuButton::FadeInAnimationFinished(void *,Caver::GUIEvent *)
 *
 * Callees: 16
 *   0x00000000001F4B70  Caver::GUIAnimation::GUIAnimation(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8090  Caver::GUIPropertyValue::ValueWithFloat(float)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x00000000001FABF0  boost::detail::shared_count::shared_count<Caver::GUIAnimation>(Caver::GUIAnimation *)
 *   0x0000000000200070  std::exception::~exception()
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x00000000002033A0  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(boost::function<void ()(void *,Caver::GUIEvent *)> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003E1EC0  Caver::OverlayMenuButton::FadeInAnimationFinished(void *,Caver::GUIEvent *)
 *   0x00000000003E2A5C  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OverlayMenuButton,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OverlayMenuButton*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 179
 *   insn=0x00000000003E1718 string=0x00000000003E171C "U"
 *   insn=0x00000000003E1728 string=0x00000000003E172C "h"
 *   insn=0x00000000003E172C string=0x00000000003E1730 "h""
 *   insn=0x00000000003E1738 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003E1740 string=0x00000000001F4B70 "P'"
 *   insn=0x00000000003E1750 string=0x00000000003E1754 "'e"
 *   insn=0x00000000003E1754 string=0x00000000001FABF0 "0'"
 *   insn=0x00000000003E1760 string=0x00000000003E1764 "{"
 *   insn=0x00000000003E1770 string=0x00000000003E1774 "("
 *   insn=0x00000000003E177C string=0x00000000003E1780 "DZ"
 *   insn=0x00000000003E1780 string=0x00000000001F8090 "0'"
 *   insn=0x00000000003E1790 string=0x00000000003E1794 "\n"
 *   insn=0x00000000003E1794 string=0x00000000003E1798 "J"
 *   insn=0x00000000003E1798 string=0x00000000003E179C "\n"
 *   insn=0x00000000003E17A4 string=0x00000000003E17A8 "4"
 *   insn=0x00000000003E17AC string=0x00000000003E17B0 ""
 *   insn=0x00000000003E17BC string=0x00000000003E17C0 "\t@"
 *   insn=0x00000000003E17CC string=0x00000000003E17D0 ""
 *   insn=0x00000000003E17DC string=0x00000000003E17E0 "@"
 *   insn=0x00000000003E17EC string=0x00000000003E17F0 "4"
 *   insn=0x00000000003E17F4 string=0x00000000003E17F8 ""
 *   insn=0x00000000003E1804 string=0x00000000003E1808 "\t@"
 *   insn=0x00000000003E1814 string=0x00000000003E1818 ""
 *   insn=0x00000000003E1824 string=0x00000000003E1828 "@"
 *   insn=0x00000000003E1850 string=0x00000000003E1854 "\n"
 *   insn=0x00000000003E1854 string=0x00000000003E1858 "J"
 *   insn=0x00000000003E1858 string=0x00000000003E185C "\n"
 *   insn=0x00000000003E1864 string=0x00000000003E1868 "4"
 *   insn=0x00000000003E186C string=0x00000000003E1870 ""
 *   insn=0x00000000003E187C string=0x00000000003E1880 "\t@"
 *   insn=0x00000000003E188C string=0x00000000003E1890 ""
 *   insn=0x00000000003E189C string=0x00000000003E18A0 "@"
 *   insn=0x00000000003E18AC string=0x00000000003E18B0 "4"
 *   insn=0x00000000003E18B4 string=0x00000000003E18B8 ""
 *   insn=0x00000000003E18C4 string=0x00000000003E18C8 "\t@"
 *   insn=0x00000000003E18D4 string=0x00000000003E18D8 ""
 *   insn=0x00000000003E18E4 string=0x00000000003E18E8 "@"
 *   insn=0x00000000003E18F4 string=0x00000000003E18F8 "H3"
 *   insn=0x00000000003E1908 string=0x00000000003E190C "t\n@"
 *   insn=0x00000000003E1910 string=0x00000000003E1BA4 "("
 *   insn=0x00000000003E1914 string=0x00000000003E1918 "h"
 *   insn=0x00000000003E1918 string=0x00000000003E191C ")"
 *   insn=0x00000000003E191C string=0x00000000003E1920 "w"
 *   insn=0x00000000003E1920 string=0x00000000003E1924 ")"
 *   insn=0x00000000003E1928 string=0x00000000003E192C "\t"
 *   insn=0x00000000003E1930 string=0x00000000003E1934 " "
 *   insn=0x00000000003E1948 string=0x00000000003E194C "`"
 *   insn=0x00000000003E1948 string=0x00000000001F6B70 "0'"
 *   insn=0x00000000003E1950 string=0x00000000003E1954 ""
 *   insn=0x00000000003E1964 string=0x00000000003E1968 "("
 *   insn=0x00000000003E1968 string=0x00000000003E196C ""
 *   insn=0x00000000003E1978 string=0x00000000003E197C ")"
 *   insn=0x00000000003E1984 string=0x00000000003E1988 "("
 *   insn=0x00000000003E198C string=0x00000000003E1990 "h"
 *   insn=0x00000000003E1990 string=0x00000000003E1994 ""
 *   insn=0x00000000003E1994 string=0x00000000003E1998 ""
 *   insn=0x00000000003E199C string=0x00000000003E19A0 " !"
 *   insn=0x00000000003E19A4 string=0x00000000003E19A8 "!a"
 *   insn=0x00000000003E19E0 string=0x00000000003E19E4 "@"
 *   insn=0x00000000003E19E4 string=0x00000000003E19E8 ""
 *   insn=0x00000000003E19E8 string=0x00000000003E19EC ""
 *   insn=0x00000000003E19F0 string=0x00000000003E19F4 "@"
 *   insn=0x00000000003E19F4 string=0x00000000003E19F8 ""
 *   insn=0x00000000003E19F8 string=0x00000000003E19FC ""
 *   insn=0x00000000003E1A00 string=0x00000000003E1A04 ""
 *   insn=0x00000000003E1A04 string=0x00000000003E1A08 "@"
 *   insn=0x00000000003E1A1C string=0x00000000003E1A20 "`"
 *   insn=0x00000000003E1A24 string=0x00000000003E1A28 "h"
 *   insn=0x00000000003E1A28 string=0x00000000003E1A2C "("
 *   insn=0x00000000003E1A2C string=0x00000000003E1A30 ""
 *   insn=0x00000000003E1A30 string=0x00000000003E1A34 ""
 *   insn=0x00000000003E1A3C string=0x00000000003E1A40 " a"
 *   insn=0x00000000003E1A58 string=0x00000000003E1A5C "@"
 *   insn=0x00000000003E1A5C string=0x00000000003E1A60 ""
 *   insn=0x00000000003E1A60 string=0x00000000003E1A64 ""
 *   insn=0x00000000003E1A68 string=0x00000000003E1A6C ""
 *   insn=0x00000000003E1A6C string=0x00000000003E1A70 "@"
 *   insn=0x00000000003E1A78 string=0x00000000003E1A7C "h"
 *   insn=0x00000000003E1A7C string=0x00000000003E1A80 "("
 *   insn=0x00000000003E1A80 string=0x00000000003E1A84 ""
 *   insn=0x00000000003E1A84 string=0x00000000003E1A88 ""
 *   insn=0x00000000003E1A90 string=0x00000000003E1A94 " !"
 *   insn=0x00000000003E1AA8 string=0x00000000003E1AAC ""
 *   insn=0x00000000003E1AB8 string=0x00000000003E1ABC "\t@"
 *   insn=0x00000000003E1AC8 string=0x00000000003E1ACC ""
 *   insn=0x00000000003E1AD8 string=0x00000000003E1ADC "@"
 *   insn=0x00000000003E1AE8 string=0x00000000003E1AEC ""
 *   insn=0x00000000003E1AF8 string=0x00000000003E1AFC "\t@"
 *   insn=0x00000000003E1B08 string=0x00000000003E1B0C ""
 *   insn=0x00000000003E1B18 string=0x00000000003E1B1C "@"
 *   insn=0x00000000003E1B30 string=0x00000000001F8A30 "0'"
 *   insn=0x00000000003E1B34 string=0x00000000003E1B38 "3"
 *   insn=0x00000000003E1B38 string=0x00000000003E1B3C "h"
 *   insn=0x00000000003E1B3C string=0x00000000003E1B40 ""
 *   insn=0x00000000003E1B40 string=0x00000000003E1B44 "h"
 *   insn=0x00000000003E1B48 string=0x00000000003E1B4C "h"
 *   insn=0x00000000003E1B50 string=0x00000000003E1B54 "\t@"
 *   insn=0x00000000003E1B58 string=0x00000000003E1B5C "h\n@"
 *   insn=0x00000000003E1B5C string=0x00000000003E1B60 ""
 *   insn=0x00000000003E1B60 string=0x00000000003E1B64 "h\n"
 *   insn=0x00000000003E1B68 string=0x00000000003E1B6C "h"
 *   insn=0x00000000003E1B70 string=0x00000000003E1B74 "@"
 *   insn=0x00000000003E1BA4 string=0x00000000003E1BA8 ""
 *   insn=0x00000000003E1BA8 string=0x00000000003E1BAC "A"
 *   insn=0x00000000003E1BB4 string=0x00000000003E1BB8 "rc"
 *   insn=0x00000000003E1BB8 string=0x00000000001FA980 "0'"
 *   insn=0x00000000003E1BBC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003E1BC4 string=0x00000000003E1BC8 "*y"
 *   insn=0x00000000003E1BD8 string=0x00000000003E1BDC "r"
 *   insn=0x00000000003E1BE4 string=0x00000000003E1BE8 "h"
 *   insn=0x00000000003E1BE8 string=0x00000000003E1BEC "\t\t@"
 *   insn=0x00000000003E1BEC string=0x00000000003E1BF0 ")"
 *   insn=0x00000000003E1BF0 string=0x00000000003E1BF4 "\t\t"
 *   insn=0x00000000003E1BF8 string=0x00000000003E1BFC "\t"
 *   insn=0x00000000003E1BFC string=0x00000000003E1C00 ")@"
 *   insn=0x00000000003E1C04 string=0x00000000003E1C08 " "
 *   insn=0x00000000003E1C08 string=0x00000000003E1C0C "Z"
 *   insn=0x00000000003E1C18 string=0x00000000003E1C1C ""
 *   insn=0x00000000003E1C1C string=0x00000000003E1C20 "a"
 *   insn=0x00000000003E1C1C string=0x00000000003E1D7C "("
 *   insn=0x00000000003E1C28 string=0x00000000003E1C2C "H\n"
 *   insn=0x00000000003E1C2C string=0x00000000003E1C30 "\t\t@"
 *   insn=0x00000000003E1C30 string=0x00000000003E1C34 ")"
 *   insn=0x00000000003E1C34 string=0x00000000003E1C38 "\t\t"
 *   insn=0x00000000003E1C3C string=0x00000000003E1C40 "\t"
 *   insn=0x00000000003E1C40 string=0x00000000003E1C44 ")@"
 *   insn=0x00000000003E1C48 string=0x00000000003E1C4C " "
 *   insn=0x00000000003E1C4C string=0x00000000003E1C50 "I"
 *   insn=0x00000000003E1C5C string=0x00000000003E1C60 "4"
 *   insn=0x00000000003E1C64 string=0x00000000003E1C68 ""
 *   insn=0x00000000003E1C74 string=0x00000000003E1C78 "\t@"
 *   insn=0x00000000003E1C84 string=0x00000000003E1C88 ""
 *   insn=0x00000000003E1C94 string=0x00000000003E1C98 "@"
 *   insn=0x00000000003E1CA0 string=0x00000000003E1CA4 "p"
 *   insn=0x00000000003E1CB4 string=0x00000000003E1CB8 ""
 *   insn=0x00000000003E1CBC string=0x00000000003E1CC0 "!"
 *   insn=0x00000000003E1CC4 string=0x00000000003E1CC8 "\t@"
 *   insn=0x00000000003E1CD4 string=0x00000000003E1CD8 ""
 *   insn=0x00000000003E1CDC string=0x00000000003E1CE0 "!"
 *   insn=0x00000000003E1CE4 string=0x00000000003E1CE8 "@"
 *   insn=0x00000000003E1CF0 string=0x00000000003E1CF4 "\"
 *   insn=0x00000000003E1CFC string=0x00000000003E1D00 "9"
 *   insn=0x00000000003E1D0C string=0x00000000003E1D10 "hU"
 *   insn=0x00000000003E1D10 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003E1D20 string=0x00000000003E1D24 "h"
 *   insn=0x00000000003E1D24 string=0x00000000003E1D28 "("
 *   insn=0x00000000003E1D28 string=0x00000000003E1D2C ""
 *   insn=0x00000000003E1D2C string=0x00000000003E1D30 ""
 *   insn=0x00000000003E1D38 string=0x00000000003E1D3C " a"
 *   insn=0x00000000003E1D54 string=0x00000000003E1D58 "@"
 *   insn=0x00000000003E1D58 string=0x00000000003E1D5C ""
 *   insn=0x00000000003E1D5C string=0x00000000003E1D60 ""
 *   insn=0x00000000003E1D64 string=0x00000000003E1D68 ""
 *   insn=0x00000000003E1D68 string=0x00000000003E1D6C "@"
 *   insn=0x00000000003E1D74 string=0x00000000003E1D78 "h"
 *   insn=0x00000000003E1D7C string=0x00000000003E1D80 ""
 *   insn=0x00000000003E1D80 string=0x00000000003E1D84 ""
 *   insn=0x00000000003E1D8C string=0x00000000003E1D90 " !"
 *   insn=0x00000000003E1DA4 string=0x00000000003E1DA8 ""
 *   insn=0x00000000003E1DB4 string=0x00000000003E1DB8 "\t@"
 *   insn=0x00000000003E1DC4 string=0x00000000003E1DC8 ""
 *   insn=0x00000000003E1DD4 string=0x00000000003E1DD8 "@"
 *   insn=0x00000000003E1DE4 string=0x00000000003E1DE8 ""
 *   insn=0x00000000003E1DF4 string=0x00000000003E1DF8 "\t@"
 *   insn=0x00000000003E1E04 string=0x00000000003E1E08 ""
 *   insn=0x00000000003E1E14 string=0x00000000003E1E18 "@"
 *   insn=0x00000000003E1E2C string=0x00000000003E1E30 "H"
 *   insn=0x00000000003E1E30 string=0x00000000003E1E34 "\t\t@"
 *   insn=0x00000000003E1E34 string=0x00000000003E1E38 ")"
 *   insn=0x00000000003E1E38 string=0x00000000003E1E3C "\t\t"
 *   insn=0x00000000003E1E40 string=0x00000000003E1E44 "\t"
 *   insn=0x00000000003E1E44 string=0x00000000003E1E48 ")@"
 *   insn=0x00000000003E1E4C string=0x00000000003E1E50 " "
 *   insn=0x00000000003E1E64 string=0x00000000003E1E68 "4"
 *   insn=0x00000000003E1E6C string=0x00000000003E1E70 ""
 *   insn=0x00000000003E1E7C string=0x00000000003E1E80 "\t@"
 *   insn=0x00000000003E1E8C string=0x00000000003E1E90 ""
 *   insn=0x00000000003E1E9C string=0x00000000003E1EA0 "@"
 *   insn=0x00000000003E1EB8 string=0x00000000003E1EBC "$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayMenuButton::FadeOutAnimationFinished(__int64 result)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 v3; // x22
  Caver::GUIPropertyValue *v4; // x0
  Caver::GUIPropertyValue *v5; // x0
  unsigned __int64 v6; // x8
  _QWORD *v7; // x9
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x22
  unsigned __int64 v15; // x8
  _QWORD *v16; // x9
  _QWORD *v17; // x20
  __int64 v18; // x8
  __int64 v19; // x8
  _QWORD *v20; // x20
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x22
  _QWORD *v24; // x20
  __int64 v25; // x8
  __int64 v26; // x23
  int64x2_t v27; // q0
  unsigned __int64 v28; // x8
  _QWORD *v29; // x24
  _QWORD *v30; // x0
  __int64 v31; // x8
  void (__fastcall *v32)(int64x2_t *, int64x2_t *, __int64); // x8
  _QWORD *v33; // x0
  __int64 v34; // x8
  void (__fastcall *v35)(int64x2_t *, int64x2_t *, __int64); // x8
  __int64 v36; // x8
  __int64 v37; // x8
  __int64 v38; // x8
  __int64 v39; // x8
  _QWORD *v40; // x19
  __int64 v41; // x8
  __int64 v42; // x8
  unsigned __int64 v43; // [xsp+0h] [xbp-B0h]
  int64x2_t v44; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v45; // [xsp+18h] [xbp-98h]
  __int64 v46; // [xsp+20h] [xbp-90h] BYREF
  _QWORD *v47; // [xsp+28h] [xbp-88h]
  unsigned __int64 v48; // [xsp+30h] [xbp-80h]
  int64x2_t v49; // [xsp+38h] [xbp-78h] BYREF
  __int64 v50; // [xsp+48h] [xbp-68h]
  __int64 v51; // [xsp+50h] [xbp-60h]
  _QWORD *v52; // [xsp+58h] [xbp-58h]
  int64x2_t v53; // [xsp+60h] [xbp-50h]
  __int64 v54; // [xsp+70h] [xbp-40h]
  __int64 v55; // [xsp+78h] [xbp-38h]

  v1 = result;
  v55 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*(_BYTE *)(result + 504) )
    return result;
  v2 = operator new(0xC0u);
  Caver::GUIAnimation::GUIAnimation((Caver::GUIAnimation *)v2);
  v51 = v2;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>();
  boost::detail::sp_enable_shared_from_this();
  v3 = v2;
  *(_DWORD *)(v2 + 48) = 1;
  v5 = (Caver::GUIPropertyValue *)Caver::GUIPropertyValue::ValueWithFloat(&v46, v4, 1.2);
  *(_DWORD *)(v2 + 112) = v46;
  v7 = v47;
  v6 = v48;
  if ( v48 )
    ++*(_QWORD *)(v48 + 8);
  v8 = *(_QWORD **)(v2 + 128);
  *(_QWORD *)(v3 + 120) = v7;
  *(_QWORD *)(v3 + 128) = v6;
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      v5 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        v5 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  v11 = (_QWORD *)v48;
  if ( v48 )
  {
    v12 = *(_QWORD *)(v48 + 8) - 1LL;
    *(_QWORD *)(v48 + 8) = v12;
    if ( !v12 )
    {
      v5 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        v5 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  v14 = v51;
  Caver::GUIPropertyValue::ValueWithFloat(&v46, v5, 1.0);
  *(_DWORD *)(v14 + 136) = v46;
  v16 = v47;
  v15 = v48;
  if ( v48 )
    ++*(_QWORD *)(v48 + 8);
  v17 = *(_QWORD **)(v14 + 152);
  *(_QWORD *)(v14 + 144) = v16;
  *(_QWORD *)(v14 + 152) = v15;
  if ( v17 )
  {
    v18 = v17[1] - 1LL;
    v17[1] = v18;
    if ( !v18 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
      v19 = v17[2] - 1LL;
      v17[2] = v19;
      if ( !v19 )
        (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
    }
  }
  v20 = (_QWORD *)v48;
  if ( v48 )
  {
    v21 = *(_QWORD *)(v48 + 8) - 1LL;
    *(_QWORD *)(v48 + 8) = v21;
    if ( !v21 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      v22 = v20[2] - 1LL;
      v20[2] = v22;
      if ( !v22 )
        (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
    }
  }
  v23 = v51;
  *(_DWORD *)(v51 + 92) = 1050253722;
  *(_BYTE *)(v23 + 184) = 1;
  v24 = *(_QWORD **)(v1 + 16);
  if ( !v24 || (v25 = v24[1]) == 0 )
  {
    v53.n128_u64[0] = (unsigned __int64)off_6CC4E8;
    boost::throw_exception<boost::bad_weak_ptr>();
  }
  v26 = *(_QWORD *)(v1 + 8);
  v27 = vdupq_n_s64(0);
  v27.n128_u64[0] = (unsigned __int64)Caver::OverlayMenuButton::FadeInAnimationFinished;
  v24[1] = v25 + 2;
  v53 = v27;
  v54 = v1;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v28 = 0;
  }
  else
  {
    v45 = v54;
    v44 = v53;
    v28 = (unsigned __int64)boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OverlayMenuButton,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OverlayMenuButton*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OverlayMenuButton,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OverlayMenuButton*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  v43 = v28;
  v46 = v26;
  v47 = v24;
  ++v24[2];
  v48 = 0;
  if ( !v28 )
    goto LABEL_31;
  v48 = v28;
  if ( (v28 & 1) != 0 )
  {
    v50 = v45;
    v49 = v44;
LABEL_31:
    v29 = v24;
    goto LABEL_32;
  }
  (*(void (__fastcall **)(int64x2_t *, int64x2_t *, _QWORD))(v28 & 0xFFFFFFFFFFFFFFFELL))(&v44, &v49, 0);
  v26 = v46;
  v29 = v47;
LABEL_32:
  v30 = *(_QWORD **)(v23 + 8);
  *(_QWORD *)v23 = v26;
  if ( v29 != v30 )
  {
    if ( v29 )
      ++v29[2];
    if ( v30 )
    {
      v31 = v30[2] - 1LL;
      v30[2] = v31;
      if ( !v31 )
        (*(void (__fastcall **)(_QWORD *))(*v30 + 24LL))(v30);
    }
    *(_QWORD *)(v23 + 8) = v29;
  }
  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=();
  if ( v48 )
  {
    if ( (v48 & 1) == 0 )
    {
      v32 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v48 & 0xFFFFFFFFFFFFFFFELL);
      if ( v32 )
        v32(&v49, &v49, 2);
    }
    v48 = 0;
  }
  v33 = v47;
  if ( v47 )
  {
    v34 = v47[2] - 1LL;
    v47[2] = v34;
    if ( !v34 )
      (*(void (__fastcall **)(_QWORD *))(*v33 + 24LL))(v33);
  }
  if ( v43 )
  {
    if ( (v43 & 1) == 0 )
    {
      v35 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v43 & 0xFFFFFFFFFFFFFFFELL);
      if ( v35 )
        v35(&v44, &v44, 2);
    }
  }
  v36 = v24[1] - 1LL;
  v24[1] = v36;
  if ( !v36 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
    v37 = v24[2] - 1LL;
    v24[2] = v37;
    if ( !v37 )
      (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
  }
  v38 = v24[1] - 1LL;
  v24[1] = v38;
  if ( !v38 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
    v39 = v24[2] - 1LL;
    v24[2] = v39;
    if ( !v39 )
      (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
  }
  result = Caver::GUIView::AddAnimation();
  v40 = v52;
  if ( v52 )
  {
    v41 = v52[1] - 1LL;
    v52[1] = v41;
    if ( !v41 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v40 + 16LL))(v40);
      v42 = v40[2] - 1LL;
      v40[2] = v42;
      if ( !v42 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v40 + 24LL))(v40);
    }
  }
  return result;
}

