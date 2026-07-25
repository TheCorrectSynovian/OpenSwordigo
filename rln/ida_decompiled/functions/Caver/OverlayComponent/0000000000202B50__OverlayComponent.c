/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202B50
 * Mangled: ._ZN5Caver16OverlayComponentC2Ev
 * Demangled: Caver::OverlayComponent::OverlayComponent(void)
 *
 * Callers: 6
 *   0x000000000022BA58  Caver::OverlayTargetArrowComponent::OverlayTargetArrowComponent(void)
 *   0x000000000022CAEC  Caver::OverlayTargetArrowComponent::Clone(void)
 *   0x000000000022CC5C  std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SceneObject>*,std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>>,boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x000000000022F1F4  Caver::OverlayTextComponent::Clone(void)
 *   0x000000000023CCB0  Caver::TextBubbleComponent::TextBubbleComponent(void)
 *   0x000000000023DBE4  Caver::TextBubbleComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000022B8E4  Caver::OverlayComponent::OverlayComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202B58 string=0x0000000000202B5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayComponent::OverlayComponent(Caver::OverlayComponent *this)
{
  return _ZN5Caver16OverlayComponentC2Ev(this);
}

