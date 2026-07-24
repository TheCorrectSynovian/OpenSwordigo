/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d1d2c
 * Function: Caver::SoundEffect::~SoundEffect
 * Signature: undefined __thiscall ~SoundEffect(SoundEffect * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffect::~SoundEffect() */

void __thiscall Caver::SoundEffect::~SoundEffect(SoundEffect *this)

{
  ~SoundEffect(this);
                    /* try { // try from 005d1d40 to 006d1d53 has its CatchHandler @ 005d2970 */
  operator_delete(this);
  return;
}


