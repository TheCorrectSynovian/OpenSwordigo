/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003EFDA4
 * Mangled: _ZN5boost10shared_ptrIN5Caver10StripeViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::StripeView>::shared_ptr<Caver::StripeView>(Caver::StripeView *)
 *
 * Callers: 1
 *   0x00000000001FD810  boost::shared_ptr<Caver::StripeView>::shared_ptr<Caver::StripeView>(Caver::StripeView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FF4C0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StripeView,Caver::StripeView>(boost::shared_ptr<Caver::StripeView> const*,Caver::StripeView *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 19
 *   insn=0x00000000003EFDBC string=0x00000000003EFDC0 ""
 *   insn=0x00000000003EFDC0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003EFDC4 string=0x00000000003EFDC8 ")"
 *   insn=0x00000000003EFDD4 string=0x00000000003EFDD8 "(A"
 *   insn=0x00000000003EFDDC string=0x00000000003EFDE0 ""
 *   insn=0x00000000003EFDE8 string=0x00000000003EFDEC "`""
 *   insn=0x00000000003EFE0C string=0x00000000003EFE10 "4"
 *   insn=0x00000000003EFE14 string=0x00000000003EFE18 ""
 *   insn=0x00000000003EFE24 string=0x00000000003EFE28 "\t@"
 *   insn=0x00000000003EFE34 string=0x00000000003EFE38 ""
 *   insn=0x00000000003EFE44 string=0x00000000003EFE48 "@"
 *   insn=0x00000000003EFE58 string=0x00000000003EFE5C "<y"
 *   insn=0x00000000003EFE60 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003EFE64 string=0x00000000003EFE68 "h"
 *   insn=0x00000000003EFE64 string=0x00000000003EFE78 ">K"
 *   insn=0x00000000003EFE68 string=0x00000000003EFE6C "!@"
 *   insn=0x00000000003EFE80 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003EFE88 string=0x00000000003EFE8C "\t"
 *   insn=0x00000000003EFE8C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::StripeView>::shared_ptr<Caver::StripeView>(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6D0E28;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StripeView,Caver::StripeView>();
  return result;
}

