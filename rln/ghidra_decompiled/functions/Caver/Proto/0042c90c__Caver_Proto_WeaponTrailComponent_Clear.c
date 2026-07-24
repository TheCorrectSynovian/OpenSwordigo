/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042c90c
 * Function: Caver::Proto::WeaponTrailComponent::Clear
 * Signature: undefined __thiscall Clear(WeaponTrailComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponTrailComponent::Clear() */

void __thiscall Caver::Proto::WeaponTrailComponent::Clear(WeaponTrailComponent *this)

{
  if ((((byte)this[0x18] & 1) != 0) && (*(FloatColor **)(this + 0x10) != (FloatColor *)0x0)) {
                    /* try { // try from 0042c92c to 0052c92f has its CatchHandler @ 0042c9ec */
    FloatColor::Clear(*(FloatColor **)(this + 0x10));
  }
                    /* try { // try from 0042c930 to 0052c9a3 has its CatchHandler @ 0042c7cc */
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


