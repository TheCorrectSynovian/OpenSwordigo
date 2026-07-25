/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000490850
 * Mangled: _ZN5Caver12GUIAlertView10SetMessageERKSs
 * Demangled: Caver::GUIAlertView::SetMessage(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FBB60  Caver::GUIAlertView::SetMessage(std::string const&)
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
 * Referenced strings: 49
 *   insn=0x0000000000490864 string=0x0000000000490868 "W"
 *   insn=0x000000000049087C string=0x0000000000490880 "`"
 *   insn=0x0000000000490880 string=0x0000000000490884 ""
 *   insn=0x0000000000490884 string=0x0000000000490888 "H"
 *   insn=0x0000000000490888 string=0x000000000049088C "("
 *   insn=0x0000000000490898 string=0x000000000049089C "5"
 *   insn=0x000000000049089C string=0x00000000004908A0 "t"
 *   insn=0x000000000049089C string=0x00000000001FB170 "0'"
 *   insn=0x00000000004908AC string=0x00000000004908B0 "("
 *   insn=0x00000000004908B0 string=0x00000000004908B4 "_"
 *   insn=0x00000000004908B4 string=0x00000000004908B8 "a"
 *   insn=0x00000000004908B8 string=0x00000000004908BC "5"
 *   insn=0x00000000004908BC string=0x00000000001F5190 "P'"
 *   insn=0x00000000004908C8 string=0x00000000004908CC "wg"
 *   insn=0x00000000004908D4 string=0x00000000004908D8 "t"
 *   insn=0x00000000004908D4 string=0x00000000001F8510 "0'"
 *   insn=0x00000000004908E0 string=0x00000000004908E4 "3"
 *   insn=0x0000000000490918 string=0x000000000049091C "u"
 *   insn=0x0000000000490940 string=0x0000000000490944 "("
 *   insn=0x0000000000490944 string=0x0000000000490948 "_"
 *   insn=0x0000000000490960 string=0x0000000000490964 "Qg"
 *   insn=0x0000000000490978 string=0x000000000049097C ""
 *   insn=0x0000000000490988 string=0x000000000049098C "!"
 *   insn=0x000000000049098C string=0x00000000001F7610 "0'"
 *   insn=0x0000000000490998 string=0x000000000049099C "!"
 *   insn=0x000000000049099C string=0x0000000000490A00 "4"
 *   insn=0x00000000004909B8 string=0x00000000004909BC ")=G"
 *   insn=0x00000000004909C4 string=0x00000000004909C8 "\t"
 *   insn=0x00000000004909C4 string=0x00000000004909DC "\t"
 *   insn=0x00000000004909C8 string=0x00000000004909CC "*"
 *   insn=0x00000000004909CC string=0x00000000004909D0 "\n"
 *   insn=0x00000000004909D8 string=0x00000000004909E8 "?"
 *   insn=0x00000000004909DC string=0x00000000004909E0 "*"
 *   insn=0x00000000004909E0 string=0x00000000004909E4 "\n"
 *   insn=0x00000000004909F4 string=0x00000000004909F8 "kf"
 *   insn=0x0000000000490A00 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000490A0C string=0x0000000000490A10 "J"
 *   insn=0x0000000000490A14 string=0x0000000000490A18 "(a"
 *   insn=0x0000000000490A24 string=0x0000000000490A28 "J=G"
 *   insn=0x0000000000490A28 string=0x0000000000490A2C ")!"
 *   insn=0x0000000000490A30 string=0x0000000000490A34 "*"
 *   insn=0x0000000000490A30 string=0x0000000000490A60 "*"
 *   insn=0x0000000000490A34 string=0x0000000000490A38 "K"
 *   insn=0x0000000000490A38 string=0x0000000000490A3C "+"
 *   insn=0x0000000000490A40 string=0x0000000000490A44 "_"
 *   insn=0x0000000000490A50 string=0x0000000000490A54 "Tf"
 *   insn=0x0000000000490A60 string=0x0000000000490A64 "K"
 *   insn=0x0000000000490A64 string=0x0000000000490A68 "+"
 *   insn=0x0000000000490A68 string=0x0000000000490A6C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIAlertView::SetMessage(Caver::GUIAlertView *a1, const void **a2)
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
  v4 = (Caver::GUIView *)*((_QWORD *)a1 + 38);
  if ( *((_QWORD *)*a2 - 3) )
  {
    *(_OWORD *)v17 = xmmword_596C90;
    Caver::GUIView::SetFrame(v4, (const Caver::Rectangle *)v17);
    v5 = (Caver::GUILabel *)*((_QWORD *)a1 + 38);
    v6 = (_QWORD *)*((_QWORD *)v5 + 32);
    v7 = *((_QWORD *)*a2 - 3);
    if ( v7 != *(v6 - 3) || memcmp(*a2, v6, v7) )
    {
      sub_56A6A8((char *)v5 + 256);
      Caver::GUILabel::UpdateText(v5);
      v5 = (Caver::GUILabel *)*((_QWORD *)a1 + 38);
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
    v8 = (Caver::GUILabel *)*((_QWORD *)a1 + 38);
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

