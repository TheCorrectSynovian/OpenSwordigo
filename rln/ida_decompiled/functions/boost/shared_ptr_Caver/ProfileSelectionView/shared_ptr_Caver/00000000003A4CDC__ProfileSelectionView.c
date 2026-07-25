/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A4CDC
 * Mangled: _ZN5boost10shared_ptrIN5Caver20ProfileSelectionViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ProfileSelectionView>::shared_ptr<Caver::ProfileSelectionView>(Caver::ProfileSelectionView *)
 *
 * Callers: 2
 *   0x00000000001FA130  boost::shared_ptr<Caver::ProfileSelectionView>::shared_ptr<Caver::ProfileSelectionView>(Caver::ProfileSelectionView *)
 *   0x00000000003A4B94  Caver::ProfileSelectionViewController::~ProfileSelectionViewController()
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FE8E0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileSelectionView,Caver::ProfileSelectionView>(boost::shared_ptr<Caver::ProfileSelectionView> const*,Caver::ProfileSelectionView *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x00000000003A4CF4 string=0x00000000003A4CF8 ":B"
 *   insn=0x00000000003A4CF8 string=0x00000000003A4CFC "\t"
 *   insn=0x00000000003A4CF8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003A4CFC string=0x00000000003A4D00 ")"
 *   insn=0x00000000003A4D0C string=0x00000000003A4D10 "(A"
 *   insn=0x00000000003A4D14 string=0x00000000003A4D18 ""
 *   insn=0x00000000003A4D20 string=0x00000000003A4D24 "`""
 *   insn=0x00000000003A4D44 string=0x00000000003A4D48 "4"
 *   insn=0x00000000003A4D4C string=0x00000000003A4D50 ""
 *   insn=0x00000000003A4D5C string=0x00000000003A4D60 "\t@"
 *   insn=0x00000000003A4D6C string=0x00000000003A4D70 ""
 *   insn=0x00000000003A4D7C string=0x00000000003A4D80 "@"
 *   insn=0x00000000003A4D90 string=0x00000000003A4D94 "n"
 *   insn=0x00000000003A4D98 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003A4D9C string=0x00000000003A4DA0 "h"
 *   insn=0x00000000003A4D9C string=0x00000000003A4DB0 "pw"
 *   insn=0x00000000003A4DA0 string=0x00000000003A4DA4 "!@"
 *   insn=0x00000000003A4DB8 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003A4DC0 string=0x00000000003A4DC4 ";I"
 *   insn=0x00000000003A4DC4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::ProfileSelectionView>::shared_ptr<Caver::ProfileSelectionView>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CE788;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileSelectionView,Caver::ProfileSelectionView>();
  return result;
}

