/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000038D294
 * Mangled: _ZN5boost10shared_ptrIN5Caver9SceneViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::SceneView>::shared_ptr<Caver::SceneView>(Caver::SceneView *)
 *
 * Callers: 1
 *   0x00000000001F6E90  boost::shared_ptr<Caver::SceneView>::shared_ptr<Caver::SceneView>(Caver::SceneView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB400  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SceneView,Caver::SceneView>(boost::shared_ptr<Caver::SceneView> const*,Caver::SceneView *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x000000000038D2B0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000038D2B4 string=0x000000000038D2B8 ")IF"
 *   insn=0x000000000038D2C4 string=0x000000000038D2C8 "(A"
 *   insn=0x000000000038D2CC string=0x000000000038D2D0 ""
 *   insn=0x000000000038D2D8 string=0x000000000038D2DC "`""
 *   insn=0x000000000038D2E4 string=0x000000000038D2E8 "F"
 *   insn=0x000000000038D2E8 string=0x00000000001FB400 "0'"
 *   insn=0x000000000038D2FC string=0x000000000038D300 "4"
 *   insn=0x000000000038D304 string=0x000000000038D308 ""
 *   insn=0x000000000038D314 string=0x000000000038D318 "\t@"
 *   insn=0x000000000038D324 string=0x000000000038D328 ""
 *   insn=0x000000000038D334 string=0x000000000038D338 "@"
 *   insn=0x000000000038D344 string=0x000000000038D348 "_"
 *   insn=0x000000000038D350 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000038D354 string=0x000000000038D358 "h"
 *   insn=0x000000000038D358 string=0x000000000038D35C "!@"
 *   insn=0x000000000038D370 string=0x00000000001FD590 "0'"
 *   insn=0x000000000038D37C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::SceneView>::shared_ptr<Caver::SceneView>(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CDBC8;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SceneView,Caver::SceneView>();
  return result;
}

