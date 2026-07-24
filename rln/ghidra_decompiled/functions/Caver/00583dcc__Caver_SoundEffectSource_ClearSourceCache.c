/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00583dcc
 * Function: Caver::SoundEffectSource::ClearSourceCache
 * Signature: undefined __cdecl ClearSourceCache(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectSource::ClearSourceCache() */

void Caver::SoundEffectSource::ClearSourceCache(void)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar2 = DAT_007e9da0;
  while ((undefined8 **)puVar2 != &DAT_007e9da0) {
    plVar3 = (long *)puVar2[2];
    puVar4 = (undefined8 *)*puVar2;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
    operator_delete(puVar2);
    puVar2 = puVar4;
  }
                    /* try { // try from 00583e30 to 00683e43 has its CatchHandler @ 005842b0 */
  DAT_007e9da8 = &DAT_007e9da0;
  DAT_007e9da0 = &DAT_007e9da0;
  return;
}


