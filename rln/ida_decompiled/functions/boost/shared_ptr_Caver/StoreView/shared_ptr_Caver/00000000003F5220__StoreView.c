/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F5220
 * Mangled: _ZN5boost10shared_ptrIN5Caver9StoreViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::StoreView>::shared_ptr<Caver::StoreView>(Caver::StoreView *)
 *
 * Callers: 1
 *   0x0000000000201290  boost::shared_ptr<Caver::StoreView>::shared_ptr<Caver::StoreView>(Caver::StoreView *)
 *
 * Callees: 8
 *   0x00000000001F34E0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StoreView,Caver::StoreView>(boost::shared_ptr<Caver::StoreView> const*,Caver::StoreView *)
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x00000000003F523C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003F5240 string=0x00000000003F5244 ")}B"
 *   insn=0x00000000003F5250 string=0x00000000003F5254 "(A"
 *   insn=0x00000000003F5258 string=0x00000000003F525C ""
 *   insn=0x00000000003F5264 string=0x00000000003F5268 "`""
 *   insn=0x00000000003F5274 string=0x00000000001F34E0 "P'"
 *   insn=0x00000000003F5288 string=0x00000000003F528C "4"
 *   insn=0x00000000003F5290 string=0x00000000003F5294 ""
 *   insn=0x00000000003F52A0 string=0x00000000003F52A4 "\t@"
 *   insn=0x00000000003F52B0 string=0x00000000003F52B4 ""
 *   insn=0x00000000003F52C0 string=0x00000000003F52C4 "@"
 *   insn=0x00000000003F52D0 string=0x00000000003F52D4 "|1"
 *   insn=0x00000000003F52DC string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003F52E0 string=0x00000000003F52E4 "h"
 *   insn=0x00000000003F52E4 string=0x00000000003F52E8 "!@"
 *   insn=0x00000000003F52FC string=0x00000000001FD590 "0'"
 *   insn=0x00000000003F5308 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::StoreView>::shared_ptr<Caver::StoreView>(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6D0F98;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StoreView,Caver::StoreView>();
  return result;
}

