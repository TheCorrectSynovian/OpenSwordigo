/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8680
 * Mangled: ._ZNSt3mapImN5Caver7FWTouchESt4lessImESaISt4pairIKmS1_EEEixERS5_
 * Demangled: std::map<ulong,Caver::FWTouch,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::operator[](ulong const&)
 *
 * Callers: 2
 *   0x00000000004A35D8  Caver::GUIWindow::DragAndDropItemWithTouch(Caver::FWTouch const&,boost::shared_ptr<Caver::GUIDraggableItem> const&)
 *   0x00000000004A3E0C  Caver::GUIWindow::BeginTouch(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000004A35D8  Caver::GUIWindow::DragAndDropItemWithTouch(Caver::FWTouch const&,boost::shared_ptr<Caver::GUIDraggableItem> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8688 string=0x00000000001F868C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::map<unsigned long,Caver::FWTouch>::operator[]()
{
  JUMPOUT(0x4A39D0);
}

