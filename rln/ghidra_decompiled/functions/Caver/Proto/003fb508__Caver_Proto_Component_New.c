/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fb508
 * Function: Caver::Proto::Component::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Component::New() const */

long * Caver::Proto::Component::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x60);
  *plVar3 = (long)(PTR_vtable_007e6b00 + 0x10);
  google::protobuf::internal::ExtensionSet::ExtensionSet((ExtensionSet *)(plVar3 + 1));
  *(undefined4 *)(plVar3 + 7) = 0;
  puVar1 = PTR__default_class_name__007e5328;
  plVar3[9] = 0;
  puVar2 = PTR__default_label__007e6320;
  plVar3[8] = (long)puVar1;
  *(undefined4 *)(plVar3 + 0xb) = 0;
  plVar3[10] = (long)puVar2;
  return plVar3;
}


