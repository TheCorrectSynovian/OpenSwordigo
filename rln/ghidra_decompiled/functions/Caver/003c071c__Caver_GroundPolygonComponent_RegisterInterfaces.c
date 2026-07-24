/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c071c
 * Function: Caver::GroundPolygonComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(GroundPolygonComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundPolygonComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::GroundPolygonComponent::RegisterInterfaces
          (GroundPolygonComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6918);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


