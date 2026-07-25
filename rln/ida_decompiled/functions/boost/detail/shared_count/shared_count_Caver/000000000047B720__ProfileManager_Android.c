/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B720
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver22ProfileManager_AndroidEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::ProfileManager_Android>(Caver::ProfileManager_Android *)
 *
 * Callers: 1
 *   0x00000000001FB430  boost::detail::shared_count::shared_count<Caver::ProfileManager_Android>(Caver::ProfileManager_Android *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB410  Caver::ProfileManager_Android::~ProfileManager_Android()
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x000000000047B73C string=0x000000000047B740 "i"
 *   insn=0x000000000047B73C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000047B740 string=0x000000000047B744 ")"
 *   insn=0x000000000047B750 string=0x000000000047B754 "(A"
 *   insn=0x000000000047B758 string=0x000000000047B75C ""
 *   insn=0x000000000047B770 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000047B778 string=0x000000000047B77C "%"
 *   insn=0x000000000047B77C string=0x00000000001FB410 "0'"
 *   insn=0x000000000047B784 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000047B798 string=0x000000000047B7A0 "|"
 *   insn=0x000000000047B7A0 string=0x00000000001FD590 "0'"
 *   insn=0x000000000047B7A4 string=0x000000000047B7A8 "G"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::ProfileManager_Android>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6D5088;
  *a1 = v4;
  return result;
}

