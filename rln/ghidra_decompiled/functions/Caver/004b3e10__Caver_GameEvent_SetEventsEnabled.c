/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b3e10
 * Function: Caver::GameEvent::SetEventsEnabled
 * Signature: undefined __cdecl SetEventsEnabled(bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameEvent::SetEventsEnabled(bool) */

void Caver::GameEvent::SetEventsEnabled(bool param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_currentManager__007e6f50;
  puVar2 = *(undefined8 **)PTR_currentManager__007e6f50;
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = operator_new(0x28);
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 4) = 1;
    *(undefined8 **)puVar1 = puVar2;
  }
  *(bool *)(puVar2 + 4) = param_1;
  return;
}


