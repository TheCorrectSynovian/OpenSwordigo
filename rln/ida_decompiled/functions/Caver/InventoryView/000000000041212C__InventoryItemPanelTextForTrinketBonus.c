/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041212C
 * Mangled: _ZN5Caver13InventoryView37InventoryItemPanelTextForTrinketBonusEPNS_18InventoryItemPanelE
 * Demangled: Caver::InventoryView::InventoryItemPanelTextForTrinketBonus(Caver::InventoryItemPanel *)
 *
 * Callers: 1
 *   0x00000000002011C0  Caver::InventoryView::InventoryItemPanelTextForTrinketBonus(Caver::InventoryItemPanel *)
 *
 * Callees: 8
 *   0x00000000001F3C20  Caver::CharacterState::TrinketBonusForWeapons(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9390  Caver::CharacterState::TrinketBonusForSkills(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001FE210  Caver::CharacterState::TrinketBonusForArmors(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000002011C0  Caver::InventoryView::InventoryItemPanelTextForTrinketBonus(Caver::InventoryItemPanel *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 69
 *   insn=0x0000000000412138 string=0x000000000041213C "T"
 *   insn=0x0000000000412144 string=0x0000000000412148 "\t"
 *   insn=0x0000000000412148 string=0x000000000041214C "*"
 *   insn=0x000000000041214C string=0x0000000000412150 "_"
 *   insn=0x0000000000412154 string=0x0000000000412158 "*\t@"
 *   insn=0x0000000000412154 string=0x0000000000412188 ")"
 *   insn=0x0000000000412158 string=0x000000000041215C "_"
 *   insn=0x0000000000412160 string=0x0000000000412164 ")"
 *   insn=0x0000000000412160 string=0x00000000004121C0 ")"
 *   insn=0x0000000000412164 string=0x0000000000412168 "?"
 *   insn=0x0000000000412168 string=0x000000000041216C "`"
 *   insn=0x000000000041216C string=0x00000000004121F8 ")"
 *   insn=0x0000000000412180 string=0x0000000000412184 "<"
 *   insn=0x0000000000412188 string=0x000000000041218C ""
 *   insn=0x000000000041218C string=0x0000000000412190 ")"
 *   insn=0x0000000000412190 string=0x0000000000412194 "`A"
 *   insn=0x0000000000412194 string=0x0000000000412198 "*"
 *   insn=0x0000000000412198 string=0x000000000041219C ")"
 *   insn=0x00000000004121A4 string=0x00000000004121A8 "*"
 *   insn=0x00000000004121A8 string=0x00000000004121AC "J"
 *   insn=0x00000000004121AC string=0x00000000004121B0 "*"
 *   insn=0x00000000004121B8 string=0x00000000001F3C20 "P'"
 *   insn=0x00000000004121C0 string=0x00000000004121C4 ""
 *   insn=0x00000000004121C4 string=0x00000000004121C8 ")"
 *   insn=0x00000000004121C8 string=0x00000000004121CC "`A"
 *   insn=0x00000000004121CC string=0x00000000004121D0 "*"
 *   insn=0x00000000004121D0 string=0x00000000004121D4 ")"
 *   insn=0x00000000004121DC string=0x00000000004121E0 "*"
 *   insn=0x00000000004121E0 string=0x00000000004121E4 "J"
 *   insn=0x00000000004121E4 string=0x00000000004121E8 "*"
 *   insn=0x00000000004121EC string=0x00000000004121F0 ""
 *   insn=0x00000000004121F8 string=0x00000000004121FC ""
 *   insn=0x00000000004121FC string=0x0000000000412200 ")"
 *   insn=0x0000000000412200 string=0x0000000000412204 "`A"
 *   insn=0x0000000000412204 string=0x0000000000412208 "*"
 *   insn=0x0000000000412208 string=0x000000000041220C ")"
 *   insn=0x0000000000412214 string=0x0000000000412218 "*"
 *   insn=0x0000000000412218 string=0x000000000041221C "J"
 *   insn=0x000000000041221C string=0x0000000000412220 "*"
 *   insn=0x0000000000412224 string=0x0000000000412228 "Z"
 *   insn=0x0000000000412228 string=0x00000000001F9390 "0'"
 *   insn=0x000000000041222C string=0x0000000000412230 "3"
 *   insn=0x0000000000412230 string=0x0000000000412234 "h"
 *   insn=0x0000000000412234 string=0x0000000000412238 ""
 *   insn=0x0000000000412238 string=0x000000000041223C "h"
 *   insn=0x0000000000412240 string=0x0000000000412244 "h"
 *   insn=0x0000000000412248 string=0x000000000041224C "\t@"
 *   insn=0x0000000000412250 string=0x0000000000412254 "h\n@"
 *   insn=0x0000000000412254 string=0x0000000000412258 ""
 *   insn=0x0000000000412258 string=0x000000000041225C "h\n"
 *   insn=0x0000000000412260 string=0x0000000000412264 "h"
 *   insn=0x0000000000412268 string=0x000000000041226C "@"
 *   insn=0x0000000000412294 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004122A4 string=0x00000000004122A8 ""
 *   insn=0x00000000004122B4 string=0x00000000004122B8 "\t@"
 *   insn=0x00000000004122C4 string=0x00000000004122C8 ""
 *   insn=0x00000000004122D4 string=0x00000000004122D8 "@"
 *   insn=0x00000000004122E0 string=0x00000000004122E4 "+"
 *   insn=0x00000000004122F4 string=0x00000000004122F8 ""
 *   insn=0x0000000000412304 string=0x0000000000412308 "\t@"
 *   insn=0x0000000000412314 string=0x0000000000412318 ""
 *   insn=0x0000000000412324 string=0x0000000000412328 "@"
 *   insn=0x000000000041233C string=0x0000000000412340 "a"
 *   insn=0x0000000000412348 string=0x000000000041234C "4"
 *   insn=0x0000000000412350 string=0x0000000000412354 ""
 *   insn=0x0000000000412360 string=0x0000000000412364 "\t@"
 *   insn=0x0000000000412370 string=0x0000000000412374 ""
 *   insn=0x0000000000412380 string=0x0000000000412384 "@"
 *   insn=0x0000000000412390 string=0x0000000000412394 "L"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::InventoryView::InventoryItemPanelTextForTrinketBonus@<X0>(
        Caver::InventoryView *this@<X0>,
        Caver::InventoryItemPanel *a2@<X1>,
        int a3@<W8>)
{
  Caver::InventoryItemPanel **v3; // x9
  __int64 result; // x0
  _QWORD *v5; // x9
  _QWORD *v6; // x9
  _QWORD *v7; // x9
  __int64 v8; // x8
  __int64 v9; // x8
  _QWORD *v10; // [xsp+10h] [xbp-20h]

  _ReadStatusReg(TPIDR_EL0);
  v3 = (Caver::InventoryItemPanel **)*((_QWORD *)this + 38);
  if ( *v3 == a2 )
  {
    v5 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 38) + 272LL) + 264LL);
    v10 = v5;
    if ( v5 )
      ++v5[1];
    result = Caver::CharacterState::TrinketBonusForWeapons();
  }
  else if ( v3[2] == a2 )
  {
    v6 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 38) + 272LL) + 264LL);
    v10 = v6;
    if ( v6 )
      ++v6[1];
    result = Caver::CharacterState::TrinketBonusForArmors();
  }
  else
  {
    if ( v3[4] != a2 )
      return sub_566BB8(a3, "");
    v7 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 38) + 272LL) + 264LL);
    v10 = v7;
    if ( v7 )
      ++v7[1];
    result = Caver::CharacterState::TrinketBonusForSkills();
  }
  if ( v10 )
  {
    v8 = v10[1] - 1LL;
    v10[1] = v8;
    if ( !v8 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v9 = v10[2] - 1LL;
      v10[2] = v9;
      if ( !v9 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  return result;
}

