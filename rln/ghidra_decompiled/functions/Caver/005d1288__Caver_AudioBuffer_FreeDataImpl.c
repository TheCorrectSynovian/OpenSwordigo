/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d1288
 * Function: Caver::AudioBuffer::FreeDataImpl
 * Signature: undefined __thiscall FreeDataImpl(AudioBuffer * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioBuffer::FreeDataImpl() */

void __thiscall Caver::AudioBuffer::FreeDataImpl(AudioBuffer *this)

{
                    /* try { // try from 005d1298 to 006d12a3 has its CatchHandler @ 005d28d8 */
  if (*(void **)(this + 0x10) != (void *)0x0) {
    free(*(void **)(this + 0x10));
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}


