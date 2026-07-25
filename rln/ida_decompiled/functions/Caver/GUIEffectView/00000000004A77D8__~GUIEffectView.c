/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A77D8
 * Mangled: _ZN5Caver13GUIEffectViewD2Ev
 * Demangled: Caver::GUIEffectView::~GUIEffectView()
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FDC60  Caver::GUIEffect::~GUIEffect()
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004A7914  Caver::GUIPropertyValue::InterpolatedValue(Caver::GUIPropertyValue const&,Caver::GUIPropertyValue const&,float)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 33
 *   insn=0x00000000004A77E4 string=0x00000000004A77E8 ""
 *   insn=0x00000000004A77EC string=0x00000000004A77F0 "A"
 *   insn=0x00000000004A77F0 string=0x00000000004A77F4 ""
 *   insn=0x00000000004A77F8 string=0x00000000001FDC60 "0'"
 *   insn=0x00000000004A7818 string=0x00000000004A781C "*h"
 *   insn=0x00000000004A7834 string=0x00000000004A7838 "`"
 *   insn=0x00000000004A7838 string=0x00000000004A783C ""
 *   insn=0x00000000004A783C string=0x00000000004A7840 "A"
 *   insn=0x00000000004A7840 string=0x00000000004A7844 "h"
 *   insn=0x00000000004A7844 string=0x00000000004A7848 "@"
 *   insn=0x00000000004A7848 string=0x00000000004A7850 "h"
 *   insn=0x00000000004A784C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004A7850 string=0x00000000004A7854 "H"
 *   insn=0x00000000004A7854 string=0x00000000004A7858 ""
 *   insn=0x00000000004A7854 string=0x00000000004A787C "`"
 *   insn=0x00000000004A7858 string=0x00000000004A785C ""
 *   insn=0x00000000004A785C string=0x00000000004A7860 ""
 *   insn=0x00000000004A7864 string=0x00000000004A7868 "`B"
 *   insn=0x00000000004A7880 string=0x00000000004A7884 "@"
 *   insn=0x00000000004A7884 string=0x00000000004A7888 ""
 *   insn=0x00000000004A7888 string=0x00000000004A788C ""
 *   insn=0x00000000004A7890 string=0x00000000004A7894 ""
 *   insn=0x00000000004A7894 string=0x00000000004A7898 "@"
 *   insn=0x00000000004A78A0 string=0x00000000004A78A4 "c]"
 *   insn=0x00000000004A78B4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004A78C0 string=0x00000000004A78C4 "\t\t@"
 *   insn=0x00000000004A78C4 string=0x00000000004A78C8 ")"
 *   insn=0x00000000004A78C8 string=0x00000000004A78CC "\t\t"
 *   insn=0x00000000004A78D0 string=0x00000000004A78D4 "\t"
 *   insn=0x00000000004A78D4 string=0x00000000004A78D8 ")@"
 *   insn=0x00000000004A78DC string=0x00000000004A78E0 " "
 *   insn=0x00000000004A78F0 string=0x00000000004A78F4 "O]"
 *   insn=0x00000000004A7904 string=0x00000000004A7908 "j>"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIEffectView::~GUIEffectView(Caver::GUIEffectView *this)
{
  *(_QWORD *)this = off_6D6C70;
  Caver::GUIEffect::~GUIEffect((Caver::GUIEffectView *)((char *)this + 240));
  Caver::GUIView::~GUIView(this);
}

