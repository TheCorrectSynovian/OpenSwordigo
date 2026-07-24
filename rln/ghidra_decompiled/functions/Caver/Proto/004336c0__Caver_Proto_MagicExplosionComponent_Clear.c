/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004336c0
 * Function: Caver::Proto::MagicExplosionComponent::Clear
 * Signature: undefined __thiscall Clear(MagicExplosionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicExplosionComponent::Clear() */

void __thiscall Caver::Proto::MagicExplosionComponent::Clear(MagicExplosionComponent *this)

{
  if (this[0x24] != (MagicExplosionComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    if ((((byte)this[0x24] >> 1 & 1) != 0) && (*(FloatColor **)(this + 0x10) != (FloatColor *)0x0))
    {
                    /* try { // try from 004336e8 to 0053371b has its CatchHandler @ 004335dc */
      FloatColor::Clear(*(FloatColor **)(this + 0x10));
    }
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x20) = 0;
  }
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


