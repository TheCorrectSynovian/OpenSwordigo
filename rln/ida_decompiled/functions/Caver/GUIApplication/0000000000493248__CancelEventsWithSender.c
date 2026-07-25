/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000493248
 * Mangled: _ZN5Caver14GUIApplication22CancelEventsWithSenderEPv
 * Demangled: Caver::GUIApplication::CancelEventsWithSender(void *)
 *
 * Callers: 1
 *   0x00000000001F3F70  Caver::GUIApplication::CancelEventsWithSender(void *)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000002006A0  std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_erase(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *
 * Referenced strings: 16
 *   insn=0x0000000000493258 string=0x000000000049325C "U"
 *   insn=0x000000000049326C string=0x0000000000493270 "h\n@"
 *   insn=0x0000000000493270 string=0x0000000000493274 "i"
 *   insn=0x0000000000493274 string=0x0000000000493278 "?"
 *   insn=0x0000000000493278 string=0x000000000049327C " "
 *   insn=0x000000000049327C string=0x0000000000493280 "k*B"
 *   insn=0x000000000049328C string=0x0000000000493290 "!"
 *   insn=0x0000000000493298 string=0x000000000049329C "H"
 *   insn=0x0000000000493298 string=0x00000000004932D8 "?"
 *   insn=0x000000000049329C string=0x00000000004932A0 ""
 *   insn=0x00000000004932A0 string=0x00000000004932A4 ""
 *   insn=0x00000000004932A8 string=0x00000000004932AC "H"
 *   insn=0x00000000004932B8 string=0x00000000004932BC ""
 *   insn=0x00000000004932D0 string=0x00000000004932D4 "i"
 *   insn=0x00000000004932D8 string=0x00000000004932DC "A"
 *   insn=0x0000000000493304 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::GUIApplication::CancelEventsWithSender(_QWORD *this, void *a2)
{
  _QWORD *v2; // x19
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x10
  __int64 v7; // x11
  __int64 v8; // t1
  __int64 v9; // [xsp+8h] [xbp-68h]
  __int64 v10; // [xsp+18h] [xbp-58h]
  __int64 v11; // [xsp+20h] [xbp-50h]

  v2 = this;
  _ReadStatusReg(TPIDR_EL0);
  v4 = this[2];
  v5 = this[6];
  if ( v5 != v4 )
  {
    v7 = this[4];
    v6 = this[5];
    do
    {
      if ( *(void **)(v4 + 40) == a2 )
      {
        this = (_QWORD *)std::deque<Caver::GUIApplication::QueuedEvent>::_M_erase();
        v4 = v9;
        v7 = v10;
        v6 = v11;
        v5 = v2[6];
      }
      else
      {
        v4 += 72;
        if ( v4 == v7 )
        {
          v8 = *(_QWORD *)(v6 + 8);
          v6 += 8;
          v4 = v8;
          v7 = v8 + 504;
        }
      }
    }
    while ( v5 != v4 );
  }
  return this;
}

