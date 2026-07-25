/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000388D70
 * Mangled: _ZN5boost10shared_ptrIN5Caver7GUIViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>(Caver::GUIView *)
 *
 * Callers: 2
 *   0x00000000001FCFC0  boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>(Caver::GUIView *)
 *   0x00000000003888E8  Caver::OfflineAchievementView::~OfflineAchievementView()
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4E50  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIView,Caver::GUIView>(boost::shared_ptr<Caver::GUIView> const*,Caver::GUIView *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 19
 *   insn=0x0000000000388D8C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000388D90 string=0x0000000000388D94 ")"
 *   insn=0x0000000000388DA0 string=0x0000000000388DA4 "(A"
 *   insn=0x0000000000388DA8 string=0x0000000000388DAC ""
 *   insn=0x0000000000388DB4 string=0x0000000000388DB8 "`""
 *   insn=0x0000000000388DC0 string=0x0000000000388DC4 "#"
 *   insn=0x0000000000388DC4 string=0x00000000001F4E50 "P'"
 *   insn=0x0000000000388DD8 string=0x0000000000388DDC "4"
 *   insn=0x0000000000388DE0 string=0x0000000000388DE4 ""
 *   insn=0x0000000000388DF0 string=0x0000000000388DF4 "\t@"
 *   insn=0x0000000000388E00 string=0x0000000000388E04 ""
 *   insn=0x0000000000388E10 string=0x0000000000388E14 "@"
 *   insn=0x0000000000388E24 string=0x0000000000388E28 "I"
 *   insn=0x0000000000388E2C string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000388E30 string=0x0000000000388E34 "h"
 *   insn=0x0000000000388E30 string=0x0000000000388E44 "K"
 *   insn=0x0000000000388E34 string=0x0000000000388E38 "!@"
 *   insn=0x0000000000388E4C string=0x00000000001FD590 "0'"
 *   insn=0x0000000000388E58 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CD5A8;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIView,Caver::GUIView>();
  return result;
}

