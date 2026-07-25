/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B670
 * Mangled: _ZN5boost10shared_ptrIN5Caver24OnlineController_AndroidEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::OnlineController_Android>::shared_ptr<Caver::OnlineController_Android>(Caver::OnlineController_Android *)
 *
 * Callers: 1
 *   0x00000000001F5B10  boost::shared_ptr<Caver::OnlineController_Android>::shared_ptr<Caver::OnlineController_Android>(Caver::OnlineController_Android *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x000000000047B68C string=0x000000000047B690 "I"
 *   insn=0x000000000047B68C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000047B690 string=0x000000000047B694 ")"
 *   insn=0x000000000047B6A0 string=0x000000000047B6A4 "(A"
 *   insn=0x000000000047B6A8 string=0x000000000047B6AC ""
 *   insn=0x000000000047B6CC string=0x00000000001F45E0 "P'"
 *   insn=0x000000000047B6D0 string=0x000000000047B6D4 "h"
 *   insn=0x000000000047B6D0 string=0x000000000047B6E4 "#"
 *   insn=0x000000000047B6D4 string=0x000000000047B6D8 ""
 *   insn=0x000000000047B6EC string=0x00000000001FD590 "0'"
 *   insn=0x000000000047B6F0 string=0x000000000047B6F4 "t"
 *   insn=0x000000000047B6FC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::shared_ptr<Caver::OnlineController_Android>::shared_ptr<Caver::OnlineController_Android>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // x0

  *a1 = a2;
  a1[1] = 0;
  v4 = operator new(0x20u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v4 = &off_6D5038;
  a1[1] = v4;
  boost::detail::sp_enable_shared_from_this();
}

