/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003743cc
 * Function: Caver::HeroEntityComponent::~HeroEntityComponent
 * Signature: undefined __thiscall ~HeroEntityComponent(HeroEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEntityComponent::~HeroEntityComponent() */

void __thiscall Caver::HeroEntityComponent::~HeroEntityComponent(HeroEntityComponent *this)

{
  ~HeroEntityComponent(this);
  operator_delete(this);
  return;
}


