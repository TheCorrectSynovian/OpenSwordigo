/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004daa58
 * Function: Caver::HealthBar::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(HealthBar * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthBar::LayoutSubviews() */

void __thiscall Caver::HealthBar::LayoutSubviews(HealthBar *this)

{
  *(float *)(this + 0x11c) =
       (*(float *)(this + 0x11c) / *(float *)(this + 0x120)) * *(float *)(this + 0x90);
  *(float *)(this + 0x120) = *(float *)(this + 0x90);
  UpdateSprite(this);
  return;
}


