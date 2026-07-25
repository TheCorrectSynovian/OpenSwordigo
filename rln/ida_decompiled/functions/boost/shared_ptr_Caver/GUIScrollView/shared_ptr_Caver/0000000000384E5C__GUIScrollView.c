/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000384E5C
 * Mangled: _ZN5boost10shared_ptrIN5Caver13GUIScrollViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GUIScrollView>::shared_ptr<Caver::GUIScrollView>(Caver::GUIScrollView *)
 *
 * Callers: 1
 *   0x00000000001F7690  boost::shared_ptr<Caver::GUIScrollView>::shared_ptr<Caver::GUIScrollView>(Caver::GUIScrollView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62A0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIScrollView,Caver::GUIScrollView>(boost::shared_ptr<Caver::GUIScrollView> const*,Caver::GUIScrollView *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x0000000000384E78 string=0x0000000000384E7C "\t"
 *   insn=0x0000000000384E78 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000384E7C string=0x0000000000384E80 ")"
 *   insn=0x0000000000384E8C string=0x0000000000384E90 "(A"
 *   insn=0x0000000000384E94 string=0x0000000000384E98 ""
 *   insn=0x0000000000384EA0 string=0x0000000000384EA4 "`""
 *   insn=0x0000000000384EB0 string=0x00000000001F62A0 "0'"
 *   insn=0x0000000000384EC4 string=0x0000000000384EC8 "4"
 *   insn=0x0000000000384ECC string=0x0000000000384ED0 ""
 *   insn=0x0000000000384EDC string=0x0000000000384EE0 "\t@"
 *   insn=0x0000000000384EEC string=0x0000000000384EF0 ""
 *   insn=0x0000000000384EFC string=0x0000000000384F00 "@"
 *   insn=0x0000000000384F0C string=0x0000000000384F10 "m"
 *   insn=0x0000000000384F18 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000384F1C string=0x0000000000384F20 "h"
 *   insn=0x0000000000384F20 string=0x0000000000384F24 "!@"
 *   insn=0x0000000000384F38 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000384F44 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::GUIScrollView>::shared_ptr<Caver::GUIScrollView>(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CD2A8;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIScrollView,Caver::GUIScrollView>();
  return result;
}

