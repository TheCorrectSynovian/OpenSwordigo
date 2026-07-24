/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b3b40
 * Function: Caver::GameEvent::ProcessEvents
 * Signature: undefined __cdecl ProcessEvents(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameEvent::ProcessEvents() */

void Caver::GameEvent::ProcessEvents(void)

{
  undefined *puVar1;
  GameEventManager *this;
  
  puVar1 = PTR_currentManager__007e6f50;
  this = *(GameEventManager **)PTR_currentManager__007e6f50;
  if (this == (GameEventManager *)0x0) {
    this = operator_new(0x28);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    this[0x20] = (GameEventManager)0x1;
    *(GameEventManager **)puVar1 = this;
  }
  GameEventManager::ProcessEvents(this);
  return;
}


