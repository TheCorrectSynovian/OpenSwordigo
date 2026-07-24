/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d1ff0
 * Function: Caver::SoundEffect::FreeBuffer
 * Signature: undefined __thiscall FreeBuffer(SoundEffect * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffect::FreeBuffer() */

void __thiscall Caver::SoundEffect::FreeBuffer(SoundEffect *this)

{
  long lVar1;
  long *plVar2;
  
  if (*(long *)(this + 0x28) != 0) {
    plVar2 = *(long **)(this + 0x30);
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
                    /* try { // try from 005d2010 to 006d2023 has its CatchHandler @ 005d295c */
    if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* try { // try from 005d2024 to 006d208f has its CatchHandler @ 005d2ee8 */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar1 = plVar2[2];
      plVar2[2] = lVar1 + -1;
      if (lVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x005d2060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))(plVar2);
        return;
      }
    }
  }
  return;
}


