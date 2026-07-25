/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003892AC
 * Mangled: _ZN5boost10shared_ptrIN5Caver16OnlineControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::OnlineController>::shared_ptr<Caver::OnlineController>(Caver::OnlineController *)
 *
 * Callers: 1
 *   0x00000000001FBB20  boost::shared_ptr<Caver::OnlineController>::shared_ptr<Caver::OnlineController>(Caver::OnlineController *)
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
 * Referenced strings: 10
 *   insn=0x00000000003892C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003892CC string=0x00000000003892D0 ")"
 *   insn=0x00000000003892DC string=0x00000000003892E0 "(A"
 *   insn=0x00000000003892E4 string=0x00000000003892E8 ""
 *   insn=0x0000000000389308 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000038930C string=0x0000000000389310 "h"
 *   insn=0x0000000000389310 string=0x0000000000389314 ""
 *   insn=0x0000000000389328 string=0x00000000001FD590 "0'"
 *   insn=0x000000000038932C string=0x0000000000389330 "e"
 *   insn=0x0000000000389338 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::shared_ptr<Caver::OnlineController>::shared_ptr<Caver::OnlineController>(_QWORD *a1, __int64 a2)
{
  __int64 v4; // x0

  *a1 = a2;
  a1[1] = 0;
  v4 = operator new(0x20u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v4 = &off_6CD740;
  a1[1] = v4;
  boost::detail::sp_enable_shared_from_this();
}

