/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000350BB0
 * Mangled: _ZN5boost10shared_ptrIN5Caver17ItemInfoPopupViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ItemInfoPopupView>::shared_ptr<Caver::ItemInfoPopupView>(Caver::ItemInfoPopupView *)
 *
 * Callers: 1
 *   0x00000000001F69A0  boost::shared_ptr<Caver::ItemInfoPopupView>::shared_ptr<Caver::ItemInfoPopupView>(Caver::ItemInfoPopupView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB220  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoPopupView,Caver::ItemInfoPopupView>(boost::shared_ptr<Caver::ItemInfoPopupView> const*,Caver::ItemInfoPopupView *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x0000000000350BCC string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000350BD0 string=0x0000000000350BD4 ")5F"
 *   insn=0x0000000000350BE0 string=0x0000000000350BE4 "(A"
 *   insn=0x0000000000350BE8 string=0x0000000000350BEC ""
 *   insn=0x0000000000350BF4 string=0x0000000000350BF8 "`""
 *   insn=0x0000000000350C04 string=0x00000000001FB220 "0'"
 *   insn=0x0000000000350C18 string=0x0000000000350C1C "4"
 *   insn=0x0000000000350C20 string=0x0000000000350C24 ""
 *   insn=0x0000000000350C30 string=0x0000000000350C34 "\t@"
 *   insn=0x0000000000350C40 string=0x0000000000350C44 ""
 *   insn=0x0000000000350C50 string=0x0000000000350C54 "@"
 *   insn=0x0000000000350C68 string=0x0000000000350C6C "]"
 *   insn=0x0000000000350C6C string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000350C70 string=0x0000000000350C74 "h"
 *   insn=0x0000000000350C74 string=0x0000000000350C78 "!@"
 *   insn=0x0000000000350C88 string=0x0000000000350C8C "A"
 *   insn=0x0000000000350C8C string=0x00000000001FD590 "0'"
 *   insn=0x0000000000350C98 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::ItemInfoPopupView>::shared_ptr<Caver::ItemInfoPopupView>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CB788;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoPopupView,Caver::ItemInfoPopupView>();
  return result;
}

