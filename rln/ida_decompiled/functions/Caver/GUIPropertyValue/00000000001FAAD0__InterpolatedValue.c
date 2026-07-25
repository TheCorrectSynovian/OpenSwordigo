/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAAD0
 * Mangled: ._ZN5Caver16GUIPropertyValue17InterpolatedValueERKS0_S2_f
 * Demangled: Caver::GUIPropertyValue::InterpolatedValue(Caver::GUIPropertyValue const&,Caver::GUIPropertyValue const&,float)
 *
 * Callers: 2
 *   0x0000000000425ABC  Caver::MapView::Update(float)
 *   0x00000000004A5E88  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *
 * Callees: 1
 *   0x00000000004A7914  Caver::GUIPropertyValue::InterpolatedValue(Caver::GUIPropertyValue const&,Caver::GUIPropertyValue const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAAD8 string=0x00000000001FAADC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIPropertyValue::InterpolatedValue(
        Caver::GUIPropertyValue *this,
        const Caver::GUIPropertyValue *a2,
        const Caver::GUIPropertyValue *a3,
        float a4)
{
  return _ZN5Caver16GUIPropertyValue17InterpolatedValueERKS0_S2_f(this, a2, a3, a4);
}

