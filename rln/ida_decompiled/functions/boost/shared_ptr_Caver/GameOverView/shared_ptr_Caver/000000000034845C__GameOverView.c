/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034845C
 * Mangled: _ZN5boost10shared_ptrIN5Caver12GameOverViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GameOverView>::shared_ptr<Caver::GameOverView>(Caver::GameOverView *)
 *
 * Callers: 2
 *   0x00000000001FE9E0  boost::shared_ptr<Caver::GameOverView>::shared_ptr<Caver::GameOverView>(Caver::GameOverView *)
 *   0x00000000003482EC  Caver::GameOverViewController::~GameOverViewController()
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FFF90  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverView,Caver::GameOverView>(boost::shared_ptr<Caver::GameOverView> const*,Caver::GameOverView *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x0000000000348474 string=0x0000000000348478 "Z"
 *   insn=0x0000000000348478 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000034847C string=0x0000000000348480 ")"
 *   insn=0x000000000034848C string=0x0000000000348490 "(A"
 *   insn=0x0000000000348494 string=0x0000000000348498 ""
 *   insn=0x00000000003484A0 string=0x00000000003484A4 "`""
 *   insn=0x00000000003484C4 string=0x00000000003484C8 "4"
 *   insn=0x00000000003484CC string=0x00000000003484D0 ""
 *   insn=0x00000000003484DC string=0x00000000003484E0 "\t@"
 *   insn=0x00000000003484EC string=0x00000000003484F0 ""
 *   insn=0x00000000003484FC string=0x0000000000348500 "@"
 *   insn=0x0000000000348514 string=0x0000000000348518 "2"
 *   insn=0x0000000000348518 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000034851C string=0x0000000000348520 "h"
 *   insn=0x0000000000348520 string=0x0000000000348524 "!@"
 *   insn=0x0000000000348538 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000348540 string=0x0000000000348544 "["
 *   insn=0x0000000000348544 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::GameOverView>::shared_ptr<Caver::GameOverView>(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CB4D8;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverView,Caver::GameOverView>();
  return result;
}

