/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200ED0
 * Mangled: ._ZN5Caver13GradientColorC2EiPfPNS_5ColorE
 * Demangled: Caver::GradientColor::GradientColor(int,float *,Caver::Color *)
 *
 * Callers: 5
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x000000000038A020  Caver::ChooseAgeView::ChooseAgeView(void)
 *   0x00000000003C3F80  Caver::CoinBar::CoinBar(void)
 *   0x00000000004C5170  Caver::FontText::SetColor(Caver::Color const&)
 *
 * Callees: 1
 *   0x000000000048ACC0  Caver::GradientColor::GradientColor(int,float *,Caver::Color *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200ED8 string=0x0000000000200EDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GradientColor::GradientColor(Caver::GradientColor *this, int a2, float *a3, Caver::Color *a4)
{
  return _ZN5Caver13GradientColorC2EiPfPNS_5ColorE(this, a2, a3, a4);
}

