/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003705C4
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9PauseViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PauseView,Caver::PauseView>(boost::shared_ptr<Caver::PauseView> const*,Caver::PauseView *)
 *
 * Callers: 1
 *   0x00000000001FE430  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PauseView,Caver::PauseView>(boost::shared_ptr<Caver::PauseView> const*,Caver::PauseView *)
 *
 * Callees: 3
 *   0x00000000001F40B0  Caver::GUIViewController::GUIViewController(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 53
 *   insn=0x00000000003705D4 string=0x00000000003705D8 "`"
 *   insn=0x00000000003705D8 string=0x00000000003705DC ""
 *   insn=0x00000000003705D8 string=0x00000000003705E4 "3"
 *   insn=0x00000000003705DC string=0x00000000003705E0 "h"
 *   insn=0x00000000003705E8 string=0x00000000003705EC "h"
 *   insn=0x00000000003705EC string=0x00000000003705F0 ""
 *   insn=0x00000000003705F0 string=0x00000000003705F4 "h"
 *   insn=0x0000000000370604 string=0x0000000000370608 "h\n@"
 *   insn=0x0000000000370608 string=0x000000000037060C ""
 *   insn=0x000000000037060C string=0x0000000000370610 "h\n"
 *   insn=0x0000000000370614 string=0x0000000000370618 "@"
 *   insn=0x0000000000370618 string=0x000000000037061C ""
 *   insn=0x000000000037061C string=0x0000000000370620 ""
 *   insn=0x0000000000370624 string=0x0000000000370628 ""
 *   insn=0x0000000000370628 string=0x000000000037062C "@"
 *   insn=0x0000000000370638 string=0x000000000037063C "h"
 *   insn=0x000000000037063C string=0x0000000000370640 ""
 *   insn=0x0000000000370640 string=0x0000000000370644 "h"
 *   insn=0x0000000000370644 string=0x0000000000370648 "!"
 *   insn=0x0000000000370648 string=0x000000000037064C "h"
 *   insn=0x0000000000370650 string=0x0000000000370654 "\t@"
 *   insn=0x0000000000370658 string=0x000000000037065C "h\n@"
 *   insn=0x000000000037065C string=0x0000000000370660 ""
 *   insn=0x0000000000370660 string=0x0000000000370664 "h\n"
 *   insn=0x0000000000370668 string=0x0000000000370678 "h"
 *   insn=0x0000000000370688 string=0x000000000037068C " "
 *   insn=0x0000000000370690 string=0x0000000000370694 "3"
 *   insn=0x0000000000370694 string=0x0000000000370698 "h"
 *   insn=0x0000000000370698 string=0x000000000037069C ""
 *   insn=0x000000000037069C string=0x00000000003706A0 "h"
 *   insn=0x00000000003706A4 string=0x00000000003706A8 "h"
 *   insn=0x00000000003706A8 string=0x00000000003706AC "\t@"
 *   insn=0x00000000003706B4 string=0x00000000003706B8 "h\n@"
 *   insn=0x00000000003706B8 string=0x00000000003706BC ""
 *   insn=0x00000000003706BC string=0x00000000003706C0 "h\n"
 *   insn=0x00000000003706C4 string=0x00000000003706C8 "h"
 *   insn=0x00000000003706C8 string=0x00000000003706CC "@"
 *   insn=0x00000000003706D8 string=0x00000000003706DC "zD"
 *   insn=0x00000000003706DC string=0x00000000003706E0 "w"
 *   insn=0x00000000003706F0 string=0x00000000003706F4 "o"
 *   insn=0x00000000003706F4 string=0x00000000001F40B0 "P'"
 *   insn=0x00000000003706F8 string=0x00000000003706FC ""
 *   insn=0x0000000000370708 string=0x000000000037070C "\tA"
 *   insn=0x000000000037070C string=0x0000000000370710 "i"
 *   insn=0x0000000000370710 string=0x0000000000370714 "\t"
 *   insn=0x0000000000370714 string=0x0000000000370718 " "
 *   insn=0x0000000000370718 string=0x000000000037071C "\ta"
 *   insn=0x000000000037071C string=0x0000000000370720 " "
 *   insn=0x0000000000370720 string=0x0000000000370724 "\t"
 *   insn=0x0000000000370724 string=0x0000000000370728 "!"
 *   insn=0x0000000000370728 string=0x000000000037072C "`"
 *   insn=0x000000000037072C string=0x0000000000370730 " "
 *   insn=0x0000000000370734 string=0x0000000000370738 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PauseView,Caver::PauseView>(
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

