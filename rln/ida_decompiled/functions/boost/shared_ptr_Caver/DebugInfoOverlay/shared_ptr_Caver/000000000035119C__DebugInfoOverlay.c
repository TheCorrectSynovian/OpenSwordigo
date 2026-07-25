/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000035119C
 * Mangled: _ZN5boost10shared_ptrIN5Caver16DebugInfoOverlayEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::DebugInfoOverlay>::shared_ptr<Caver::DebugInfoOverlay>(Caver::DebugInfoOverlay *)
 *
 * Callers: 2
 *   0x0000000000202190  boost::shared_ptr<Caver::DebugInfoOverlay>::shared_ptr<Caver::DebugInfoOverlay>(Caver::DebugInfoOverlay *)
 *   0x0000000000350EC4  Caver::GUIAnimation::~GUIAnimation()
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5B70  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DebugInfoOverlay,Caver::DebugInfoOverlay>(boost::shared_ptr<Caver::DebugInfoOverlay> const*,Caver::DebugInfoOverlay *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 21
 *   insn=0x00000000003511B4 string=0x00000000003511B8 "\n"
 *   insn=0x00000000003511B8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003511BC string=0x00000000003511C0 ")G"
 *   insn=0x00000000003511CC string=0x00000000003511D0 "(A"
 *   insn=0x00000000003511D4 string=0x00000000003511D8 ""
 *   insn=0x00000000003511E0 string=0x00000000003511E4 "`""
 *   insn=0x00000000003511EC string=0x00000000003511F0 "`"
 *   insn=0x00000000003511F0 string=0x00000000001F5B70 "P'"
 *   insn=0x0000000000351204 string=0x0000000000351208 "4"
 *   insn=0x000000000035120C string=0x0000000000351210 ""
 *   insn=0x000000000035121C string=0x0000000000351220 "\t@"
 *   insn=0x000000000035122C string=0x0000000000351230 ""
 *   insn=0x000000000035123C string=0x0000000000351240 "@"
 *   insn=0x0000000000351250 string=0x0000000000351254 ">"
 *   insn=0x0000000000351258 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000035125C string=0x0000000000351260 "h"
 *   insn=0x000000000035125C string=0x0000000000351270 "@"
 *   insn=0x0000000000351260 string=0x0000000000351264 "!@"
 *   insn=0x0000000000351278 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000351280 string=0x0000000000351284 ""
 *   insn=0x0000000000351284 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::DebugInfoOverlay>::shared_ptr<Caver::DebugInfoOverlay>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CB828;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DebugInfoOverlay,Caver::DebugInfoOverlay>();
  return result;
}

