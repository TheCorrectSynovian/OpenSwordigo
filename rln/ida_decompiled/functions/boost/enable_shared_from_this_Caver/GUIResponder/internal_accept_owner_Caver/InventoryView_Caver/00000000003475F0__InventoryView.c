/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003475F0
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13InventoryViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryView,Caver::InventoryView>(boost::shared_ptr<Caver::InventoryView> const*,Caver::InventoryView *)
 *
 * Callers: 1
 *   0x00000000001FF900  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryView,Caver::InventoryView>(boost::shared_ptr<Caver::InventoryView> const*,Caver::InventoryView *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x0000000000347600 string=0x0000000000347604 "`"
 *   insn=0x0000000000347604 string=0x0000000000347608 ""
 *   insn=0x0000000000347604 string=0x0000000000347610 "3"
 *   insn=0x0000000000347608 string=0x000000000034760C "h"
 *   insn=0x0000000000347614 string=0x0000000000347618 "h"
 *   insn=0x0000000000347618 string=0x000000000034761C ""
 *   insn=0x000000000034761C string=0x0000000000347620 "h"
 *   insn=0x0000000000347630 string=0x0000000000347634 "h\n@"
 *   insn=0x0000000000347634 string=0x0000000000347638 ""
 *   insn=0x0000000000347638 string=0x000000000034763C "h\n"
 *   insn=0x0000000000347640 string=0x0000000000347644 "@"
 *   insn=0x0000000000347644 string=0x0000000000347648 ""
 *   insn=0x0000000000347648 string=0x000000000034764C ""
 *   insn=0x0000000000347650 string=0x0000000000347654 ""
 *   insn=0x0000000000347654 string=0x0000000000347658 "@"
 *   insn=0x0000000000347664 string=0x0000000000347668 "h"
 *   insn=0x0000000000347668 string=0x000000000034766C ""
 *   insn=0x000000000034766C string=0x0000000000347670 "h"
 *   insn=0x0000000000347670 string=0x0000000000347674 "!"
 *   insn=0x0000000000347674 string=0x0000000000347678 "h"
 *   insn=0x000000000034767C string=0x0000000000347680 "\t@"
 *   insn=0x0000000000347684 string=0x0000000000347688 "h\n@"
 *   insn=0x0000000000347688 string=0x000000000034768C ""
 *   insn=0x000000000034768C string=0x0000000000347690 "h\n"
 *   insn=0x0000000000347694 string=0x00000000003476A4 "h"
 *   insn=0x00000000003476B4 string=0x00000000003476B8 " "
 *   insn=0x00000000003476BC string=0x00000000003476C0 "3"
 *   insn=0x00000000003476C0 string=0x00000000003476C4 "h"
 *   insn=0x00000000003476C4 string=0x00000000003476C8 ""
 *   insn=0x00000000003476C8 string=0x00000000003476CC "h"
 *   insn=0x00000000003476D0 string=0x00000000003476D4 "h"
 *   insn=0x00000000003476D4 string=0x00000000003476D8 "\t@"
 *   insn=0x00000000003476E0 string=0x00000000003476E4 "h\n@"
 *   insn=0x00000000003476E4 string=0x00000000003476E8 ""
 *   insn=0x00000000003476E8 string=0x00000000003476EC "h\n"
 *   insn=0x00000000003476F0 string=0x00000000003476F4 "h"
 *   insn=0x00000000003476F4 string=0x00000000003476F8 "@"
 *   insn=0x0000000000347704 string=0x0000000000347708 "o"
 *   insn=0x0000000000347710 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryView,Caver::InventoryView>(
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

