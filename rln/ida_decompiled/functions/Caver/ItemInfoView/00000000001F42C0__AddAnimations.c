/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F42C0
 * Mangled: ._ZN5Caver12ItemInfoView13AddAnimationsEb
 * Demangled: Caver::ItemInfoView::AddAnimations(bool)
 *
 * Callers: 3
 *   0x0000000000416BD0  Caver::ItemInfoView::Init(void)
 *   0x000000000041A96C  Caver::ItemInfoView::LayoutSubviews(void)
 *   0x000000000041AB64  Caver::ItemInfoView::Dismiss(void)
 *
 * Callees: 1
 *   0x0000000000417F1C  Caver::ItemInfoView::EnablePurchasing(int,boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F42C8 string=0x00000000001F42CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ItemInfoView::AddAnimations(Caver::ItemInfoView *this)
{
  JUMPOUT(0x419100);
}

