/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8670
 * Mangled: ._ZN5Caver17GUIAnimatedSpriteC2Ev
 * Demangled: Caver::GUIAnimatedSprite::GUIAnimatedSprite(void)
 *
 * Callers: 1
 *   0x00000000003F5BF0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>(boost::shared_ptr<Caver::PurchaseViewController> const*,Caver::PurchaseViewController *)
 *
 * Callees: 1
 *   0x00000000004A9160  Caver::GUIAnimatedSprite::GUIAnimatedSprite(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F8674 string=0x00000000004A9160 ""
 *   insn=0x00000000001F8678 string=0x00000000001F867C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIAnimatedSprite::GUIAnimatedSprite(Caver::GUIAnimatedSprite *this)
{
  return _ZN5Caver17GUIAnimatedSpriteC2Ev(this);
}

