/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e0214
 * Function: google::protobuf::internal::ExtensionSet::MessageSetByteSize
 * Signature: undefined __thiscall MessageSetByteSize(ExtensionSet * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::MessageSetByteSize() const */

int __thiscall google::protobuf::internal::ExtensionSet::MessageSetByteSize(ExtensionSet *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ExtensionSet *pEVar6;
  int iVar7;
  
  pEVar6 = *(ExtensionSet **)(this + 0x18);
  if (pEVar6 == this + 8) {
    iVar7 = 0;
  }
  else {
                    /* try { // try from 005e0238 to 006e0243 has its CatchHandler @ 005dfd28 */
                    /* catch() { ... } // from try @ 005e0050 with catch @ 005e0240 */
    iVar7 = 0;
    iVar1 = *(int *)PTR_kMessageSetItemTagsSize_007e6350;
    do {
      uVar3 = *(uint *)(pEVar6 + 0x20);
      if ((pEVar6[0x30] == (ExtensionSet)0xb) && (pEVar6[0x31] == (ExtensionSet)0x0)) {
        if (pEVar6[0x32] == (ExtensionSet)0x0) {
          if (uVar3 < 0x80) {
            iVar2 = 1;
          }
          else {
            iVar2 = io::CodedOutputStream::VarintSize32Fallback(uVar3);
          }
          plVar5 = *(long **)(pEVar6 + 0x28);
          uVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
          if (uVar3 < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = io::CodedOutputStream::VarintSize32Fallback(uVar3);
          }
          iVar4 = iVar2 + iVar1 + uVar3 + iVar4;
        }
        else {
          iVar4 = 0;
        }
      }
      else {
        iVar4 = Extension::ByteSize((Extension *)(pEVar6 + 0x28),uVar3);
      }
      iVar7 = iVar4 + iVar7;
      pEVar6 = (ExtensionSet *)FUN_0064c6a0(pEVar6);
    } while (pEVar6 != this + 8);
  }
  return iVar7;
}


