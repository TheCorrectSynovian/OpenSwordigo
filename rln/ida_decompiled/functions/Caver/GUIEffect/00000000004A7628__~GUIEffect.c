/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A7628
 * Mangled: _ZN5Caver9GUIEffectD2Ev
 * Demangled: Caver::GUIEffect::~GUIEffect()
 *
 * Callers: 2
 *   0x00000000001FDC60  Caver::GUIEffect::~GUIEffect()
 *   0x00000000004A74F4  Caver::GUIEffectView::GUIEffectView(void)
 *
 * Callees: 5
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FC500  Caver::GUIEffect::SetFrame(Caver::Rectangle const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x00000000004A7634 string=0x00000000004A7638 "`6@"
 *   insn=0x00000000004A7638 string=0x00000000004A763C "@"
 *   insn=0x00000000004A763C string=0x00000000004A7640 "H6"
 *   insn=0x00000000004A763C string=0x00000000004A7644 "h"
 *   insn=0x00000000004A7640 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004A7644 string=0x00000000004A7648 "H"
 *   insn=0x00000000004A7648 string=0x00000000004A764C ""
 *   insn=0x00000000004A7648 string=0x00000000004A7670 "`\n@"
 *   insn=0x00000000004A764C string=0x00000000004A7650 ""
 *   insn=0x00000000004A7650 string=0x00000000004A7654 ""
 *   insn=0x00000000004A7658 string=0x00000000004A765C "`"
 *   insn=0x00000000004A7674 string=0x00000000004A7678 "@"
 *   insn=0x00000000004A7678 string=0x00000000004A767C ""
 *   insn=0x00000000004A767C string=0x00000000004A7680 ""
 *   insn=0x00000000004A7684 string=0x00000000004A7694 ""
 *   insn=0x00000000004A76A0 string=0x00000000004A76A4 " "
 *   insn=0x00000000004A76AC string=0x00000000004A76B0 "("
 *   insn=0x00000000004A76B0 string=0x00000000004A76B4 "\t\t@"
 *   insn=0x00000000004A76B4 string=0x00000000004A76B8 ")"
 *   insn=0x00000000004A76B8 string=0x00000000004A76BC "\t\t"
 *   insn=0x00000000004A76C0 string=0x00000000004A76C4 "\t"
 *   insn=0x00000000004A76C4 string=0x00000000004A76C8 ")@"
 *   insn=0x00000000004A76CC string=0x00000000004A76D0 " "
 *   insn=0x00000000004A76D4 string=0x00000000004A76D8 "{h"
 *   insn=0x00000000004A76EC string=0x00000000004A76F0 "`"
 *   insn=0x00000000004A76F0 string=0x00000000004A76F4 "a"
 *   insn=0x00000000004A76F8 string=0x00000000001FC500 "0'"
 *   insn=0x00000000004A7704 string=0x00000000004A7708 "jG"
 *   insn=0x00000000004A7708 string=0x00000000001F94B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIEffect::~GUIEffect(Caver::GUIEffect *this)
{
  void *v2; // x0
  __int64 v3; // x8
  void (__fastcall *v4)(char *, char *, __int64); // x8
  _QWORD *v5; // x0
  __int64 v6; // x8

  v2 = (void *)*((_QWORD *)this + 13);
  if ( v2 )
    operator delete[](v2);
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    if ( (v3 & 1) == 0 )
    {
      v4 = *(void (__fastcall **)(char *, char *, __int64))(v3 & 0xFFFFFFFFFFFFFFFELL);
      if ( v4 )
        v4((char *)this + 32, (char *)this + 32, 2);
    }
    *((_QWORD *)this + 3) = 0;
  }
  v5 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    v6 = v5[2] - 1LL;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
  }
}

