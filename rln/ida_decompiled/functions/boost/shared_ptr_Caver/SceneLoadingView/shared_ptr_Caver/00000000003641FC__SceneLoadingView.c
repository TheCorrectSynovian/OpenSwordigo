/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003641FC
 * Mangled: _ZN5boost10shared_ptrIN5Caver16SceneLoadingViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::SceneLoadingView>::shared_ptr<Caver::SceneLoadingView>(Caver::SceneLoadingView *)
 *
 * Callers: 2
 *   0x00000000001F3A00  boost::shared_ptr<Caver::SceneLoadingView>::shared_ptr<Caver::SceneLoadingView>(Caver::SceneLoadingView *)
 *   0x0000000000363FD4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoView,Caver::ItemInfoView>(boost::shared_ptr<Caver::ItemInfoView> const*,Caver::ItemInfoView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAA10  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SceneLoadingView,Caver::SceneLoadingView>(boost::shared_ptr<Caver::SceneLoadingView> const*,Caver::SceneLoadingView *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 19
 *   insn=0x0000000000364218 string=0x000000000036421C "\t"
 *   insn=0x0000000000364218 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000036421C string=0x0000000000364220 ")"
 *   insn=0x000000000036422C string=0x0000000000364230 "(A"
 *   insn=0x0000000000364234 string=0x0000000000364238 ""
 *   insn=0x0000000000364240 string=0x0000000000364244 "`""
 *   insn=0x0000000000364250 string=0x00000000001FAA10 "0'"
 *   insn=0x0000000000364264 string=0x0000000000364268 "4"
 *   insn=0x000000000036426C string=0x0000000000364270 ""
 *   insn=0x000000000036427C string=0x0000000000364280 "\t@"
 *   insn=0x000000000036428C string=0x0000000000364290 ""
 *   insn=0x000000000036429C string=0x00000000003642A0 "@"
 *   insn=0x00000000003642B0 string=0x00000000003642B4 "&"
 *   insn=0x00000000003642B8 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003642BC string=0x00000000003642C0 "h"
 *   insn=0x00000000003642BC string=0x00000000003642D0 "(z"
 *   insn=0x00000000003642C0 string=0x00000000003642C4 "!@"
 *   insn=0x00000000003642D8 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003642E4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::SceneLoadingView>::shared_ptr<Caver::SceneLoadingView>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CBE18;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SceneLoadingView,Caver::SceneLoadingView>();
  return result;
}

