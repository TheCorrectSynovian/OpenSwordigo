/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004507EC
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver8SkeletonEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Skeleton>(Caver::Skeleton *)
 *
 * Callers: 1
 *   0x0000000000201640  boost::detail::shared_count::shared_count<Caver::Skeleton>(Caver::Skeleton *)
 *
 * Callees: 11
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 28
 *   insn=0x0000000000450800 string=0x0000000000450804 "U"
 *   insn=0x000000000045081C string=0x0000000000450820 "p"
 *   insn=0x0000000000450820 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000450824 string=0x0000000000450828 ")"
 *   insn=0x0000000000450834 string=0x0000000000450838 "(A"
 *   insn=0x000000000045083C string=0x0000000000450840 ""
 *   insn=0x0000000000450870 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000450874 string=0x0000000000450878 "3"
 *   insn=0x0000000000450874 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000450878 string=0x000000000045087C "u"
 *   insn=0x0000000000450888 string=0x000000000045088C ""
 *   insn=0x000000000045089C string=0x00000000004508A0 "\t"
 *   insn=0x00000000004508B4 string=0x00000000004508C4 "!"
 *   insn=0x00000000004508B8 string=0x00000000004508BC "a"
 *   insn=0x00000000004508C8 string=0x00000000004508CC "\t"
 *   insn=0x00000000004508C8 string=0x00000000004508E8 "\t"
 *   insn=0x00000000004508CC string=0x00000000004508D0 "*"
 *   insn=0x00000000004508D0 string=0x00000000004508D4 "\n"
 *   insn=0x00000000004508D8 string=0x00000000004508DC "?"
 *   insn=0x00000000004508E8 string=0x00000000004508EC "*"
 *   insn=0x00000000004508EC string=0x00000000004508F0 "\n"
 *   insn=0x00000000004508F0 string=0x00000000004508F4 "?"
 *   insn=0x0000000000450910 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000450914 string=0x0000000000450918 "f"
 *   insn=0x0000000000450918 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000450920 string=0x0000000000450924 ""
 *   insn=0x0000000000450924 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000450930 string=0x0000000000450934 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::Skeleton>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  _ReadStatusReg(TPIDR_EL0);
  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6D4258;
  *a1 = v4;
  return result;
}

