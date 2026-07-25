/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049373C
 * Mangled: _ZNSt5dequeIN5Caver14GUIApplication11QueuedEventESaIS2_EE19_M_destroy_data_auxESt15_Deque_iteratorIS2_RS2_PS2_ES8_
 * Demangled: std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_destroy_data_aux(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *
 * Callers: 2
 *   0x00000000001F6D60  std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_destroy_data_aux(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *   0x0000000000493308  Caver::GUIApplication::DispatchEvents(void)
 *
 * Callees: 1
 *   0x00000000001F4710  Caver::GUIApplication::QueuedEvent::~QueuedEvent()
 *
 * Referenced strings: 10
 *   insn=0x0000000000493754 string=0x0000000000493758 "h"
 *   insn=0x0000000000493758 string=0x000000000049375C "6!"
 *   insn=0x0000000000493770 string=0x00000000001F4710 "P'"
 *   insn=0x00000000004937A0 string=0x00000000004937A4 "h"
 *   insn=0x00000000004937B4 string=0x00000000004937B8 "?"
 *   insn=0x00000000004937B8 string=0x00000000004937BC "@"
 *   insn=0x00000000004937BC string=0x0000000000493804 "s"
 *   insn=0x00000000004937C8 string=0x00000000004937E0 "tN@"
 *   insn=0x00000000004937F0 string=0x00000000004937F4 "s""
 *   insn=0x00000000004937FC string=0x0000000000493800 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::deque<Caver::GUIApplication::QueuedEvent>::_M_destroy_data_aux(
        __int64 a1,
        __int64 a2,
        Caver::GUIApplication::QueuedEvent **a3)
{
  __int64 v5; // x9
  unsigned __int64 v6; // x8
  __int64 *v7; // x22
  __int64 v8; // t1
  Caver::GUIApplication::QueuedEvent *v9; // x21
  Caver::GUIApplication::QueuedEvent *j; // x20
  Caver::GUIApplication::QueuedEvent *k; // x19
  Caver::GUIApplication::QueuedEvent *v12; // x20
  Caver::GUIApplication::QueuedEvent *i; // x19

  v5 = *(_QWORD *)(a2 + 24);
  v6 = (unsigned __int64)a3[3];
  v7 = (__int64 *)(v5 + 8);
  if ( v5 + 8 < v6 )
  {
    do
    {
      v8 = *v7++;
      Caver::GUIApplication::QueuedEvent::~QueuedEvent((Caver::GUIApplication::QueuedEvent *)v8);
      Caver::GUIApplication::QueuedEvent::~QueuedEvent((Caver::GUIApplication::QueuedEvent *)(v8 + 72));
      Caver::GUIApplication::QueuedEvent::~QueuedEvent((Caver::GUIApplication::QueuedEvent *)(v8 + 144));
      Caver::GUIApplication::QueuedEvent::~QueuedEvent((Caver::GUIApplication::QueuedEvent *)(v8 + 216));
      Caver::GUIApplication::QueuedEvent::~QueuedEvent((Caver::GUIApplication::QueuedEvent *)(v8 + 288));
      Caver::GUIApplication::QueuedEvent::~QueuedEvent((Caver::GUIApplication::QueuedEvent *)(v8 + 360));
      Caver::GUIApplication::QueuedEvent::~QueuedEvent((Caver::GUIApplication::QueuedEvent *)(v8 + 432));
      v6 = (unsigned __int64)a3[3];
    }
    while ( (unsigned __int64)v7 < v6 );
    v5 = *(_QWORD *)(a2 + 24);
  }
  v9 = *(Caver::GUIApplication::QueuedEvent **)a2;
  if ( v5 == v6 )
  {
    for ( i = *a3; i != v9; v9 = (Caver::GUIApplication::QueuedEvent *)((char *)v9 + 72) )
      Caver::GUIApplication::QueuedEvent::~QueuedEvent(v9);
  }
  else
  {
    for ( j = *(Caver::GUIApplication::QueuedEvent **)(a2 + 16);
          j != v9;
          v9 = (Caver::GUIApplication::QueuedEvent *)((char *)v9 + 72) )
    {
      Caver::GUIApplication::QueuedEvent::~QueuedEvent(v9);
    }
    v12 = *a3;
    for ( k = a3[1]; v12 != k; k = (Caver::GUIApplication::QueuedEvent *)((char *)k + 72) )
      Caver::GUIApplication::QueuedEvent::~QueuedEvent(k);
  }
}

