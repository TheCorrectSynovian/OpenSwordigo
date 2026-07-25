/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000346C64
 * Mangled: _ZN5boost10shared_ptrIN5Caver14TabbedMenuViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::TabbedMenuView>::shared_ptr<Caver::TabbedMenuView>(Caver::TabbedMenuView *)
 *
 * Callers: 1
 *   0x0000000000203200  boost::shared_ptr<Caver::TabbedMenuView>::shared_ptr<Caver::TabbedMenuView>(Caver::TabbedMenuView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6EA0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TabbedMenuView,Caver::TabbedMenuView>(boost::shared_ptr<Caver::TabbedMenuView> const*,Caver::TabbedMenuView *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x0000000000346C7C string=0x0000000000346C80 "X"
 *   insn=0x0000000000346C80 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000346C84 string=0x0000000000346C88 ")"
 *   insn=0x0000000000346C94 string=0x0000000000346C98 "(A"
 *   insn=0x0000000000346C9C string=0x0000000000346CA0 ""
 *   insn=0x0000000000346CA8 string=0x0000000000346CAC "`""
 *   insn=0x0000000000346CB4 string=0x0000000000346CB8 "z"
 *   insn=0x0000000000346CB8 string=0x00000000001F6EA0 "0'"
 *   insn=0x0000000000346CCC string=0x0000000000346CD0 "4"
 *   insn=0x0000000000346CD4 string=0x0000000000346CD8 ""
 *   insn=0x0000000000346CE4 string=0x0000000000346CE8 "\t@"
 *   insn=0x0000000000346CF4 string=0x0000000000346CF8 ""
 *   insn=0x0000000000346D04 string=0x0000000000346D08 "@"
 *   insn=0x0000000000346D1C string=0x0000000000346D20 "0"
 *   insn=0x0000000000346D20 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000346D24 string=0x0000000000346D28 "h"
 *   insn=0x0000000000346D28 string=0x0000000000346D2C "!@"
 *   insn=0x0000000000346D40 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000346D48 string=0x0000000000346D4C "Y"
 *   insn=0x0000000000346D4C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::TabbedMenuView>::shared_ptr<Caver::TabbedMenuView>(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CB088;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TabbedMenuView,Caver::TabbedMenuView>();
  return result;
}

