/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AB06C
 * Mangled: _ZN5boost10shared_ptrIN5Caver15StoreControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::StoreController>::shared_ptr<Caver::StoreController>(Caver::StoreController *)
 *
 * Callers: 1
 *   0x00000000001FBBF0  boost::shared_ptr<Caver::StoreController>::shared_ptr<Caver::StoreController>(Caver::StoreController *)
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
 * Referenced strings: 13
 *   insn=0x00000000003AB084 string=0x00000000003AB088 "V)"
 *   insn=0x00000000003AB088 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003AB08C string=0x00000000003AB090 ")"
 *   insn=0x00000000003AB09C string=0x00000000003AB0A0 "(A"
 *   insn=0x00000000003AB0A4 string=0x00000000003AB0A8 ""
 *   insn=0x00000000003AB0C0 string=0x00000000003AB0C4 "#^"
 *   insn=0x00000000003AB0C8 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003AB0CC string=0x00000000003AB0D0 "h"
 *   insn=0x00000000003AB0D0 string=0x00000000003AB0D4 ""
 *   insn=0x00000000003AB0E4 string=0x00000000003AB0E8 "*I"
 *   insn=0x00000000003AB0E8 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003AB0F4 string=0x00000000003AB0F8 "n0"
 *   insn=0x00000000003AB0F8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::shared_ptr<Caver::StoreController>::shared_ptr<Caver::StoreController>(_QWORD *a1, __int64 a2)
{
  __int64 v4; // x0

  *a1 = a2;
  a1[1] = 0;
  v4 = operator new(0x20u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v4 = &off_6CECC8;
  a1[1] = v4;
  boost::detail::sp_enable_shared_from_this();
}

