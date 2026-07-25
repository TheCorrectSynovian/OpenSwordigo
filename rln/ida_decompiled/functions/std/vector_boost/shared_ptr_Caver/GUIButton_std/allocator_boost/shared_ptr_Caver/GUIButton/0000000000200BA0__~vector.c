/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200BA0
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver9GUIButtonEEESaIS4_EED2Ev
 * Demangled: std::vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>::~vector()
 *
 * Callers: 1
 *   0x000000000042BB38  Caver::NewMenuView::~NewMenuView()
 *
 * Callees: 1
 *   0x000000000042B464  std::vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>::~vector()
 *
 * Referenced strings: 1
 *   insn=0x0000000000200BA8 string=0x0000000000200BAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<boost::shared_ptr<Caver::GUIButton>>::~vector()
{
  return _ZNSt6vectorIN5boost10shared_ptrIN5Caver9GUIButtonEEESaIS4_EED2Ev();
}

