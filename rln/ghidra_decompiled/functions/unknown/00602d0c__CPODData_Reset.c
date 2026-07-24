/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00602d0c
 * Function: CPODData::Reset
 * Signature: undefined __thiscall Reset(CPODData * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPODData::Reset() */

void __thiscall CPODData::Reset(CPODData *this)

{
  undefined8 uVar1;
  
  uVar1 = DAT_00689bc8;
                    /* try { // try from 00602d20 to 00702d2b has its CatchHandler @ 0060375c */
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)this = uVar1;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    free(*(void **)(this + 0x10));
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}


