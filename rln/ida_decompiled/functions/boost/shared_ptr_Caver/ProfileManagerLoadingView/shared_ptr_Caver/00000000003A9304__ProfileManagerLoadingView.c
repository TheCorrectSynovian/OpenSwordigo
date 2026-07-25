/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A9304
 * Mangled: _ZN5boost10shared_ptrIN5Caver25ProfileManagerLoadingViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ProfileManagerLoadingView>::shared_ptr<Caver::ProfileManagerLoadingView>(Caver::ProfileManagerLoadingView *)
 *
 * Callers: 2
 *   0x00000000001FC040  boost::shared_ptr<Caver::ProfileManagerLoadingView>::shared_ptr<Caver::ProfileManagerLoadingView>(Caver::ProfileManagerLoadingView *)
 *   0x00000000003A91CC  Caver::ProfileManagerLoadingViewController::~ProfileManagerLoadingViewController()
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000201FF0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileManagerLoadingView,Caver::ProfileManagerLoadingView>(boost::shared_ptr<Caver::ProfileManagerLoadingView> const*,Caver::ProfileManagerLoadingView *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x00000000003A9320 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003A9324 string=0x00000000003A9328 ")"
 *   insn=0x00000000003A9334 string=0x00000000003A9338 "(A"
 *   insn=0x00000000003A933C string=0x00000000003A9340 ""
 *   insn=0x00000000003A9348 string=0x00000000003A934C "`""
 *   insn=0x00000000003A9354 string=0x00000000003A9358 "&c"
 *   insn=0x00000000003A936C string=0x00000000003A9370 "4"
 *   insn=0x00000000003A9374 string=0x00000000003A9378 ""
 *   insn=0x00000000003A9384 string=0x00000000003A9388 "\t@"
 *   insn=0x00000000003A9394 string=0x00000000003A9398 ""
 *   insn=0x00000000003A93A4 string=0x00000000003A93A8 "@"
 *   insn=0x00000000003A93B4 string=0x00000000003A93B8 "Ca"
 *   insn=0x00000000003A93C0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003A93C4 string=0x00000000003A93C8 "h"
 *   insn=0x00000000003A93C8 string=0x00000000003A93CC "!@"
 *   insn=0x00000000003A93DC string=0x00000000003A93E0 "lP"
 *   insn=0x00000000003A93E0 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003A93EC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::ProfileManagerLoadingView>::shared_ptr<Caver::ProfileManagerLoadingView>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CEBF8;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileManagerLoadingView,Caver::ProfileManagerLoadingView>();
  return result;
}

