/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005df70c
 * Function: google::protobuf::internal::ExtensionSet::SerializeMessageSetWithCachedSizes
 * Signature: undefined __thiscall SerializeMessageSetWithCachedSizes(ExtensionSet * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::SerializeMessageSetWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
google::protobuf::internal::ExtensionSet::SerializeMessageSetWithCachedSizes
          (ExtensionSet *this,CodedOutputStream *param_1)

{
  uint uVar1;
  ExtensionSet *pEVar2;
  
  for (pEVar2 = *(ExtensionSet **)(this + 0x18); pEVar2 != this + 8;
      pEVar2 = (ExtensionSet *)FUN_0064c6a0(pEVar2)) {
    uVar1 = *(uint *)(pEVar2 + 0x20);
    if ((pEVar2[0x30] == (ExtensionSet)0xb) && (pEVar2[0x31] == (ExtensionSet)0x0)) {
      if (pEVar2[0x32] == (ExtensionSet)0x0) {
        io::CodedOutputStream::WriteVarint32(param_1,0xb);
        WireFormatLite::WriteUInt32(2,uVar1,param_1);
        WireFormatLite::WriteMessageMaybeToArray(3,*(MessageLite **)(pEVar2 + 0x28),param_1);
        io::CodedOutputStream::WriteVarint32(param_1,0xc);
      }
    }
    else {
      Extension::SerializeFieldWithCachedSizes((Extension *)(pEVar2 + 0x28),uVar1,param_1);
    }
  }
  return;
}


