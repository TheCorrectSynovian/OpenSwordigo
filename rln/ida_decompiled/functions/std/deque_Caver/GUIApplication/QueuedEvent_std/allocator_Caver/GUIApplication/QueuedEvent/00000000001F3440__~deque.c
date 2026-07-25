/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3440
 * Mangled: ._ZNSt5dequeIN5Caver14GUIApplication11QueuedEventESaIS2_EED2Ev
 * Demangled: std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::~deque()
 *
 * Callers: 1
 *   0x0000000000492DEC  Caver::GUIApplication::~GUIApplication()
 *
 * Callees: 1
 *   0x0000000000493308  Caver::GUIApplication::DispatchEvents(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3448 string=0x00000000001F344C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::deque<Caver::GUIApplication::QueuedEvent>::~deque()
{
  JUMPOUT(0x493644);
}

