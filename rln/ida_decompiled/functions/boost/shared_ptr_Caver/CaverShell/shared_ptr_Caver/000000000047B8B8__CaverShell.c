/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B8B8
 * Mangled: _ZN5boost10shared_ptrIN5Caver10CaverShellEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::CaverShell>::shared_ptr<Caver::CaverShell>(Caver::CaverShell *)
 *
 * Callers: 1
 *   0x00000000001FCC80  boost::shared_ptr<Caver::CaverShell>::shared_ptr<Caver::CaverShell>(Caver::CaverShell *)
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
 *   insn=0x000000000047B8D0 string=0x000000000047B8D4 "C"
 *   insn=0x000000000047B8D4 string=0x000000000047B8D8 "I"
 *   insn=0x000000000047B8D4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000047B8D8 string=0x000000000047B8DC ")"
 *   insn=0x000000000047B8E8 string=0x000000000047B8EC "(A"
 *   insn=0x000000000047B8F0 string=0x000000000047B8F4 ""
 *   insn=0x000000000047B914 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000047B918 string=0x000000000047B91C "h"
 *   insn=0x000000000047B91C string=0x000000000047B920 ""
 *   insn=0x000000000047B934 string=0x00000000001FD590 "0'"
 *   insn=0x000000000047B940 string=0x000000000047B944 "["
 *   insn=0x000000000047B944 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::shared_ptr<Caver::CaverShell>::shared_ptr<Caver::CaverShell>(_QWORD *a1, __int64 a2)
{
  __int64 v4; // x0

  *a1 = a2;
  a1[1] = 0;
  v4 = operator new(0x20u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v4 = &off_6D5128;
  a1[1] = v4;
  boost::detail::sp_enable_shared_from_this();
}

