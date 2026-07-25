/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D685C
 * Mangled: _ZN5Caver15GameOverlayView17SetShowsUseButtonEb
 * Demangled: Caver::GameOverlayView::SetShowsUseButton(bool)
 *
 * Callers: 1
 *   0x00000000001FA710  Caver::GameOverlayView::SetShowsUseButton(bool)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA110  Caver::CharacterState::AnyItemOfType(Caver::ItemType)
 *   0x00000000001FF930  Caver::GUIButton::CancelPress(void)
 *
 * Referenced strings: 35
 *   insn=0x00000000003D686C string=0x00000000003D6870 "T"
 *   insn=0x00000000003D687C string=0x00000000003D6880 "i"
 *   insn=0x00000000003D6880 string=0x00000000003D6884 "("
 *   insn=0x00000000003D688C string=0x00000000003D6890 "`"
 *   insn=0x00000000003D6890 string=0x00000000003D6894 "h"
 *   insn=0x00000000003D6894 string=0x00000000003D6898 "&"
 *   insn=0x00000000003D6898 string=0x00000000003D689C "`"
 *   insn=0x00000000003D689C string=0x00000000003D68A0 "$"
 *   insn=0x00000000003D68A0 string=0x00000000003D68A4 "i"
 *   insn=0x00000000003D68A4 string=0x00000000003D68A8 "h"
 *   insn=0x00000000003D68AC string=0x00000000003D68C4 "i"
 *   insn=0x00000000003D68B0 string=0x00000000003D68B4 "\t"
 *   insn=0x00000000003D68B4 string=0x00000000003D68B8 "h"
 *   insn=0x00000000003D68B8 string=0x00000000003D68BC "\t"
 *   insn=0x00000000003D68BC string=0x00000000003D68C0 ""
 *   insn=0x00000000003D68C4 string=0x00000000003D68C8 "*"
 *   insn=0x00000000003D68C8 string=0x00000000003D68CC "\n"
 *   insn=0x00000000003D68CC string=0x00000000003D68D0 "u"
 *   insn=0x00000000003D68D4 string=0x00000000003D6904 "h~@"
 *   insn=0x00000000003D68E8 string=0x00000000003D68EC "!"
 *   insn=0x00000000003D68EC string=0x00000000003D6970 "X~"
 *   insn=0x00000000003D6914 string=0x00000000001FA110 "0'"
 *   insn=0x00000000003D6928 string=0x00000000003D692C "h"
 *   insn=0x00000000003D692C string=0x00000000003D6930 ""
 *   insn=0x00000000003D6930 string=0x00000000003D6934 "h"
 *   insn=0x00000000003D6934 string=0x00000000003D6938 "A"
 *   insn=0x00000000003D6938 string=0x00000000003D693C "h"
 *   insn=0x00000000003D6940 string=0x00000000003D6944 "\t@"
 *   insn=0x00000000003D6948 string=0x00000000003D694C "h\n@"
 *   insn=0x00000000003D694C string=0x00000000003D6950 ""
 *   insn=0x00000000003D6950 string=0x00000000003D6954 "h\n"
 *   insn=0x00000000003D6954 string=0x00000000003D6958 "A"
 *   insn=0x00000000003D6958 string=0x00000000003D695C "h"
 *   insn=0x00000000003D6960 string=0x00000000003D6964 "@"
 *   insn=0x00000000003D6970 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameOverlayView::SetShowsUseButton(__int64 this, char a2)
{
  __int64 v2; // x19
  Caver::GUIButton *v3; // x0
  __int64 v4; // x8
  int v5; // w9
  __int64 v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // [xsp+8h] [xbp-38h]
  _QWORD *v10; // [xsp+10h] [xbp-30h]

  v2 = this;
  _ReadStatusReg(TPIDR_EL0);
  if ( (a2 & 1) != *(_BYTE *)(this + 417) )
  {
    v3 = *(Caver::GUIButton **)(this + 368);
    *(_BYTE *)(v2 + 417) = a2 & 1;
    Caver::GUIButton::CancelPress(v3);
    this = Caver::GUIButton::CancelPress(*(Caver::GUIButton **)(v2 + 384));
    v4 = *(_QWORD *)(v2 + 384);
    if ( *(_BYTE *)(v2 + 416) )
    {
      *(_BYTE *)(v4 + 228) = 1;
      *(_BYTE *)(*(_QWORD *)(v2 + 368) + 228LL) = 1;
    }
    else
    {
      v5 = *(unsigned __int8 *)(v2 + 417);
      *(_BYTE *)(v4 + 228) = v5 ^ 1;
      v6 = *(_QWORD *)(v2 + 368);
      if ( v5 )
      {
        *(_BYTE *)(v6 + 228) = 1;
      }
      else
      {
        this = Caver::CharacterState::AnyItemOfType();
        *(_BYTE *)(v6 + 228) = v9 == 0;
        if ( v10 )
        {
          v7 = v10[1] - 1LL;
          v10[1] = v7;
          if ( !v7 )
          {
            this = (*(__int64 (__fastcall **)())(*v10 + 16LL))();
            v8 = v10[2] - 1LL;
            v10[2] = v8;
            if ( !v8 )
              return (*(__int64 (__fastcall **)())(*v10 + 24LL))();
          }
        }
      }
    }
  }
  return this;
}

