/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040AD68
 * Mangled: _ZN5Caver18InventoryItemPanel7SetItemERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::InventoryItemPanel::SetItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000001FCA70  Caver::InventoryItemPanel::SetItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 13
 *   0x00000000001F42F0  Caver::InventoryTrinketSlot::SetEmptySlotIconTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6670  Caver::InventoryItemPanel::UpdateLabels(void)
 *   0x00000000001F9C80  Caver::MenuItemSlot::SetSkill(boost::shared_ptr<Caver::Skill> const&,bool)
 *   0x00000000001FA2D0  Caver::InventoryTrinketSlot::SetTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000202710  Caver::MenuItemSlot::SetItem(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 113
 *   insn=0x000000000040AD7C string=0x000000000040AD80 "V"
 *   insn=0x000000000040AD90 string=0x000000000040AD94 "`"
 *   insn=0x000000000040AD94 string=0x000000000040AD98 "^"
 *   insn=0x000000000040AD9C string=0x000000000040ADA0 "t"
 *   insn=0x000000000040ADA4 string=0x000000000040ADA8 "j"
 *   insn=0x000000000040ADA8 string=0x00000000001FA350 "0'"
 *   insn=0x000000000040ADAC string=0x000000000040ADB0 "A"
 *   insn=0x000000000040ADB0 string=0x0000000000593EF8 "ui_inventory_trinket_slot_icon"
 *   insn=0x000000000040ADBC string=0x000000000040ADC0 "~o"
 *   insn=0x000000000040ADEC string=0x000000000040ADF0 "@"
 *   insn=0x000000000040ADF0 string=0x00000000001F42F0 "P'"
 *   insn=0x000000000040ADF8 string=0x000000000040ADFC "@"
 *   insn=0x000000000040ADFC string=0x000000000040AE00 ""
 *   insn=0x000000000040AE00 string=0x000000000040AE04 ""
 *   insn=0x000000000040AE08 string=0x000000000040AE0C ""
 *   insn=0x000000000040AE0C string=0x000000000040AE10 ""
 *   insn=0x000000000040AE20 string=0x000000000040AE24 ")"
 *   insn=0x000000000040AE38 string=0x00000000001F6670 "0'"
 *   insn=0x000000000040AE48 string=0x000000000040AEA8 "\n"
 *   insn=0x000000000040AE64 string=0x000000000040AE68 ")=G"
 *   insn=0x000000000040AE68 string=0x000000000040AE6C "!"
 *   insn=0x000000000040AE70 string=0x000000000040AE74 "\t"
 *   insn=0x000000000040AE70 string=0x000000000040AE88 "\t"
 *   insn=0x000000000040AE74 string=0x000000000040AE78 "*"
 *   insn=0x000000000040AE78 string=0x000000000040AE7C "\n"
 *   insn=0x000000000040AE84 string=0x000000000040AE94 "?"
 *   insn=0x000000000040AE88 string=0x000000000040AE8C "*"
 *   insn=0x000000000040AE8C string=0x000000000040AE90 "\n"
 *   insn=0x000000000040AE9C string=0x000000000040AEA0 "A}"
 *   insn=0x000000000040AEA8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000040AEAC string=0x000000000040AEB0 "7"
 *   insn=0x000000000040AEB0 string=0x000000000040AEB4 """
 *   insn=0x000000000040AEC8 string=0x000000000040AECC "("
 *   insn=0x000000000040AECC string=0x000000000040AED0 "\t\t@"
 *   insn=0x000000000040AECC string=0x000000000040AEF0 "w"
 *   insn=0x000000000040AED0 string=0x000000000040AED4 ")"
 *   insn=0x000000000040AED4 string=0x000000000040AED8 "\t\t"
 *   insn=0x000000000040AEDC string=0x000000000040AEE0 "\t"
 *   insn=0x000000000040AEE0 string=0x000000000040AEE4 ")"
 *   insn=0x000000000040AEE8 string=0x000000000040AEEC " "
 *   insn=0x000000000040AEF8 string=0x000000000040AEFC ")"
 *   insn=0x000000000040AF0C string=0x000000000040AF10 ")=G"
 *   insn=0x000000000040AF10 string=0x000000000040AF14 "!"
 *   insn=0x000000000040AF14 string=0x000000000040AF18 "i"
 *   insn=0x000000000040AF18 string=0x000000000040AF1C "\t"
 *   insn=0x000000000040AF18 string=0x000000000040AF44 "\t"
 *   insn=0x000000000040AF1C string=0x000000000040AF20 "*"
 *   insn=0x000000000040AF20 string=0x000000000040AF24 "\n"
 *   insn=0x000000000040AF28 string=0x000000000040AF2C "?"
 *   insn=0x000000000040AF2C string=0x000000000040AF30 "l"
 *   insn=0x000000000040AF34 string=0x000000000040AF38 "}"
 *   insn=0x000000000040AF3C string=0x000000000040AF40 "a"
 *   insn=0x000000000040AF44 string=0x000000000040AF48 "*"
 *   insn=0x000000000040AF48 string=0x000000000040AF4C "\n"
 *   insn=0x000000000040AF4C string=0x000000000040AF50 "?"
 *   insn=0x000000000040AF50 string=0x000000000040AF54 ""
 *   insn=0x000000000040AF74 string=0x000000000040AF78 "V"
 *   insn=0x000000000040AF8C string=0x000000000040AF90 "`"
 *   insn=0x000000000040AF90 string=0x000000000040AF94 ";"
 *   insn=0x000000000040AF94 string=0x00000000001F9C80 "0'"
 *   insn=0x000000000040AF98 string=0x000000000040AF9C "t"
 *   insn=0x000000000040AFA8 string=0x000000000040AFAC "A"
 *   insn=0x000000000040AFD0 string=0x000000000040AFD4 "w"
 *   insn=0x000000000040AFF4 string=0x000000000040AFF8 "@"
 *   insn=0x000000000040AFF8 string=0x000000000040AFFC ""
 *   insn=0x000000000040AFFC string=0x000000000040B000 ""
 *   insn=0x000000000040B004 string=0x000000000040B008 ""
 *   insn=0x000000000040B008 string=0x000000000040B00C ""
 *   insn=0x000000000040B01C string=0x000000000040B020 ")"
 *   insn=0x000000000040B060 string=0x000000000040B064 ")=G"
 *   insn=0x000000000040B064 string=0x000000000040B068 "!"
 *   insn=0x000000000040B06C string=0x000000000040B070 "\t"
 *   insn=0x000000000040B06C string=0x000000000040B084 "\t"
 *   insn=0x000000000040B070 string=0x000000000040B074 "*"
 *   insn=0x000000000040B074 string=0x000000000040B078 "\n"
 *   insn=0x000000000040B080 string=0x000000000040B090 "?"
 *   insn=0x000000000040B084 string=0x000000000040B088 "*"
 *   insn=0x000000000040B088 string=0x000000000040B08C "\n"
 *   insn=0x000000000040B0A8 string=0x000000000040B0AC "7"
 *   insn=0x000000000040B0AC string=0x000000000040B0B0 """
 *   insn=0x000000000040B0C4 string=0x000000000040B0C8 "("
 *   insn=0x000000000040B0C8 string=0x000000000040B0CC "\t\t@"
 *   insn=0x000000000040B0C8 string=0x000000000040B0EC "w"
 *   insn=0x000000000040B0CC string=0x000000000040B0D0 ")"
 *   insn=0x000000000040B0D0 string=0x000000000040B0D4 "\t\t"
 *   insn=0x000000000040B0D8 string=0x000000000040B0DC "\t"
 *   insn=0x000000000040B0DC string=0x000000000040B0E0 ")"
 *   insn=0x000000000040B0E4 string=0x000000000040B0E8 " "
 *   insn=0x000000000040B0F4 string=0x000000000040B0F8 ")"
 *   insn=0x000000000040B108 string=0x000000000040B10C ")=G"
 *   insn=0x000000000040B10C string=0x000000000040B110 "!"
 *   insn=0x000000000040B110 string=0x000000000040B114 "i"
 *   insn=0x000000000040B114 string=0x000000000040B118 "\t"
 *   insn=0x000000000040B114 string=0x000000000040B140 "\t"
 *   insn=0x000000000040B118 string=0x000000000040B11C "*"
 *   insn=0x000000000040B11C string=0x000000000040B120 "\n"
 *   insn=0x000000000040B124 string=0x000000000040B128 "?"
 *   insn=0x000000000040B128 string=0x000000000040B12C "l"
 *   insn=0x000000000040B140 string=0x000000000040B144 "*"
 *   insn=0x000000000040B144 string=0x000000000040B148 "\n"
 *   insn=0x000000000040B148 string=0x000000000040B14C "?"
 *   insn=0x000000000040B14C string=0x000000000040B150 ""
 *   insn=0x000000000040B170 string=0x000000000040B174 "h"
 *   insn=0x000000000040B178 string=0x000000000040B17C ""
 *   insn=0x000000000040B18C string=0x000000000040B190 "("
 *   insn=0x000000000040B198 string=0x000000000040B19C "\t@"
 *   insn=0x000000000040B1A4 string=0x000000000040B1A8 ""
 *   insn=0x000000000040B1B8 string=0x000000000040B1BC "`"
 *   insn=0x000000000040B1C0 string=0x000000000040B1C4 "C"
 *   insn=0x000000000040B1C4 string=0x00000000001FA2D0 "0'"
 *   insn=0x000000000040B1D8 string=0x000000000040B1DC "%"
 *   insn=0x000000000040B204 string=0x000000000040B208 "@"
 *   insn=0x000000000040B210 string=0x000000000040B214 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::InventoryItemPanel::SetItem(Caver::InventoryItemPanel *a1, _QWORD *a2)
{
  Caver::TextureLibrary *v4; // x0
  int v5; // w23
  __int64 v6; // x0
  int v7; // w8
  void *v8; // x0
  unsigned int *v10; // x8
  int v11; // w9
  __int64 v12; // [xsp+C0h] [xbp-50h] BYREF
  __int64 v13; // [xsp+C8h] [xbp-48h]
  __int64 v14; // [xsp+D8h] [xbp-38h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (Caver::TextureLibrary *)Caver::MenuItemSlot::SetItem();
  if ( *a2 )
  {
    Caver::TextureLibrary::sharedLibrary(v4);
    sub_566BB8((int)&v12, "ui_inventory_trinket_slot_icon");
    v5 = 1;
    Caver::TextureLibrary::TextureForName();
  }
  else
  {
    v5 = 0;
    v13 = 0;
  }
  Caver::InventoryTrinketSlot::SetEmptySlotIconTexture();
  v6 = v13;
  if ( v13 )
  {
    v7 = *(_DWORD *)(v13 + 8) - 1;
    *(_DWORD *)(v13 + 8) = v7;
    if ( !v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  if ( v5 )
  {
    v8 = (void *)(v12 - 24);
    if ( (__int64 *)(v12 - 24) != &qword_6FD2E0 )
    {
      v10 = (unsigned int *)(v12 - 8);
      if ( &pthread_create )
      {
        do
          v11 = __ldaxr(v10);
        while ( __stlxr(v11 - 1, v10) );
      }
      else
      {
        v11 = (*v10)--;
      }
      if ( v11 <= 0 )
        operator delete(v8);
    }
  }
  return Caver::InventoryItemPanel::UpdateLabels(a1);
}

