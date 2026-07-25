/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003957A4
 * Mangled: _ZN5boost10shared_ptrIN5Caver14BadgeCountViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::BadgeCountView>::shared_ptr<Caver::BadgeCountView>(Caver::BadgeCountView *)
 *
 * Callers: 1
 *   0x00000000001F86B0  boost::shared_ptr<Caver::BadgeCountView>::shared_ptr<Caver::BadgeCountView>(Caver::BadgeCountView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAFD0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::BadgeCountView,Caver::BadgeCountView>(boost::shared_ptr<Caver::BadgeCountView> const*,Caver::BadgeCountView *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 19
 *   insn=0x00000000003957C0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003957C4 string=0x00000000003957C8 ")]@"
 *   insn=0x00000000003957D4 string=0x00000000003957D8 "(A"
 *   insn=0x00000000003957DC string=0x00000000003957E0 ""
 *   insn=0x00000000003957E8 string=0x00000000003957EC "`""
 *   insn=0x00000000003957F8 string=0x00000000001FAFD0 "0'"
 *   insn=0x000000000039580C string=0x0000000000395810 "4"
 *   insn=0x0000000000395814 string=0x0000000000395818 ""
 *   insn=0x0000000000395824 string=0x0000000000395828 "\t@"
 *   insn=0x0000000000395834 string=0x0000000000395838 ""
 *   insn=0x0000000000395844 string=0x0000000000395848 "@"
 *   insn=0x0000000000395854 string=0x0000000000395858 ""
 *   insn=0x000000000039585C string=0x0000000000395860 "`{"
 *   insn=0x0000000000395860 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000395864 string=0x0000000000395868 "h"
 *   insn=0x0000000000395868 string=0x000000000039586C "!@"
 *   insn=0x000000000039587C string=0x0000000000395880 "D"
 *   insn=0x0000000000395880 string=0x00000000001FD590 "0'"
 *   insn=0x000000000039588C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::BadgeCountView>::shared_ptr<Caver::BadgeCountView>(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CDEC8;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::BadgeCountView,Caver::BadgeCountView>();
  return result;
}

