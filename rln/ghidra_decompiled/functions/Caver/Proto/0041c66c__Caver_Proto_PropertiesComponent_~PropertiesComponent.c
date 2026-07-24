/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041c66c
 * Function: Caver::Proto::PropertiesComponent::~PropertiesComponent
 * Signature: undefined __thiscall ~PropertiesComponent(PropertiesComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PropertiesComponent::~PropertiesComponent() */

void __thiscall Caver::Proto::PropertiesComponent::~PropertiesComponent(PropertiesComponent *this)

{
  *(undefined **)this = PTR_vtable_007e4ea0 + 0x10;
                    /* try { // try from 0041c690 to 0051c6bb has its CatchHandler @ 0041c690
                       catch() { ... } // from try @ 0041c690 with catch @ 0041c690
                       catch() { ... } // from try @ 0041c750 with catch @ 0041c690 */
  if ((*(PropertiesComponent **)PTR_default_instance__007e5f30 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
                    /* try { // try from 0041c6bc to 0051c6cf has its CatchHandler @ 0041c8fc */
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


