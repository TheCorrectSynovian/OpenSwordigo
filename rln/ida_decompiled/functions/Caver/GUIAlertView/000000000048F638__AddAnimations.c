/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048F638
 * Mangled: _ZN5Caver12GUIAlertView13AddAnimationsEb
 * Demangled: Caver::GUIAlertView::AddAnimations(bool)
 *
 * Callers: 2
 *   0x00000000001F84B0  Caver::GUIAlertView::AddAnimations(bool)
 *   0x000000000048EFC8  Caver::GUIAlertView::GUIAlertView(void)
 *
 * Callees: 19
 *   0x00000000001F4B70  Caver::GUIAnimation::GUIAnimation(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8090  Caver::GUIPropertyValue::ValueWithFloat(float)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x00000000001FABF0  boost::detail::shared_count::shared_count<Caver::GUIAnimation>(Caver::GUIAnimation *)
 *   0x0000000000200070  std::exception::~exception()
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202FC0  Caver::GUIPropertyValue::ValueWithRectangle(Caver::Rectangle const&)
 *   0x00000000002033A0  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(boost::function<void ()(void *,Caver::GUIEvent *)> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000490060  Caver::GUIAlertView::PresentAnimationDidFinish(void *,Caver::GUIEvent *)
 *   0x00000000004924D8  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GUIAlertView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::GUIAlertView*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 218
 *   insn=0x000000000048F64C string=0x000000000048F650 "V"
 *   insn=0x000000000048F668 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000048F66C string=0x000000000048F670 "@"
 *   insn=0x000000000048F670 string=0x00000000001F4B70 "P'"
 *   insn=0x000000000048F680 string=0x000000000048F684 "["
 *   insn=0x000000000048F684 string=0x00000000001FABF0 "0'"
 *   insn=0x000000000048F6AC string=0x000000000048F6B0 "x"
 *   insn=0x000000000048F6B0 string=0x00000000001F8090 "0'"
 *   insn=0x000000000048F6C0 string=0x000000000048F6C4 "\n"
 *   insn=0x000000000048F6C4 string=0x000000000048F6C8 "J"
 *   insn=0x000000000048F6C8 string=0x000000000048F6CC "\n"
 *   insn=0x000000000048F6D4 string=0x000000000048F6D8 "4"
 *   insn=0x000000000048F6DC string=0x000000000048F6E0 ""
 *   insn=0x000000000048F6EC string=0x000000000048F6F0 "\t@"
 *   insn=0x000000000048F6FC string=0x000000000048F700 ""
 *   insn=0x000000000048F70C string=0x000000000048F710 "@"
 *   insn=0x000000000048F71C string=0x000000000048F720 "4"
 *   insn=0x000000000048F724 string=0x000000000048F728 ""
 *   insn=0x000000000048F734 string=0x000000000048F738 "\t@"
 *   insn=0x000000000048F744 string=0x000000000048F748 ""
 *   insn=0x000000000048F754 string=0x000000000048F758 "@"
 *   insn=0x000000000048F76C string=0x000000000048F770 "H"
 *   insn=0x000000000048F780 string=0x000000000048F784 "\n"
 *   insn=0x000000000048F784 string=0x000000000048F788 "J"
 *   insn=0x000000000048F788 string=0x000000000048F78C "\n"
 *   insn=0x000000000048F794 string=0x000000000048F798 "4"
 *   insn=0x000000000048F79C string=0x000000000048F7A0 ""
 *   insn=0x000000000048F7AC string=0x000000000048F7B0 "\t@"
 *   insn=0x000000000048F7BC string=0x000000000048F7C0 ""
 *   insn=0x000000000048F7CC string=0x000000000048F7D0 "@"
 *   insn=0x000000000048F7DC string=0x000000000048F7E0 "4"
 *   insn=0x000000000048F7E4 string=0x000000000048F7E8 ""
 *   insn=0x000000000048F7F4 string=0x000000000048F7F8 "\t@"
 *   insn=0x000000000048F804 string=0x000000000048F808 ""
 *   insn=0x000000000048F814 string=0x000000000048F818 "@"
 *   insn=0x000000000048F824 string=0x000000000048F828 "\t"
 *   insn=0x000000000048F828 string=0x000000000048F82C "\t]"
 *   insn=0x000000000048F83C string=0x000000000048F840 "h.@"
 *   insn=0x000000000048F840 string=0x000000000048F844 "bz@"
 *   insn=0x000000000048F844 string=0x000000000048F848 "t"
 *   insn=0x000000000048F870 string=0x00000000001F9C60 "0'"
 *   insn=0x000000000048F88C string=0x000000000048F890 "\n"
 *   insn=0x000000000048F890 string=0x000000000048F894 "J"
 *   insn=0x000000000048F894 string=0x000000000048F898 "\n"
 *   insn=0x000000000048F8A0 string=0x000000000048F8A4 "5"
 *   insn=0x000000000048F8A8 string=0x000000000048F8AC ""
 *   insn=0x000000000048F8B8 string=0x000000000048F8BC "\t@"
 *   insn=0x000000000048F8C8 string=0x000000000048F8CC ""
 *   insn=0x000000000048F8D8 string=0x000000000048F8DC "@"
 *   insn=0x000000000048F8E8 string=0x000000000048F8EC "5"
 *   insn=0x000000000048F8F0 string=0x000000000048F8F4 ""
 *   insn=0x000000000048F900 string=0x000000000048F904 "\t@"
 *   insn=0x000000000048F910 string=0x000000000048F914 ""
 *   insn=0x000000000048F920 string=0x000000000048F924 "@"
 *   insn=0x000000000048F94C string=0x000000000048F950 "\n"
 *   insn=0x000000000048F950 string=0x000000000048F954 "J"
 *   insn=0x000000000048F954 string=0x000000000048F958 "\n"
 *   insn=0x000000000048F960 string=0x000000000048F964 "4"
 *   insn=0x000000000048F968 string=0x000000000048F96C ""
 *   insn=0x000000000048F978 string=0x000000000048F97C "\t@"
 *   insn=0x000000000048F988 string=0x000000000048F98C ""
 *   insn=0x000000000048F998 string=0x000000000048F99C "@"
 *   insn=0x000000000048F9A8 string=0x000000000048F9AC "4"
 *   insn=0x000000000048F9B0 string=0x000000000048F9B4 ""
 *   insn=0x000000000048F9C0 string=0x000000000048F9C4 "\t@"
 *   insn=0x000000000048F9D0 string=0x000000000048F9D4 ""
 *   insn=0x000000000048F9E0 string=0x000000000048F9E4 "@"
 *   insn=0x000000000048F9F0 string=0x000000000048F9F4 ""
 *   insn=0x000000000048F9F8 string=0x000000000048F9FC "t\n@"
 *   insn=0x000000000048FA0C string=0x000000000048FA10 "w"
 *   insn=0x000000000048FA10 string=0x000000000048FA14 ")"
 *   insn=0x000000000048FA14 string=0x0000000000490060 "$T"
 *   insn=0x000000000048FA18 string=0x000000000048FA1C "\t"
 *   insn=0x000000000048FA20 string=0x000000000048FA24 " "
 *   insn=0x000000000048FA34 string=0x000000000048FA38 "N"
 *   insn=0x000000000048FA38 string=0x000000000048FA3C "`"
 *   insn=0x000000000048FA38 string=0x00000000001F6B70 "0'"
 *   insn=0x000000000048FA40 string=0x000000000048FA44 ""
 *   insn=0x000000000048FA58 string=0x000000000048FA5C ""
 *   insn=0x000000000048FA68 string=0x000000000048FA6C ")"
 *   insn=0x000000000048FA74 string=0x000000000048FA78 "("
 *   insn=0x000000000048FA7C string=0x000000000048FA80 "h"
 *   insn=0x000000000048FA80 string=0x000000000048FA84 ""
 *   insn=0x000000000048FA84 string=0x000000000048FA88 ""
 *   insn=0x000000000048FA8C string=0x000000000048FA90 " !"
 *   insn=0x000000000048FA94 string=0x000000000048FA98 "!a"
 *   insn=0x000000000048FAD0 string=0x000000000048FAD4 "@"
 *   insn=0x000000000048FAD4 string=0x000000000048FAD8 ""
 *   insn=0x000000000048FAD8 string=0x000000000048FADC ""
 *   insn=0x000000000048FAE0 string=0x000000000048FAE4 "@"
 *   insn=0x000000000048FAE4 string=0x000000000048FAE8 ""
 *   insn=0x000000000048FAE8 string=0x000000000048FAEC ""
 *   insn=0x000000000048FAF0 string=0x000000000048FAF4 ""
 *   insn=0x000000000048FAF4 string=0x000000000048FAF8 "@"
 *   insn=0x000000000048FB0C string=0x000000000048FB10 "$"
 *   insn=0x000000000048FB14 string=0x000000000048FB18 "h"
 *   insn=0x000000000048FB18 string=0x000000000048FB1C "("
 *   insn=0x000000000048FB1C string=0x000000000048FB20 ""
 *   insn=0x000000000048FB20 string=0x000000000048FB24 ""
 *   insn=0x000000000048FB2C string=0x000000000048FB30 " a"
 *   insn=0x000000000048FB48 string=0x000000000048FB4C "@"
 *   insn=0x000000000048FB4C string=0x000000000048FB50 ""
 *   insn=0x000000000048FB50 string=0x000000000048FB54 ""
 *   insn=0x000000000048FB58 string=0x000000000048FB5C ""
 *   insn=0x000000000048FB5C string=0x000000000048FB60 "@"
 *   insn=0x000000000048FB68 string=0x000000000048FB6C "h"
 *   insn=0x000000000048FB6C string=0x000000000048FB70 "("
 *   insn=0x000000000048FB70 string=0x000000000048FB74 ""
 *   insn=0x000000000048FB74 string=0x000000000048FB78 ""
 *   insn=0x000000000048FB80 string=0x000000000048FB84 " !"
 *   insn=0x000000000048FB98 string=0x000000000048FB9C ""
 *   insn=0x000000000048FBA8 string=0x000000000048FBAC "\t@"
 *   insn=0x000000000048FBB8 string=0x000000000048FBBC ""
 *   insn=0x000000000048FBC8 string=0x000000000048FBCC "@"
 *   insn=0x000000000048FBD8 string=0x000000000048FBDC ""
 *   insn=0x000000000048FBE8 string=0x000000000048FBEC "\t@"
 *   insn=0x000000000048FBF8 string=0x000000000048FBFC ""
 *   insn=0x000000000048FC08 string=0x000000000048FC0C "@"
 *   insn=0x000000000048FC18 string=0x000000000048FC1C "a"
 *   insn=0x000000000048FC1C string=0x00000000001FA5A0 "0'"
 *   insn=0x000000000048FC28 string=0x00000000001F8A30 "0'"
 *   insn=0x000000000048FC2C string=0x000000000048FC30 "3"
 *   insn=0x000000000048FC30 string=0x000000000048FC34 "h"
 *   insn=0x000000000048FC34 string=0x000000000048FC38 ""
 *   insn=0x000000000048FC38 string=0x000000000048FC3C "h"
 *   insn=0x000000000048FC40 string=0x000000000048FC44 "h"
 *   insn=0x000000000048FC48 string=0x000000000048FC4C "\t@"
 *   insn=0x000000000048FC50 string=0x000000000048FC54 "h\n@"
 *   insn=0x000000000048FC54 string=0x000000000048FC58 ""
 *   insn=0x000000000048FC58 string=0x000000000048FC5C "h\n"
 *   insn=0x000000000048FC60 string=0x000000000048FC64 "h"
 *   insn=0x000000000048FC68 string=0x000000000048FC6C "@"
 *   insn=0x000000000048FC9C string=0x000000000048FCA0 ""
 *   insn=0x000000000048FCA0 string=0x000000000048FCA4 "A"
 *   insn=0x000000000048FCAC string=0x000000000048FCB0 "4"
 *   insn=0x000000000048FCB0 string=0x00000000001FA980 "0'"
 *   insn=0x000000000048FCB4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000048FCC4 string=0x000000000048FCC8 "4"
 *   insn=0x000000000048FCE0 string=0x000000000048FCE4 "\t\t@"
 *   insn=0x000000000048FCE4 string=0x000000000048FCE8 ")"
 *   insn=0x000000000048FCE8 string=0x000000000048FCEC "\t\t"
 *   insn=0x000000000048FCEC string=0x000000000048FCF0 "!"
 *   insn=0x000000000048FCF0 string=0x000000000048FCF4 "\t"
 *   insn=0x000000000048FCF4 string=0x000000000048FCF8 ")@"
 *   insn=0x000000000048FCFC string=0x000000000048FD00 " "
 *   insn=0x000000000048FD00 string=0x000000000048FD04 "|"
 *   insn=0x000000000048FD10 string=0x000000000048FD14 "H"
 *   insn=0x000000000048FD14 string=0x000000000048FEFC "("
 *   insn=0x000000000048FD24 string=0x000000000048FD28 "\t\t@"
 *   insn=0x000000000048FD28 string=0x000000000048FD2C ")"
 *   insn=0x000000000048FD2C string=0x000000000048FD30 "\t\t"
 *   insn=0x000000000048FD34 string=0x000000000048FD38 "\t"
 *   insn=0x000000000048FD38 string=0x000000000048FD3C ")@"
 *   insn=0x000000000048FD40 string=0x000000000048FD44 " "
 *   insn=0x000000000048FD44 string=0x000000000048FD48 "k"
 *   insn=0x000000000048FD54 string=0x000000000048FD58 "t"
 *   insn=0x000000000048FD5C string=0x000000000048FD60 ""
 *   insn=0x000000000048FD6C string=0x000000000048FD70 "\t@"
 *   insn=0x000000000048FD7C string=0x000000000048FD80 ""
 *   insn=0x000000000048FD8C string=0x000000000048FD90 "@"
 *   insn=0x000000000048FDAC string=0x000000000048FDB0 ""
 *   insn=0x000000000048FDB4 string=0x000000000048FDB8 "a"
 *   insn=0x000000000048FDBC string=0x000000000048FDC0 "\t@"
 *   insn=0x000000000048FDCC string=0x000000000048FDD0 ""
 *   insn=0x000000000048FDD4 string=0x000000000048FDD8 "a"
 *   insn=0x000000000048FDDC string=0x000000000048FDE0 "@"
 *   insn=0x000000000048FDF4 string=0x000000000048FDF8 "t"
 *   insn=0x000000000048FDFC string=0x000000000048FE00 ""
 *   insn=0x000000000048FE0C string=0x000000000048FE10 "\t@"
 *   insn=0x000000000048FE1C string=0x000000000048FE20 ""
 *   insn=0x000000000048FE2C string=0x000000000048FE30 "@"
 *   insn=0x000000000048FE38 string=0x000000000048FE3C "r"
 *   insn=0x000000000048FE4C string=0x000000000048FE50 ""
 *   insn=0x000000000048FE54 string=0x000000000048FE58 "a"
 *   insn=0x000000000048FE5C string=0x000000000048FE60 "\t@"
 *   insn=0x000000000048FE6C string=0x000000000048FE70 ""
 *   insn=0x000000000048FE74 string=0x000000000048FE78 "a"
 *   insn=0x000000000048FE7C string=0x000000000048FE80 "@"
 *   insn=0x000000000048FE88 string=0x000000000048FE8C "^"
 *   insn=0x000000000048FE94 string=0x000000000048FE98 "3"
 *   insn=0x000000000048FEA0 string=0x000000000048FEA4 "h"
 *   insn=0x000000000048FEA4 string=0x000000000048FEA8 "("
 *   insn=0x000000000048FEA8 string=0x000000000048FEAC ""
 *   insn=0x000000000048FEAC string=0x000000000048FEB0 ""
 *   insn=0x000000000048FEB8 string=0x000000000048FEBC " a"
 *   insn=0x000000000048FED4 string=0x000000000048FED8 "@"
 *   insn=0x000000000048FED8 string=0x000000000048FEDC ""
 *   insn=0x000000000048FEDC string=0x000000000048FEE0 ""
 *   insn=0x000000000048FEE4 string=0x000000000048FEE8 ""
 *   insn=0x000000000048FEE8 string=0x000000000048FEEC "@"
 *   insn=0x000000000048FEF4 string=0x000000000048FEF8 "h"
 *   insn=0x000000000048FEFC string=0x000000000048FF00 ""
 *   insn=0x000000000048FF00 string=0x000000000048FF04 ""
 *   insn=0x000000000048FF0C string=0x000000000048FF10 " !"
 *   insn=0x000000000048FF24 string=0x000000000048FF28 ""
 *   insn=0x000000000048FF34 string=0x000000000048FF38 "\t@"
 *   insn=0x000000000048FF44 string=0x000000000048FF48 ""
 *   insn=0x000000000048FF54 string=0x000000000048FF58 "@"
 *   insn=0x000000000048FF64 string=0x000000000048FF68 ""
 *   insn=0x000000000048FF74 string=0x000000000048FF78 "\t@"
 *   insn=0x000000000048FF84 string=0x000000000048FF88 ""
 *   insn=0x000000000048FF94 string=0x000000000048FF98 "@"
 *   insn=0x000000000048FFAC string=0x000000000048FFB0 "H"
 *   insn=0x000000000048FFB0 string=0x000000000048FFB4 "\t\t@"
 *   insn=0x000000000048FFB4 string=0x000000000048FFB8 ")"
 *   insn=0x000000000048FFB8 string=0x000000000048FFBC "\t\t"
 *   insn=0x000000000048FFC0 string=0x000000000048FFC4 "\t"
 *   insn=0x000000000048FFC4 string=0x000000000048FFC8 ")@"
 *   insn=0x000000000048FFCC string=0x000000000048FFD0 " "
 *   insn=0x000000000048FFD0 string=0x000000000048FFD4 "!"
 *   insn=0x000000000048FFD8 string=0x000000000048FFDC "\t"
 *   insn=0x000000000048FFF0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000048FFF4 string=0x000000000048FFF8 "3"
 *   insn=0x0000000000490004 string=0x0000000000490008 "4"
 *   insn=0x000000000049000C string=0x0000000000490010 ""
 *   insn=0x000000000049001C string=0x0000000000490020 "\t@"
 *   insn=0x000000000049002C string=0x0000000000490030 ""
 *   insn=0x000000000049003C string=0x0000000000490040 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIAlertView::AddAnimations(Caver::GUIAlertView *this, char a2)
{
  __int64 v4; // x21
  Caver::GUIPropertyValue *v5; // x0
  __int64 v6; // x23
  Caver::GUIPropertyValue *v7; // x0
  unsigned __int64 v8; // x8
  _QWORD *v9; // x9
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x8
  _QWORD *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // x21
  unsigned __int64 v17; // x8
  _QWORD *v18; // x9
  _QWORD *v19; // x20
  __int64 v20; // x8
  __int64 v21; // x8
  _QWORD *v22; // x20
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x8
  float v27; // s2
  float v28; // s0
  float v29; // s1
  unsigned __int64 v30; // x8
  _QWORD *v31; // x9
  _QWORD *v32; // x21
  __int64 v33; // x8
  __int64 v34; // x8
  _QWORD *v35; // x21
  __int64 v36; // x8
  __int64 v37; // x8
  __int64 v38; // x21
  unsigned __int64 v39; // x8
  _QWORD *v40; // x9
  _QWORD *v41; // x20
  __int64 v42; // x8
  __int64 v43; // x8
  _QWORD *v44; // x20
  __int64 v45; // x8
  __int64 v46; // x8
  __int64 *v47; // x21
  _QWORD *v48; // x20
  __int64 v49; // x8
  __int64 v50; // x23
  int64x2_t v51; // q0
  unsigned __int64 v52; // x8
  _QWORD *v53; // x24
  _QWORD *v54; // x0
  __int64 v55; // x8
  void (__fastcall *v56)(int64x2_t *, int64x2_t *, __int64); // x8
  _QWORD *v57; // x0
  __int64 v58; // x8
  void (__fastcall *v59)(int64x2_t *, int64x2_t *, __int64); // x8
  __int64 v60; // x8
  __int64 v61; // x8
  __int64 v62; // x8
  __int64 v63; // x8
  __int64 result; // x0
  _QWORD *v65; // x19
  __int64 v66; // x8
  __int64 v67; // x8
  unsigned __int64 v68; // [xsp+8h] [xbp-B8h]
  int64x2_t v69; // [xsp+10h] [xbp-B0h] BYREF
  Caver::GUIAlertView *v70; // [xsp+20h] [xbp-A0h]
  __int64 v71; // [xsp+28h] [xbp-98h] BYREF
  _QWORD *v72; // [xsp+30h] [xbp-90h]
  unsigned __int64 v73; // [xsp+38h] [xbp-88h]
  int64x2_t v74; // [xsp+40h] [xbp-80h] BYREF
  Caver::GUIAlertView *v75; // [xsp+50h] [xbp-70h]
  _DWORD v76[2]; // [xsp+58h] [xbp-68h] BYREF
  __int64 v77; // [xsp+60h] [xbp-60h]
  _QWORD *v78; // [xsp+68h] [xbp-58h]
  int64x2_t v79; // [xsp+70h] [xbp-50h] BYREF
  Caver::GUIAlertView *v80; // [xsp+80h] [xbp-40h]
  __int64 v81; // [xsp+88h] [xbp-38h]

  v81 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = operator new(0xC0u);
  Caver::GUIAnimation::GUIAnimation((Caver::GUIAnimation *)v4);
  v77 = v4;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>();
  boost::detail::sp_enable_shared_from_this();
  v6 = v4;
  if ( (a2 & 1) != 0 )
  {
    *(_DWORD *)(v77 + 48) = 2;
    v7 = (Caver::GUIPropertyValue *)Caver::GUIPropertyValue::ValueWithFloat(&v71, v5, 1.0);
    *(_DWORD *)(v4 + 112) = v71;
    v9 = v72;
    v8 = v73;
    if ( v73 )
      ++*(_QWORD *)(v73 + 8);
    v10 = *(_QWORD **)(v4 + 128);
    *(_QWORD *)(v4 + 120) = v9;
    *(_QWORD *)(v4 + 128) = v8;
    if ( v10 )
    {
      v11 = v10[1] - 1LL;
      v10[1] = v11;
      if ( !v11 )
      {
        v7 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
        v12 = v10[2] - 1LL;
        v10[2] = v12;
        if ( !v12 )
          v7 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
      }
    }
    v13 = (_QWORD *)v73;
    if ( v73 )
    {
      v14 = *(_QWORD *)(v73 + 8) - 1LL;
      *(_QWORD *)(v73 + 8) = v14;
      if ( !v14 )
      {
        v7 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
        v15 = v13[2] - 1LL;
        v13[2] = v15;
        if ( !v15 )
          v7 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
      }
    }
    v16 = v77;
    Caver::GUIPropertyValue::ValueWithFloat(&v71, v7, 0.0);
    *(_DWORD *)(v16 + 136) = v71;
    v18 = v72;
    v17 = v73;
    if ( v73 )
      ++*(_QWORD *)(v73 + 8);
    v19 = *(_QWORD **)(v16 + 152);
    *(_QWORD *)(v16 + 144) = v18;
    *(_QWORD *)(v16 + 152) = v17;
    if ( v19 )
    {
      v20 = v19[1] - 1LL;
      v19[1] = v20;
      if ( !v20 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
        v21 = v19[2] - 1LL;
        v19[2] = v21;
        if ( !v21 )
          (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
      }
    }
    v22 = (_QWORD *)v73;
    if ( v73 )
    {
      v23 = *(_QWORD *)(v73 + 8) - 1LL;
      *(_QWORD *)(v73 + 8) = v23;
      if ( !v23 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
        v24 = v22[2] - 1LL;
        v22[2] = v24;
        if ( !v24 )
          (*(void (__fastcall **)(_QWORD *))(*v22 + 24LL))(v22);
      }
    }
    v25 = v77;
    *(_DWORD *)(v77 + 92) = 1048576000;
    *(_BYTE *)(v25 + 184) = 0;
    goto LABEL_78;
  }
  *(_DWORD *)(v77 + 48) = 3;
  v26 = *((_QWORD *)this + 11);
  v27 = *((float *)this + 30);
  v28 = *(float *)(v26 + 136);
  v29 = *(float *)(v26 + 144);
  v76[0] = 0;
  *(float *)&v76[1] = (float)(v28 + v29) - v27;
  Caver::Rectangle::TranslatedRectangle(
    (__int64 *)&v79,
    (Caver::GUIAlertView *)((char *)this + 116),
    (const Caver::Vector2 *)v76);
  Caver::GUIPropertyValue::ValueWithRectangle();
  *(_DWORD *)(v4 + 112) = v71;
  v31 = v72;
  v30 = v73;
  if ( v73 )
    ++*(_QWORD *)(v73 + 8);
  v32 = *(_QWORD **)(v4 + 128);
  *(_QWORD *)(v6 + 120) = v31;
  *(_QWORD *)(v6 + 128) = v30;
  if ( v32 )
  {
    v33 = v32[1] - 1LL;
    v32[1] = v33;
    if ( !v33 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
      v34 = v32[2] - 1LL;
      v32[2] = v34;
      if ( !v34 )
        (*(void (__fastcall **)(_QWORD *))(*v32 + 24LL))(v32);
    }
  }
  v35 = (_QWORD *)v73;
  if ( v73 )
  {
    v36 = *(_QWORD *)(v73 + 8) - 1LL;
    *(_QWORD *)(v73 + 8) = v36;
    if ( !v36 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
      v37 = v35[2] - 1LL;
      v35[2] = v37;
      if ( !v37 )
        (*(void (__fastcall **)(_QWORD *))(*v35 + 24LL))(v35);
    }
  }
  v38 = v77;
  Caver::GUIPropertyValue::ValueWithRectangle();
  *(_DWORD *)(v38 + 136) = v71;
  v40 = v72;
  v39 = v73;
  if ( v73 )
    ++*(_QWORD *)(v73 + 8);
  v41 = *(_QWORD **)(v38 + 152);
  *(_QWORD *)(v38 + 144) = v40;
  *(_QWORD *)(v38 + 152) = v39;
  if ( v41 )
  {
    v42 = v41[1] - 1LL;
    v41[1] = v42;
    if ( !v42 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v41 + 16LL))(v41);
      v43 = v41[2] - 1LL;
      v41[2] = v43;
      if ( !v43 )
        (*(void (__fastcall **)(_QWORD *))(*v41 + 24LL))(v41);
    }
  }
  v44 = (_QWORD *)v73;
  if ( v73 )
  {
    v45 = *(_QWORD *)(v73 + 8) - 1LL;
    *(_QWORD *)(v73 + 8) = v45;
    if ( !v45 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v44 + 16LL))(v44);
      v46 = v44[2] - 1LL;
      v44[2] = v46;
      if ( !v46 )
        (*(void (__fastcall **)(_QWORD *))(*v44 + 24LL))(v44);
    }
  }
  v47 = (__int64 *)v77;
  *(_DWORD *)(v77 + 92) = 1048576000;
  v48 = (_QWORD *)*((_QWORD *)this + 2);
  if ( !v48 || (v49 = v48[1]) == 0 )
  {
    v79.n128_u64[0] = (unsigned __int64)off_6CC4E8;
    boost::throw_exception<boost::bad_weak_ptr>();
  }
  v50 = *((_QWORD *)this + 1);
  v51 = vdupq_n_s64(0);
  v51.n128_u64[0] = (unsigned __int64)Caver::GUIAlertView::PresentAnimationDidFinish;
  v48[1] = v49 + 2;
  v79 = v51;
  v80 = this;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v52 = 0;
  }
  else
  {
    v70 = v80;
    v69 = v79;
    v52 = (unsigned __int64)boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GUIAlertView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::GUIAlertView*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GUIAlertView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::GUIAlertView*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  v68 = v52;
  v71 = v50;
  v72 = v48;
  ++v48[2];
  v73 = 0;
  if ( !v52 )
    goto LABEL_52;
  v73 = v52;
  if ( (v52 & 1) != 0 )
  {
    v75 = v70;
    v74 = v69;
LABEL_52:
    v53 = v48;
    goto LABEL_53;
  }
  (*(void (__fastcall **)(int64x2_t *, int64x2_t *, _QWORD))(v52 & 0xFFFFFFFFFFFFFFFELL))(&v69, &v74, 0);
  v50 = v71;
  v53 = v72;
LABEL_53:
  v54 = (_QWORD *)v47[1];
  *v47 = v50;
  if ( v53 != v54 )
  {
    if ( v53 )
      ++v53[2];
    if ( v54 )
    {
      v55 = v54[2] - 1LL;
      v54[2] = v55;
      if ( !v55 )
        (*(void (__fastcall **)(_QWORD *))(*v54 + 24LL))(v54);
    }
    v47[1] = (__int64)v53;
  }
  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=();
  if ( v73 )
  {
    if ( (v73 & 1) == 0 )
    {
      v56 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v73 & 0xFFFFFFFFFFFFFFFELL);
      if ( v56 )
        v56(&v74, &v74, 2);
    }
    v73 = 0;
  }
  v57 = v72;
  if ( v72 )
  {
    v58 = v72[2] - 1LL;
    v72[2] = v58;
    if ( !v58 )
      (*(void (__fastcall **)(_QWORD *))(*v57 + 24LL))(v57);
  }
  if ( v68 )
  {
    if ( (v68 & 1) == 0 )
    {
      v59 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v68 & 0xFFFFFFFFFFFFFFFELL);
      if ( v59 )
        v59(&v69, &v69, 2);
    }
  }
  v60 = v48[1] - 1LL;
  v48[1] = v60;
  if ( !v60 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v48 + 16LL))(v48);
    v61 = v48[2] - 1LL;
    v48[2] = v61;
    if ( !v61 )
      (*(void (__fastcall **)(_QWORD *))(*v48 + 24LL))(v48);
  }
  v62 = v48[1] - 1LL;
  v48[1] = v62;
  if ( !v62 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v48 + 16LL))(v48);
    v63 = v48[2] - 1LL;
    v48[2] = v63;
    if ( !v63 )
      (*(void (__fastcall **)(_QWORD *))(*v48 + 24LL))(v48);
  }
LABEL_78:
  Caver::GUIView::RemoveAllAnimations(this);
  result = Caver::GUIView::AddAnimation();
  v65 = v78;
  if ( v78 )
  {
    v66 = v78[1] - 1LL;
    v78[1] = v66;
    if ( !v66 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v65 + 16LL))(v65);
      v67 = v65[2] - 1LL;
      v65[2] = v67;
      if ( !v67 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v65 + 24LL))(v65);
    }
  }
  return result;
}

