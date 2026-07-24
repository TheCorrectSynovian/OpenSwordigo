/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e15f8
 * Function: Caver::OverlayMenuButton::Update
 * Signature: undefined __thiscall Update(OverlayMenuButton * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayMenuButton::Update(float) */

void __thiscall Caver::OverlayMenuButton::Update(OverlayMenuButton *this,float param_1)

{
  if (*(ParticleSystem **)(this + 0x200) != (ParticleSystem *)0x0) {
    ParticleSystem::Update(*(ParticleSystem **)(this + 0x200),param_1);
  }
  OverlayButton::Update((OverlayButton *)this,param_1);
  return;
}


