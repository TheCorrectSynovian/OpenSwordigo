/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D6544
 * Mangled: _ZN5Caver15GameOverlayView17SetControlsHiddenEb
 * Demangled: Caver::GameOverlayView::SetControlsHidden(bool)
 *
 * Callers: 1
 *   0x00000000001F5770  Caver::GameOverlayView::SetControlsHidden(bool)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA110  Caver::CharacterState::AnyItemOfType(Caver::ItemType)
 *   0x00000000001FF930  Caver::GUIButton::CancelPress(void)
 *
 * Referenced strings: 71
 *   insn=0x00000000003D655C string=0x00000000003D6560 "U"
 *   insn=0x00000000003D6568 string=0x00000000003D656C "6"
 *   insn=0x00000000003D6570 string=0x00000000003D6574 "h"
 *   insn=0x00000000003D657C string=0x00000000003D6580 "hFA"
 *   insn=0x00000000003D6584 string=0x00000000003D6588 "h"
 *   insn=0x00000000003D658C string=0x00000000003D65FC "\tQ^"
 *   insn=0x00000000003D6590 string=0x00000000003D6594 "\t"
 *   insn=0x00000000003D6594 string=0x00000000003D6598 "`"
 *   insn=0x00000000003D6598 string=0x00000000003D659C "v"
 *   insn=0x00000000003D659C string=0x00000000003D65A0 "t"
 *   insn=0x00000000003D65A4 string=0x00000000003D65A8 "`"
 *   insn=0x00000000003D65A8 string=0x00000000003D65AC "wB"
 *   insn=0x00000000003D65B0 string=0x00000000003D65B4 "`"
 *   insn=0x00000000003D65B4 string=0x00000000003D65B8 "x"
 *   insn=0x00000000003D65BC string=0x00000000003D65C0 "`"
 *   insn=0x00000000003D65C4 string=0x00000000003D65C8 "`"
 *   insn=0x00000000003D65C8 string=0x00000000003D65CC "y"
 *   insn=0x00000000003D65D0 string=0x00000000003D65D4 "`"
 *   insn=0x00000000003D65D8 string=0x00000000003D65DC "`"
 *   insn=0x00000000003D65E0 string=0x00000000003D65E4 "`"
 *   insn=0x00000000003D65E8 string=0x00000000003D65EC "h"
 *   insn=0x00000000003D6600 string=0x00000000003D6650 "?"
 *   insn=0x00000000003D6604 string=0x00000000003D6608 "?"
 *   insn=0x00000000003D660C string=0x00000000003D6610 "\t"
 *   insn=0x00000000003D6614 string=0x00000000003D6618 "*"
 *   insn=0x00000000003D6618 string=0x00000000003D665C "v"
 *   insn=0x00000000003D6620 string=0x00000000003D6624 "\t@"
 *   insn=0x00000000003D662C string=0x00000000003D6630 ""
 *   insn=0x00000000003D6634 string=0x00000000003D6638 "!"
 *   insn=0x00000000003D6640 string=0x00000000003D6644 "@"
 *   insn=0x00000000003D6654 string=0x00000000003D6658 "\t"
 *   insn=0x00000000003D665C string=0x00000000003D6660 "t"
 *   insn=0x00000000003D6660 string=0x00000000003D6664 "wB"
 *   insn=0x00000000003D6664 string=0x00000000003D6668 "x"
 *   insn=0x00000000003D6668 string=0x00000000003D666C "y"
 *   insn=0x00000000003D6674 string=0x00000000003D6678 "6"
 *   insn=0x00000000003D667C string=0x00000000003D6680 "6"
 *   insn=0x00000000003D6680 string=0x00000000003D6684 "\t"
 *   insn=0x00000000003D6684 string=0x00000000003D6688 "6"
 *   insn=0x00000000003D6688 string=0x00000000003D668C ")"
 *   insn=0x00000000003D668C string=0x00000000003D6690 "("
 *   insn=0x00000000003D6690 string=0x00000000003D6694 "h"
 *   insn=0x00000000003D6694 string=0x00000000003D6698 "\n"
 *   insn=0x00000000003D6698 string=0x00000000003D669C "*"
 *   insn=0x00000000003D669C string=0x00000000003D66A0 "t"
 *   insn=0x00000000003D66A4 string=0x00000000003D6740 "h~@"
 *   insn=0x00000000003D66B0 string=0x00000000003D66C4 "i"
 *   insn=0x00000000003D66B4 string=0x00000000003D66B8 "("
 *   insn=0x00000000003D66B8 string=0x00000000003D66BC "i"
 *   insn=0x00000000003D66BC string=0x00000000003D66C0 "("
 *   insn=0x00000000003D66C4 string=0x00000000003D66C8 "h"
 *   insn=0x00000000003D66CC string=0x00000000003D66DC "i~@"
 *   insn=0x00000000003D66D4 string=0x00000000003D66D8 "\n"
 *   insn=0x00000000003D66D8 string=0x00000000003D6700 "\t"
 *   insn=0x00000000003D66DC string=0x00000000003D66E0 "j"
 *   insn=0x00000000003D66E0 string=0x00000000003D66E4 "+1E"
 *   insn=0x00000000003D66E4 string=0x00000000003D66E8 "_"
 *   insn=0x00000000003D66F0 string=0x00000000003D66F4 "J"
 *   insn=0x00000000003D66F4 string=0x00000000003D66F8 "_"
 *   insn=0x00000000003D6700 string=0x00000000003D6704 "h"
 *   insn=0x00000000003D6704 string=0x00000000003D6708 "\n"
 *   insn=0x00000000003D6708 string=0x00000000003D670C "h"
 *   insn=0x00000000003D674C string=0x00000000003D6750 "p"
 *   insn=0x00000000003D6750 string=0x00000000001FA110 "0'"
 *   insn=0x00000000003D676C string=0x00000000003D6770 ""
 *   insn=0x00000000003D6774 string=0x00000000003D6778 "a"
 *   insn=0x00000000003D6780 string=0x00000000003D6784 "\t@"
 *   insn=0x00000000003D678C string=0x00000000003D6790 ""
 *   insn=0x00000000003D6794 string=0x00000000003D6798 "a"
 *   insn=0x00000000003D67A0 string=0x00000000003D67A4 "@"
 *   insn=0x00000000003D67B0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameOverlayView::SetControlsHidden(__int64 this, char a2)
{
  __int64 v2; // x19
  char v3; // w22
  __int64 v4; // x8
  Caver::GUIButton *v5; // x0
  __int64 v6; // x20
  __int64 v7; // x23
  __int64 v8; // x24
  __int64 *v9; // x25
  _BOOL4 v10; // w8
  __int64 v11; // x9
  _QWORD *v12; // x20
  __int64 v13; // x10
  __int64 v14; // x8
  __int64 v15; // x9
  int v16; // w8
  __int64 v17; // x20
  bool v18; // w9
  bool v19; // w10
  __int64 v20; // x9
  __int64 v21; // x11
  __int64 v22; // x12
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // [xsp+8h] [xbp-58h]
  _QWORD *v26; // [xsp+10h] [xbp-50h]

  v2 = this;
  v3 = a2 & 1;
  _ReadStatusReg(TPIDR_EL0);
  if ( (a2 & 1) != *(_BYTE *)(this + 416) )
  {
    *(_BYTE *)(*(_QWORD *)(this + 648) + 228LL) = v3;
    v4 = *(_QWORD *)(this + 472);
    if ( (a2 & 1) != 0 )
    {
      *(_BYTE *)(v4 + 228) = 1;
      v5 = *(Caver::GUIButton **)(this + 320);
      *(_BYTE *)(v2 + 416) = v3;
      v6 = v2 + 320;
      Caver::GUIButton::CancelPress(v5);
      v7 = v2 + 336;
      Caver::GUIButton::CancelPress(*(Caver::GUIButton **)(v2 + 336));
      v8 = v2 + 352;
      Caver::GUIButton::CancelPress(*(Caver::GUIButton **)(v2 + 352));
      Caver::GUIButton::CancelPress(*(Caver::GUIButton **)(v2 + 368));
      v9 = (__int64 *)(v2 + 384);
      Caver::GUIButton::CancelPress(*(Caver::GUIButton **)(v2 + 384));
      Caver::GUIButton::CancelPress(*(Caver::GUIButton **)(v2 + 400));
      Caver::GUIButton::CancelPress(*(Caver::GUIButton **)(v2 + 440));
      this = Caver::GUIButton::CancelPress(*(Caver::GUIButton **)(v2 + 456));
      v10 = *(_BYTE *)(v2 + 416) == 0;
    }
    else
    {
      v11 = *(_QWORD *)(v4 + 480);
      v12 = *(_QWORD **)(v4 + 488);
      if ( v12 )
      {
        v13 = v12[1];
        *(_BYTE *)(v4 + 228) = v11 == 0;
        v12[1] = v13;
        if ( !v13 )
        {
          this = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
          v14 = v12[2] - 1LL;
          v12[2] = v14;
          if ( !v14 )
            this = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
        }
      }
      else
      {
        *(_BYTE *)(v4 + 228) = v11 == 0;
      }
      *(_BYTE *)(v2 + 416) = v3;
      v6 = v2 + 320;
      v7 = v2 + 336;
      v8 = v2 + 352;
      v9 = (__int64 *)(v2 + 384);
      v10 = 1;
    }
    *(_BYTE *)(*(_QWORD *)v6 + 228LL) = v3;
    *(_BYTE *)(*(_QWORD *)v7 + 228LL) = v3;
    *(_BYTE *)(*(_QWORD *)v8 + 228LL) = v3;
    v15 = *v9;
    if ( v10 )
    {
      v16 = *(unsigned __int8 *)(v2 + 417);
      *(_BYTE *)(v15 + 228) = v16 ^ 1;
      v17 = *(_QWORD *)(v2 + 368);
      if ( v16 )
      {
        *(_BYTE *)(v17 + 228) = 1;
      }
      else
      {
        this = Caver::CharacterState::AnyItemOfType();
        *(_BYTE *)(v17 + 228) = v25 == 0;
        if ( v26 )
        {
          v23 = v26[1] - 1LL;
          v26[1] = v23;
          if ( !v23 )
          {
            this = (*(__int64 (__fastcall **)())(*v26 + 16LL))();
            v24 = v26[2] - 1LL;
            v26[2] = v24;
            if ( !v24 )
              this = (*(__int64 (__fastcall **)())(*v26 + 24LL))();
          }
        }
      }
    }
    else
    {
      *(_BYTE *)(v15 + 228) = 1;
      *(_BYTE *)(*(_QWORD *)(v2 + 368) + 228LL) = 1;
    }
    if ( *(_BYTE *)(v2 + 416) )
    {
      v18 = 1;
      v19 = 1;
    }
    else
    {
      v20 = *(_QWORD *)(v2 + 248);
      v21 = *(_QWORD *)(v20 + 80);
      v22 = *(_QWORD *)(v20 + 88);
      v18 = *(_QWORD *)(v2 + 424) == 0;
      v19 = (unsigned int)((unsigned __int64)(v22 - v21) >> 4) == 0;
    }
    *(_BYTE *)(*(_QWORD *)(v2 + 400) + 228LL) = v18;
    *(_BYTE *)(*(_QWORD *)(v2 + 440) + 228LL) = v19;
    *(_BYTE *)(*(_QWORD *)(v2 + 456) + 228LL) = v3;
  }
  return this;
}

