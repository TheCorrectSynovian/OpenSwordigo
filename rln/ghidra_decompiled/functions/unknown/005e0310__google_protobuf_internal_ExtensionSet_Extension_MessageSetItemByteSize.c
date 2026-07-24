/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e0310
 * Function: google::protobuf::internal::ExtensionSet::Extension::MessageSetItemByteSize
 * Signature: undefined __thiscall MessageSetItemByteSize(Extension * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::Extension::MessageSetItemByteSize(int) const */

ulong __thiscall
google::protobuf::internal::ExtensionSet::Extension::MessageSetItemByteSize
          (Extension *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  if ((this[8] == (Extension)0xb) && (this[9] == (Extension)0x0)) {
    if (this[10] == (Extension)0x0) {
      iVar1 = *(int *)PTR_kMessageSetItemTagsSize_007e6350;
      if ((uint)param_1 < 0x80) {
        iVar2 = 1;
      }
      else {
        iVar2 = io::CodedOutputStream::VarintSize32Fallback(param_1);
      }
                    /* catch() { ... } // from try @ 005e03e4 with catch @ 005e037c
                       catch() { ... } // from try @ 005e0400 with catch @ 005e037c */
      uVar3 = (**(code **)(**(long **)this + 0x48))(*(long **)this);
      if (uVar3 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar5 = (ulong)(iVar2 + iVar1 + uVar3 + iVar4);
    }
    else {
      uVar5 = 0;
    }
                    /* try { // try from 005e03bc to 006e03e3 has its CatchHandler @ 005e03f4 */
    return uVar5;
  }
  uVar5 = ByteSize(this,param_1);
  return uVar5;
}


