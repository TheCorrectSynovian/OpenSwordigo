/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003425DC
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9GUIButtonES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIButton,Caver::GUIButton>(boost::shared_ptr<Caver::GUIButton> const*,Caver::GUIButton *)
 *
 * Callers: 1
 *   0x00000000001F3E30  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIButton,Caver::GUIButton>(boost::shared_ptr<Caver::GUIButton> const*,Caver::GUIButton *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x00000000003425EC string=0x00000000003425F0 "`"
 *   insn=0x00000000003425F0 string=0x00000000003425F4 ""
 *   insn=0x00000000003425F0 string=0x00000000003425FC "3"
 *   insn=0x00000000003425F4 string=0x00000000003425F8 "h"
 *   insn=0x0000000000342600 string=0x0000000000342604 "h"
 *   insn=0x0000000000342604 string=0x0000000000342608 ""
 *   insn=0x0000000000342608 string=0x000000000034260C "h"
 *   insn=0x000000000034261C string=0x0000000000342620 "h\n@"
 *   insn=0x0000000000342620 string=0x0000000000342624 ""
 *   insn=0x0000000000342624 string=0x0000000000342628 "h\n"
 *   insn=0x000000000034262C string=0x0000000000342630 "@"
 *   insn=0x0000000000342630 string=0x0000000000342634 ""
 *   insn=0x0000000000342634 string=0x0000000000342638 ""
 *   insn=0x000000000034263C string=0x0000000000342640 ""
 *   insn=0x0000000000342640 string=0x0000000000342644 "@"
 *   insn=0x0000000000342650 string=0x0000000000342654 "h"
 *   insn=0x0000000000342654 string=0x0000000000342658 ""
 *   insn=0x0000000000342658 string=0x000000000034265C "h"
 *   insn=0x000000000034265C string=0x0000000000342660 "!"
 *   insn=0x0000000000342660 string=0x0000000000342664 "h"
 *   insn=0x0000000000342668 string=0x000000000034266C "\t@"
 *   insn=0x0000000000342670 string=0x0000000000342674 "h\n@"
 *   insn=0x0000000000342674 string=0x0000000000342678 ""
 *   insn=0x0000000000342678 string=0x000000000034267C "h\n"
 *   insn=0x0000000000342680 string=0x0000000000342690 "h"
 *   insn=0x00000000003426A0 string=0x00000000003426A4 " "
 *   insn=0x00000000003426A8 string=0x00000000003426AC "3"
 *   insn=0x00000000003426AC string=0x00000000003426B0 "h"
 *   insn=0x00000000003426B0 string=0x00000000003426B4 ""
 *   insn=0x00000000003426B4 string=0x00000000003426B8 "h"
 *   insn=0x00000000003426BC string=0x00000000003426C0 "h"
 *   insn=0x00000000003426C0 string=0x00000000003426C4 "\t@"
 *   insn=0x00000000003426CC string=0x00000000003426D0 "h\n@"
 *   insn=0x00000000003426D0 string=0x00000000003426D4 ""
 *   insn=0x00000000003426D4 string=0x00000000003426D8 "h\n"
 *   insn=0x00000000003426DC string=0x00000000003426E0 "h"
 *   insn=0x00000000003426E0 string=0x00000000003426E4 "@"
 *   insn=0x00000000003426F0 string=0x00000000003426F4 "t"
 *   insn=0x00000000003426FC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIButton,Caver::GUIButton>(
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

