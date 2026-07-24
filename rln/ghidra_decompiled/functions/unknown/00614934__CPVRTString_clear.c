/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614934
 * Function: CPVRTString::clear
 * Signature: undefined __thiscall clear(CPVRTString * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CPVRTString::clear() */

void __thiscall CPVRTString::clear(CPVRTString *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  free(*(void **)(this + 8));
  pvVar3 = calloc(1,1);
  uVar2 = _UNK_0068b488;
  uVar1 = _DAT_0068b480;
                    /* try { // try from 0061495c to 0071495f has its CatchHandler @ 006149e0 */
  *(void **)(this + 8) = pvVar3;
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


