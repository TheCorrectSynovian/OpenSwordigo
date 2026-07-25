/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003EBB20
 * Mangled: _ZN5boost10shared_ptrIN5Caver12PurchaseViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::PurchaseView>::shared_ptr<Caver::PurchaseView>(Caver::PurchaseView *)
 *
 * Callers: 2
 *   0x00000000001FBD90  boost::shared_ptr<Caver::PurchaseView>::shared_ptr<Caver::PurchaseView>(Caver::PurchaseView *)
 *   0x00000000003EB8C4  Caver::PurchaseViewController::~PurchaseViewController()
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000002000C0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PurchaseView,Caver::PurchaseView>(boost::shared_ptr<Caver::PurchaseView> const*,Caver::PurchaseView *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x00000000003EBB3C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003EBB40 string=0x00000000003EBB44 ")}B"
 *   insn=0x00000000003EBB50 string=0x00000000003EBB54 "(A"
 *   insn=0x00000000003EBB58 string=0x00000000003EBB5C ""
 *   insn=0x00000000003EBB64 string=0x00000000003EBB68 "`""
 *   insn=0x00000000003EBB70 string=0x00000000003EBB74 "SQ"
 *   insn=0x00000000003EBB88 string=0x00000000003EBB8C "4"
 *   insn=0x00000000003EBB90 string=0x00000000003EBB94 ""
 *   insn=0x00000000003EBBA0 string=0x00000000003EBBA4 "\t@"
 *   insn=0x00000000003EBBB0 string=0x00000000003EBBB4 ""
 *   insn=0x00000000003EBBC0 string=0x00000000003EBBC4 "@"
 *   insn=0x00000000003EBBD0 string=0x00000000003EBBD4 "<W"
 *   insn=0x00000000003EBBDC string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003EBBE0 string=0x00000000003EBBE4 "h"
 *   insn=0x00000000003EBBE4 string=0x00000000003EBBE8 "!@"
 *   insn=0x00000000003EBBF8 string=0x00000000003EBBFC "eF"
 *   insn=0x00000000003EBBFC string=0x00000000001FD590 "0'"
 *   insn=0x00000000003EBC08 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::PurchaseView>::shared_ptr<Caver::PurchaseView>(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6D0AE8;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PurchaseView,Caver::PurchaseView>();
  return result;
}

