/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D9B68
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_11ItemOverlayES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemOverlay,Caver::ItemOverlay>(boost::shared_ptr<Caver::ItemOverlay> const*,Caver::ItemOverlay *)
 *
 * Callers: 1
 *   0x00000000001FA180  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemOverlay,Caver::ItemOverlay>(boost::shared_ptr<Caver::ItemOverlay> const*,Caver::ItemOverlay *)
 *
 * Callees: 6
 *   0x00000000001F5190  .memcmp
 *   0x0000000000201A80  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 72
 *   insn=0x00000000003D9B78 string=0x00000000003D9B7C "`"
 *   insn=0x00000000003D9B7C string=0x00000000003D9B80 ""
 *   insn=0x00000000003D9B7C string=0x00000000003D9B88 "3"
 *   insn=0x00000000003D9B80 string=0x00000000003D9B84 "h"
 *   insn=0x00000000003D9B8C string=0x00000000003D9B90 "h"
 *   insn=0x00000000003D9B90 string=0x00000000003D9B94 ""
 *   insn=0x00000000003D9B94 string=0x00000000003D9B98 "h"
 *   insn=0x00000000003D9BA8 string=0x00000000003D9BAC "h\n@"
 *   insn=0x00000000003D9BAC string=0x00000000003D9BB0 ""
 *   insn=0x00000000003D9BB0 string=0x00000000003D9BB4 "h\n"
 *   insn=0x00000000003D9BB8 string=0x00000000003D9BBC "@"
 *   insn=0x00000000003D9BBC string=0x00000000003D9BC0 ""
 *   insn=0x00000000003D9BC0 string=0x00000000003D9BC4 ""
 *   insn=0x00000000003D9BC8 string=0x00000000003D9BCC ""
 *   insn=0x00000000003D9BCC string=0x00000000003D9BD0 "@"
 *   insn=0x00000000003D9BDC string=0x00000000003D9BE0 "h"
 *   insn=0x00000000003D9BE0 string=0x00000000003D9BE4 ""
 *   insn=0x00000000003D9BE4 string=0x00000000003D9BE8 "h"
 *   insn=0x00000000003D9BE8 string=0x00000000003D9BEC "!"
 *   insn=0x00000000003D9BEC string=0x00000000003D9BF0 "h"
 *   insn=0x00000000003D9BF4 string=0x00000000003D9BF8 "\t@"
 *   insn=0x00000000003D9BFC string=0x00000000003D9C00 "h\n@"
 *   insn=0x00000000003D9C00 string=0x00000000003D9C04 ""
 *   insn=0x00000000003D9C04 string=0x00000000003D9C08 "h\n"
 *   insn=0x00000000003D9C0C string=0x00000000003D9C1C "h"
 *   insn=0x00000000003D9C2C string=0x00000000003D9C30 " "
 *   insn=0x00000000003D9C34 string=0x00000000003D9C38 "3"
 *   insn=0x00000000003D9C38 string=0x00000000003D9C3C "h"
 *   insn=0x00000000003D9C3C string=0x00000000003D9C40 ""
 *   insn=0x00000000003D9C40 string=0x00000000003D9C44 "h"
 *   insn=0x00000000003D9C48 string=0x00000000003D9C4C "h"
 *   insn=0x00000000003D9C4C string=0x00000000003D9C50 "\t@"
 *   insn=0x00000000003D9C58 string=0x00000000003D9C5C "h\n@"
 *   insn=0x00000000003D9C5C string=0x00000000003D9C60 ""
 *   insn=0x00000000003D9C60 string=0x00000000003D9C64 "h\n"
 *   insn=0x00000000003D9C68 string=0x00000000003D9C6C "h"
 *   insn=0x00000000003D9C6C string=0x00000000003D9C70 "@"
 *   insn=0x00000000003D9CB0 string=0x00000000003D9CB4 "`"
 *   insn=0x00000000003D9CB8 string=0x00000000003D9CBC "w"
 *   insn=0x00000000003D9CD0 string=0x00000000003D9CD4 """
 *   insn=0x00000000003D9CD4 string=0x00000000003D9CD8 ".m"
 *   insn=0x00000000003D9CD8 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003D9CE0 string=0x00000000003D9D74 ":"
 *   insn=0x00000000003D9D00 string=0x00000000003D9D04 ""
 *   insn=0x00000000003D9D0C string=0x00000000003D9D10 " m"
 *   insn=0x00000000003D9D18 string=0x00000000003D9D1C "c"
 *   insn=0x00000000003D9D30 string=0x00000000003D9D34 ")"
 *   insn=0x00000000003D9D34 string=0x00000000003D9D38 ""
 *   insn=0x00000000003D9D3C string=0x00000000003D9D40 """
 *   insn=0x00000000003D9D48 string=0x00000000003D9D4C "@\t"
 *   insn=0x00000000003D9D4C string=0x00000000003D9D50 "="
 *   insn=0x00000000003D9D54 string=0x00000000003D9D58 "_"
 *   insn=0x00000000003D9D60 string=0x00000000003D9D64 "_"
 *   insn=0x00000000003D9D68 string=0x00000000003D9D6C "@"
 *   insn=0x00000000003D9D94 string=0x00000000003D9D98 "`"
 *   insn=0x00000000003D9D9C string=0x00000000003D9DA0 "("
 *   insn=0x00000000003D9DAC string=0x00000000003D9DB0 "("
 *   insn=0x00000000003D9DC4 string=0x00000000003D9DC8 "?"
 *   insn=0x00000000003D9DC8 string=0x00000000003D9DCC "L"
 *   insn=0x00000000003D9DD0 string=0x00000000003D9DD4 "?"
 *   insn=0x00000000003D9DD8 string=0x00000000003D9DDC " "
 *   insn=0x00000000003D9DE0 string=0x00000000003D9DE4 "h"
 *   insn=0x00000000003D9DEC string=0x00000000003D9DF0 "w"
 *   insn=0x00000000003D9DF4 string=0x00000000003D9DF8 "$"
 *   insn=0x00000000003D9DFC string=0x00000000003D9E00 "_"
 *   insn=0x00000000003D9E08 string=0x00000000003D9E0C "_"
 *   insn=0x00000000003D9E10 string=0x00000000003D9E14 "@"
 *   insn=0x00000000003D9E28 string=0x00000000003D9E2C "L"
 *   insn=0x00000000003D9E38 string=0x00000000003D9E3C "`"
 *   insn=0x00000000003D9E54 string=0x00000000003D9E58 "?"
 *   insn=0x00000000003D9E60 string=0x00000000003D9E64 "?"
 *   insn=0x00000000003D9E68 string=0x00000000003D9E6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemOverlay,Caver::ItemOverlay>(
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

