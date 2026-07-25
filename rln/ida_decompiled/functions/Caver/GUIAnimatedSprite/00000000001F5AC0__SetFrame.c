/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5AC0
 * Mangled: ._ZN5Caver17GUIAnimatedSprite8SetFrameERKNS_9RectangleE
 * Demangled: Caver::GUIAnimatedSprite::SetFrame(Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x00000000003F8230  Caver::AttributePointsView::LayoutSubviews(void)
 *
 * Callees: 1
 *   0x00000000004A91EC  Caver::GUIAnimatedSprite::SetFrame(Caver::Rectangle const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F5AC4 string=0x00000000004A91EC " "
 *   insn=0x00000000001F5AC8 string=0x00000000001F5ACC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIAnimatedSprite::SetFrame(Caver::GUIAnimatedSprite *this, const Caver::Rectangle *a2)
{
  return _ZN5Caver17GUIAnimatedSprite8SetFrameERKNS_9RectangleE(this, a2);
}

