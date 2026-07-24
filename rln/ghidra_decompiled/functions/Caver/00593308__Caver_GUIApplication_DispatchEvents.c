/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00593308
 * Function: Caver::GUIApplication::DispatchEvents
 * Signature: undefined __thiscall DispatchEvents(GUIApplication * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIApplication::DispatchEvents() */

void __thiscall Caver::GUIApplication::DispatchEvents(GUIApplication *this)

{
  long lVar1;
  QueuedEvent *this_00;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  bad_function_call abStack_48 [16];
  long local_38;
  
                    /* try { // try from 00593308 to 006933ab has its CatchHandler @ 00593094 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar4 = *(undefined8 **)(this + 0x10);
  if (*(undefined8 **)(this + 0x30) != puVar4) {
    do {
      local_90 = *puVar4;
      local_88 = 0;
      uVar2 = puVar4[1];
      if (uVar2 != 0) {
        local_88 = uVar2;
        if ((uVar2 & 1) == 0) {
          (**(code **)(uVar2 & 0xfffffffffffffffe))(puVar4 + 2,&local_80,0);
        }
        else {
          local_70 = puVar4[4];
          uStack_78 = puVar4[3];
          local_80 = puVar4[2];
        }
      }
                    /* catch() { ... } // from try @ 005932f4 with catch @ 00593388 */
      local_68 = puVar4[5];
      local_60 = puVar4[6];
      if (local_60 != 0) {
        *(long *)(local_60 + 8) = *(long *)(local_60 + 8) + 1;
      }
      local_58 = puVar4[7];
                    /* try { // try from 005933ac to 00693423 has its CatchHandler @ 0059342c */
      local_50 = puVar4[8];
      if (local_50 != 0) {
        *(long *)(local_50 + 8) = *(long *)(local_50 + 8) + 1;
      }
      this_00 = *(QueuedEvent **)(this + 0x10);
                    /* catch() { ... } // from try @ 0059329c with catch @ 005933d8 */
      if (this_00 == (QueuedEvent *)(*(long *)(this + 0x20) + -0x48)) {
        QueuedEvent::~QueuedEvent(this_00);
        operator_delete(*(void **)(this + 0x18));
        lVar3 = *(long *)(this + 0x28);
        *(long *)(this + 0x28) = lVar3 + 8;
        lVar3 = *(long *)(lVar3 + 8);
        *(long *)(this + 0x10) = lVar3;
        *(long *)(this + 0x18) = lVar3;
        *(long *)(this + 0x20) = lVar3 + 0x1f8;
      }
      else {
        QueuedEvent::~QueuedEvent(this_00);
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + 0x48;
      }
                    /* try { // try from 00593424 to 0069342f has its CatchHandler @ 00593094 */
      if (local_88 == 0) {
        boost::bad_function_call::bad_function_call(abStack_48);
        boost::throw_exception<boost::bad_function_call>(abStack_48);
        goto LAB_0059348c;
      }
                    /* catch() { ... } // from try @ 005933ac with catch @ 0059342c */
                    /* try { // try from 00593430 to 0069346b has its CatchHandler @ 00593430
                       catch() { ... } // from try @ 00593430 with catch @ 00593430
                       catch() { ... } // from try @ 00593494 with catch @ 00593430
                       catch() { ... } // from try @ 00593504 with catch @ 00593430
                       catch() { ... } // from try @ 00593558 with catch @ 00593430 */
      (**(code **)((local_88 & 0xfffffffffffffffe) + 8))(&local_80,local_68,local_58);
      QueuedEvent::~QueuedEvent((QueuedEvent *)&local_90);
      puVar4 = *(undefined8 **)(this + 0x10);
    } while (*(undefined8 **)(this + 0x30) != puVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0059346c to 00693493 has its CatchHandler @ 0059350c */
    return;
  }
LAB_0059348c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


