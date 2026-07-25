/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000412B10
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_18InventoryItemPanelES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryItemPanel,Caver::InventoryItemPanel>(boost::shared_ptr<Caver::InventoryItemPanel> const*,Caver::InventoryItemPanel *)
 *
 * Callers: 1
 *   0x00000000001F8B60  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryItemPanel,Caver::InventoryItemPanel>(boost::shared_ptr<Caver::InventoryItemPanel> const*,Caver::InventoryItemPanel *)
 *
 * Callees: 3
 *   0x00000000001FA120  .strcmp
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 55
 *   insn=0x0000000000412B20 string=0x0000000000412B24 "`"
 *   insn=0x0000000000412B24 string=0x0000000000412B28 ""
 *   insn=0x0000000000412B24 string=0x0000000000412B30 "3"
 *   insn=0x0000000000412B28 string=0x0000000000412B2C "h"
 *   insn=0x0000000000412B34 string=0x0000000000412B38 "h"
 *   insn=0x0000000000412B38 string=0x0000000000412B3C ""
 *   insn=0x0000000000412B3C string=0x0000000000412B40 "h"
 *   insn=0x0000000000412B50 string=0x0000000000412B54 "h\n@"
 *   insn=0x0000000000412B54 string=0x0000000000412B58 ""
 *   insn=0x0000000000412B58 string=0x0000000000412B5C "h\n"
 *   insn=0x0000000000412B60 string=0x0000000000412B64 "@"
 *   insn=0x0000000000412B64 string=0x0000000000412B68 ""
 *   insn=0x0000000000412B68 string=0x0000000000412B6C ""
 *   insn=0x0000000000412B70 string=0x0000000000412B74 ""
 *   insn=0x0000000000412B74 string=0x0000000000412B78 "@"
 *   insn=0x0000000000412B84 string=0x0000000000412B88 "h"
 *   insn=0x0000000000412B88 string=0x0000000000412B8C ""
 *   insn=0x0000000000412B8C string=0x0000000000412B90 "h"
 *   insn=0x0000000000412B90 string=0x0000000000412B94 "!"
 *   insn=0x0000000000412B94 string=0x0000000000412B98 "h"
 *   insn=0x0000000000412B9C string=0x0000000000412BA0 "\t@"
 *   insn=0x0000000000412BA4 string=0x0000000000412BA8 "h\n@"
 *   insn=0x0000000000412BA8 string=0x0000000000412BAC ""
 *   insn=0x0000000000412BAC string=0x0000000000412BB0 "h\n"
 *   insn=0x0000000000412BB4 string=0x0000000000412BC4 "h"
 *   insn=0x0000000000412BD4 string=0x0000000000412BD8 " "
 *   insn=0x0000000000412BDC string=0x0000000000412BE0 "3"
 *   insn=0x0000000000412BE0 string=0x0000000000412BE4 "h"
 *   insn=0x0000000000412BE4 string=0x0000000000412BE8 ""
 *   insn=0x0000000000412BE8 string=0x0000000000412BEC "h"
 *   insn=0x0000000000412BF0 string=0x0000000000412BF4 "h"
 *   insn=0x0000000000412BF4 string=0x0000000000412BF8 "\t@"
 *   insn=0x0000000000412C00 string=0x0000000000412C04 "h\n@"
 *   insn=0x0000000000412C04 string=0x0000000000412C08 ""
 *   insn=0x0000000000412C08 string=0x0000000000412C0C "h\n"
 *   insn=0x0000000000412C10 string=0x0000000000412C14 "h"
 *   insn=0x0000000000412C14 string=0x0000000000412C18 "@"
 *   insn=0x0000000000412C24 string=0x0000000000412C28 "'"
 *   insn=0x0000000000412C3C string=0x0000000000412C40 "_"
 *   insn=0x0000000000412C48 string=0x0000000000412C60 "_"
 *   insn=0x0000000000412C4C string=0x0000000000412C50 ""
 *   insn=0x0000000000412C54 string=0x0000000000412C58 "h"
 *   insn=0x0000000000412C64 string=0x0000000000412C7C "_"
 *   insn=0x0000000000412C68 string=0x0000000000412C6C "h\n"
 *   insn=0x0000000000412C70 string=0x0000000000412C74 "`"
 *   insn=0x0000000000412C80 string=0x0000000000412C84 "_"
 *   insn=0x0000000000412C84 string=0x0000000000412C88 "!"
 *   insn=0x0000000000412C88 string=0x0000000000412C8C "h"
 *   insn=0x0000000000412C90 string=0x0000000000412C94 ""
 *   insn=0x0000000000412C98 string=0x0000000000412C9C "*"
 *   insn=0x0000000000412C9C string=0x0000000000412CA0 "!"
 *   insn=0x0000000000412CA0 string=0x0000000000412CA4 "_"
 *   insn=0x0000000000412CA0 string=0x0000000000594230 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver13InventoryViewEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSE_ILi2EEEEEEE"
 *   insn=0x0000000000412CA4 string=0x0000000000412CA8 " "
 *   insn=0x0000000000412CAC string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryItemPanel,Caver::InventoryItemPanel>(
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

