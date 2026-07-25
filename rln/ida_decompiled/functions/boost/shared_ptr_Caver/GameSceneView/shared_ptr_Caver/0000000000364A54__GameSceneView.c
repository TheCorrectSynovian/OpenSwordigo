/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000364A54
 * Mangled: _ZN5boost10shared_ptrIN5Caver13GameSceneViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GameSceneView>::shared_ptr<Caver::GameSceneView>(Caver::GameSceneView *)
 *
 * Callers: 2
 *   0x00000000001FA3E0  boost::shared_ptr<Caver::GameSceneView>::shared_ptr<Caver::GameSceneView>(Caver::GameSceneView *)
 *   0x0000000000364534  Caver::GameSceneController::~GameSceneController()
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x00000000002030D0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameSceneView,Caver::GameSceneView>(boost::shared_ptr<Caver::GameSceneView> const*,Caver::GameSceneView *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x0000000000364A70 string=0x0000000000364A74 "\t"
 *   insn=0x0000000000364A70 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000364A74 string=0x0000000000364A78 ")"
 *   insn=0x0000000000364A84 string=0x0000000000364A88 "(A"
 *   insn=0x0000000000364A8C string=0x0000000000364A90 ""
 *   insn=0x0000000000364A98 string=0x0000000000364A9C "`""
 *   insn=0x0000000000364ABC string=0x0000000000364AC0 "4"
 *   insn=0x0000000000364AC4 string=0x0000000000364AC8 ""
 *   insn=0x0000000000364AD4 string=0x0000000000364AD8 "\t@"
 *   insn=0x0000000000364AE4 string=0x0000000000364AE8 ""
 *   insn=0x0000000000364AF4 string=0x0000000000364AF8 "@"
 *   insn=0x0000000000364B04 string=0x0000000000364B08 "os"
 *   insn=0x0000000000364B10 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000364B14 string=0x0000000000364B18 "h"
 *   insn=0x0000000000364B18 string=0x0000000000364B1C "!@"
 *   insn=0x0000000000364B30 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000364B3C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::GameSceneView>::shared_ptr<Caver::GameSceneView>(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CBF08;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameSceneView,Caver::GameSceneView>();
  return result;
}

