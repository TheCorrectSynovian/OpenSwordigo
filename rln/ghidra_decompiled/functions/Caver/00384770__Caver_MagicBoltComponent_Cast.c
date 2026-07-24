/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00384770
 * Function: Caver::MagicBoltComponent::Cast
 * Signature: undefined __thiscall Cast(MagicBoltComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicBoltComponent::Cast() */

void __thiscall Caver::MagicBoltComponent::Cast(MagicBoltComponent *this)

{
  SpellComponent::Cast((SpellComponent *)this);
  *(undefined8 *)(this + 0x11c) = *(undefined8 *)(this + 0x84);
  *(undefined4 *)(this + 0x124) = *(undefined4 *)(this + 0x8c);
  if (*(long *)(this + 0xd0) == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xc0),(Component *)this);
  }
  this[0xb8] = (MagicBoltComponent)0x1;
  return;
}


