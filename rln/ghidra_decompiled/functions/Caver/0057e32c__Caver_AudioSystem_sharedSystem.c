/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057e32c
 * Function: Caver::AudioSystem::sharedSystem
 * Signature: undefined __cdecl sharedSystem(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::sharedSystem() */

AudioSystem * Caver::AudioSystem::sharedSystem(void)

{
  AudioSystem *this;
  
                    /* try { // try from 0057e340 to 0067e34b has its CatchHandler @ 0057e420 */
  if (DAT_007e9d78 == (AudioSystem *)0x0) {
    this = operator_new(0x88);
                    /* try { // try from 0057e34c to 0067e4ff has its CatchHandler @ 0057e234 */
    AudioSystem(this);
    DAT_007e9d78 = this;
  }
  return DAT_007e9d78;
}


