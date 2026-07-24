/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d1e80
 * Function: Caver::SoundEffect::LoadBuffer
 * Signature: undefined __thiscall LoadBuffer(SoundEffect * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffect::LoadBuffer() */

void __thiscall Caver::SoundEffect::LoadBuffer(SoundEffect *this)

{
  long lVar1;
  string *psVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_48;
  long *local_40;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  psVar2 = (string *)SoundLibrary::sharedLibrary();
  SoundLibrary::BufferForResourceWithName(psVar2);
  if (local_40 != (long *)0x0) {
    local_40[1] = local_40[1] + 1;
  }
  plVar5 = *(long **)(this + 0x30);
  *(undefined8 *)(this + 0x28) = local_48;
  *(long **)(this + 0x30) = local_40;
                    /* try { // try from 005d1ef0 to 006d1f03 has its CatchHandler @ 005d2964 */
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* try { // try from 005d1f04 to 006d1f6f has its CatchHandler @ 005d2f58 */
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((local_40 != (long *)0x0) && (lVar4 = local_40[1], local_40[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar4 = local_40[2];
    local_40[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 005d1f80 to 006d1f93 has its CatchHandler @ 005d2960 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005d1f94 to 006d1fff has its CatchHandler @ 005d2f20 */
  __stack_chk_fail();
}


