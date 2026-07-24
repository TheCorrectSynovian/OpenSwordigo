/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034f904
 * Function: Caver::PropertiesComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PropertiesComponent::Create() */

PropertiesComponent * Caver::PropertiesComponent::Create(void)

{
  PropertiesComponent *this;
  
  this = operator_new(0xd0);
  PropertiesComponent(this);
  return this;
}


