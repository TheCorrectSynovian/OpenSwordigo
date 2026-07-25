/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044D0C0
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver9PODLoaderEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::PODLoader>(Caver::PODLoader *)
 *
 * Callers: 1
 *   0x00000000001FEC00  boost::detail::shared_count::shared_count<Caver::PODLoader>(Caver::PODLoader *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F5500  Caver::PODLoader::~PODLoader()
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x000000000044D0D8 string=0x000000000044D0DC "A"
 *   insn=0x000000000044D0DC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000044D0E0 string=0x000000000044D0E4 ")"
 *   insn=0x000000000044D0F0 string=0x000000000044D0F4 "(A"
 *   insn=0x000000000044D0F8 string=0x000000000044D0FC ""
 *   insn=0x000000000044D110 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000044D11C string=0x00000000001F5500 "P'"
 *   insn=0x000000000044D120 string=0x000000000044D124 "c"
 *   insn=0x000000000044D124 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000044D130 string=0x000000000044D134 "_"
 *   insn=0x000000000044D140 string=0x00000000001FD590 "0'"
 *   insn=0x000000000044D14C string=0x000000000044D150 "X"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::PODLoader>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6D4168;
  *a1 = v4;
  return result;
}

