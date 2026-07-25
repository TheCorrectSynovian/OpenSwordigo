/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4710
 * Mangled: ._ZN5Caver14GUIApplication11QueuedEventD2Ev
 * Demangled: Caver::GUIApplication::QueuedEvent::~QueuedEvent()
 *
 * Callers: 4
 *   0x0000000000492DF0  Caver::GUIApplication::SendEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,boost::shared_ptr<void> const&,boost::shared_ptr<Caver::GUIEvent> const&)
 *   0x0000000000493308  Caver::GUIApplication::DispatchEvents(void)
 *   0x000000000049373C  std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_destroy_data_aux(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *   0x0000000000493AA4  std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_erase(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *
 * Callees: 1
 *   0x0000000000492DF0  Caver::GUIApplication::SendEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,boost::shared_ptr<void> const&,boost::shared_ptr<Caver::GUIEvent> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4718 string=0x00000000001F471C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIApplication::QueuedEvent::~QueuedEvent(Caver::GUIApplication::QueuedEvent *this)
{
  JUMPOUT(0x493004);
}

