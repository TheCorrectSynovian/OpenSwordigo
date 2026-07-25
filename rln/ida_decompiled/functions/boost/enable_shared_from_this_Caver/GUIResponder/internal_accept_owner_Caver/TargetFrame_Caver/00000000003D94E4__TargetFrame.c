/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D94E4
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_11TargetFrameES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TargetFrame,Caver::TargetFrame>(boost::shared_ptr<Caver::TargetFrame> const*,Caver::TargetFrame *)
 *
 * Callers: 1
 *   0x00000000001FB7E0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TargetFrame,Caver::TargetFrame>(boost::shared_ptr<Caver::TargetFrame> const*,Caver::TargetFrame *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FACB0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ExperienceBar,Caver::ExperienceBar>(boost::shared_ptr<Caver::ExperienceBar> const*,Caver::ExperienceBar *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 57
 *   insn=0x00000000003D94F4 string=0x00000000003D94F8 "`"
 *   insn=0x00000000003D94F8 string=0x00000000003D94FC ""
 *   insn=0x00000000003D94F8 string=0x00000000003D9504 "3"
 *   insn=0x00000000003D94FC string=0x00000000003D9500 "h"
 *   insn=0x00000000003D9508 string=0x00000000003D950C "h"
 *   insn=0x00000000003D950C string=0x00000000003D9510 ""
 *   insn=0x00000000003D9510 string=0x00000000003D9514 "h"
 *   insn=0x00000000003D9524 string=0x00000000003D9528 "h\n@"
 *   insn=0x00000000003D9528 string=0x00000000003D952C ""
 *   insn=0x00000000003D952C string=0x00000000003D9530 "h\n"
 *   insn=0x00000000003D9534 string=0x00000000003D9538 "@"
 *   insn=0x00000000003D9538 string=0x00000000003D953C ""
 *   insn=0x00000000003D953C string=0x00000000003D9540 ""
 *   insn=0x00000000003D9544 string=0x00000000003D9548 ""
 *   insn=0x00000000003D9548 string=0x00000000003D954C "@"
 *   insn=0x00000000003D9558 string=0x00000000003D955C "h"
 *   insn=0x00000000003D955C string=0x00000000003D9560 ""
 *   insn=0x00000000003D9560 string=0x00000000003D9564 "h"
 *   insn=0x00000000003D9564 string=0x00000000003D9568 "!"
 *   insn=0x00000000003D9568 string=0x00000000003D956C "h"
 *   insn=0x00000000003D9570 string=0x00000000003D9574 "\t@"
 *   insn=0x00000000003D9578 string=0x00000000003D957C "h\n@"
 *   insn=0x00000000003D957C string=0x00000000003D9580 ""
 *   insn=0x00000000003D9580 string=0x00000000003D9584 "h\n"
 *   insn=0x00000000003D9588 string=0x00000000003D9598 "h"
 *   insn=0x00000000003D95A8 string=0x00000000003D95AC " "
 *   insn=0x00000000003D95B0 string=0x00000000003D95B4 "3"
 *   insn=0x00000000003D95B4 string=0x00000000003D95B8 "h"
 *   insn=0x00000000003D95B8 string=0x00000000003D95BC ""
 *   insn=0x00000000003D95BC string=0x00000000003D95C0 "h"
 *   insn=0x00000000003D95C4 string=0x00000000003D95C8 "h"
 *   insn=0x00000000003D95C8 string=0x00000000003D95CC "\t@"
 *   insn=0x00000000003D95D4 string=0x00000000003D95D8 "h\n@"
 *   insn=0x00000000003D95D8 string=0x00000000003D95DC ""
 *   insn=0x00000000003D95DC string=0x00000000003D95E0 "h\n"
 *   insn=0x00000000003D95E4 string=0x00000000003D95E8 "h"
 *   insn=0x00000000003D95E8 string=0x00000000003D95EC "@"
 *   insn=0x00000000003D95FC string=0x00000000003D9600 "S"
 *   insn=0x00000000003D9620 string=0x00000000003D9624 "i"
 *   insn=0x00000000003D9620 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003D9624 string=0x00000000003D9628 ")"
 *   insn=0x00000000003D9634 string=0x00000000003D9638 "(A"
 *   insn=0x00000000003D963C string=0x00000000003D9640 ""
 *   insn=0x00000000003D9648 string=0x00000000003D964C "`""
 *   insn=0x00000000003D9658 string=0x00000000001FACB0 "0'"
 *   insn=0x00000000003D966C string=0x00000000003D9670 "4"
 *   insn=0x00000000003D9674 string=0x00000000003D9678 ""
 *   insn=0x00000000003D9684 string=0x00000000003D9688 "\t@"
 *   insn=0x00000000003D9694 string=0x00000000003D9698 ""
 *   insn=0x00000000003D96A4 string=0x00000000003D96A8 "@"
 *   insn=0x00000000003D96B8 string=0x00000000003D96BC "$"
 *   insn=0x00000000003D96C0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003D96C4 string=0x00000000003D96C8 "h"
 *   insn=0x00000000003D96C4 string=0x00000000003D96D8 "&"
 *   insn=0x00000000003D96C8 string=0x00000000003D96CC "!@"
 *   insn=0x00000000003D96E0 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003D96EC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TargetFrame,Caver::TargetFrame>(
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

