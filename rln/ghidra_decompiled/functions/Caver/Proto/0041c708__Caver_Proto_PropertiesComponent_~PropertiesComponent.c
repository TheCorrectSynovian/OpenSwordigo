/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041c708
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
                    /* try { // try from 0041c714 to 0051c74f has its CatchHandler @ 0041c82c */
  *(undefined **)this = PTR_vtable_007e4ea0 + 0x10;
  if ((*(PropertiesComponent **)PTR_default_instance__007e5f30 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
                    /* try { // try from 0041c750 to 0051c8ff has its CatchHandler @ 0041c690 */
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


