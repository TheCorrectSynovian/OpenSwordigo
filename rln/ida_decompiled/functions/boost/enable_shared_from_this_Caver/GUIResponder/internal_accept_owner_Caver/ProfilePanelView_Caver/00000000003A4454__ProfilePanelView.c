/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A4454
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_16ProfilePanelViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfilePanelView,Caver::ProfilePanelView>(boost::shared_ptr<Caver::ProfilePanelView> const*,Caver::ProfilePanelView *)
 *
 * Callers: 1
 *   0x00000000001F9450  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfilePanelView,Caver::ProfilePanelView>(boost::shared_ptr<Caver::ProfilePanelView> const*,Caver::ProfilePanelView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000200800  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfilesHeaderView,Caver::ProfilesHeaderView>(boost::shared_ptr<Caver::ProfilesHeaderView> const*,Caver::ProfilesHeaderView *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 56
 *   insn=0x00000000003A4464 string=0x00000000003A4468 "`"
 *   insn=0x00000000003A4468 string=0x00000000003A446C ""
 *   insn=0x00000000003A4468 string=0x00000000003A4474 "3"
 *   insn=0x00000000003A446C string=0x00000000003A4470 "h"
 *   insn=0x00000000003A4478 string=0x00000000003A447C "h"
 *   insn=0x00000000003A447C string=0x00000000003A4480 ""
 *   insn=0x00000000003A4480 string=0x00000000003A4484 "h"
 *   insn=0x00000000003A4494 string=0x00000000003A4498 "h\n@"
 *   insn=0x00000000003A4498 string=0x00000000003A449C ""
 *   insn=0x00000000003A449C string=0x00000000003A44A0 "h\n"
 *   insn=0x00000000003A44A4 string=0x00000000003A44A8 "@"
 *   insn=0x00000000003A44A8 string=0x00000000003A44AC ""
 *   insn=0x00000000003A44AC string=0x00000000003A44B0 ""
 *   insn=0x00000000003A44B4 string=0x00000000003A44B8 ""
 *   insn=0x00000000003A44B8 string=0x00000000003A44BC "@"
 *   insn=0x00000000003A44C8 string=0x00000000003A44CC "h"
 *   insn=0x00000000003A44CC string=0x00000000003A44D0 ""
 *   insn=0x00000000003A44D0 string=0x00000000003A44D4 "h"
 *   insn=0x00000000003A44D4 string=0x00000000003A44D8 "!"
 *   insn=0x00000000003A44D8 string=0x00000000003A44DC "h"
 *   insn=0x00000000003A44E0 string=0x00000000003A44E4 "\t@"
 *   insn=0x00000000003A44E8 string=0x00000000003A44EC "h\n@"
 *   insn=0x00000000003A44EC string=0x00000000003A44F0 ""
 *   insn=0x00000000003A44F0 string=0x00000000003A44F4 "h\n"
 *   insn=0x00000000003A44F8 string=0x00000000003A4508 "h"
 *   insn=0x00000000003A4518 string=0x00000000003A451C " "
 *   insn=0x00000000003A4520 string=0x00000000003A4524 "3"
 *   insn=0x00000000003A4524 string=0x00000000003A4528 "h"
 *   insn=0x00000000003A4528 string=0x00000000003A452C ""
 *   insn=0x00000000003A452C string=0x00000000003A4530 "h"
 *   insn=0x00000000003A4534 string=0x00000000003A4538 "h"
 *   insn=0x00000000003A4538 string=0x00000000003A453C "\t@"
 *   insn=0x00000000003A4544 string=0x00000000003A4548 "h\n@"
 *   insn=0x00000000003A4548 string=0x00000000003A454C ""
 *   insn=0x00000000003A454C string=0x00000000003A4550 "h\n"
 *   insn=0x00000000003A4554 string=0x00000000003A4558 "h"
 *   insn=0x00000000003A4558 string=0x00000000003A455C "@"
 *   insn=0x00000000003A456C string=0x00000000003A4570 "w"
 *   insn=0x00000000003A4590 string=0x00000000003A4594 "\t"
 *   insn=0x00000000003A4590 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003A4594 string=0x00000000003A4598 ")"
 *   insn=0x00000000003A45A4 string=0x00000000003A45A8 "(A"
 *   insn=0x00000000003A45AC string=0x00000000003A45B0 ""
 *   insn=0x00000000003A45B8 string=0x00000000003A45BC "`""
 *   insn=0x00000000003A45DC string=0x00000000003A45E0 "4"
 *   insn=0x00000000003A45E4 string=0x00000000003A45E8 ""
 *   insn=0x00000000003A45F4 string=0x00000000003A45F8 "\t@"
 *   insn=0x00000000003A4604 string=0x00000000003A4608 ""
 *   insn=0x00000000003A4614 string=0x00000000003A4618 "@"
 *   insn=0x00000000003A4628 string=0x00000000003A462C "H"
 *   insn=0x00000000003A4630 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003A4634 string=0x00000000003A4638 "h"
 *   insn=0x00000000003A4634 string=0x00000000003A4648 "Jy"
 *   insn=0x00000000003A4638 string=0x00000000003A463C "!@"
 *   insn=0x00000000003A4650 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003A465C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfilePanelView,Caver::ProfilePanelView>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // x0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8

  result = (_QWORD *)a1[1];
  if ( !result || !result[1] )
  {
    v5 = *(_QWORD **)(a2 + 8);
    if ( v5 )
      ++v5[1];
    *a1 = a3;
    if ( v5 != result )
    {
      if ( v5 )
        ++v5[2];
      if ( result )
      {
        v6 = result[2] - 1LL;
        result[2] = v6;
        if ( !v6 )
          result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*result + 24LL))(result);
      }
      a1[1] = v5;
    }
    if ( v5 )
    {
      v7 = v5[1] - 1LL;
      v5[1] = v7;
      if ( !v7 )
      {
        result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v8 = v5[2] - 1LL;
        v5[2] = v8;
        if ( !v8 )
          return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
  }
  return result;
}

