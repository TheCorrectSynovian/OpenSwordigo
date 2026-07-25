/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000411A84
 * Mangled: _ZN5Caver13InventoryView9AnimateInEv
 * Demangled: Caver::InventoryView::AnimateIn(void)
 *
 * Callers: 1
 *   0x00000000001F8100  Caver::InventoryView::AnimateIn(void)
 *
 * Callees: 9
 *   0x00000000001F54F0  Caver::InventoryView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *   0x0000000000203320  Caver::GUIAnimation::FrameAnimation(Caver::Rectangle const&,Caver::Rectangle const&,float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 57
 *   insn=0x0000000000411A9C string=0x0000000000411AA0 "U"
 *   insn=0x0000000000411AAC string=0x0000000000411AB0 "h*A"
 *   insn=0x0000000000411AB8 string=0x0000000000411BA8 "h"
 *   insn=0x0000000000411AC0 string=0x0000000000411AC4 "iO"
 *   insn=0x0000000000411AC4 string=0x0000000000411AC8 ")"
 *   insn=0x0000000000411AD0 string=0x0000000000411AD4 "h"
 *   insn=0x0000000000411AD4 string=0x0000000000411AD8 "`"
 *   insn=0x0000000000411AF0 string=0x0000000000411AF4 "!(""
 *   insn=0x0000000000411AFC string=0x0000000000411B00 "X"
 *   insn=0x0000000000411B00 string=0x0000000000411B04 "h"
 *   insn=0x0000000000411B00 string=0x00000000001F9C60 "0'"
 *   insn=0x0000000000411B0C string=0x0000000000411B10 "iv"
 *   insn=0x0000000000411B2C string=0x0000000000411B30 "h"
 *   insn=0x0000000000411B3C string=0x00000000001FA5A0 "0'"
 *   insn=0x0000000000411B48 string=0x00000000001F8A30 "0'"
 *   insn=0x0000000000411B4C string=0x0000000000411B50 "4"
 *   insn=0x0000000000411B50 string=0x0000000000411B94 "h*"
 *   insn=0x0000000000411B54 string=0x0000000000411B58 ""
 *   insn=0x0000000000411B68 string=0x0000000000411B6C "\t@"
 *   insn=0x0000000000411B74 string=0x0000000000411B78 ""
 *   insn=0x0000000000411B88 string=0x0000000000411B8C "@"
 *   insn=0x0000000000411BA8 string=0x0000000000411BAC "("
 *   insn=0x0000000000411BB4 string=0x0000000000411BB8 "b"
 *   insn=0x0000000000411BC8 string=0x0000000000411BCC "@8 "
 *   insn=0x0000000000411BDC string=0x0000000000411BE0 " "
 *   insn=0x0000000000411BE0 string=0x0000000000411BE4 "h"
 *   insn=0x0000000000411C00 string=0x0000000000411C04 "I3"
 *   insn=0x0000000000411C04 string=0x0000000000411C0C "\tY"
 *   insn=0x0000000000411C0C string=0x0000000000411C10 "s"
 *   insn=0x0000000000411C14 string=0x0000000000411C18 "b"
 *   insn=0x0000000000411C28 string=0x0000000000411C2C "3"
 *   insn=0x0000000000411C2C string=0x0000000000411C30 "h"
 *   insn=0x0000000000411C30 string=0x0000000000411C34 ""
 *   insn=0x0000000000411C34 string=0x0000000000411C38 "h"
 *   insn=0x0000000000411C3C string=0x0000000000411C40 "h"
 *   insn=0x0000000000411C44 string=0x0000000000411C48 "\t@"
 *   insn=0x0000000000411C4C string=0x0000000000411C50 "h\n@"
 *   insn=0x0000000000411C50 string=0x0000000000411C54 ""
 *   insn=0x0000000000411C54 string=0x0000000000411C58 "h\n"
 *   insn=0x0000000000411C5C string=0x0000000000411C60 "h"
 *   insn=0x0000000000411C64 string=0x0000000000411C68 "@"
 *   insn=0x0000000000411C9C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000411CAC string=0x0000000000411CB0 ""
 *   insn=0x0000000000411CB4 string=0x0000000000411CB8 "!"
 *   insn=0x0000000000411CBC string=0x0000000000411CC0 "\t@"
 *   insn=0x0000000000411CCC string=0x0000000000411CD0 ""
 *   insn=0x0000000000411CD4 string=0x0000000000411CD8 "!"
 *   insn=0x0000000000411CDC string=0x0000000000411CE0 "@"
 *   insn=0x0000000000411CF4 string=0x0000000000411CF8 "4"
 *   insn=0x0000000000411CFC string=0x0000000000411D00 ""
 *   insn=0x0000000000411D0C string=0x0000000000411D10 "\t@"
 *   insn=0x0000000000411D1C string=0x0000000000411D20 ""
 *   insn=0x0000000000411D2C string=0x0000000000411D30 "@"
 *   insn=0x0000000000411D54 string=0x0000000000411D58 "Z"
 *   insn=0x0000000000411D58 string=0x0000000000411D5C "h"
 *   insn=0x0000000000411D64 string=0x0000000000411D68 "a"
 *   insn=0x0000000000411D78 string=0x00000000001F54F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::InventoryView::AnimateIn(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x22
  __int64 v3; // x23
  float v4; // s0
  float *v5; // x0
  float v6; // t1
  float v7; // s2
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  float *v11; // x8
  float v12; // s0
  _QWORD *v13; // x19
  __int64 v14; // x8
  __int64 v15; // x8
  float v16; // [xsp+20h] [xbp-70h] BYREF
  float v17; // [xsp+24h] [xbp-6Ch]
  __int64 v18[2]; // [xsp+28h] [xbp-68h] BYREF
  __int64 v19; // [xsp+38h] [xbp-58h]
  _QWORD *v20; // [xsp+40h] [xbp-50h]
  __int64 v21; // [xsp+48h] [xbp-48h]

  v1 = this;
  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(int *)(this + 296) >= 1 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = *(float *)(v1 + 132);
      v5 = *(float **)(*(_QWORD *)(v1 + 304) + v2);
      v6 = v5[29];
      v5 += 29;
      v7 = v5[2];
      v17 = 0.0;
      v16 = v4 - (float)(v6 + v7);
      Caver::Rectangle::TranslatedRectangle(v18, (Caver::Rectangle *)v5, (const Caver::Vector2 *)&v16);
      Caver::GUIAnimation::FrameAnimation();
      *(float *)(v19 + 88) = (float)(int)v3 * 0.05;
      Caver::GUIView::RemoveAllAnimations(*(Caver::GUIView **)(*(_QWORD *)(v1 + 304) + v2));
      this = Caver::GUIView::AddAnimation();
      v8 = v20;
      if ( v20 )
      {
        v9 = v20[1] - 1LL;
        v20[1] = v9;
        if ( !v9 )
        {
          this = (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
          v10 = v8[2] - 1LL;
          v8[2] = v10;
          if ( !v10 )
            this = (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
        }
      }
      ++v3;
      v2 += 16;
    }
    while ( v3 < *(int *)(v1 + 296) );
  }
  v11 = *(float **)(v1 + 312);
  if ( v11 )
  {
    v12 = *(float *)(v1 + 136) - (float)((float)(v11[30] + v11[32]) + 20.0);
    v16 = 0.0;
    v17 = v12;
    Caver::Rectangle::TranslatedRectangle(v18, (Caver::Rectangle *)(v11 + 29), (const Caver::Vector2 *)&v16);
    Caver::GUIAnimation::FrameAnimation();
    *(_DWORD *)(v19 + 88) = 1050253722;
    Caver::GUIView::RemoveAllAnimations(*(Caver::GUIView **)(v1 + 312));
    this = Caver::GUIView::AddAnimation();
    v13 = v20;
    if ( v20 )
    {
      v14 = v20[1] - 1LL;
      v20[1] = v14;
      if ( !v14 )
      {
        this = (*(__int64 (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
        v15 = v13[2] - 1LL;
        v13[2] = v15;
        if ( !v15 )
          return (*(__int64 (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
      }
    }
  }
  return this;
}

