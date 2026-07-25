/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000490628
 * Mangled: _ZN5Caver12GUIAlertView8SetTitleERKSs
 * Demangled: Caver::GUIAlertView::SetTitle(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FE530  Caver::GUIAlertView::SetTitle(std::string const&)
 *
 * Callees: 11
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7610  Caver::GUIAlertView::UpdateLayout(void)
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000002039B0  Caver::GUILabel::TextSize(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 43
 *   insn=0x000000000049063C string=0x0000000000490640 "W"
 *   insn=0x0000000000490654 string=0x0000000000490658 "`"
 *   insn=0x0000000000490658 string=0x000000000049065C ""
 *   insn=0x000000000049065C string=0x0000000000490660 "H"
 *   insn=0x0000000000490660 string=0x0000000000490664 "("
 *   insn=0x0000000000490674 string=0x0000000000490678 "t"
 *   insn=0x0000000000490674 string=0x00000000001FB170 "0'"
 *   insn=0x0000000000490684 string=0x0000000000490688 "("
 *   insn=0x0000000000490688 string=0x000000000049068C "_"
 *   insn=0x000000000049068C string=0x0000000000490690 "a"
 *   insn=0x0000000000490694 string=0x00000000001F5190 "P'"
 *   insn=0x00000000004906AC string=0x00000000004906B0 "t"
 *   insn=0x00000000004906AC string=0x00000000001F8510 "0'"
 *   insn=0x00000000004906F0 string=0x00000000004906F4 "u"
 *   insn=0x0000000000490704 string=0x0000000000490708 ",Y"
 *   insn=0x0000000000490718 string=0x000000000049071C "("
 *   insn=0x000000000049071C string=0x0000000000490720 "_"
 *   insn=0x0000000000490740 string=0x0000000000490744 "s"
 *   insn=0x0000000000490750 string=0x0000000000490754 ""
 *   insn=0x0000000000490764 string=0x00000000001F7610 "0'"
 *   insn=0x0000000000490770 string=0x0000000000490774 "!"
 *   insn=0x0000000000490790 string=0x0000000000490794 ")=G"
 *   insn=0x000000000049079C string=0x00000000004907A0 "\t"
 *   insn=0x000000000049079C string=0x00000000004907B4 "\t"
 *   insn=0x00000000004907A0 string=0x00000000004907A4 "*"
 *   insn=0x00000000004907A4 string=0x00000000004907A8 "\n"
 *   insn=0x00000000004907B0 string=0x00000000004907C0 "?"
 *   insn=0x00000000004907B4 string=0x00000000004907B8 "*"
 *   insn=0x00000000004907B8 string=0x00000000004907BC "\n"
 *   insn=0x00000000004907D8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004907E4 string=0x00000000004907E8 "J"
 *   insn=0x00000000004907EC string=0x00000000004907F0 "(a"
 *   insn=0x00000000004907FC string=0x0000000000490800 "J=G"
 *   insn=0x0000000000490800 string=0x0000000000490804 ")!"
 *   insn=0x0000000000490808 string=0x000000000049080C "*"
 *   insn=0x0000000000490808 string=0x0000000000490838 "*"
 *   insn=0x000000000049080C string=0x0000000000490810 "K"
 *   insn=0x0000000000490810 string=0x0000000000490814 "+"
 *   insn=0x0000000000490818 string=0x000000000049081C "_"
 *   insn=0x0000000000490830 string=0x0000000000490834 "$"
 *   insn=0x0000000000490838 string=0x000000000049083C "K"
 *   insn=0x000000000049083C string=0x0000000000490840 "+"
 *   insn=0x0000000000490840 string=0x0000000000490844 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIAlertView::SetTitle(Caver::GUIAlertView *a1, const void **a2)
{
  Caver::GUIView *v4; // x0
  Caver::GUILabel *v5; // x20
  _QWORD *v6; // x1
  size_t v7; // x2
  Caver::GUILabel *v8; // x21
  char *v9; // x22
  size_t v10; // x2
  __int64 *v11; // x20
  _QWORD *v12; // x1
  unsigned int *v14; // x8
  int v15; // w9
  float32x2_t v16; // [xsp+0h] [xbp-60h] BYREF
  void *v17[2]; // [xsp+10h] [xbp-50h] BYREF
  __int64 v18; // [xsp+28h] [xbp-38h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (Caver::GUIView *)*((_QWORD *)a1 + 36);
  if ( *((_QWORD *)*a2 - 3) )
  {
    *(_OWORD *)v17 = xmmword_596C90;
    Caver::GUIView::SetFrame(v4, (const Caver::Rectangle *)v17);
    v5 = (Caver::GUILabel *)*((_QWORD *)a1 + 36);
    v6 = (_QWORD *)*((_QWORD *)v5 + 32);
    v7 = *((_QWORD *)*a2 - 3);
    if ( v7 != *(v6 - 3) || memcmp(*a2, v6, v7) )
    {
      sub_56A6A8((char *)v5 + 256);
      Caver::GUILabel::UpdateText(v5);
      v5 = (Caver::GUILabel *)*((_QWORD *)a1 + 36);
    }
    Caver::GUILabel::TextSize((__int64 *)&v16, v5);
    v17[0] = 0;
    v17[1] = (void *)vadd_f32(v16, (float32x2_t)1065353216LL).n64_u64[0];
    Caver::GUIView::SetFrame(v5, (const Caver::Rectangle *)v17);
  }
  else
  {
    v17[0] = 0;
    v17[1] = 0;
    Caver::GUIView::SetFrame(v4, (const Caver::Rectangle *)v17);
    v8 = (Caver::GUILabel *)*((_QWORD *)a1 + 36);
    sub_566BB8((int)v17, "");
    v9 = (char *)v17[0];
    v11 = (__int64 *)((char *)v17[0] - 24);
    v10 = *((_QWORD *)v17[0] - 3);
    v12 = (_QWORD *)*((_QWORD *)v8 + 32);
    if ( v10 != *(v12 - 3) || memcmp(v17[0], v12, v10) )
    {
      sub_56A6A8((char *)v8 + 256);
      Caver::GUILabel::UpdateText(v8);
      v9 = (char *)v17[0];
      v11 = (__int64 *)((char *)v17[0] - 24);
    }
    if ( v11 != &qword_6FD2E0 )
    {
      v14 = (unsigned int *)(v9 - 8);
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
        operator delete(v11);
    }
  }
  return Caver::GUIAlertView::UpdateLayout(a1);
}

