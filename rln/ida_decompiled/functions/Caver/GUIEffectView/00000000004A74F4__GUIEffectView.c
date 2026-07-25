/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A74F4
 * Mangled: _ZN5Caver13GUIEffectViewC2Ev
 * Demangled: Caver::GUIEffectView::GUIEffectView(void)
 *
 * Callers: 1
 *   0x0000000000202B80  Caver::GUIEffectView::GUIEffectView(void)
 *
 * Callees: 7
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001FDB50  Caver::GUIEffect::GUIEffect(void)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004A7628  Caver::GUIEffect::~GUIEffect()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 38
 *   insn=0x00000000004A7508 string=0x00000000004A750C ""
 *   insn=0x00000000004A7510 string=0x00000000004A7514 "A"
 *   insn=0x00000000004A7514 string=0x00000000004A7518 ""
 *   insn=0x00000000004A751C string=0x00000000004A7520 "hr@"
 *   insn=0x00000000004A751C string=0x00000000001FDB50 "0'"
 *   insn=0x00000000004A752C string=0x00000000004A7530 "`.@"
 *   insn=0x00000000004A7530 string=0x00000000004A7534 "H"
 *   insn=0x00000000004A7534 string=0x00000000004A7538 "hr"
 *   insn=0x00000000004A7538 string=0x00000000004A753C " "
 *   insn=0x00000000004A7540 string=0x0000000000583734 "o"
 *   insn=0x00000000004A7550 string=0x00000000004A7554 ""
 *   insn=0x00000000004A7554 string=0x00000000004A7558 "-@"
 *   insn=0x00000000004A7570 string=0x00000000004A7574 "h"
 *   insn=0x00000000004A7574 string=0x00000000004A7580 "h"
 *   insn=0x00000000004A7578 string=0x00000000004A757C "y6"
 *   insn=0x00000000004A757C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004A7580 string=0x00000000004A7584 "H"
 *   insn=0x00000000004A7584 string=0x00000000004A7588 ""
 *   insn=0x00000000004A7584 string=0x00000000004A75AC "`"
 *   insn=0x00000000004A7588 string=0x00000000004A758C ""
 *   insn=0x00000000004A758C string=0x00000000004A7590 ""
 *   insn=0x00000000004A7594 string=0x00000000004A7598 "`B"
 *   insn=0x00000000004A75B0 string=0x00000000004A75B4 "@"
 *   insn=0x00000000004A75B4 string=0x00000000004A75B8 ""
 *   insn=0x00000000004A75B8 string=0x00000000004A75BC ""
 *   insn=0x00000000004A75BC string=0x00000000004A75C0 "a"
 *   insn=0x00000000004A75C0 string=0x00000000004A75C4 ""
 *   insn=0x00000000004A75C4 string=0x00000000004A75C8 "@"
 *   insn=0x00000000004A75D8 string=0x00000000004A75DC "("
 *   insn=0x00000000004A75DC string=0x00000000004A75E0 "\t\t@"
 *   insn=0x00000000004A75E0 string=0x00000000004A75E4 ")"
 *   insn=0x00000000004A75E4 string=0x00000000004A75E8 "\t\t"
 *   insn=0x00000000004A75EC string=0x00000000004A75F0 "\t"
 *   insn=0x00000000004A75F0 string=0x00000000004A75F4 ")@"
 *   insn=0x00000000004A75F8 string=0x00000000004A75FC " "
 *   insn=0x00000000004A75FC string=0x00000000004A7600 ""
 *   insn=0x00000000004A760C string=0x00000000004A7610 "^"
 *   insn=0x00000000004A7620 string=0x00000000004A7624 "J"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__fastcall Caver::GUIEffectView::GUIEffectView(float **this)
{
  float *result; // x0
  int v3; // w8

  Caver::GUIView::GUIView((Caver::GUIView *)this);
  *this = (float *)off_6D6C70;
  result = (float *)Caver::GUIEffect::GUIEffect((Caver::GUIEffect *)(this + 30));
  v3 = *((_DWORD *)this + 28);
  *((_BYTE *)this + 352) = 0;
  if ( v3 != 18 )
  {
    result = this[11];
    *((_DWORD *)this + 28) = 18;
    if ( result )
    {
      if ( result[35] > 0.001 )
        return (float *)(*(__int64 (__fastcall **)(float *))(*(_QWORD *)result + 88LL))(result);
    }
  }
  return result;
}

