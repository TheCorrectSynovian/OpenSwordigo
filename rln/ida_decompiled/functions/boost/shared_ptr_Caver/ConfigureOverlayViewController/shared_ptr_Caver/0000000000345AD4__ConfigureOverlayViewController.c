/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000345AD4
 * Mangled: _ZN5boost10shared_ptrIN5Caver30ConfigureOverlayViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ConfigureOverlayViewController>::shared_ptr<Caver::ConfigureOverlayViewController>(Caver::ConfigureOverlayViewController *)
 *
 * Callers: 2
 *   0x00000000001FDD30  boost::shared_ptr<Caver::ConfigureOverlayViewController>::shared_ptr<Caver::ConfigureOverlayViewController>(Caver::ConfigureOverlayViewController *)
 *   0x0000000000345884  Caver::GameMenuViewController::SettingsViewWantsToConfigureControls(Caver::SettingsView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6BA0  Caver::GameMenuViewController::SettingsViewWantsToConfigureControls(Caver::SettingsView *)
 *   0x00000000001FCE90  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ConfigureOverlayViewController,Caver::ConfigureOverlayViewController>(boost::shared_ptr<Caver::ConfigureOverlayViewController> const*,Caver::ConfigureOverlayViewController *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x0000000000345AF0 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000345AF4 string=0x0000000000345AF8 ")"
 *   insn=0x0000000000345B04 string=0x0000000000345B08 "(A"
 *   insn=0x0000000000345B0C string=0x0000000000345B10 ""
 *   insn=0x0000000000345B18 string=0x0000000000345B1C "`""
 *   insn=0x0000000000345B28 string=0x00000000001FCE90 "0'"
 *   insn=0x0000000000345B3C string=0x0000000000345B40 "4"
 *   insn=0x0000000000345B44 string=0x0000000000345B48 ""
 *   insn=0x0000000000345B54 string=0x0000000000345B58 "\t@"
 *   insn=0x0000000000345B64 string=0x0000000000345B68 ""
 *   insn=0x0000000000345B74 string=0x0000000000345B78 "@"
 *   insn=0x0000000000345B84 string=0x0000000000345B88 "O"
 *   insn=0x0000000000345B90 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000345B94 string=0x0000000000345B98 "h"
 *   insn=0x0000000000345B98 string=0x0000000000345B9C ""
 *   insn=0x0000000000345BAC string=0x0000000000345BB0 "x"
 *   insn=0x0000000000345BB0 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000345BC0 string=0x00000000001F6BA0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::ConfigureOverlayViewController>::shared_ptr<Caver::ConfigureOverlayViewController>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CB2B8;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ConfigureOverlayViewController,Caver::ConfigureOverlayViewController>();
  return result;
}

