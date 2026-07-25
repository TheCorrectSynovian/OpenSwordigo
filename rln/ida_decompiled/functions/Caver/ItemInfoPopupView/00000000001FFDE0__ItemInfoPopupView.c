/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFDE0
 * Mangled: ._ZN5Caver17ItemInfoPopupViewC2Ev
 * Demangled: Caver::ItemInfoPopupView::ItemInfoPopupView(void)
 *
 * Callers: 1
 *   0x000000000034F57C  Caver::GameSceneView::ShowNotification(boost::shared_ptr<Caver::NotificationView> const&)
 *
 * Callees: 1
 *   0x0000000000415348  Caver::ItemInfoPopupView::ItemInfoPopupView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFDE8 string=0x00000000001FFDEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ItemInfoPopupView::ItemInfoPopupView(Caver::ItemInfoPopupView *this)
{
  return _ZN5Caver17ItemInfoPopupViewC2Ev(this);
}

