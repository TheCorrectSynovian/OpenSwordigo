/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000400144
 * Mangled: _ZN5boost10shared_ptrIN5Caver19AttributePointsViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::AttributePointsView>::shared_ptr<Caver::AttributePointsView>(Caver::AttributePointsView *)
 *
 * Callers: 1
 *   0x00000000001FB350  boost::shared_ptr<Caver::AttributePointsView>::shared_ptr<Caver::AttributePointsView>(Caver::AttributePointsView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000200F00  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::AttributePointsView,Caver::AttributePointsView>(boost::shared_ptr<Caver::AttributePointsView> const*,Caver::AttributePointsView *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 21
 *   insn=0x000000000040015C string=0x0000000000400160 " "
 *   insn=0x0000000000400160 string=0x0000000000400164 ")"
 *   insn=0x0000000000400160 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000400164 string=0x0000000000400168 ")"
 *   insn=0x0000000000400174 string=0x0000000000400178 "(A"
 *   insn=0x000000000040017C string=0x0000000000400180 ""
 *   insn=0x0000000000400188 string=0x000000000040018C "`""
 *   insn=0x0000000000400194 string=0x0000000000400198 "Z"
 *   insn=0x00000000004001AC string=0x00000000004001B0 "4"
 *   insn=0x00000000004001B4 string=0x00000000004001B8 ""
 *   insn=0x00000000004001C4 string=0x00000000004001C8 "\t@"
 *   insn=0x00000000004001D4 string=0x00000000004001D8 ""
 *   insn=0x00000000004001E4 string=0x00000000004001E8 "@"
 *   insn=0x00000000004001F8 string=0x00000000004001FC "T8"
 *   insn=0x0000000000400200 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000400204 string=0x0000000000400208 "h"
 *   insn=0x0000000000400204 string=0x0000000000400218 "V\n"
 *   insn=0x0000000000400208 string=0x000000000040020C "!@"
 *   insn=0x0000000000400220 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000400228 string=0x000000000040022C "!"
 *   insn=0x000000000040022C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::AttributePointsView>::shared_ptr<Caver::AttributePointsView>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6D1510;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::AttributePointsView,Caver::AttributePointsView>();
  return result;
}

