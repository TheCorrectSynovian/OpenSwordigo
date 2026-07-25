/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D8D54
 * Mangled: _ZN5boost10shared_ptrIN5Caver18ConsumableItemViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ConsumableItemView>::shared_ptr<Caver::ConsumableItemView>(Caver::ConsumableItemView *)
 *
 * Callers: 1
 *   0x00000000001F3760  boost::shared_ptr<Caver::ConsumableItemView>::shared_ptr<Caver::ConsumableItemView>(Caver::ConsumableItemView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5DE0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConsumableItemView,Caver::ConsumableItemView>(boost::shared_ptr<Caver::ConsumableItemView> const*,Caver::ConsumableItemView *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 19
 *   insn=0x00000000003D8D70 string=0x00000000003D8D74 "i"
 *   insn=0x00000000003D8D70 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003D8D74 string=0x00000000003D8D78 ")=F"
 *   insn=0x00000000003D8D84 string=0x00000000003D8D88 "(A"
 *   insn=0x00000000003D8D8C string=0x00000000003D8D90 ""
 *   insn=0x00000000003D8D98 string=0x00000000003D8D9C "`""
 *   insn=0x00000000003D8DA8 string=0x00000000001F5DE0 "P'"
 *   insn=0x00000000003D8DBC string=0x00000000003D8DC0 "4"
 *   insn=0x00000000003D8DC4 string=0x00000000003D8DC8 ""
 *   insn=0x00000000003D8DD4 string=0x00000000003D8DD8 "\t@"
 *   insn=0x00000000003D8DE4 string=0x00000000003D8DE8 ""
 *   insn=0x00000000003D8DF4 string=0x00000000003D8DF8 "@"
 *   insn=0x00000000003D8E08 string=0x00000000003D8E0C "P"
 *   insn=0x00000000003D8E10 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003D8E14 string=0x00000000003D8E18 "h"
 *   insn=0x00000000003D8E14 string=0x00000000003D8E28 "R"
 *   insn=0x00000000003D8E18 string=0x00000000003D8E1C "!@"
 *   insn=0x00000000003D8E30 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003D8E3C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::ConsumableItemView>::shared_ptr<Caver::ConsumableItemView>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CFD58;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConsumableItemView,Caver::ConsumableItemView>();
  return result;
}

