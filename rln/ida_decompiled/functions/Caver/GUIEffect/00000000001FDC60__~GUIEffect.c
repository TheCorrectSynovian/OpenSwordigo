/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDC60
 * Mangled: ._ZN5Caver9GUIEffectD2Ev
 * Demangled: Caver::GUIEffect::~GUIEffect()
 *
 * Callers: 1
 *   0x00000000004A77D8  Caver::GUIEffectView::~GUIEffectView()
 *
 * Callees: 1
 *   0x00000000004A7628  Caver::GUIEffect::~GUIEffect()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDC68 string=0x00000000001FDC6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIEffect::~GUIEffect(Caver::GUIEffect *this)
{
  _ZN5Caver9GUIEffectD2Ev(this);
}

