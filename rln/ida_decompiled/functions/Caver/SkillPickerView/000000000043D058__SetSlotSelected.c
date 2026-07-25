/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043D058
 * Mangled: _ZN5Caver15SkillPickerView15SetSlotSelectedEib
 * Demangled: Caver::SkillPickerView::SetSlotSelected(int,bool)
 *
 * Callers: 2
 *   0x00000000001FC800  Caver::SkillPickerView::SetSlotSelected(int,bool)
 *   0x000000000043BACC  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 11
 *   0x00000000001F37F0  Caver::SkillPickerView::AddAnimations(bool)
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *   0x00000000001F5920  Caver::MenuItemSlot::SetSelected(bool)
 *   0x00000000001F5CB0  Caver::GUIView::safeBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x00000000002003B0  Caver::GUIView::ConvertRectFromView(Caver::Rectangle const&,Caver::GUIView*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 103
 *   insn=0x000000000043D068 string=0x000000000043D06C "h"
 *   insn=0x000000000043D06C string=0x000000000043D070 "4||"
 *   insn=0x000000000043D07C string=0x000000000043D080 "("
 *   insn=0x000000000043D080 string=0x000000000043D084 "h"
 *   insn=0x000000000043D080 string=0x00000000001F5920 "P'"
 *   insn=0x000000000043D084 string=0x000000000043D088 ""
 *   insn=0x000000000043D090 string=0x000000000043D094 "h"
 *   insn=0x000000000043D090 string=0x000000000043D0A0 "T\t"
 *   insn=0x000000000043D094 string=0x000000000043D098 ""
 *   insn=0x000000000043D098 string=0x000000000043D09C "h"
 *   insn=0x000000000043D0AC string=0x000000000043D0B0 "A"
 *   insn=0x000000000043D0D8 string=0x000000000043D0DC "H"
 *   insn=0x000000000043D0E8 string=0x000000000043D0EC "5"
 *   insn=0x000000000043D0F0 string=0x000000000043D0F4 ""
 *   insn=0x000000000043D100 string=0x000000000043D104 "\t@"
 *   insn=0x000000000043D110 string=0x000000000043D114 ""
 *   insn=0x000000000043D120 string=0x000000000043D124 "@"
 *   insn=0x000000000043D134 string=0x000000000043D138 "$"
 *   insn=0x000000000043D134 string=0x00000000001F8510 "0'"
 *   insn=0x000000000043D13C string=0x000000000043D140 "A"
 *   insn=0x000000000043D160 string=0x000000000043D164 " "
 *   insn=0x000000000043D178 string=0x000000000043D17C "5"
 *   insn=0x000000000043D180 string=0x000000000043D184 ""
 *   insn=0x000000000043D190 string=0x000000000043D194 "\t@"
 *   insn=0x000000000043D1A0 string=0x000000000043D1A4 ""
 *   insn=0x000000000043D1B0 string=0x000000000043D1B4 "@"
 *   insn=0x000000000043D1C8 string=0x000000000043D1CC "h"
 *   insn=0x000000000043D1CC string=0x000000000043D1D0 ""
 *   insn=0x000000000043D1D0 string=0x000000000043D1D4 "h"
 *   insn=0x000000000043D1D4 string=0x000000000043D1D8 "!"
 *   insn=0x000000000043D1D8 string=0x000000000043D1DC "h"
 *   insn=0x000000000043D1E0 string=0x000000000043D1E4 "\t@"
 *   insn=0x000000000043D1E8 string=0x000000000043D1EC "h\n@"
 *   insn=0x000000000043D1EC string=0x000000000043D1F0 ""
 *   insn=0x000000000043D1F0 string=0x000000000043D1F4 "h\n"
 *   insn=0x000000000043D1F8 string=0x000000000043D20C "h"
 *   insn=0x000000000043D220 string=0x000000000043D224 " "
 *   insn=0x000000000043D22C string=0x000000000043D23C "h"
 *   insn=0x000000000043D234 string=0x000000000043D238 "3"
 *   insn=0x000000000043D23C string=0x000000000043D240 ""
 *   insn=0x000000000043D240 string=0x000000000043D244 "h"
 *   insn=0x000000000043D248 string=0x000000000043D24C "h"
 *   insn=0x000000000043D24C string=0x000000000043D250 "\t@"
 *   insn=0x000000000043D258 string=0x000000000043D25C "h\n@"
 *   insn=0x000000000043D25C string=0x000000000043D260 ""
 *   insn=0x000000000043D260 string=0x000000000043D264 "h\n"
 *   insn=0x000000000043D268 string=0x000000000043D26C "h"
 *   insn=0x000000000043D26C string=0x000000000043D270 "@"
 *   insn=0x000000000043D280 string=0x000000000043D284 "2D"
 *   insn=0x000000000043D2A8 string=0x000000000043D2AC "U"
 *   insn=0x000000000043D2B8 string=0x000000000043D2BC "`"
 *   insn=0x000000000043D2C0 string=0x000000000043D2C4 "`"
 *   insn=0x000000000043D2C0 string=0x000000000043D2FC "h"A"
 *   insn=0x000000000043D2C4 string=0x000000000043D2C8 "a"
 *   insn=0x000000000043D2CC string=0x000000000043D2D0 "h"
 *   insn=0x000000000043D2F8 string=0x00000000001FB170 "0'"
 *   insn=0x000000000043D2FC string=0x000000000043D300 "\t"
 *   insn=0x000000000043D300 string=0x000000000043D304 "K"
 *   insn=0x000000000043D304 string=0x000000000043D308 "j"
 *   insn=0x000000000043D308 string=0x000000000043D30C " "
 *   insn=0x000000000043D30C string=0x000000000043D310 "i"
 *   insn=0x000000000043D314 string=0x000000000043D318 "H"
 *   insn=0x000000000043D318 string=0x000000000043D31C "*\n"
 *   insn=0x000000000043D31C string=0x000000000043D320 ")"
 *   insn=0x000000000043D31C string=0x0000000000583734 "o"
 *   insn=0x000000000043D320 string=0x000000000043D324 "I5G"
 *   insn=0x000000000043D32C string=0x000000000043D330 "$"
 *   insn=0x000000000043D334 string=0x000000000043D338 "A!"
 *   insn=0x000000000043D338 string=0x000000000043D33C "\n"
 *   insn=0x000000000043D33C string=0x000000000043D340 "L(#"
 *   insn=0x000000000043D354 string=0x000000000043D358 ""
 *   insn=0x000000000043D358 string=0x000000000043D35C "B"
 *   insn=0x000000000043D35C string=0x000000000043D360 "*"
 *   insn=0x000000000043D360 string=0x000000000043D364 ""
 *   insn=0x000000000043D370 string=0x000000000043D374 "O"
 *   insn=0x000000000043D374 string=0x00000000001F5CB0 "P'"
 *   insn=0x000000000043D37C string=0x000000000043D380 "b"
 *   insn=0x000000000043D380 string=0x000000000043D384 "c"
 *   insn=0x000000000043D38C string=0x000000000043D390 "A*"
 *   insn=0x000000000043D398 string=0x000000000043D39C "a(!"
 *   insn=0x000000000043D39C string=0x000000000043D3A0 "!8-"
 *   insn=0x000000000043D3B0 string=0x000000000043D3B4 "h"A"
 *   insn=0x000000000043D3B0 string=0x00000000001FDA30 "0'"
 *   insn=0x000000000043D3C0 string=0x000000000043D3C4 ""
 *   insn=0x000000000043D3CC string=0x000000000043D3D0 "A"
 *   insn=0x000000000043D3D0 string=0x000000000043D3D4 " "
 *   insn=0x000000000043D3E0 string=0x000000000043D3E4 "h"
 *   insn=0x000000000043D3E8 string=0x000000000043D3EC "a"
 *   insn=0x000000000043D3EC string=0x000000000043D3F0 "h"
 *   insn=0x000000000043D400 string=0x000000000043D404 "#"
 *   insn=0x000000000043D404 string=0x00000000001F3C90 "P'"
 *   insn=0x000000000043D410 string=0x000000000043D414 "h"
 *   insn=0x000000000043D418 string=0x000000000043D41C "h"
 *   insn=0x000000000043D41C string=0x000000000043D420 "@"
 *   insn=0x000000000043D420 string=0x000000000043D424 "IP"
 *   insn=0x000000000043D424 string=0x000000000043D428 "J"
 *   insn=0x000000000043D430 string=0x000000000043D434 ")"
 *   insn=0x000000000043D434 string=0x000000000043D438 " "
 *   insn=0x000000000043D45C string=0x000000000043D460 "h""
 *   insn=0x000000000043D464 string=0x000000000043D468 "+"
 *   insn=0x000000000043D474 string=0x00000000001F37F0 "P'"
 *   insn=0x000000000043D480 string=0x000000000043D484 "A"
 *   insn=0x000000000043D4AC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkillPickerView::SetSlotSelected(Caver::SkillPickerView *this, int a2, char a3)
{
  __int64 v4; // x20
  __int64 result; // x0
  __int64 *v7; // x8
  _QWORD *v8; // x19
  __int64 v9; // x20
  int v10; // w8
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x8
  _QWORD *v14; // x21
  __int64 v15; // x8
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // x8

  v4 = 16LL * a2;
  result = Caver::MenuItemSlot::SetSelected(*(Caver::MenuItemSlot **)(*((_QWORD *)this + 37) + v4), a3 & 1);
  v7 = (__int64 *)(*((_QWORD *)this + 38) + v4);
  v9 = *v7;
  v8 = (_QWORD *)v7[1];
  if ( v8 )
    ++v8[1];
  if ( v9 )
  {
    v10 = *(unsigned __int8 *)(v9 + 264);
    if ( (a3 & 1) != 0 )
    {
      if ( v10 != 250
        || *(unsigned __int8 *)(v9 + 265) != 230
        || *(unsigned __int8 *)(v9 + 266) != 160
        || *(unsigned __int8 *)(v9 + 267) != 255 )
      {
        v11 = *(_QWORD **)(v9 + 280);
        *(_DWORD *)(v9 + 264) = -6232326;
        *(_QWORD *)(v9 + 272) = 0;
        *(_QWORD *)(v9 + 280) = 0;
        if ( v11 )
        {
          v12 = v11[1] - 1LL;
          v11[1] = v12;
          if ( !v12 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
            v13 = v11[2] - 1LL;
            v11[2] = v13;
            if ( !v13 )
              (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
          }
        }
LABEL_22:
        result = Caver::GUILabel::UpdateText((Caver::GUILabel *)v9);
      }
    }
    else if ( v10 != 125
           || *(_BYTE *)(v9 + 265) != 115
           || *(_BYTE *)(v9 + 266) != 80
           || *(unsigned __int8 *)(v9 + 267) != 255 )
    {
      v14 = *(_QWORD **)(v9 + 280);
      *(_DWORD *)(v9 + 264) = -11504771;
      *(_QWORD *)(v9 + 272) = 0;
      *(_QWORD *)(v9 + 280) = 0;
      if ( v14 )
      {
        v15 = v14[1] - 1LL;
        v14[1] = v15;
        if ( !v15 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
          v16 = v14[2] - 1LL;
          v14[2] = v16;
          if ( !v16 )
            (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
        }
      }
      goto LABEL_22;
    }
  }
  if ( v8 )
  {
    v17 = v8[1] - 1LL;
    v8[1] = v17;
    if ( !v17 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v18 = v8[2] - 1LL;
      v8[2] = v18;
      if ( !v18 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  return result;
}

