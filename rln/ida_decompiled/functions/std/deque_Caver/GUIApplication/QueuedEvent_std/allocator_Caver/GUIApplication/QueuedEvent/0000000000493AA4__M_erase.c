/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000493AA4
 * Mangled: _ZNSt5dequeIN5Caver14GUIApplication11QueuedEventESaIS2_EE8_M_eraseESt15_Deque_iteratorIS2_RS2_PS2_E
 * Demangled: std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_erase(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *
 * Callers: 1
 *   0x00000000002006A0  std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_erase(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *
 * Callees: 5
 *   0x00000000001F4710  Caver::GUIApplication::QueuedEvent::~QueuedEvent()
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8EE0  std::copy_backward<Caver::GUIApplication::QueuedEvent>(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent const&,Caver::GUIApplication::QueuedEvent const*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent const&,Caver::GUIApplication::QueuedEvent const*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *   0x0000000000201A50  std::copy<Caver::GUIApplication::QueuedEvent>(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent const&,Caver::GUIApplication::QueuedEvent const*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent const&,Caver::GUIApplication::QueuedEvent const*>,std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *
 * Referenced strings: 59
 *   insn=0x0000000000493ABC string=0x0000000000493AC0 "V"
 *   insn=0x0000000000493AD0 string=0x0000000000493AD4 "5 @"
 *   insn=0x0000000000493AD4 string=0x0000000000493AD8 ")(A"
 *   insn=0x0000000000493AF4 string=0x0000000000493AF8 "l"
 *   insn=0x0000000000493B0C string=0x0000000000493B10 "#"
 *   insn=0x0000000000493B28 string=0x0000000000493B2C "&"
 *   insn=0x0000000000493B30 string=0x0000000000493B34 "B"
 *   insn=0x0000000000493B3C string=0x0000000000493B40 "D"
 *   insn=0x0000000000493B40 string=0x0000000000493B44 "B"
 *   insn=0x0000000000493B54 string=0x0000000000493B58 "B"
 *   insn=0x0000000000493B5C string=0x0000000000493B60 "W"
 *   insn=0x0000000000493B60 string=0x0000000000493B64 "b"
 *   insn=0x0000000000493BA8 string=0x00000000001F8EE0 "0'"
 *   insn=0x0000000000493C00 string=0x0000000000493C04 " "
 *   insn=0x0000000000493C20 string=0x00000000001F4710 "P'"
 *   insn=0x0000000000493C24 string=0x0000000000493C28 "`"
 *   insn=0x0000000000493C28 string=0x0000000000493C2C ""
 *   insn=0x0000000000493C2C string=0x0000000000493C30 "!"
 *   insn=0x0000000000493C30 string=0x0000000000493C34 ""
 *   insn=0x0000000000493C40 string=0x0000000000493C44 "!"
 *   insn=0x0000000000493C48 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000493C4C string=0x0000000000493C50 "\t!"
 *   insn=0x0000000000493C54 string=0x0000000000493C58 ""
 *   insn=0x0000000000493C58 string=0x0000000000493C5C "\t"
 *   insn=0x0000000000493C6C string=0x0000000000493C70 "\n"
 *   insn=0x0000000000493C7C string=0x0000000000493C80 "\t!"
 *   insn=0x0000000000493C84 string=0x0000000000493C88 ""
 *   insn=0x0000000000493C8C string=0x0000000000493C90 ""
 *   insn=0x0000000000493C98 string=0x0000000000493C9C ","
 *   insn=0x0000000000493CA0 string=0x0000000000493CA4 "l"
 *   insn=0x0000000000493CA4 string=0x0000000000493CA8 "j"
 *   insn=0x0000000000493CAC string=0x0000000000493CB0 "J"
 *   insn=0x0000000000493CB4 string=0x0000000000493CB8 "J]"
 *   insn=0x0000000000493CBC string=0x0000000000493CC0 "_"
 *   insn=0x0000000000493CBC string=0x0000000000493CD8 "k"
 *   insn=0x0000000000493CC4 string=0x0000000000493D04 "i"
 *   insn=0x0000000000493CD4 string=0x0000000000493D44 "k&"
 *   insn=0x0000000000493CE4 string=0x0000000000493CE8 "K"
 *   insn=0x0000000000493CE8 string=0x0000000000493CEC "+}"
 *   insn=0x0000000000493CEC string=0x0000000000493CF0 ")"
 *   insn=0x0000000000493CF0 string=0x0000000000493CF4 "i"
 *   insn=0x0000000000493CF4 string=0x0000000000493CF8 ""
 *   insn=0x0000000000493CF8 string=0x0000000000493CFC "k\tI"
 *   insn=0x0000000000493CFC string=0x0000000000493D00 "\t"
 *   insn=0x0000000000493D00 string=0x0000000000493D24 "l"
 *   insn=0x0000000000493D04 string=0x0000000000493D14 "I}"
 *   insn=0x0000000000493D14 string=0x0000000000493D18 "K"
 *   insn=0x0000000000493D18 string=0x0000000000493D1C ")"
 *   insn=0x0000000000493D1C string=0x0000000000493D20 "+"
 *   insn=0x0000000000493D24 string=0x0000000000493D28 ""
 *   insn=0x0000000000493D28 string=0x0000000000493D2C "\t"
 *   insn=0x0000000000493D2C string=0x0000000000493D30 "k"
 *   insn=0x0000000000493D30 string=0x0000000000493D34 "\t"
 *   insn=0x0000000000493D34 string=0x0000000000493D38 "k"
 *   insn=0x0000000000493D38 string=0x0000000000493D3C "*"
 *   insn=0x0000000000493D3C string=0x0000000000493D40 "k%"
 *   insn=0x0000000000493D44 string=0x0000000000493D48 "j""
 *   insn=0x0000000000493D58 string=0x0000000000493D78 "V"
 *   insn=0x0000000000493D78 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall std::deque<Caver::GUIApplication::QueuedEvent>::_M_erase(
        __int64 a1@<X0>,
        __int64 a2@<X1>,
        __int64 *a3@<X8>)
{
  __int64 v5; // x8
  Caver::GUIApplication::QueuedEvent *v6; // x21
  __int64 v7; // x10
  __int64 v8; // x12
  Caver::GUIApplication::QueuedEvent *v9; // x18
  __int64 v10; // x15
  __int64 v11; // x17
  __int64 v12; // x1
  _BYTE *v13; // x0
  _BYTE *v14; // x16
  unsigned __int64 v15; // x5
  unsigned __int64 v16; // x23
  _QWORD *v17; // x24
  _QWORD *v18; // x8
  Caver::GUIApplication::QueuedEvent *v19; // x0
  Caver::GUIApplication::QueuedEvent *v20; // x25
  __int64 *v21; // x9
  __int64 v22; // x8
  __int64 v23; // x9
  __int64 *v24; // x9
  __int64 v25; // x8
  __int64 v26; // x9
  __int64 v27; // x11
  __int64 *v28; // x8
  __int64 v29; // x10
  __int64 v30; // x10
  __int64 v31; // x11
  __int64 v32; // x11
  unsigned __int64 v33; // x11
  unsigned __int64 v34; // x11

  _ReadStatusReg(TPIDR_EL0);
  v6 = *(Caver::GUIApplication::QueuedEvent **)a2;
  v5 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(a2 + 24);
  v8 = *(_QWORD *)a2 + 72LL;
  if ( v8 == *(_QWORD *)(a2 + 16) )
    v8 = *(_QWORD *)(v7 + 8);
  v9 = *(Caver::GUIApplication::QueuedEvent **)(a1 + 16);
  v10 = *(_QWORD *)(a1 + 32);
  v11 = *(_QWORD *)(a1 + 40);
  v12 = *(_QWORD *)(a1 + 72);
  v14 = *(_BYTE **)(a1 + 48);
  v13 = *(_BYTE **)(a1 + 56);
  v15 = 0x8E38E38E38E38E39LL * ((v10 - (__int64)v9) >> 3);
  v16 = v15 - 0x71C71C71C71C71C7LL * (((__int64)v6 - v5) >> 3) + v7 - v11 - ((v7 - v11) >> 3) - 7;
  if ( v16 >= (v15 + v12 - v11 - ((v12 - v11) >> 3) - 0x71C71C71C71C71C7LL * ((v14 - v13) >> 3) - 7) >> 1 )
  {
    if ( (_BYTE *)v8 == v14 )
    {
      v18 = (_QWORD *)(a1 + 48);
      if ( v14 != v13 )
        goto LABEL_8;
    }
    else
    {
      std::copy<Caver::GUIApplication::QueuedEvent>();
      v18 = (_QWORD *)(a1 + 48);
      v14 = *(_BYTE **)(a1 + 48);
      v13 = *(_BYTE **)(a1 + 56);
      if ( v14 != v13 )
      {
LABEL_8:
        v19 = (Caver::GUIApplication::QueuedEvent *)(v14 - 72);
        *v18 = v14 - 72;
LABEL_14:
        Caver::GUIApplication::QueuedEvent::~QueuedEvent(v19);
        goto LABEL_16;
      }
    }
    operator delete(v13);
    v21 = (__int64 *)(*(_QWORD *)(a1 + 72) - 8LL);
    *(_QWORD *)(a1 + 72) = v21;
    v22 = *v21;
    v23 = *v21 + 504;
    v19 = (Caver::GUIApplication::QueuedEvent *)(v22 + 432);
    *(_QWORD *)(a1 + 48) = v22 + 432;
    *(_QWORD *)(a1 + 56) = v22;
    *(_QWORD *)(a1 + 64) = v23;
    goto LABEL_14;
  }
  if ( v6 == v9 )
  {
    v17 = (_QWORD *)(a1 + 16);
  }
  else
  {
    std::copy_backward<Caver::GUIApplication::QueuedEvent>();
    v17 = (_QWORD *)(a1 + 16);
    v6 = *(Caver::GUIApplication::QueuedEvent **)(a1 + 16);
    v10 = *(_QWORD *)(a1 + 32);
  }
  v20 = (Caver::GUIApplication::QueuedEvent *)(v10 - 72);
  Caver::GUIApplication::QueuedEvent::~QueuedEvent(v6);
  if ( v6 == v20 )
  {
    operator delete(*(void **)(a1 + 24));
    v24 = (__int64 *)(*(_QWORD *)(a1 + 40) + 8LL);
    *(_QWORD *)(a1 + 40) = v24;
    v25 = *v24;
    *(_QWORD *)(a1 + 16) = *v24;
    *(_QWORD *)(a1 + 24) = v25;
    *(_QWORD *)(a1 + 32) = v25 + 504;
  }
  else
  {
    *v17 += 72LL;
  }
LABEL_16:
  v27 = *(_QWORD *)(a1 + 16);
  v26 = *(_QWORD *)(a1 + 24);
  v28 = *(__int64 **)(a1 + 40);
  v29 = v16 - 0x71C71C71C71C71C7LL * ((v27 - v26) >> 3);
  if ( v29 < 0 )
  {
    v32 = ((unsigned __int64)~v29 * (unsigned __int128)0x2492492492492493uLL) >> 64;
    v33 = ~((v32 + ((unsigned __int64)(~v29 - v32) >> 1)) >> 2);
LABEL_21:
    v28 += v33;
    v26 = *v28;
    v34 = -7LL * v33 + v29;
    v30 = *v28 + 504;
    v31 = *v28 + 72 * v34;
    goto LABEL_22;
  }
  if ( v29 > 6 )
  {
    v33 = v29 / 7uLL;
    goto LABEL_21;
  }
  v30 = *(_QWORD *)(a1 + 32);
  v31 = v27 + 72 * v16;
LABEL_22:
  *a3 = v31;
  a3[1] = v26;
  a3[2] = v30;
  a3[3] = (__int64)v28;
}

