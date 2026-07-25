/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003704B8
 * Mangled: _ZN5boost10shared_ptrIN5Caver9PauseViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::PauseView>::shared_ptr<Caver::PauseView>(Caver::PauseView *)
 *
 * Callers: 2
 *   0x0000000000203C50  boost::shared_ptr<Caver::PauseView>::shared_ptr<Caver::PauseView>(Caver::PauseView *)
 *   0x0000000000370370  Caver::PauseViewController::~PauseViewController()
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FE430  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PauseView,Caver::PauseView>(boost::shared_ptr<Caver::PauseView> const*,Caver::PauseView *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x00000000003704D0 string=0x00000000003704D4 "C"
 *   insn=0x00000000003704D4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003704D8 string=0x00000000003704DC ")1B"
 *   insn=0x00000000003704E8 string=0x00000000003704EC "(A"
 *   insn=0x00000000003704F0 string=0x00000000003704F4 ""
 *   insn=0x00000000003704FC string=0x0000000000370500 "`""
 *   insn=0x0000000000370520 string=0x0000000000370524 "4"
 *   insn=0x0000000000370528 string=0x000000000037052C ""
 *   insn=0x0000000000370538 string=0x000000000037053C "\t@"
 *   insn=0x0000000000370548 string=0x000000000037054C ""
 *   insn=0x0000000000370558 string=0x000000000037055C "@"
 *   insn=0x000000000037056C string=0x0000000000370570 "ww"
 *   insn=0x0000000000370570 string=0x0000000000370574 ""
 *   insn=0x0000000000370574 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000370578 string=0x000000000037057C "h"
 *   insn=0x0000000000370578 string=0x000000000037058C "yI"
 *   insn=0x000000000037057C string=0x0000000000370580 "!@"
 *   insn=0x0000000000370594 string=0x00000000001FD590 "0'"
 *   insn=0x000000000037059C string=0x00000000003705A0 "D"
 *   insn=0x00000000003705A0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::PauseView>::shared_ptr<Caver::PauseView>(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CC9F8;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PauseView,Caver::PauseView>();
  return result;
}

