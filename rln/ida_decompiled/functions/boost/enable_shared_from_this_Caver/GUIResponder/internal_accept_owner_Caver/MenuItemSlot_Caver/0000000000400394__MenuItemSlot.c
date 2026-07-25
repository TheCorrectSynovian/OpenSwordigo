/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000400394
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12MenuItemSlotES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MenuItemSlot,Caver::MenuItemSlot>(boost::shared_ptr<Caver::MenuItemSlot> const*,Caver::MenuItemSlot *)
 *
 * Callers: 1
 *   0x00000000001FA480  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MenuItemSlot,Caver::MenuItemSlot>(boost::shared_ptr<Caver::MenuItemSlot> const*,Caver::MenuItemSlot *)
 *
 * Callees: 6
 *   0x00000000001FD850  Caver::GUITexturedRect::GUITexturedRect(void)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004005D0  Caver::DraggableMenuItem::InitWithItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 60
 *   insn=0x00000000004003A4 string=0x00000000004003A8 "`"
 *   insn=0x00000000004003A8 string=0x00000000004003AC ""
 *   insn=0x00000000004003A8 string=0x00000000004003B4 "3"
 *   insn=0x00000000004003AC string=0x00000000004003B0 "h"
 *   insn=0x00000000004003B8 string=0x00000000004003BC "h"
 *   insn=0x00000000004003BC string=0x00000000004003C0 ""
 *   insn=0x00000000004003C0 string=0x00000000004003C4 "h"
 *   insn=0x00000000004003D4 string=0x00000000004003D8 "h\n@"
 *   insn=0x00000000004003D8 string=0x00000000004003DC ""
 *   insn=0x00000000004003DC string=0x00000000004003E0 "h\n"
 *   insn=0x00000000004003E4 string=0x00000000004003E8 "@"
 *   insn=0x00000000004003E8 string=0x00000000004003EC ""
 *   insn=0x00000000004003EC string=0x00000000004003F0 ""
 *   insn=0x00000000004003F4 string=0x00000000004003F8 ""
 *   insn=0x00000000004003F8 string=0x00000000004003FC "@"
 *   insn=0x0000000000400408 string=0x000000000040040C "h"
 *   insn=0x000000000040040C string=0x0000000000400410 ""
 *   insn=0x0000000000400410 string=0x0000000000400414 "h"
 *   insn=0x0000000000400414 string=0x0000000000400418 "!"
 *   insn=0x0000000000400418 string=0x000000000040041C "h"
 *   insn=0x0000000000400420 string=0x0000000000400424 "\t@"
 *   insn=0x0000000000400428 string=0x000000000040042C "h\n@"
 *   insn=0x000000000040042C string=0x0000000000400430 ""
 *   insn=0x0000000000400430 string=0x0000000000400434 "h\n"
 *   insn=0x0000000000400438 string=0x0000000000400448 "h"
 *   insn=0x0000000000400458 string=0x000000000040045C " "
 *   insn=0x0000000000400460 string=0x0000000000400464 "3"
 *   insn=0x0000000000400464 string=0x0000000000400468 "h"
 *   insn=0x0000000000400468 string=0x000000000040046C ""
 *   insn=0x000000000040046C string=0x0000000000400470 "h"
 *   insn=0x0000000000400474 string=0x0000000000400478 "h"
 *   insn=0x0000000000400478 string=0x000000000040047C "\t@"
 *   insn=0x0000000000400484 string=0x0000000000400488 "h\n@"
 *   insn=0x0000000000400488 string=0x000000000040048C ""
 *   insn=0x000000000040048C string=0x0000000000400490 "h\n"
 *   insn=0x0000000000400494 string=0x0000000000400498 "h"
 *   insn=0x0000000000400498 string=0x000000000040049C "@"
 *   insn=0x00000000004004CC string=0x00000000004004D0 "("
 *   insn=0x00000000004004D0 string=0x00000000004004D4 "UA"
 *   insn=0x00000000004004D4 string=0x00000000004004D8 "`B"
 *   insn=0x00000000004004DC string=0x00000000004004E0 "A"
 *   insn=0x00000000004004E0 string=0x00000000004004E4 "h"
 *   insn=0x00000000004004E8 string=0x00000000001FD850 "0'"
 *   insn=0x0000000000400500 string=0x0000000000400504 "5"
 *   insn=0x0000000000400504 string=0x0000000000400548 "("
 *   insn=0x0000000000400508 string=0x000000000040050C ""
 *   insn=0x0000000000400518 string=0x000000000040051C "\t@"
 *   insn=0x0000000000400528 string=0x000000000040052C ""
 *   insn=0x0000000000400538 string=0x000000000040053C "@"
 *   insn=0x0000000000400548 string=0x000000000040054C "u~@"
 *   insn=0x000000000040054C string=0x0000000000400550 ""
 *   insn=0x0000000000400550 string=0x0000000000400554 "A"
 *   insn=0x0000000000400554 string=0x0000000000400558 "h"
 *   insn=0x0000000000400558 string=0x000000000040055C "5"
 *   insn=0x0000000000400560 string=0x0000000000400564 ""
 *   insn=0x0000000000400570 string=0x0000000000400574 "\t@"
 *   insn=0x0000000000400580 string=0x0000000000400584 ""
 *   insn=0x0000000000400590 string=0x0000000000400594 "@"
 *   insn=0x00000000004005A0 string=0x00000000004005A4 "#"
 *   insn=0x00000000004005C8 string=0x00000000004005CC "`7"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MenuItemSlot,Caver::MenuItemSlot>(
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

