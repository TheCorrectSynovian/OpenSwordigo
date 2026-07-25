/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200CB0
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver13GradientColorEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::GradientColor>(Caver::GradientColor *)
 *
 * Callers: 6
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x000000000038A020  Caver::ChooseAgeView::ChooseAgeView(void)
 *   0x00000000003C3F80  Caver::CoinBar::CoinBar(void)
 *   0x000000000048AD94  Caver::GradientColor::GradientColorByReversingAlphaPremultiplication(void)
 *   0x00000000004C5170  Caver::FontText::SetColor(Caver::Color const&)
 *
 * Callees: 1
 *   0x000000000027DD40  boost::detail::shared_count::shared_count<Caver::GradientColor>(Caver::GradientColor *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200CB8 string=0x0000000000200CBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::GradientColor>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver13GradientColorEEEPT_();
}

