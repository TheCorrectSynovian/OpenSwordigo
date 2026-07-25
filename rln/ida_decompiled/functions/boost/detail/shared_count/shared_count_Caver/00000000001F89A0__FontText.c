/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F89A0
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver8FontTextEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::FontText>(Caver::FontText *)
 *
 * Callers: 4
 *   0x0000000000412D28  Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&,int)
 *   0x000000000041538C  Caver::ItemInfoPopupView::Init(boost::intrusive_ptr<Caver::Texture> const&,std::string const&,std::string const&)
 *   0x00000000004977D4  Caver::GUILabel::GUILabel(void)
 *   0x00000000004AA1EC  Caver::GUITextBubble::SetText(std::string const&,Caver::Color const&,float)
 *
 * Callees: 1
 *   0x0000000000415118  boost::detail::shared_count::shared_count<Caver::FontText>(Caver::FontText *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F89A8 string=0x00000000001F89AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::FontText>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver8FontTextEEEPT_();
}

