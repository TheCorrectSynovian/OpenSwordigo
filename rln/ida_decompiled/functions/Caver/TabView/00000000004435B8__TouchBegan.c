/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004435B8
 * Mangled: _ZN5Caver7TabView10TouchBeganERKNS_7FWTouchE
 * Demangled: Caver::TabView::TouchBegan(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F5340  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD2F0  Caver::TabView::UpdateSprite(void)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x0000000000200140  Caver::FWTouch::LocationInView(Caver::GUIView const*)
 *   0x0000000000203290  Caver::GUIWindow::mainWindow(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 63
 *   insn=0x00000000004435D8 string=0x00000000004435DC "U"
 *   insn=0x00000000004435EC string=0x00000000004435F0 "h"
 *   insn=0x00000000004435F4 string=0x00000000004435F8 "k\t"
 *   insn=0x00000000004435F8 string=0x00000000004435FC "\n"
 *   insn=0x00000000004435FC string=0x0000000000443600 ")\n"
 *   insn=0x0000000000443600 string=0x0000000000443604 ""
 *   insn=0x0000000000443604 string=0x0000000000443608 ")"
 *   insn=0x0000000000443610 string=0x0000000000443614 "\n"
 *   insn=0x0000000000443614 string=0x0000000000443618 ""
 *   insn=0x0000000000443634 string=0x0000000000443638 "h~@"
 *   insn=0x0000000000443648 string=0x000000000044364C "`"
 *   insn=0x000000000044364C string=0x0000000000443650 "h"
 *   insn=0x0000000000443650 string=0x0000000000443654 "@( "
 *   insn=0x0000000000443654 string=0x0000000000443658 "B,"
 *   insn=0x000000000044365C string=0x0000000000443660 "@( "
 *   insn=0x0000000000443674 string=0x0000000000443678 "L("
 *   insn=0x000000000044367C string=0x0000000000443680 ""
 *   insn=0x0000000000443684 string=0x0000000000443688 "h\nB"
 *   insn=0x0000000000443690 string=0x0000000000443694 "'"
 *   insn=0x0000000000443694 string=0x00000000001FDF30 "0'"
 *   insn=0x000000000044369C string=0x0000000000584965 "click"
 *   insn=0x00000000004436A8 string=0x00000000004436AC "C"
 *   insn=0x00000000004436BC string=0x00000000004436C0 " "
 *   insn=0x00000000004436C0 string=0x00000000001F5340 "P'"
 *   insn=0x00000000004436C8 string=0x00000000004436CC "@"
 *   insn=0x00000000004436CC string=0x00000000004436D0 ""
 *   insn=0x00000000004436D0 string=0x00000000004436D4 ""
 *   insn=0x00000000004436D8 string=0x00000000004436DC ""
 *   insn=0x00000000004436DC string=0x00000000004436E0 ""
 *   insn=0x00000000004436E8 string=0x00000000004436EC "\t"
 *   insn=0x00000000004436EC string=0x00000000004436F0 ")"
 *   insn=0x00000000004436FC string=0x0000000000443758 "\t"
 *   insn=0x0000000000443700 string=0x0000000000443704 "v\n"
 *   insn=0x0000000000443708 string=0x000000000044370C "`z@"
 *   insn=0x0000000000443708 string=0x00000000001FD2F0 "0'"
 *   insn=0x0000000000443710 string=0x0000000000443714 ""
 *   insn=0x0000000000443718 string=0x000000000044371C ""
 *   insn=0x000000000044372C string=0x0000000000443730 "a"
 *   insn=0x0000000000443758 string=0x000000000044375C ")=G"
 *   insn=0x000000000044375C string=0x0000000000443760 "!"
 *   insn=0x0000000000443764 string=0x0000000000443768 "\t"
 *   insn=0x0000000000443764 string=0x000000000044377C "\t"
 *   insn=0x0000000000443768 string=0x000000000044376C "*"
 *   insn=0x000000000044376C string=0x0000000000443770 "\n"
 *   insn=0x0000000000443778 string=0x0000000000443788 "?"
 *   insn=0x000000000044377C string=0x0000000000443780 "*"
 *   insn=0x0000000000443780 string=0x0000000000443784 "\n"
 *   insn=0x000000000044379C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004437A4 string=0x00000000004437A8 "\n"
 *   insn=0x00000000004437A8 string=0x00000000004437AC "J"
 *   insn=0x00000000004437B0 string=0x00000000004437B4 "(a"
 *   insn=0x00000000004437BC string=0x00000000004437C0 "\n"
 *   insn=0x00000000004437C0 string=0x00000000004437C4 "J=G"
 *   insn=0x00000000004437C4 string=0x00000000004437C8 ")!"
 *   insn=0x00000000004437CC string=0x00000000004437D0 "*"
 *   insn=0x00000000004437CC string=0x00000000004437FC "*"
 *   insn=0x00000000004437D0 string=0x00000000004437D4 "K"
 *   insn=0x00000000004437D4 string=0x00000000004437D8 "+"
 *   insn=0x00000000004437DC string=0x00000000004437E0 "_"
 *   insn=0x00000000004437F4 string=0x00000000004437F8 "3"
 *   insn=0x00000000004437FC string=0x0000000000443800 "K"
 *   insn=0x0000000000443800 string=0x0000000000443804 "+"
 *   insn=0x0000000000443804 string=0x0000000000443808 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TabView::TouchBegan(__int64 this, const Caver::FWTouch *a2)
{
  __int64 v2; // x19
  float v4; // s8
  int v5; // w23
  int v6; // w22
  Caver::GUIWindow *v7; // x0
  float v8; // s13
  float v9; // s0
  float v10; // s0
  __int64 v11; // x0
  int v12; // w8
  void *v13; // x0
  unsigned int *v14; // x8
  int v15; // w9
  __int64 v16; // [xsp+8h] [xbp-88h] BYREF
  __int64 v17; // [xsp+10h] [xbp-80h]
  __int64 v18[3]; // [xsp+18h] [xbp-78h] BYREF

  v2 = this;
  v18[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(int *)(this + 528) >= 1 )
  {
    v4 = 3.4028e38;
    v5 = 0;
    v6 = -1;
    do
    {
      v7 = (Caver::GUIWindow *)Caver::FWTouch::LocationInView(v18, a2, (const Caver::GUIView *)v2);
      v8 = *((float *)v18 + 1);
      this = Caver::GUIWindow::mainWindow(v7);
      if ( *(float *)(this + 144) < 350.0 )
        v9 = 6.0;
      else
        v9 = 10.0;
      v10 = fabsf(
              v8
            - (float)((float)(*(float *)(*(_QWORD *)(v2 + 248) + 88LL) * 0.5)
                    + (float)((float)(*(float *)(*(_QWORD *)(v2 + 248) + 88LL) + v9) * (float)v5)));
      if ( v10 < v4 )
        v6 = v5;
      ++v5;
      if ( v10 < v4 )
        v4 = v10;
    }
    while ( v5 < *(_DWORD *)(v2 + 528) );
    if ( (v6 & 0x80000000) == 0 && v6 != *(_DWORD *)(v2 + 520) )
    {
      Caver::AudioSystem::sharedSystem((Caver::AudioSystem *)this);
      sub_566BB8((int)&v16, "click");
      Caver::AudioSystem::PlaySoundEffectWithName();
      v11 = v17;
      if ( v17 )
      {
        v12 = *(_DWORD *)(v17 + 8) - 1;
        *(_DWORD *)(v17 + 8) = v12;
        if ( !v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      }
      v13 = (void *)(v16 - 24);
      if ( (__int64 *)(v16 - 24) != &qword_6FD2E0 )
      {
        v14 = (unsigned int *)(v16 - 8);
        if ( &pthread_create )
        {
          do
            v15 = __ldaxr(v14);
          while ( __stlxr(v15 - 1, v14) );
        }
        else
        {
          v15 = (*v14)--;
        }
        if ( v15 <= 0 )
          operator delete(v13);
      }
      *(_DWORD *)(v2 + 520) = v6;
      Caver::TabView::UpdateSprite((Caver::TabView *)v2);
      this = *(_QWORD *)(v2 + 240);
      if ( this )
        return (**(__int64 (__fastcall ***)(__int64, __int64))this)(this, v2);
    }
  }
  return this;
}

