/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00593004
 * Function: Caver::GUIApplication::QueuedEvent::~QueuedEvent
 * Signature: undefined __thiscall ~QueuedEvent(QueuedEvent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIApplication::QueuedEvent::~QueuedEvent() */

void __thiscall Caver::GUIApplication::QueuedEvent::~QueuedEvent(QueuedEvent *this)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x40);
  if ((plVar3 != (long *)0x0) && (lVar1 = plVar3[1], plVar3[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar1 = plVar3[2];
    plVar3[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* try { // try from 0059305c to 00693093 has its CatchHandler @ 0058df1c */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x30);
                    /* catch() { ... } // from try @ 00591170 with catch @ 00593064
                       catch() { ... } // from try @ 00592e34 with catch @ 00593064 */
                    /* catch() { ... } // from try @ 00592dd0 with catch @ 00593070 */
  if ((plVar3 != (long *)0x0) && (lVar1 = plVar3[1], plVar3[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar1 = plVar3[2];
    plVar3[2] = lVar1 + -1;
                    /* try { // try from 00593094 to 0069329b has its CatchHandler @ 00593094
                       catch() { ... } // from try @ 00593094 with catch @ 00593094
                       catch() { ... } // from try @ 005932b0 with catch @ 00593094
                       catch() { ... } // from try @ 00593308 with catch @ 00593094
                       catch() { ... } // from try @ 00593424 with catch @ 00593094 */
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 != 0) {
    if (((uVar2 & 1) == 0) && (*(code **)(uVar2 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar2 & 0xfffffffffffffffe))(this + 0x10,this + 0x10,2);
    }
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}


