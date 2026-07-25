/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043E2A0
 * Mangled: _ZN5Caver15SkillPickerView19HandleKeyboardEventERKNS_16GUIKeyboardEventE
 * Demangled: Caver::SkillPickerView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F37F0  Caver::SkillPickerView::AddAnimations(bool)
 *   0x00000000001F4910  boost::checked_array_delete<boost::shared_ptr<Caver::MenuItemSlot>>(boost::shared_ptr<Caver::MenuItemSlot> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB420  Caver::GUIResponder::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x00000000001FC800  Caver::SkillPickerView::SetSlotSelected(int,bool)
 *   0x00000000001FCCF0  Caver::SkillPickerView::~SkillPickerView()
 *   0x00000000001FDF80  boost::checked_array_delete<boost::shared_ptr<Caver::GUILabel>>(boost::shared_ptr<Caver::GUILabel> *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000203190  boost::checked_array_delete<boost::shared_ptr<Caver::GUIView>>(boost::shared_ptr<Caver::GUIView> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000043E714  Caver::SkillPickerView::DidMoveToWindow(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 96
 *   insn=0x000000000043E2B4 string=0x000000000043E2B8 "V"
 *   insn=0x000000000043E2C8 string=0x000000000043E2CC "h"
 *   insn=0x000000000043E2D0 string=0x000000000043E2D4 "!"
 *   insn=0x000000000043E2D4 string=0x000000000043E2D8 "h"
 *   insn=0x000000000043E2DC string=0x000000000043E2E0 "\tE"
 *   insn=0x000000000043E2E0 string=0x000000000043E2E4 "?"
 *   insn=0x000000000043E2E4 string=0x000000000043E2E8 "("
 *   insn=0x000000000043E2EC string=0x000000000043E2F0 "I!"
 *   insn=0x000000000043E2F0 string=0x000000000043E2F4 "*"
 *   insn=0x000000000043E2F4 string=0x000000000043E300 "?"
 *   insn=0x000000000043E300 string=0x000000000043E304 "@"
 *   insn=0x000000000043E318 string=0x000000000043E31C "5"
 *   insn=0x000000000043E31C string=0x00000000001F37F0 "P'"
 *   insn=0x000000000043E328 string=0x000000000043E32C ""
 *   insn=0x000000000043E328 string=0x000000000043E348 "h"
 *   insn=0x000000000043E330 string=0x000000000043E334 ""
 *   insn=0x000000000043E34C string=0x000000000043E350 "`"
 *   insn=0x000000000043E360 string=0x000000000043E364 ""
 *   insn=0x000000000043E364 string=0x000000000043E368 ""
 *   insn=0x000000000043E368 string=0x000000000043E36C "*"
 *   insn=0x000000000043E36C string=0x000000000043E370 "+"
 *   insn=0x000000000043E388 string=0x000000000043E38C "M"
 *   insn=0x000000000043E3A4 string=0x000000000043E3A8 "k"
 *   insn=0x000000000043E3B0 string=0x000000000043E3B4 "0"
 *   insn=0x000000000043E3C8 string=0x000000000043E3CC ""
 *   insn=0x000000000043E3CC string=0x00000000001FC800 "0'"
 *   insn=0x000000000043E3DC string=0x000000000043E3E0 ""
 *   insn=0x000000000043E3E4 string=0x000000000043E3E8 "`"
 *   insn=0x000000000043E3F0 string=0x000000000043E3F4 ""
 *   insn=0x000000000043E3F4 string=0x000000000043E3F8 ")ih"
 *   insn=0x000000000043E3F8 string=0x000000000043E3FC ""
 *   insn=0x000000000043E3FC string=0x000000000043E400 "*"
 *   insn=0x000000000043E400 string=0x000000000043E404 ""
 *   insn=0x000000000043E404 string=0x000000000043E408 ")"
 *   insn=0x000000000043E410 string=0x000000000043E414 "*"
 *   insn=0x000000000043E414 string=0x000000000043E418 "J"
 *   insn=0x000000000043E418 string=0x000000000043E41C "*"
 *   insn=0x000000000043E42C string=0x000000000043E430 "5"
 *   insn=0x000000000043E434 string=0x000000000043E438 ""
 *   insn=0x000000000043E448 string=0x000000000043E44C "\t@"
 *   insn=0x000000000043E454 string=0x000000000043E458 ""
 *   insn=0x000000000043E468 string=0x000000000043E46C "@"
 *   insn=0x000000000043E480 string=0x00000000001FB420 "0'"
 *   insn=0x000000000043E4AC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000043E4B4 string=0x000000000043E4B8 "4"
 *   insn=0x000000000043E4BC string=0x000000000043E4C0 ""
 *   insn=0x000000000043E4CC string=0x000000000043E4D0 "\t@"
 *   insn=0x000000000043E4DC string=0x000000000043E4E0 ""
 *   insn=0x000000000043E4EC string=0x000000000043E4F0 "@"
 *   insn=0x000000000043E514 string=0x000000000043E518 "("
 *   insn=0x000000000043E51C string=0x000000000043E520 ""
 *   insn=0x000000000043E520 string=0x000000000043E524 "`"
 *   insn=0x000000000043E524 string=0x000000000043E528 "\tA"
 *   insn=0x000000000043E528 string=0x000000000043E52C ""
 *   insn=0x000000000043E52C string=0x000000000043E530 "i"
 *   insn=0x000000000043E530 string=0x000000000043E534 "hz"
 *   insn=0x000000000043E538 string=0x000000000043E53C "`"
 *   insn=0x000000000043E540 string=0x000000000043E544 "`"
 *   insn=0x000000000043E540 string=0x00000000001FDF80 "0'"
 *   insn=0x000000000043E548 string=0x000000000043E54C "t"
 *   insn=0x000000000043E548 string=0x00000000001F4910 "P'"
 *   insn=0x000000000043E54C string=0x000000000043E550 "4"
 *   insn=0x000000000043E550 string=0x000000000043E594 "t"
 *   insn=0x000000000043E554 string=0x000000000043E558 ""
 *   insn=0x000000000043E564 string=0x000000000043E568 "\t@"
 *   insn=0x000000000043E574 string=0x000000000043E578 ""
 *   insn=0x000000000043E584 string=0x000000000043E588 "@"
 *   insn=0x000000000043E594 string=0x000000000043E598 "4"
 *   insn=0x000000000043E59C string=0x000000000043E5A0 ""
 *   insn=0x000000000043E5AC string=0x000000000043E5B0 "\t@"
 *   insn=0x000000000043E5BC string=0x000000000043E5C0 ""
 *   insn=0x000000000043E5CC string=0x000000000043E5D0 "@"
 *   insn=0x000000000043E5F0 string=0x000000000043E5F4 "5"
 *   insn=0x000000000043E5F8 string=0x000000000043E5FC "u"
 *   insn=0x000000000043E5FC string=0x000000000043E600 "U"
 *   insn=0x000000000043E600 string=0x000000000043E604 "1"
 *   insn=0x000000000043E608 string=0x000000000043E60C "u"
 *   insn=0x000000000043E610 string=0x000000000043E614 ""
 *   insn=0x000000000043E614 string=0x000000000043E680 "u"
 *   insn=0x000000000043E61C string=0x000000000043E630 "`"
 *   insn=0x000000000043E628 string=0x000000000043E62C "U"
 *   insn=0x000000000043E634 string=0x000000000043E638 "u"
 *   insn=0x000000000043E638 string=0x000000000043E63C "5"
 *   insn=0x000000000043E640 string=0x000000000043E644 ""
 *   insn=0x000000000043E650 string=0x000000000043E654 "\t@"
 *   insn=0x000000000043E660 string=0x000000000043E664 ""
 *   insn=0x000000000043E670 string=0x000000000043E674 "@"
 *   insn=0x000000000043E680 string=0x000000000043E684 "5"
 *   insn=0x000000000043E688 string=0x000000000043E68C ""
 *   insn=0x000000000043E698 string=0x000000000043E69C "\t@"
 *   insn=0x000000000043E6A8 string=0x000000000043E6AC ""
 *   insn=0x000000000043E6B8 string=0x000000000043E6BC "@"
 *   insn=0x000000000043E6D0 string=0x000000000043E6D4 "|"
 *   insn=0x000000000043E6EC string=0x00000000001FCCF0 "0'"
 *   insn=0x000000000043E6FC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000043E70C string=0x000000000043E710 "m"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (***__fastcall Caver::SkillPickerView::HandleKeyboardEvent(__int64 (***this)(void), __int64 a2))(void)
{
  __int64 v3; // x20
  int v4; // w8
  int v5; // w23
  int v6; // w9
  int v7; // w8
  int v8; // w1
  int v9; // w11
  int v10; // w21
  int v11; // w13
  __int64 (*v12)(void); // x8
  _QWORD *v13; // x9
  __int64 v14; // x8
  __int64 v15; // x8
  _QWORD *v16; // [xsp+40h] [xbp-40h]

  v3 = (__int64)this;
  _ReadStatusReg(TPIDR_EL0);
  if ( *(_DWORD *)(a2 + 12) != 1 )
    return (__int64 (***)(void))Caver::GUIResponder::HandleKeyboardEvent();
  v4 = *(_DWORD *)(a2 + 16);
  v5 = 0;
  if ( (unsigned int)(v4 - 17) <= 0x37 && ((1LL << ((unsigned __int8)v4 - 17)) & 0x81000000210401LL) != 0 )
  {
    if ( this[31] )
    {
      v5 = 1;
      Caver::SkillPickerView::AddAnimations((Caver::SkillPickerView *)this, 1);
      this = *(__int64 (****)(void))(v3 + 248);
      *(_BYTE *)(v3 + 229) = 0;
      if ( this )
      {
        this = (__int64 (***)(void))((__int64 (__fastcall *)(__int64 (***)(void), __int64))(*this)[1])(this, v3);
        v5 = 1;
      }
    }
    else
    {
      v5 = 0;
    }
    v4 = *(_DWORD *)(a2 + 16);
  }
  if ( v4 == 189 || v4 == 187 )
  {
    v6 = *(_DWORD *)(v3 + 288);
    v7 = v4 == 187 ? -1 : 1;
    if ( v6 >= 1 )
    {
      v8 = *(_DWORD *)(v3 + 320);
      v9 = 0;
      v10 = v8;
      while ( 1 )
      {
        v11 = v10 + v7;
        if ( v10 + v7 < 0 )
          v11 = v6 - 1;
        v10 = v11 >= v6 ? 0 : v11;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 296) + 16LL * v10) + 288LL) )
          break;
        if ( ++v9 >= v6 )
          goto LABEL_34;
      }
      if ( v10 != v8 )
      {
        if ( (v8 & 0x80000000) == 0 )
          Caver::SkillPickerView::SetSlotSelected((Caver::SkillPickerView *)v3, v8, 0);
        *(_DWORD *)(v3 + 320) = v10;
        Caver::SkillPickerView::SetSlotSelected((Caver::SkillPickerView *)v3, v10, 1);
        this = *(__int64 (****)(void))(v3 + 248);
        if ( this )
        {
          v12 = **this;
          v13 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v3 + 296) + 16LL * *(int *)(v3 + 320)) + 280LL);
          v16 = v13;
          if ( v13 )
            ++v13[1];
          this = (__int64 (***)(void))v12();
          if ( v16 )
          {
            v14 = v16[1] - 1LL;
            v16[1] = v14;
            if ( !v14 )
            {
              this = (__int64 (***)(void))(*(__int64 (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
              v15 = v16[2] - 1LL;
              v16[2] = v15;
              if ( !v15 )
                this = (__int64 (***)(void))(*(__int64 (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
            }
          }
        }
      }
    }
  }
LABEL_34:
  if ( !v5 )
    return (__int64 (***)(void))Caver::GUIResponder::HandleKeyboardEvent();
  return this;
}

