/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000342498
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_8GUILabelES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUILabel,Caver::GUILabel>(boost::shared_ptr<Caver::GUILabel> const*,Caver::GUILabel *)
 *
 * Callers: 1
 *   0x00000000001F9710  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUILabel,Caver::GUILabel>(boost::shared_ptr<Caver::GUILabel> const*,Caver::GUILabel *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x00000000003424A8 string=0x00000000003424AC "`"
 *   insn=0x00000000003424AC string=0x00000000003424B0 ""
 *   insn=0x00000000003424AC string=0x00000000003424B8 "3"
 *   insn=0x00000000003424B0 string=0x00000000003424B4 "h"
 *   insn=0x00000000003424BC string=0x00000000003424C0 "h"
 *   insn=0x00000000003424C0 string=0x00000000003424C4 ""
 *   insn=0x00000000003424C4 string=0x00000000003424C8 "h"
 *   insn=0x00000000003424D8 string=0x00000000003424DC "h\n@"
 *   insn=0x00000000003424DC string=0x00000000003424E0 ""
 *   insn=0x00000000003424E0 string=0x00000000003424E4 "h\n"
 *   insn=0x00000000003424E8 string=0x00000000003424EC "@"
 *   insn=0x00000000003424EC string=0x00000000003424F0 ""
 *   insn=0x00000000003424F0 string=0x00000000003424F4 ""
 *   insn=0x00000000003424F8 string=0x00000000003424FC ""
 *   insn=0x00000000003424FC string=0x0000000000342500 "@"
 *   insn=0x000000000034250C string=0x0000000000342510 "h"
 *   insn=0x0000000000342510 string=0x0000000000342514 ""
 *   insn=0x0000000000342514 string=0x0000000000342518 "h"
 *   insn=0x0000000000342518 string=0x000000000034251C "!"
 *   insn=0x000000000034251C string=0x0000000000342520 "h"
 *   insn=0x0000000000342524 string=0x0000000000342528 "\t@"
 *   insn=0x000000000034252C string=0x0000000000342530 "h\n@"
 *   insn=0x0000000000342530 string=0x0000000000342534 ""
 *   insn=0x0000000000342534 string=0x0000000000342538 "h\n"
 *   insn=0x000000000034253C string=0x000000000034254C "h"
 *   insn=0x000000000034255C string=0x0000000000342560 " "
 *   insn=0x0000000000342564 string=0x0000000000342568 "3"
 *   insn=0x0000000000342568 string=0x000000000034256C "h"
 *   insn=0x000000000034256C string=0x0000000000342570 ""
 *   insn=0x0000000000342570 string=0x0000000000342574 "h"
 *   insn=0x0000000000342578 string=0x000000000034257C "h"
 *   insn=0x000000000034257C string=0x0000000000342580 "\t@"
 *   insn=0x0000000000342588 string=0x000000000034258C "h\n@"
 *   insn=0x000000000034258C string=0x0000000000342590 ""
 *   insn=0x0000000000342590 string=0x0000000000342594 "h\n"
 *   insn=0x0000000000342598 string=0x000000000034259C "h"
 *   insn=0x000000000034259C string=0x00000000003425A0 "@"
 *   insn=0x00000000003425B0 string=0x00000000003425B4 "f/"
 *   insn=0x00000000003425B4 string=0x00000000003425B8 ">"
 *   insn=0x00000000003425B8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUILabel,Caver::GUILabel>(
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

