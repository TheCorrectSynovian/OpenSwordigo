/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000492DEC
 * Mangled: _ZN5Caver14GUIApplicationD2Ev
 * Demangled: Caver::GUIApplication::~GUIApplication()
 *
 * Callers: 1
 *   0x000000000049258C  std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUITextField>*,std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>>,boost::shared_ptr<Caver::GUITextField> const&)
 *
 * Callees: 1
 *   0x00000000001F3440  std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::~deque()
 *
 * Referenced strings: 1
 *   insn=0x0000000000492DEC string=0x00000000001F3440 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIApplication::~GUIApplication(Caver::GUIApplication *this)
{
  std::deque<Caver::GUIApplication::QueuedEvent>::~deque();
}

