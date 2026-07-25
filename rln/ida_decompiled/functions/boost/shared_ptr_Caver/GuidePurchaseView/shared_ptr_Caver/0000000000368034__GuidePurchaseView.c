/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000368034
 * Mangled: _ZN5boost10shared_ptrIN5Caver17GuidePurchaseViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GuidePurchaseView>::shared_ptr<Caver::GuidePurchaseView>(Caver::GuidePurchaseView *)
 *
 * Callers: 2
 *   0x0000000000200B70  boost::shared_ptr<Caver::GuidePurchaseView>::shared_ptr<Caver::GuidePurchaseView>(Caver::GuidePurchaseView *)
 *   0x0000000000367E18  Caver::GuidePurchaseViewController::~GuidePurchaseViewController()
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202340  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GuidePurchaseView,Caver::GuidePurchaseView>(boost::shared_ptr<Caver::GuidePurchaseView> const*,Caver::GuidePurchaseView *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 19
 *   insn=0x000000000036804C string=0x0000000000368050 "d5"
 *   insn=0x0000000000368050 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000368054 string=0x0000000000368058 ")"
 *   insn=0x0000000000368064 string=0x0000000000368068 "(A"
 *   insn=0x000000000036806C string=0x0000000000368070 ""
 *   insn=0x0000000000368078 string=0x000000000036807C "`""
 *   insn=0x000000000036809C string=0x00000000003680A0 "4"
 *   insn=0x00000000003680A4 string=0x00000000003680A8 ""
 *   insn=0x00000000003680B4 string=0x00000000003680B8 "\t@"
 *   insn=0x00000000003680C4 string=0x00000000003680C8 ""
 *   insn=0x00000000003680D4 string=0x00000000003680D8 "@"
 *   insn=0x00000000003680EC string=0x00000000003680F0 "<1"
 *   insn=0x00000000003680F0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003680F4 string=0x00000000003680F8 "h"
 *   insn=0x00000000003680F8 string=0x00000000003680FC "!@"
 *   insn=0x000000000036810C string=0x0000000000368110 " U"
 *   insn=0x0000000000368110 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000368118 string=0x000000000036811C "e<"
 *   insn=0x000000000036811C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::GuidePurchaseView>::shared_ptr<Caver::GuidePurchaseView>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CC328;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GuidePurchaseView,Caver::GuidePurchaseView>();
  return result;
}

