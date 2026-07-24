/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d8138
 * Function: google::protobuf::internal::GeneratedExtensionFinder::Find
 * Signature: undefined __thiscall Find(GeneratedExtensionFinder * this, int param_1, ExtensionInfo * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::GeneratedExtensionFinder::Find(int,
   google::protobuf::internal::ExtensionInfo*) */

undefined8 __thiscall
google::protobuf::internal::GeneratedExtensionFinder::Find
          (GeneratedExtensionFinder *this,int param_1,ExtensionInfo *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  if (DAT_007ea080 == 0) {
    return 0;
  }
  uVar2 = *(ulong *)(DAT_007ea080 + 0x10);
  uVar1 = *(long *)(this + 8) * 0xffff + (long)param_1;
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
  plVar4 = *(long **)(*(long *)(DAT_007ea080 + 8) + (uVar1 - uVar3 * uVar2) * 8);
  if (plVar4 != (long *)0x0) {
    while ((*plVar4 != *(long *)(this + 8) || ((int)plVar4[1] != param_1))) {
      plVar4 = (long *)plVar4[6];
      if (plVar4 == (long *)0x0) {
        return 0;
      }
    }
    if (plVar4 != *(long **)(*(long *)(DAT_007ea080 + 8) + uVar2 * 8)) {
      lVar5 = plVar4[4];
      *(long *)(param_2 + 0x18) = plVar4[5];
      *(long *)(param_2 + 0x10) = lVar5;
      lVar5 = plVar4[2];
      *(long *)(param_2 + 8) = plVar4[3];
      *(long *)param_2 = lVar5;
      return 1;
    }
    return 0;
  }
  return 0;
}


