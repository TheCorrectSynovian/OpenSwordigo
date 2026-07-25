/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A4680
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_18ProfilesHeaderViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfilesHeaderView,Caver::ProfilesHeaderView>(boost::shared_ptr<Caver::ProfilesHeaderView> const*,Caver::ProfilesHeaderView *)
 *
 * Callers: 1
 *   0x0000000000200800  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfilesHeaderView,Caver::ProfilesHeaderView>(boost::shared_ptr<Caver::ProfilesHeaderView> const*,Caver::ProfilesHeaderView *)
 *
 * Callees: 3
 *   0x00000000001FA120  .strcmp
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 57
 *   insn=0x00000000003A4690 string=0x00000000003A4694 "`"
 *   insn=0x00000000003A4694 string=0x00000000003A4698 ""
 *   insn=0x00000000003A4694 string=0x00000000003A46A0 "3"
 *   insn=0x00000000003A4698 string=0x00000000003A469C "h"
 *   insn=0x00000000003A46A4 string=0x00000000003A46A8 "h"
 *   insn=0x00000000003A46A8 string=0x00000000003A46AC ""
 *   insn=0x00000000003A46AC string=0x00000000003A46B0 "h"
 *   insn=0x00000000003A46C0 string=0x00000000003A46C4 "h\n@"
 *   insn=0x00000000003A46C4 string=0x00000000003A46C8 ""
 *   insn=0x00000000003A46C8 string=0x00000000003A46CC "h\n"
 *   insn=0x00000000003A46D0 string=0x00000000003A46D4 "@"
 *   insn=0x00000000003A46D4 string=0x00000000003A46D8 ""
 *   insn=0x00000000003A46D8 string=0x00000000003A46DC ""
 *   insn=0x00000000003A46E0 string=0x00000000003A46E4 ""
 *   insn=0x00000000003A46E4 string=0x00000000003A46E8 "@"
 *   insn=0x00000000003A46F4 string=0x00000000003A46F8 "h"
 *   insn=0x00000000003A46F8 string=0x00000000003A46FC ""
 *   insn=0x00000000003A46FC string=0x00000000003A4700 "h"
 *   insn=0x00000000003A4700 string=0x00000000003A4704 "!"
 *   insn=0x00000000003A4704 string=0x00000000003A4708 "h"
 *   insn=0x00000000003A470C string=0x00000000003A4710 "\t@"
 *   insn=0x00000000003A4714 string=0x00000000003A4718 "h\n@"
 *   insn=0x00000000003A4718 string=0x00000000003A471C ""
 *   insn=0x00000000003A471C string=0x00000000003A4720 "h\n"
 *   insn=0x00000000003A4724 string=0x00000000003A4734 "h"
 *   insn=0x00000000003A4744 string=0x00000000003A4748 " "
 *   insn=0x00000000003A474C string=0x00000000003A4750 "3"
 *   insn=0x00000000003A4750 string=0x00000000003A4754 "h"
 *   insn=0x00000000003A4754 string=0x00000000003A4758 ""
 *   insn=0x00000000003A4758 string=0x00000000003A475C "h"
 *   insn=0x00000000003A4760 string=0x00000000003A4764 "h"
 *   insn=0x00000000003A4764 string=0x00000000003A4768 "\t@"
 *   insn=0x00000000003A4770 string=0x00000000003A4774 "h\n@"
 *   insn=0x00000000003A4774 string=0x00000000003A4778 ""
 *   insn=0x00000000003A4778 string=0x00000000003A477C "h\n"
 *   insn=0x00000000003A4780 string=0x00000000003A4784 "h"
 *   insn=0x00000000003A4784 string=0x00000000003A4788 "@"
 *   insn=0x00000000003A4794 string=0x00000000003A4798 "Kt"
 *   insn=0x00000000003A47AC string=0x00000000003A47B0 "_"
 *   insn=0x00000000003A47B8 string=0x00000000003A47BC ""
 *   insn=0x00000000003A47B8 string=0x00000000003A47D0 "_"
 *   insn=0x00000000003A47BC string=0x00000000003A47C0 "G"
 *   insn=0x00000000003A47C4 string=0x00000000003A47C8 "h"
 *   insn=0x00000000003A47D4 string=0x00000000003A47EC "_"
 *   insn=0x00000000003A47D8 string=0x00000000003A47DC "h\n"
 *   insn=0x00000000003A47E0 string=0x00000000003A47E4 "`"
 *   insn=0x00000000003A47F0 string=0x00000000003A47F4 "_"
 *   insn=0x00000000003A47F4 string=0x00000000003A47F8 "!"
 *   insn=0x00000000003A47F8 string=0x00000000003A47FC "h"
 *   insn=0x00000000003A4800 string=0x00000000003A4804 ""
 *   insn=0x00000000003A4808 string=0x00000000003A480C "*"
 *   insn=0x00000000003A480C string=0x00000000003A4810 "!F"
 *   insn=0x00000000003A4810 string=0x00000000003A4814 "_"
 *   insn=0x00000000003A4810 string=0x0000000000591790 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver20ProfileSelectionViewEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSE_ILi2EEEEEEE"
 *   insn=0x00000000003A4814 string=0x00000000003A4818 " "
 *   insn=0x00000000003A4818 string=0x00000000003A481C "AV"
 *   insn=0x00000000003A481C string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfilesHeaderView,Caver::ProfilesHeaderView>(
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

