/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000035A7C8
 * Mangled: _ZN5boost10shared_ptrIN5Caver20PortalViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::PortalViewController>::shared_ptr<Caver::PortalViewController>(Caver::PortalViewController *)
 *
 * Callers: 1
 *   0x0000000000203990  boost::shared_ptr<Caver::PortalViewController>::shared_ptr<Caver::PortalViewController>(Caver::PortalViewController *)
 *
 * Callees: 15
 *   0x00000000001F43C0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PortalViewController,Caver::PortalViewController>(boost::shared_ptr<Caver::PortalViewController> const*,Caver::PortalViewController *)
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4990  Caver::GameSceneView::SetMenuButtonHighlighted(bool)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F76B0  Caver::GameViewController::ShowMenu(void)
 *   0x00000000001F8290  Caver::SkillPickerViewController::SkillPickerViewController(void)
 *   0x00000000001F9FF0  Caver::GameSceneView::SetSkillToggleButtonHighlighted(bool)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000202B90  boost::shared_ptr<Caver::SkillPickerViewController>::shared_ptr<Caver::SkillPickerViewController>(Caver::SkillPickerViewController *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000035AB64  boost::shared_ptr<Caver::SkillPickerViewController>::shared_ptr<Caver::SkillPickerViewController>(Caver::SkillPickerViewController *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 86
 *   insn=0x000000000035A7E4 string=0x000000000035A7E8 "I"
 *   insn=0x000000000035A7E4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000035A7E8 string=0x000000000035A7EC ")"
 *   insn=0x000000000035A7F8 string=0x000000000035A7FC "(A"
 *   insn=0x000000000035A800 string=0x000000000035A804 ""
 *   insn=0x000000000035A80C string=0x000000000035A810 "`""
 *   insn=0x000000000035A81C string=0x00000000001F43C0 "P'"
 *   insn=0x000000000035A830 string=0x000000000035A834 "4"
 *   insn=0x000000000035A838 string=0x000000000035A83C ""
 *   insn=0x000000000035A848 string=0x000000000035A84C "\t@"
 *   insn=0x000000000035A858 string=0x000000000035A85C ""
 *   insn=0x000000000035A868 string=0x000000000035A86C "@"
 *   insn=0x000000000035A880 string=0x000000000035A884 "Wg"
 *   insn=0x000000000035A884 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000035A888 string=0x000000000035A88C "h"
 *   insn=0x000000000035A88C string=0x000000000035A890 ""
 *   insn=0x000000000035A8A0 string=0x000000000035A8A4 ";"
 *   insn=0x000000000035A8A4 string=0x00000000001FD590 "0'"
 *   insn=0x000000000035A8C0 string=0x000000000035A8C4 "U"
 *   insn=0x000000000035A8D4 string=0x000000000035A8D8 "`f@"
 *   insn=0x000000000035A8DC string=0x000000000035A8E0 ""
 *   insn=0x000000000035A8E4 string=0x000000000035A8E8 ""
 *   insn=0x000000000035A8F4 string=0x000000000035AA64 "h"
 *   insn=0x000000000035A8FC string=0x000000000035AA4C "`n@"
 *   insn=0x000000000035A904 string=0x000000000035A908 "`n@"
 *   insn=0x000000000035A910 string=0x00000000001F9FF0 "0'"
 *   insn=0x000000000035A914 string=0x000000000035A918 "2k"
 *   insn=0x000000000035A91C string=0x000000000035A920 "\v"
 *   insn=0x000000000035A920 string=0x00000000001F8290 "0'"
 *   insn=0x000000000035A92C string=0x000000000035A930 "h"
 *   insn=0x000000000035A938 string=0x000000000035A93C "+"
 *   insn=0x000000000035A938 string=0x000000000035A948 "T-@"
 *   insn=0x000000000035A93C string=0x000000000035A940 "k"
 *   insn=0x000000000035A940 string=0x000000000035A944 "+"
 *   insn=0x000000000035A948 string=0x000000000035A94C "H%"
 *   insn=0x000000000035A94C string=0x000000000035A950 "4"
 *   insn=0x000000000035A950 string=0x000000000035A994 "h"
 *   insn=0x000000000035A954 string=0x000000000035A958 ""
 *   insn=0x000000000035A964 string=0x000000000035A968 "\t@"
 *   insn=0x000000000035A974 string=0x000000000035A978 ""
 *   insn=0x000000000035A984 string=0x000000000035A988 "@"
 *   insn=0x000000000035A998 string=0x000000000035A99C ")@"
 *   insn=0x000000000035A9A4 string=0x000000000035A9A8 "*"
 *   insn=0x000000000035A9A8 string=0x000000000035A9AC "J"
 *   insn=0x000000000035A9AC string=0x000000000035A9B0 "*"
 *   insn=0x000000000035A9C0 string=0x000000000035A9C4 "3"
 *   insn=0x000000000035A9C4 string=0x000000000035A9C8 "h"
 *   insn=0x000000000035A9C8 string=0x000000000035A9CC ""
 *   insn=0x000000000035A9CC string=0x000000000035A9D0 "h"
 *   insn=0x000000000035A9D4 string=0x000000000035A9D8 "h"
 *   insn=0x000000000035A9D8 string=0x000000000035A9DC "\t@"
 *   insn=0x000000000035A9E4 string=0x000000000035A9E8 "h\n@"
 *   insn=0x000000000035A9E8 string=0x000000000035A9EC ""
 *   insn=0x000000000035A9EC string=0x000000000035A9F0 "h\n"
 *   insn=0x000000000035A9F4 string=0x000000000035A9F8 "h"
 *   insn=0x000000000035A9F8 string=0x000000000035A9FC "@"
 *   insn=0x000000000035AA08 string=0x000000000035AA0C "S"
 *   insn=0x000000000035AA0C string=0x000000000035AA10 "h"
 *   insn=0x000000000035AA10 string=0x000000000035AA14 ""
 *   insn=0x000000000035AA14 string=0x000000000035AA18 "h"
 *   insn=0x000000000035AA1C string=0x000000000035AA20 "h"
 *   insn=0x000000000035AA24 string=0x000000000035AA28 "\t@"
 *   insn=0x000000000035AA2C string=0x000000000035AA30 "h\n@"
 *   insn=0x000000000035AA30 string=0x000000000035AA34 ""
 *   insn=0x000000000035AA34 string=0x000000000035AA38 "h\n"
 *   insn=0x000000000035AA3C string=0x000000000035AA40 "h"
 *   insn=0x000000000035AA40 string=0x000000000035AA44 "@"
 *   insn=0x000000000035AA44 string=0x000000000035AA48 "\t"
 *   insn=0x000000000035AA54 string=0x00000000001F4990 "P'"
 *   insn=0x000000000035AA5C string=0x00000000001F76B0 "0'"
 *   insn=0x000000000035AA64 string=0x000000000035AA68 ""
 *   insn=0x000000000035AA98 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000035AAA8 string=0x000000000035AAAC "&"
 *   insn=0x000000000035AAB4 string=0x000000000035AAB8 "4"
 *   insn=0x000000000035AABC string=0x000000000035AAC0 ""
 *   insn=0x000000000035AACC string=0x000000000035AAD0 "\t@"
 *   insn=0x000000000035AADC string=0x000000000035AAE0 ""
 *   insn=0x000000000035AAEC string=0x000000000035AAF0 "@"
 *   insn=0x000000000035AAFC string=0x000000000035AB00 "4"
 *   insn=0x000000000035AB04 string=0x000000000035AB08 ""
 *   insn=0x000000000035AB14 string=0x000000000035AB18 "\t@"
 *   insn=0x000000000035AB24 string=0x000000000035AB28 ""
 *   insn=0x000000000035AB34 string=0x000000000035AB38 "@"
 *   insn=0x000000000035AB44 string=0x000000000035AB48 "_"
 *   insn=0x000000000035AB58 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000035AB5C string=0x000000000035AB60 "Y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::PortalViewController>::shared_ptr<Caver::PortalViewController>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CC138;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PortalViewController,Caver::PortalViewController>();
  return result;
}

