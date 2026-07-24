/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005de54c
 * Function: google::protobuf::internal::ExtensionSet::ParseField
 * Signature: undefined __thiscall ParseField(ExtensionSet * this, uint param_1, CodedInputStream * param_2, MessageLite * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::ParseField(unsigned int,
   google::protobuf::io::CodedInputStream*, google::protobuf::MessageLite const*) */

uint __thiscall
google::protobuf::internal::ExtensionSet::ParseField
          (ExtensionSet *this,uint param_1,CodedInputStream *param_2,MessageLite *param_3)

{
  long lVar1;
  uint uVar2;
  undefined *local_40;
  MessageLite *local_38;
  undefined *puStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puStack_30 = PTR_vtable_007e52e8 + 0x10;
  local_40 = PTR_vtable_007e6718 + 0x10;
  local_38 = param_3;
  uVar2 = ParseField(this,param_1,param_2,(ExtensionFinder *)&local_40,(FieldSkipper *)&puStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


