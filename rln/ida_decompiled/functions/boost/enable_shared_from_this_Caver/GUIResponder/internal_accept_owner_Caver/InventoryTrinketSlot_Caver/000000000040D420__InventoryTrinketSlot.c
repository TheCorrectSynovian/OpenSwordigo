/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040D420
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_20InventoryTrinketSlotES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryTrinketSlot,Caver::InventoryTrinketSlot>(boost::shared_ptr<Caver::InventoryTrinketSlot> const*,Caver::InventoryTrinketSlot *)
 *
 * Callers: 1
 *   0x00000000001F4F80  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryTrinketSlot,Caver::InventoryTrinketSlot>(boost::shared_ptr<Caver::InventoryTrinketSlot> const*,Caver::InventoryTrinketSlot *)
 *
 * Callees: 3
 *   0x00000000001FA120  .strcmp
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 54
 *   insn=0x000000000040D430 string=0x000000000040D434 "`"
 *   insn=0x000000000040D434 string=0x000000000040D438 ""
 *   insn=0x000000000040D434 string=0x000000000040D440 "3"
 *   insn=0x000000000040D438 string=0x000000000040D43C "h"
 *   insn=0x000000000040D444 string=0x000000000040D448 "h"
 *   insn=0x000000000040D448 string=0x000000000040D44C ""
 *   insn=0x000000000040D44C string=0x000000000040D450 "h"
 *   insn=0x000000000040D460 string=0x000000000040D464 "h\n@"
 *   insn=0x000000000040D464 string=0x000000000040D468 ""
 *   insn=0x000000000040D468 string=0x000000000040D46C "h\n"
 *   insn=0x000000000040D470 string=0x000000000040D474 "@"
 *   insn=0x000000000040D474 string=0x000000000040D478 ""
 *   insn=0x000000000040D478 string=0x000000000040D47C ""
 *   insn=0x000000000040D480 string=0x000000000040D484 ""
 *   insn=0x000000000040D484 string=0x000000000040D488 "@"
 *   insn=0x000000000040D494 string=0x000000000040D498 "h"
 *   insn=0x000000000040D498 string=0x000000000040D49C ""
 *   insn=0x000000000040D49C string=0x000000000040D4A0 "h"
 *   insn=0x000000000040D4A0 string=0x000000000040D4A4 "!"
 *   insn=0x000000000040D4A4 string=0x000000000040D4A8 "h"
 *   insn=0x000000000040D4AC string=0x000000000040D4B0 "\t@"
 *   insn=0x000000000040D4B4 string=0x000000000040D4B8 "h\n@"
 *   insn=0x000000000040D4B8 string=0x000000000040D4BC ""
 *   insn=0x000000000040D4BC string=0x000000000040D4C0 "h\n"
 *   insn=0x000000000040D4C4 string=0x000000000040D4D4 "h"
 *   insn=0x000000000040D4E4 string=0x000000000040D4E8 " "
 *   insn=0x000000000040D4EC string=0x000000000040D4F0 "3"
 *   insn=0x000000000040D4F0 string=0x000000000040D4F4 "h"
 *   insn=0x000000000040D4F4 string=0x000000000040D4F8 ""
 *   insn=0x000000000040D4F8 string=0x000000000040D4FC "h"
 *   insn=0x000000000040D500 string=0x000000000040D504 "h"
 *   insn=0x000000000040D504 string=0x000000000040D508 "\t@"
 *   insn=0x000000000040D510 string=0x000000000040D514 "h\n@"
 *   insn=0x000000000040D514 string=0x000000000040D518 ""
 *   insn=0x000000000040D518 string=0x000000000040D51C "h\n"
 *   insn=0x000000000040D520 string=0x000000000040D524 "h"
 *   insn=0x000000000040D524 string=0x000000000040D528 "@"
 *   insn=0x000000000040D54C string=0x000000000040D550 "_"
 *   insn=0x000000000040D558 string=0x000000000040D570 "_"
 *   insn=0x000000000040D55C string=0x000000000040D560 ""
 *   insn=0x000000000040D564 string=0x000000000040D568 "h"
 *   insn=0x000000000040D574 string=0x000000000040D58C "_"
 *   insn=0x000000000040D578 string=0x000000000040D57C "h\n"
 *   insn=0x000000000040D580 string=0x000000000040D584 "`"
 *   insn=0x000000000040D590 string=0x000000000040D594 "_"
 *   insn=0x000000000040D594 string=0x000000000040D598 "!"
 *   insn=0x000000000040D598 string=0x000000000040D59C "h"
 *   insn=0x000000000040D5A0 string=0x000000000040D5A4 ""
 *   insn=0x000000000040D5A8 string=0x000000000040D5AC "*"
 *   insn=0x000000000040D5AC string=0x000000000040D5B0 "!"
 *   insn=0x000000000040D5B0 string=0x000000000040D5B4 "_"
 *   insn=0x000000000040D5B0 string=0x0000000000594000 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver18InventoryItemPanelEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSE_ILi2EEEEEEE"
 *   insn=0x000000000040D5B4 string=0x000000000040D5B8 " "
 *   insn=0x000000000040D5BC string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryTrinketSlot,Caver::InventoryTrinketSlot>(
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

