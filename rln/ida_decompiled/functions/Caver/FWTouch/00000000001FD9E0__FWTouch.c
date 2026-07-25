/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD9E0
 * Mangled: ._ZN5Caver7FWTouchC2ERKS0_
 * Demangled: Caver::FWTouch::FWTouch(Caver::FWTouch const&)
 *
 * Callers: 10
 *   0x00000000002111E0  Caver::CaverShell::ConvertTouchToWindow(Caver::FWTouch const&)
 *   0x000000000021127C  Caver::CaverShell::TouchBegan(Caver::FWTouch const&)
 *   0x0000000000211378  Caver::CaverShell::TouchMoved(Caver::FWTouch const&)
 *   0x0000000000211464  Caver::CaverShell::TouchEnded(Caver::FWTouch const&)
 *   0x0000000000211550  Caver::CaverShell::TouchCancelled(Caver::FWTouch const&)
 *   0x000000000047E108  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_create_node(Caver::FWTouch const&)
 *   0x00000000004A31B4  Caver::GUIWindow::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *   0x00000000004A35D8  Caver::GUIWindow::DragAndDropItemWithTouch(Caver::FWTouch const&,boost::shared_ptr<Caver::GUIDraggableItem> const&)
 *   0x00000000004A56F4  std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_create_node(std::pair<ulong const,Caver::FWTouch> const&)
 *   0x00000000004A599C  std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FWTouch*,std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>>,Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000004ABA04  Caver::FWTouch::FWTouch(Caver::FWTouch const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FD9E4 string=0x00000000004ABA04 "("
 *   insn=0x00000000001FD9E8 string=0x00000000001FD9EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FWTouch::FWTouch(Caver::FWTouch *this, const Caver::FWTouch *a2)
{
  return _ZN5Caver7FWTouchC2ERKS0_(this, a2);
}

