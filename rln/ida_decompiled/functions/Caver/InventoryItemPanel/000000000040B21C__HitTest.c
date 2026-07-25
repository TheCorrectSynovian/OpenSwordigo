/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040B21C
 * Mangled: _ZN5Caver18InventoryItemPanel7HitTestERKNS_7Vector2E
 * Demangled: Caver::InventoryItemPanel::HitTest(Caver::Vector2 const&)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F5920  Caver::MenuItemSlot::SetSelected(bool)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9570  Caver::GUIView::HitTest(Caver::Vector2 const&)
 *   0x00000000001FF690  .__dynamic_cast
 *   0x0000000000201A00  Caver::Rectangle::PointInside(Caver::Vector2 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 63
 *   insn=0x000000000040B22C string=0x000000000040B230 "V"
 *   insn=0x000000000040B24C string=0x00000000001F9570 "0'"
 *   insn=0x000000000040B268 string=0x000000000040B26C " "
 *   insn=0x000000000040B274 string=0x000000000040B278 "hR"
 *   insn=0x000000000040B280 string=0x000000000040B284 ""
 *   insn=0x000000000040B28C string=0x000000000040B290 ""
 *   insn=0x000000000040B294 string=0x000000000040B298 "!"
 *   insn=0x000000000040B2A0 string=0x000000000040B2A4 "\t@"
 *   insn=0x000000000040B2AC string=0x000000000040B2B0 ""
 *   insn=0x000000000040B2B4 string=0x000000000040B2B8 "!"
 *   insn=0x000000000040B2C0 string=0x000000000040B2C4 "@"
 *   insn=0x000000000040B300 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000040B308 string=0x000000000040B30C "4"
 *   insn=0x000000000040B310 string=0x000000000040B314 ""
 *   insn=0x000000000040B320 string=0x000000000040B324 "\t@"
 *   insn=0x000000000040B330 string=0x000000000040B334 ""
 *   insn=0x000000000040B340 string=0x000000000040B344 "@"
 *   insn=0x000000000040B350 string=0x000000000040B354 "\"
 *   insn=0x000000000040B370 string=0x000000000040B374 "h"
 *   insn=0x000000000040B378 string=0x000000000040B37C "\tQP"
 *   insn=0x000000000040B384 string=0x000000000040B388 "J"
 *   insn=0x000000000040B390 string=0x000000000040B3E0 "YQ"
 *   insn=0x000000000040B39C string=0x000000000040B3A0 ""
 *   insn=0x000000000040B3B0 string=0x000000000040B3B4 "\t@"
 *   insn=0x000000000040B3BC string=0x000000000040B3C0 ""
 *   insn=0x000000000040B3D0 string=0x000000000040B3D4 "@"
 *   insn=0x000000000040B3E0 string=0x000000000040B3E4 "V"
 *   insn=0x000000000040B3F0 string=0x000000000040B3F4 ")"
 *   insn=0x000000000040B3F8 string=0x000000000040B3FC "\t@"
 *   insn=0x000000000040B408 string=0x000000000040B40C ""
 *   insn=0x000000000040B410 string=0x000000000040B414 "!"
 *   insn=0x000000000040B418 string=0x000000000040B41C "@"
 *   insn=0x000000000040B430 string=0x000000000040B434 "T"
 *   insn=0x000000000040B43C string=0x000000000040B440 ""
 *   insn=0x000000000040B44C string=0x000000000040B450 "!"
 *   insn=0x000000000040B450 string=0x000000000040B454 "B"
 *   insn=0x000000000040B464 string=0x000000000040B468 "PP"
 *   insn=0x000000000040B468 string=0x000000000040B46C "T"
 *   insn=0x000000000040B46C string=0x000000000040B4D4 ""
 *   insn=0x000000000040B480 string=0x000000000040B484 "\t@"
 *   insn=0x000000000040B48C string=0x000000000040B490 ""
 *   insn=0x000000000040B4A0 string=0x000000000040B4A4 "@"
 *   insn=0x000000000040B4B0 string=0x000000000040B4B4 "h"
 *   insn=0x000000000040B4D0 string=0x00000000001F5920 "P'"
 *   insn=0x000000000040B4F4 string=0x000000000040B4F8 "4"
 *   insn=0x000000000040B4FC string=0x000000000040B500 ""
 *   insn=0x000000000040B50C string=0x000000000040B510 "\t@"
 *   insn=0x000000000040B51C string=0x000000000040B520 ""
 *   insn=0x000000000040B52C string=0x000000000040B530 "@"
 *   insn=0x000000000040B558 string=0x000000000040B55C "a"
 *   insn=0x000000000040B560 string=0x000000000040B564 ""
 *   insn=0x000000000040B568 string=0x000000000040B56C "B"
 *   insn=0x000000000040B578 string=0x000000000040B57C "E"
 *   insn=0x000000000040B57C string=0x000000000040B580 "@"
 *   insn=0x000000000040B580 string=0x000000000040B584 "PP"
 *   insn=0x000000000040B588 string=0x000000000040B5DC ""
 *   insn=0x000000000040B590 string=0x000000000040B594 ")"
 *   insn=0x000000000040B59C string=0x000000000040B5A0 "\t@"
 *   insn=0x000000000040B5A8 string=0x000000000040B5AC ""
 *   insn=0x000000000040B5B0 string=0x000000000040B5B4 " "
 *   insn=0x000000000040B5B8 string=0x000000000040B5BC "a"
 *   insn=0x000000000040B5BC string=0x000000000040B5C0 "h"
 *   insn=0x000000000040B5FC string=0x000000000040B600 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::InventoryItemPanel::HitTest@<X0>(
        Caver::InventoryItemPanel *this@<X0>,
        const Caver::Vector2 *a2@<X1>,
        Caver::InventoryItemPanel **a3@<X8>)
{
  __int64 result; // x0
  Caver::InventoryItemPanel *v7; // x8
  Caver::InventoryItemPanel *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  Caver::InventoryItemPanel *v11; // [xsp+48h] [xbp-38h] BYREF
  Caver::InventoryItemPanel *v12; // [xsp+50h] [xbp-30h]
  __int64 v13; // [xsp+58h] [xbp-28h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = (__int64)Caver::GUIView::HitTest((__int64 *)&v11, this, a2);
  v7 = v11;
  if ( v11 == this )
  {
    result = Caver::Rectangle::PointInside((Caver::Rectangle *)(*((_QWORD *)this + 34) + 12LL), a2);
    if ( (result & 1) == 0 )
    {
      v8 = v12;
      *a3 = 0;
      a3[1] = 0;
      if ( !v8 )
        return result;
      goto LABEL_6;
    }
    v7 = v11;
  }
  v8 = v12;
  *a3 = v7;
  a3[1] = v8;
  if ( !v8 )
    return result;
  ++*((_QWORD *)v8 + 1);
LABEL_6:
  v9 = *((_QWORD *)v8 + 1) - 1LL;
  *((_QWORD *)v8 + 1) = v9;
  if ( !v9 )
  {
    result = (*(__int64 (__fastcall **)(Caver::InventoryItemPanel *))(*(_QWORD *)v8 + 16LL))(v8);
    v10 = *((_QWORD *)v8 + 2) - 1LL;
    *((_QWORD *)v8 + 2) = v10;
    if ( !v10 )
      return (*(__int64 (__fastcall **)(Caver::InventoryItemPanel *))(*(_QWORD *)v8 + 24LL))(v8);
  }
  return result;
}

