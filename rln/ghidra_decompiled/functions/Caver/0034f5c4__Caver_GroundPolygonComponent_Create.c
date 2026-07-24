/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034f5c4
 * Function: Caver::GroundPolygonComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundPolygonComponent::Create() */

GroundPolygonComponent * Caver::GroundPolygonComponent::Create(void)

{
  GroundPolygonComponent *this;
  
  this = operator_new(0xe8);
  GroundPolygonComponent(this);
  return this;
}


