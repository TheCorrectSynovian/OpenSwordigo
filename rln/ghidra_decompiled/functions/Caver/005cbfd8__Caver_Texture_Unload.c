/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cbfd8
 * Function: Caver::Texture::Unload
 * Signature: undefined __thiscall Unload(Texture * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::Unload() */

void __thiscall Caver::Texture::Unload(Texture *this)

{
  undefined8 *puVar1;
  long *plVar2;
  Texture *pTVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 005cbfe0 to 006cc1db has its CatchHandler @ 005cbf00 */
  if (*(long *)(this + 0x70) == 0) {
    puVar1 = *(undefined8 **)(this + 0x80);
    for (puVar4 = *(undefined8 **)(this + 0x78); puVar4 != puVar1; puVar4 = puVar4 + 1) {
      Unload((Texture *)*puVar4);
    }
    if (*(int *)(this + 0x38) == 0) goto LAB_005cc038;
    glDeleteTextures(1);
    *(undefined4 *)(this + 0x38) = 0;
    pTVar3 = this + 0x48;
  }
  else {
    pTVar3 = this + 0x38;
  }
  *(undefined4 *)pTVar3 = 0;
LAB_005cc038:
  plVar2 = *(long **)(this + 0x18);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005cc058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))(plVar2,this);
  return;
}


