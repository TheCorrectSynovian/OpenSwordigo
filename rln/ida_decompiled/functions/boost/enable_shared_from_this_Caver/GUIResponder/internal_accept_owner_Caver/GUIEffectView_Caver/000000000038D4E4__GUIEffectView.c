/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000038D4E4
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13GUIEffectViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIEffectView,Caver::GUIEffectView>(boost::shared_ptr<Caver::GUIEffectView> const*,Caver::GUIEffectView *)
 *
 * Callers: 1
 *   0x00000000001FA4A0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIEffectView,Caver::GUIEffectView>(boost::shared_ptr<Caver::GUIEffectView> const*,Caver::GUIEffectView *)
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9BE0  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *   0x00000000001FBB80  boost::shared_ptr<Caver::CreditsView>::shared_ptr<Caver::CreditsView>(Caver::CreditsView *)
 *   0x00000000001FD070  Caver::CreditsView::CreditsView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000038D904  Caver::CreditsViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 104
 *   insn=0x000000000038D4F4 string=0x000000000038D4F8 "`"
 *   insn=0x000000000038D4F8 string=0x000000000038D4FC ""
 *   insn=0x000000000038D4F8 string=0x000000000038D504 "3"
 *   insn=0x000000000038D4FC string=0x000000000038D500 "h"
 *   insn=0x000000000038D508 string=0x000000000038D50C "h"
 *   insn=0x000000000038D50C string=0x000000000038D510 ""
 *   insn=0x000000000038D510 string=0x000000000038D514 "h"
 *   insn=0x000000000038D524 string=0x000000000038D528 "h\n@"
 *   insn=0x000000000038D528 string=0x000000000038D52C ""
 *   insn=0x000000000038D52C string=0x000000000038D530 "h\n"
 *   insn=0x000000000038D534 string=0x000000000038D538 "@"
 *   insn=0x000000000038D538 string=0x000000000038D53C ""
 *   insn=0x000000000038D53C string=0x000000000038D540 ""
 *   insn=0x000000000038D544 string=0x000000000038D548 ""
 *   insn=0x000000000038D548 string=0x000000000038D54C "@"
 *   insn=0x000000000038D558 string=0x000000000038D55C "h"
 *   insn=0x000000000038D55C string=0x000000000038D560 ""
 *   insn=0x000000000038D560 string=0x000000000038D564 "h"
 *   insn=0x000000000038D564 string=0x000000000038D568 "!"
 *   insn=0x000000000038D568 string=0x000000000038D56C "h"
 *   insn=0x000000000038D570 string=0x000000000038D574 "\t@"
 *   insn=0x000000000038D578 string=0x000000000038D57C "h\n@"
 *   insn=0x000000000038D57C string=0x000000000038D580 ""
 *   insn=0x000000000038D580 string=0x000000000038D584 "h\n"
 *   insn=0x000000000038D588 string=0x000000000038D598 "h"
 *   insn=0x000000000038D5A8 string=0x000000000038D5AC " "
 *   insn=0x000000000038D5B0 string=0x000000000038D5B4 "3"
 *   insn=0x000000000038D5B4 string=0x000000000038D5B8 "h"
 *   insn=0x000000000038D5B8 string=0x000000000038D5BC ""
 *   insn=0x000000000038D5BC string=0x000000000038D5C0 "h"
 *   insn=0x000000000038D5C4 string=0x000000000038D5C8 "h"
 *   insn=0x000000000038D5C8 string=0x000000000038D5CC "\t@"
 *   insn=0x000000000038D5D4 string=0x000000000038D5D8 "h\n@"
 *   insn=0x000000000038D5D8 string=0x000000000038D5DC ""
 *   insn=0x000000000038D5DC string=0x000000000038D5E0 "h\n"
 *   insn=0x000000000038D5E4 string=0x000000000038D5E8 "h"
 *   insn=0x000000000038D5E8 string=0x000000000038D5EC "@"
 *   insn=0x000000000038D5FC string=0x000000000038D600 "S"
 *   insn=0x000000000038D614 string=0x000000000038D618 "V"
 *   insn=0x000000000038D62C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000038D634 string=0x00000000001FD070 "0'"
 *   insn=0x000000000038D63C string=0x000000000038D640 "P"
 *   insn=0x000000000038D640 string=0x000000000038D644 "h"
 *   insn=0x000000000038D640 string=0x00000000001FBB80 "0'"
 *   insn=0x000000000038D650 string=0x000000000038D654 "i"
 *   insn=0x000000000038D658 string=0x000000000038D65C "4"
 *   insn=0x000000000038D65C string=0x000000000038D6A0 "h&@"
 *   insn=0x000000000038D660 string=0x000000000038D664 ""
 *   insn=0x000000000038D674 string=0x000000000038D678 "\t@"
 *   insn=0x000000000038D680 string=0x000000000038D684 ""
 *   insn=0x000000000038D694 string=0x000000000038D698 "@"
 *   insn=0x000000000038D6A0 string=0x000000000038D6A4 "\tq@"
 *   insn=0x000000000038D6A4 string=0x000000000038D6A8 "?I"
 *   insn=0x000000000038D6B0 string=0x000000000038D6B4 "I"
 *   insn=0x000000000038D6B4 string=0x000000000038D6B8 "\tq"
 *   insn=0x000000000038D6B8 string=0x000000000038D6BC "@"
 *   insn=0x000000000038D6C0 string=0x0000000000583734 "o"
 *   insn=0x000000000038D6C4 string=0x000000000038D6C8 "!5G"
 *   insn=0x000000000038D6D0 string=0x000000000038D6D4 ""
 *   insn=0x000000000038D6D4 string=0x000000000038D6D8 "-@"
 *   insn=0x000000000038D6DC string=0x000000000038D6E0 "h&@"
 *   insn=0x000000000038D6EC string=0x000000000038D6F0 ""
 *   insn=0x000000000038D708 string=0x000000000038D70C "`"
 *   insn=0x000000000038D708 string=0x00000000001F6B70 "0'"
 *   insn=0x000000000038D710 string=0x000000000038D714 ""
 *   insn=0x000000000038D728 string=0x000000000038D72C "\tC"
 *   insn=0x000000000038D740 string=0x000000000038D744 "'"
 *   insn=0x000000000038D744 string=0x00000000001F9BE0 "0'"
 *   insn=0x000000000038D748 string=0x000000000038D74C "h"
 *   insn=0x000000000038D74C string=0x000000000038D750 "("
 *   insn=0x000000000038D74C string=0x000000000038D778 "h"
 *   insn=0x000000000038D750 string=0x000000000038D754 ""
 *   insn=0x000000000038D754 string=0x000000000038D758 ""
 *   insn=0x000000000038D760 string=0x000000000038D764 " !"
 *   insn=0x000000000038D77C string=0x000000000038D78C "u"
 *   insn=0x000000000038D780 string=0x000000000038D784 ")\t"
 *   insn=0x000000000038D78C string=0x000000000038D790 "h"
 *   insn=0x000000000038D790 string=0x000000000038D794 "5"
 *   insn=0x000000000038D794 string=0x000000000038D7D8 "`"@"
 *   insn=0x000000000038D798 string=0x000000000038D79C ""
 *   insn=0x000000000038D7A8 string=0x000000000038D7AC "\t@"
 *   insn=0x000000000038D7B8 string=0x000000000038D7BC ""
 *   insn=0x000000000038D7C8 string=0x000000000038D7CC "@"
 *   insn=0x000000000038D7DC string=0x000000000038D7E0 ""
 *   insn=0x000000000038D7DC string=0x000000000038D7F0 "4"
 *   insn=0x000000000038D7E0 string=0x000000000038D7E4 ""
 *   insn=0x000000000038D7F4 string=0x000000000038D7F8 ""
 *   insn=0x000000000038D808 string=0x000000000038D80C "\t@"
 *   insn=0x000000000038D814 string=0x000000000038D818 ""
 *   insn=0x000000000038D828 string=0x000000000038D82C "@"
 *   insn=0x000000000038D858 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000038D864 string=0x000000000038D868 ""
 *   insn=0x000000000038D86C string=0x000000000038D870 "!"
 *   insn=0x000000000038D874 string=0x000000000038D878 "\t@"
 *   insn=0x000000000038D884 string=0x000000000038D888 ""
 *   insn=0x000000000038D88C string=0x000000000038D890 "!"
 *   insn=0x000000000038D894 string=0x000000000038D898 "@"
 *   insn=0x000000000038D8AC string=0x000000000038D8B0 "h"
 *   insn=0x000000000038D8B0 string=0x000000000038D8BC "("
 *   insn=0x000000000038D8BC string=0x000000000038D8C0 ""
 *   insn=0x000000000038D8C0 string=0x000000000038D8C4 ""
 *   insn=0x000000000038D8CC string=0x000000000038D8D0 " !"
 *   insn=0x000000000038D8F4 string=0x000000000038D8F8 "n"
 *   insn=0x000000000038D8F8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIEffectView,Caver::GUIEffectView>(
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

