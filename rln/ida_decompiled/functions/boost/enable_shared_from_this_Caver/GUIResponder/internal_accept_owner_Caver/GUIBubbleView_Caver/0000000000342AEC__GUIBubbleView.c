/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000342AEC
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13GUIBubbleViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIBubbleView,Caver::GUIBubbleView>(boost::shared_ptr<Caver::GUIBubbleView> const*,Caver::GUIBubbleView *)
 *
 * Callers: 1
 *   0x00000000001F3720  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIBubbleView,Caver::GUIBubbleView>(boost::shared_ptr<Caver::GUIBubbleView> const*,Caver::GUIBubbleView *)
 *
 * Callees: 4
 *   0x00000000001F40B0  Caver::GUIViewController::GUIViewController(void)
 *   0x00000000001FBC40  .memset
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 63
 *   insn=0x0000000000342AFC string=0x0000000000342B00 "`"
 *   insn=0x0000000000342B00 string=0x0000000000342B04 ""
 *   insn=0x0000000000342B00 string=0x0000000000342B0C "3"
 *   insn=0x0000000000342B04 string=0x0000000000342B08 "h"
 *   insn=0x0000000000342B10 string=0x0000000000342B14 "h"
 *   insn=0x0000000000342B14 string=0x0000000000342B18 ""
 *   insn=0x0000000000342B18 string=0x0000000000342B1C "h"
 *   insn=0x0000000000342B2C string=0x0000000000342B30 "h\n@"
 *   insn=0x0000000000342B30 string=0x0000000000342B34 ""
 *   insn=0x0000000000342B34 string=0x0000000000342B38 "h\n"
 *   insn=0x0000000000342B3C string=0x0000000000342B40 "@"
 *   insn=0x0000000000342B40 string=0x0000000000342B44 ""
 *   insn=0x0000000000342B44 string=0x0000000000342B48 ""
 *   insn=0x0000000000342B4C string=0x0000000000342B50 ""
 *   insn=0x0000000000342B50 string=0x0000000000342B54 "@"
 *   insn=0x0000000000342B60 string=0x0000000000342B64 "h"
 *   insn=0x0000000000342B64 string=0x0000000000342B68 ""
 *   insn=0x0000000000342B68 string=0x0000000000342B6C "h"
 *   insn=0x0000000000342B6C string=0x0000000000342B70 "!"
 *   insn=0x0000000000342B70 string=0x0000000000342B74 "h"
 *   insn=0x0000000000342B78 string=0x0000000000342B7C "\t@"
 *   insn=0x0000000000342B80 string=0x0000000000342B84 "h\n@"
 *   insn=0x0000000000342B84 string=0x0000000000342B88 ""
 *   insn=0x0000000000342B88 string=0x0000000000342B8C "h\n"
 *   insn=0x0000000000342B90 string=0x0000000000342BA0 "h"
 *   insn=0x0000000000342BB0 string=0x0000000000342BB4 " "
 *   insn=0x0000000000342BB8 string=0x0000000000342BBC "3"
 *   insn=0x0000000000342BBC string=0x0000000000342BC0 "h"
 *   insn=0x0000000000342BC0 string=0x0000000000342BC4 ""
 *   insn=0x0000000000342BC4 string=0x0000000000342BC8 "h"
 *   insn=0x0000000000342BCC string=0x0000000000342BD0 "h"
 *   insn=0x0000000000342BD0 string=0x0000000000342BD4 "\t@"
 *   insn=0x0000000000342BDC string=0x0000000000342BE0 "h\n@"
 *   insn=0x0000000000342BE0 string=0x0000000000342BE4 ""
 *   insn=0x0000000000342BE4 string=0x0000000000342BE8 "h\n"
 *   insn=0x0000000000342BEC string=0x0000000000342BF0 "h"
 *   insn=0x0000000000342BF0 string=0x0000000000342BF4 "@"
 *   insn=0x0000000000342C00 string=0x0000000000342C04 "0"
 *   insn=0x0000000000342C18 string=0x0000000000342C1C "%"
 *   insn=0x0000000000342C1C string=0x0000000000342C20 "("
 *   insn=0x0000000000342C1C string=0x00000000001F40B0 "P'"
 *   insn=0x0000000000342C20 string=0x0000000000342C24 ""
 *   insn=0x0000000000342C24 string=0x0000000000342C28 "`"
 *   insn=0x0000000000342C30 string=0x0000000000342C34 "\tA"
 *   insn=0x0000000000342C34 string=0x0000000000342C38 "\n"
 *   insn=0x0000000000342C38 string=0x0000000000342C3C "i"
 *   insn=0x0000000000342C3C string=0x0000000000342C40 "@"
 *   insn=0x0000000000342C40 string=0x0000000000342C44 "\t"
 *   insn=0x0000000000342C44 string=0x0000000000342C48 " "
 *   insn=0x0000000000342C48 string=0x0000000000342C4C "\ta"
 *   insn=0x0000000000342C4C string=0x0000000000342C50 "`"
 *   insn=0x0000000000342C50 string=0x0000000000342C54 " "
 *   insn=0x0000000000342C54 string=0x0000000000342C58 "\t"
 *   insn=0x0000000000342C58 string=0x0000000000342C5C " "
 *   insn=0x0000000000342C5C string=0x0000000000342C60 "\t"
 *   insn=0x0000000000342C60 string=0x0000000000342C64 "`"
 *   insn=0x0000000000342C64 string=0x0000000000342C68 " "
 *   insn=0x0000000000342C68 string=0x0000000000342C6C "\t"
 *   insn=0x0000000000342C6C string=0x0000000000342C70 "a"
 *   insn=0x0000000000342C70 string=0x0000000000342C74 " "
 *   insn=0x0000000000342C74 string=0x0000000000342C78 "h>"
 *   insn=0x0000000000342C78 string=0x0000000000342C7C "`"
 *   insn=0x0000000000342C80 string=0x00000000001FBC40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIBubbleView,Caver::GUIBubbleView>(
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

