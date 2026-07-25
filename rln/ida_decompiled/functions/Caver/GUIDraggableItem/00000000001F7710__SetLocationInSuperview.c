/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7710
 * Mangled: ._ZN5Caver16GUIDraggableItem22SetLocationInSuperviewERKNS_7Vector2E
 * Demangled: Caver::GUIDraggableItem::SetLocationInSuperview(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000004A35D8  Caver::GUIWindow::DragAndDropItemWithTouch(Caver::FWTouch const&,boost::shared_ptr<Caver::GUIDraggableItem> const&)
 *
 * Callees: 1
 *   0x0000000000496D2C  Caver::GUIDraggableItem::SetLocationInSuperview(Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7718 string=0x00000000001F771C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIDraggableItem::SetLocationInSuperview(
        Caver::GUIDraggableItem *this,
        const Caver::Vector2 *a2)
{
  return _ZN5Caver16GUIDraggableItem22SetLocationInSuperviewERKNS_7Vector2E(this, a2);
}

