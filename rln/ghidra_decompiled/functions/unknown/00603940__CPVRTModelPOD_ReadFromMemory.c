/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00603940
 * Function: CPVRTModelPOD::ReadFromMemory
 * Signature: undefined __thiscall ReadFromMemory(CPVRTModelPOD * this, SPODScene * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::ReadFromMemory(SPODScene const&) */

bool __thiscall CPVRTModelPOD::ReadFromMemory(CPVRTModelPOD *this,SPODScene *param_1)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 00602564 with catch @ 0060394c */
  Destroy(this);
  *(undefined8 *)(this + 0x80) = 0;
  memcpy(this,param_1,0x80);
  iVar1 = InitImpl(this);
  if (iVar1 == 0) {
    *(undefined1 *)(*(long *)(this + 0x80) + 0x28) = 1;
  }
                    /* catch() { ... } // from try @ 0060250c with catch @ 0060398c */
                    /* catch() { ... } // from try @ 006024b4 with catch @ 00603990 */
  return iVar1 != 0;
}


