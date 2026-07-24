/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057462c
 * Function: Caver::SceneObject::ComponentWithInterface
 * Signature: undefined __thiscall ComponentWithInterface(SceneObject * this, long param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::ComponentWithInterface(long) const */

undefined8 __thiscall Caver::SceneObject::ComponentWithInterface(SceneObject *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
                    /* try { // try from 00574630 to 006748af has its CatchHandler @ 00574088 */
                    /* catch() { ... } // from try @ 005745b8 with catch @ 00574634 */
                    /* catch() { ... } // from try @ 00574128 with catch @ 00574638 */
  puVar1 = *(undefined8 **)(this + 200);
  puVar3 = *(undefined8 **)(this + 0xc0);
                    /* catch() { ... } // from try @ 0057413c with catch @ 00574640
                       catch() { ... } // from try @ 00574180 with catch @ 00574640 */
  do {
    puVar2 = puVar3;
    if (puVar2 == puVar1) {
      return 0;
    }
    uVar4 = (**(code **)(*(long *)*puVar2 + 0xa0))((long *)*puVar2,param_1);
    puVar3 = puVar2 + 1;
  } while ((uVar4 & 1) == 0);
  return *puVar2;
}


