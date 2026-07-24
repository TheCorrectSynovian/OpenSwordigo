/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b3dc0
 * Function: Caver::GameEvent::SetFirstResponder
 * Signature: undefined __cdecl SetFirstResponder(IGameEventResponder * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameEvent::SetFirstResponder(Caver::IGameEventResponder*) */

void Caver::GameEvent::SetFirstResponder(IGameEventResponder *param_1)

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
                    /* catch() { ... } // from try @ 004b3c4c with catch @ 004b3dfc */
    *(undefined8 **)puVar1 = puVar2;
  }
  *puVar2 = param_1;
  return;
}


