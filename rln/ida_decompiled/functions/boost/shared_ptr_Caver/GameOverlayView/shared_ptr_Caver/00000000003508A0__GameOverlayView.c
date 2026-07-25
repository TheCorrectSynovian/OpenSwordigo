/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003508A0
 * Mangled: _ZN5boost10shared_ptrIN5Caver15GameOverlayViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GameOverlayView>::shared_ptr<Caver::GameOverlayView>(Caver::GameOverlayView *)
 *
 * Callers: 1
 *   0x0000000000203820  boost::shared_ptr<Caver::GameOverlayView>::shared_ptr<Caver::GameOverlayView>(Caver::GameOverlayView *)
 *
 * Callees: 8
 *   0x00000000001F3DA0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverlayView,Caver::GameOverlayView>(boost::shared_ptr<Caver::GameOverlayView> const*,Caver::GameOverlayView *)
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 21
 *   insn=0x00000000003508B8 string=0x00000000003508BC "I"
 *   insn=0x00000000003508BC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003508C0 string=0x00000000003508C4 ")"
 *   insn=0x00000000003508D0 string=0x00000000003508D4 "(A"
 *   insn=0x00000000003508D8 string=0x00000000003508DC ""
 *   insn=0x00000000003508E4 string=0x00000000003508E8 "`""
 *   insn=0x00000000003508F0 string=0x00000000003508F4 "+"
 *   insn=0x00000000003508F4 string=0x00000000001F3DA0 "P'"
 *   insn=0x0000000000350908 string=0x000000000035090C "4"
 *   insn=0x0000000000350910 string=0x0000000000350914 ""
 *   insn=0x0000000000350920 string=0x0000000000350924 "\t@"
 *   insn=0x0000000000350930 string=0x0000000000350934 ""
 *   insn=0x0000000000350940 string=0x0000000000350944 "@"
 *   insn=0x0000000000350954 string=0x0000000000350958 "}"
 *   insn=0x0000000000350958 string=0x000000000035095C "!"
 *   insn=0x000000000035095C string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000350960 string=0x0000000000350964 "h"
 *   insn=0x0000000000350964 string=0x0000000000350968 "!@"
 *   insn=0x000000000035097C string=0x00000000001FD590 "0'"
 *   insn=0x0000000000350984 string=0x0000000000350988 "J"
 *   insn=0x0000000000350988 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::GameOverlayView>::shared_ptr<Caver::GameOverlayView>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CB728;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverlayView,Caver::GameOverlayView>();
  return result;
}

