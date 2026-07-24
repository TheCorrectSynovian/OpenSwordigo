/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00416efc
 * Function: Caver::Proto::ProgramComponent::~ProgramComponent
 * Signature: undefined __thiscall ~ProgramComponent(ProgramComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProgramComponent::~ProgramComponent() */

void __thiscall Caver::Proto::ProgramComponent::~ProgramComponent(ProgramComponent *this)

{
                    /* try { // try from 00416f14 to 00516f17 has its CatchHandler @ 00416f5c */
                    /* try { // try from 00416f18 to 00516f7f has its CatchHandler @ 00416ed0 */
  *(undefined **)this = PTR_vtable_007e7708 + 0x10;
  if ((*(ProgramComponent **)PTR_default_instance__007e56e8 != this) &&
     (*(long **)(this + 0x18) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


