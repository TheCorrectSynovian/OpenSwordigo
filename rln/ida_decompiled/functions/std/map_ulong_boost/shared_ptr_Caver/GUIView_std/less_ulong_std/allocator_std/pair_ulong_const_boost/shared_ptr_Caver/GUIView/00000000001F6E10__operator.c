/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6E10
 * Mangled: ._ZNSt3mapImN5boost10shared_ptrIN5Caver7GUIViewEEESt4lessImESaISt4pairIKmS4_EEEixERS8_
 * Demangled: std::map<ulong,boost::shared_ptr<Caver::GUIView>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::operator[](ulong const&)
 *
 * Callers: 3
 *   0x00000000004A35D8  Caver::GUIWindow::DragAndDropItemWithTouch(Caver::FWTouch const&,boost::shared_ptr<Caver::GUIDraggableItem> const&)
 *   0x00000000004A3E0C  Caver::GUIWindow::BeginTouch(Caver::FWTouch const&)
 *   0x00000000004A46B0  Caver::GUIWindow::EndTouch(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000004A35D8  Caver::GUIWindow::DragAndDropItemWithTouch(Caver::FWTouch const&,boost::shared_ptr<Caver::GUIDraggableItem> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6E18 string=0x00000000001F6E1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::map<unsigned long,boost::shared_ptr<Caver::GUIView>>::operator[]()
{
  JUMPOUT(0x4A37E4);
}

