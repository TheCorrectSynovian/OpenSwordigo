/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000411D94
 * Mangled: _ZN5Caver13InventoryView32InventoryItemPanelTrinketChangedEPNS_18InventoryItemPanelE
 * Demangled: Caver::InventoryView::InventoryItemPanelTrinketChanged(Caver::InventoryItemPanel *)
 *
 * Callers: 1
 *   0x00000000001FBF10  Caver::InventoryView::InventoryItemPanelTrinketChanged(Caver::InventoryItemPanel *)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBAE0  Caver::InventoryView::UpdateTrinketHighlights(void)
 *   0x00000000001FBF10  Caver::InventoryView::InventoryItemPanelTrinketChanged(Caver::InventoryItemPanel *)
 *   0x0000000000203000  Caver::InventoryItemPanel::SetTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 73
 *   insn=0x0000000000411DAC string=0x0000000000411DB0 "X"
 *   insn=0x0000000000411DB0 string=0x0000000000411DB4 ""
 *   insn=0x0000000000411DC8 string=0x0000000000411DCC "h"
 *   insn=0x0000000000411DCC string=0x0000000000411DD0 "iy"
 *   insn=0x0000000000411DD8 string=0x0000000000411DDC ""
 *   insn=0x0000000000411DDC string=0x0000000000411DE0 ""
 *   insn=0x0000000000411DE0 string=0x0000000000411DE4 "YP"
 *   insn=0x0000000000411DEC string=0x0000000000411DF0 ")"
 *   insn=0x0000000000411DF8 string=0x0000000000411DFC ")"
 *   insn=0x0000000000411DFC string=0x0000000000411E00 ")]P"
 *   insn=0x0000000000411E00 string=0x0000000000411E04 "W"
 *   insn=0x0000000000411E10 string=0x0000000000411E14 "\n"
 *   insn=0x0000000000411E18 string=0x0000000000411E1C "\t@"
 *   insn=0x0000000000411E28 string=0x0000000000411E2C ""
 *   insn=0x0000000000411E38 string=0x0000000000411E3C "@"
 *   insn=0x0000000000411E54 string=0x0000000000411E88 "z"
 *   insn=0x0000000000411E58 string=0x0000000000411E5C ""
 *   insn=0x0000000000411E60 string=0x0000000000411E64 "!"
 *   insn=0x0000000000411E6C string=0x0000000000411E70 "\t@"
 *   insn=0x0000000000411E78 string=0x0000000000411E7C ""
 *   insn=0x0000000000411E88 string=0x0000000000411EB4 "h"
 *   insn=0x0000000000411E90 string=0x0000000000411E94 "9C"
 *   insn=0x0000000000411E98 string=0x0000000000411E9C "$"
 *   insn=0x0000000000411E9C string=0x0000000000411F2C "h"
 *   insn=0x0000000000411EA4 string=0x0000000000411EA8 "@"
 *   insn=0x0000000000411EC0 string=0x0000000000411EC4 "O"
 *   insn=0x0000000000411EC8 string=0x0000000000411ECC "6"
 *   insn=0x0000000000411ECC string=0x0000000000411F10 "`"
 *   insn=0x0000000000411ED0 string=0x0000000000411ED4 ""
 *   insn=0x0000000000411EE4 string=0x0000000000411EE8 "\t@"
 *   insn=0x0000000000411EF0 string=0x0000000000411EF4 ""
 *   insn=0x0000000000411F04 string=0x0000000000411F08 "@"
 *   insn=0x0000000000411F14 string=0x0000000000411F18 ""
 *   insn=0x0000000000411F20 string=0x0000000000411F24 ""
 *   insn=0x0000000000411F2C string=0x0000000000411F30 "\t"
 *   insn=0x0000000000411F30 string=0x0000000000411F34 "?"
 *   insn=0x0000000000411F34 string=0x0000000000411F38 " "
 *   insn=0x0000000000411F38 string=0x0000000000411F3C "\t\t@"
 *   insn=0x0000000000411F3C string=0x0000000000411F40 "?"
 *   insn=0x0000000000411F44 string=0x0000000000411F48 ""
 *   insn=0x0000000000411F4C string=0x0000000000411F50 "A"
 *   insn=0x0000000000411F68 string=0x0000000000411F6C ""
 *   insn=0x0000000000411F6C string=0x0000000000411F70 "\t!P"
 *   insn=0x0000000000411F78 string=0x0000000000411F7C "\t"
 *   insn=0x0000000000411F7C string=0x0000000000411F80 ")"
 *   insn=0x0000000000411F80 string=0x0000000000411F84 "\t"
 *   insn=0x0000000000411F94 string=0x0000000000411F98 "4"
 *   insn=0x0000000000411F98 string=0x0000000000411FDC "`"
 *   insn=0x0000000000411F9C string=0x0000000000411FA0 ""
 *   insn=0x0000000000411FB0 string=0x0000000000411FB4 "\t@"
 *   insn=0x0000000000411FBC string=0x0000000000411FC0 ""
 *   insn=0x0000000000411FD0 string=0x0000000000411FD4 "@"
 *   insn=0x0000000000411FE0 string=0x0000000000411FE4 ""
 *   insn=0x0000000000411FEC string=0x0000000000411FF0 ""
 *   insn=0x0000000000411FFC string=0x0000000000412000 ""
 *   insn=0x0000000000411FFC string=0x00000000001FBAE0 "0'"
 *   insn=0x000000000041202C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000041203C string=0x0000000000412040 ""
 *   insn=0x000000000041204C string=0x0000000000412050 "\t@"
 *   insn=0x000000000041205C string=0x0000000000412060 ""
 *   insn=0x000000000041206C string=0x0000000000412070 "@"
 *   insn=0x0000000000412078 string=0x000000000041207C "'"
 *   insn=0x000000000041208C string=0x0000000000412090 ""
 *   insn=0x000000000041209C string=0x00000000004120A0 "\t@"
 *   insn=0x00000000004120AC string=0x00000000004120B0 ""
 *   insn=0x00000000004120BC string=0x00000000004120C0 "@"
 *   insn=0x00000000004120D0 string=0x00000000004120D4 "6"
 *   insn=0x00000000004120D8 string=0x00000000004120DC ""
 *   insn=0x00000000004120E8 string=0x00000000004120EC "\t@"
 *   insn=0x00000000004120F8 string=0x00000000004120FC ""
 *   insn=0x0000000000412108 string=0x000000000041210C "@"
 *   insn=0x0000000000412124 string=0x0000000000412128 "z"
 *   insn=0x0000000000412128 string=0x00000000001FBF10 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::InventoryView::InventoryItemPanelTrinketChanged(
        Caver::InventoryView *this,
        Caver::InventoryItemPanel *a2)
{
  __int64 v4; // x25
  unsigned __int64 v5; // x21
  Caver::InventoryItemPanel *v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x22
  __int64 *v9; // t2
  __int64 v10; // x9
  _QWORD *v11; // x23
  _BOOL4 v12; // w26
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  bool v16; // cf
  __int64 v17; // x0
  Caver::InventoryItemPanel **v18; // x8
  unsigned int v19; // w21
  _QWORD *v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x0
  _QWORD *v24; // [xsp+10h] [xbp-50h]

  v4 = 0;
  v5 = 0;
  _ReadStatusReg(TPIDR_EL0);
  while ( 1 )
  {
    v6 = *(Caver::InventoryItemPanel **)(*((_QWORD *)this + 38) + v4);
    if ( v6 == a2 )
      goto LABEL_14;
    v9 = (__int64 *)(*(_QWORD *)(*((_QWORD *)v6 + 38) + 272LL) + 256LL);
    v7 = *v9;
    v8 = (_QWORD *)v9[1];
    if ( v8 )
      ++v8[1];
    v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 38) + 272LL) + 256LL);
    v11 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 38) + 272LL) + 264LL);
    if ( v11 )
    {
      v12 = v7 == v10;
      if ( !v11[1] )
      {
        (*(void (__fastcall **)(_QWORD))(*v11 + 16LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 38) + 272LL) + 264LL));
        v13 = v11[2] - 1LL;
        v11[2] = v13;
        if ( !v13 )
          (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
      }
    }
    else
    {
      v12 = v7 == v10;
    }
    if ( v8 )
    {
      v14 = v8[1] - 1LL;
      v8[1] = v14;
      if ( !v14 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
        v15 = v8[2] - 1LL;
        v8[2] = v15;
        if ( !v15 )
          break;
      }
    }
    if ( v12 )
      goto LABEL_18;
LABEL_14:
    v16 = v5++ >= 2;
    v4 += 16;
    if ( v16 )
      goto LABEL_20;
  }
  (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
  if ( !v12 )
    goto LABEL_14;
LABEL_18:
  Caver::InventoryItemPanel::SetTrinket();
  v17 = *((_QWORD *)this + 34);
  if ( v17 )
    (*(void (__fastcall **)(__int64, Caver::InventoryView *, _QWORD))(*(_QWORD *)v17 + 8LL))(
      v17,
      this,
      (unsigned int)v5);
LABEL_20:
  v18 = (Caver::InventoryItemPanel **)*((_QWORD *)this + 38);
  if ( *v18 == a2 )
  {
    v19 = 0;
LABEL_26:
    v20 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 38) + 272LL) + 264LL);
    v24 = v20;
    if ( v20 )
      ++v20[1];
    Caver::InventoryItemPanel::SetTrinket();
    if ( v24 )
    {
      v21 = v24[1] - 1LL;
      v24[1] = v21;
      if ( !v21 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
        v22 = v24[2] - 1LL;
        v24[2] = v22;
        if ( !v22 )
          (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
      }
    }
    v23 = *((_QWORD *)this + 34);
    if ( v23 )
      (*(void (__fastcall **)(__int64, Caver::InventoryView *, _QWORD))(*(_QWORD *)v23 + 8LL))(v23, this, v19);
    goto LABEL_34;
  }
  if ( v18[2] == a2 )
  {
    v19 = 1;
    goto LABEL_26;
  }
  if ( v18[4] == a2 )
  {
    v19 = 2;
    goto LABEL_26;
  }
LABEL_34:
  Caver::InventoryView::UpdateTrinketHighlights(this);
}

