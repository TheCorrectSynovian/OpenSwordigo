/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033E5CC
 * Mangled: _ZN5boost10shared_ptrIN5Caver14GUILoadingViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GUILoadingView>::shared_ptr<Caver::GUILoadingView>(Caver::GUILoadingView *)
 *
 * Callers: 1
 *   0x00000000001FD8E0  boost::shared_ptr<Caver::GUILoadingView>::shared_ptr<Caver::GUILoadingView>(Caver::GUILoadingView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F60E0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUILoadingView,Caver::GUILoadingView>(boost::shared_ptr<Caver::GUILoadingView> const*,Caver::GUILoadingView *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 19
 *   insn=0x000000000033E5E8 string=0x000000000033E5EC ")"
 *   insn=0x000000000033E5E8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000033E5EC string=0x000000000033E5F0 ")iF"
 *   insn=0x000000000033E5FC string=0x000000000033E600 "(A"
 *   insn=0x000000000033E604 string=0x000000000033E608 ""
 *   insn=0x000000000033E610 string=0x000000000033E614 "`""
 *   insn=0x000000000033E620 string=0x00000000001F60E0 "0'"
 *   insn=0x000000000033E634 string=0x000000000033E638 "4"
 *   insn=0x000000000033E63C string=0x000000000033E640 ""
 *   insn=0x000000000033E64C string=0x000000000033E650 "\t@"
 *   insn=0x000000000033E65C string=0x000000000033E660 ""
 *   insn=0x000000000033E66C string=0x000000000033E670 "@"
 *   insn=0x000000000033E680 string=0x000000000033E684 "2?"
 *   insn=0x000000000033E688 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000033E68C string=0x000000000033E690 "h"
 *   insn=0x000000000033E68C string=0x000000000033E6A0 "4"
 *   insn=0x000000000033E690 string=0x000000000033E694 "!@"
 *   insn=0x000000000033E6A8 string=0x00000000001FD590 "0'"
 *   insn=0x000000000033E6B4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::GUILoadingView>::shared_ptr<Caver::GUILoadingView>(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CAB48;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUILoadingView,Caver::GUILoadingView>();
  return result;
}

