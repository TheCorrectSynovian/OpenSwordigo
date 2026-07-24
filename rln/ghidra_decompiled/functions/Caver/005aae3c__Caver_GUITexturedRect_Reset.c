/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005aae3c
 * Function: Caver::GUITexturedRect::Reset
 * Signature: undefined __thiscall Reset(GUITexturedRect * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITexturedRect::Reset() */

void __thiscall Caver::GUITexturedRect::Reset(GUITexturedRect *this)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)this;
  *(undefined8 *)this = 0;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* catch() { ... } // from try @ 005aa8cc with catch @ 005aae70 */
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  return;
}


