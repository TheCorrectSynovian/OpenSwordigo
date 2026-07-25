/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036FA90
 * Mangled: _ZN5boost10shared_ptrIN5Caver12MainMenuViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::MainMenuView>::shared_ptr<Caver::MainMenuView>(Caver::MainMenuView *)
 *
 * Callers: 1
 *   0x00000000001FE0A0  boost::shared_ptr<Caver::MainMenuView>::shared_ptr<Caver::MainMenuView>(Caver::MainMenuView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5740  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MainMenuView,Caver::MainMenuView>(boost::shared_ptr<Caver::MainMenuView> const*,Caver::MainMenuView *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x000000000036FAAC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000036FAB0 string=0x000000000036FAB4 ")"
 *   insn=0x000000000036FAC0 string=0x000000000036FAC4 "(A"
 *   insn=0x000000000036FAC8 string=0x000000000036FACC ""
 *   insn=0x000000000036FAD4 string=0x000000000036FAD8 "`""
 *   insn=0x000000000036FAE4 string=0x00000000001F5740 "P'"
 *   insn=0x000000000036FAF8 string=0x000000000036FAFC "4"
 *   insn=0x000000000036FB00 string=0x000000000036FB04 ""
 *   insn=0x000000000036FB10 string=0x000000000036FB14 "\t@"
 *   insn=0x000000000036FB20 string=0x000000000036FB24 ""
 *   insn=0x000000000036FB30 string=0x000000000036FB34 "@"
 *   insn=0x000000000036FB40 string=0x000000000036FB44 "`G"
 *   insn=0x000000000036FB4C string=0x00000000001F45E0 "P'"
 *   insn=0x000000000036FB50 string=0x000000000036FB54 "h"
 *   insn=0x000000000036FB54 string=0x000000000036FB58 "!@"
 *   insn=0x000000000036FB6C string=0x00000000001FD590 "0'"
 *   insn=0x000000000036FB78 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::MainMenuView>::shared_ptr<Caver::MainMenuView>(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CC818;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MainMenuView,Caver::MainMenuView>();
  return result;
}

