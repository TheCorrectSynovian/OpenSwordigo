/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003637F4
 * Mangled: _ZN5boost10shared_ptrIN5Caver9QuestTextEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::QuestText>::shared_ptr<Caver::QuestText>(Caver::QuestText *)
 *
 * Callers: 1
 *   0x00000000001FBC60  boost::shared_ptr<Caver::QuestText>::shared_ptr<Caver::QuestText>(Caver::QuestText *)
 *
 * Callees: 11
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 43
 *   insn=0x0000000000363808 string=0x000000000036380C "U"
 *   insn=0x0000000000363824 string=0x0000000000363828 "nG"
 *   insn=0x0000000000363828 string=0x000000000036382C ")"
 *   insn=0x0000000000363828 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000036382C string=0x0000000000363830 ")uD"
 *   insn=0x000000000036383C string=0x0000000000363840 "(A"
 *   insn=0x0000000000363844 string=0x0000000000363848 ""
 *   insn=0x0000000000363858 string=0x000000000036385C "=|"
 *   insn=0x0000000000363888 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000036388C string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000363890 string=0x0000000000363894 "t"
 *   insn=0x000000000036389C string=0x0000000000363910 "t"
 *   insn=0x00000000003638B8 string=0x00000000003638BC "\t"
 *   insn=0x00000000003638B8 string=0x00000000003638D0 "\t"
 *   insn=0x00000000003638BC string=0x00000000003638C0 "*"
 *   insn=0x00000000003638C0 string=0x00000000003638C4 "\n"
 *   insn=0x00000000003638CC string=0x00000000003638DC "?"
 *   insn=0x00000000003638D0 string=0x00000000003638D4 "*"
 *   insn=0x00000000003638D4 string=0x00000000003638D8 "\n"
 *   insn=0x00000000003638FC string=0x00000000003638B4 "!"
 *   insn=0x0000000000363904 string=0x0000000000363908 "A"
 *   insn=0x0000000000363908 string=0x000000000036390C "t"
 *   insn=0x0000000000363910 string=0x000000000036391C "h"
 *   insn=0x0000000000363914 string=0x0000000000363918 "fN"
 *   insn=0x0000000000363918 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000036391C string=0x0000000000363920 "\t"
 *   insn=0x0000000000363920 string=0x0000000000363924 ")"
 *   insn=0x0000000000363930 string=0x0000000000363934 "\t"
 *   insn=0x0000000000363934 string=0x0000000000363938 ")=G"
 *   insn=0x0000000000363938 string=0x000000000036393C "!"
 *   insn=0x0000000000363940 string=0x0000000000363944 "\t"
 *   insn=0x0000000000363940 string=0x0000000000363970 "\t"
 *   insn=0x0000000000363944 string=0x0000000000363948 "*"
 *   insn=0x0000000000363948 string=0x000000000036394C "\n"
 *   insn=0x0000000000363950 string=0x0000000000363954 "?"
 *   insn=0x0000000000363954 string=0x0000000000363958 "l"
 *   insn=0x0000000000363964 string=0x0000000000363968 "RN"
 *   insn=0x0000000000363970 string=0x0000000000363974 "*"
 *   insn=0x0000000000363974 string=0x0000000000363978 "\n"
 *   insn=0x0000000000363978 string=0x000000000036397C "?"
 *   insn=0x000000000036398C string=0x00000000001FD590 "0'"
 *   insn=0x0000000000363994 string=0x0000000000363998 "m"
 *   insn=0x0000000000363998 string=0x000000000036399C "EN"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::shared_ptr<Caver::QuestText>::shared_ptr<Caver::QuestText>(_QWORD *a1, __int64 a2)
{
  __int64 v4; // x0

  _ReadStatusReg(TPIDR_EL0);
  *a1 = a2;
  a1[1] = 0;
  v4 = operator new(0x20u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v4 = &off_6CBD78;
  a1[1] = v4;
  boost::detail::sp_enable_shared_from_this();
}

