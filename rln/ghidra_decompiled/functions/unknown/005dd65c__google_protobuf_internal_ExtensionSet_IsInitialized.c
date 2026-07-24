/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dd65c
 * Function: google::protobuf::internal::ExtensionSet::IsInitialized
 * Signature: undefined __thiscall IsInitialized(ExtensionSet * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::IsInitialized() const */

undefined8 __thiscall google::protobuf::internal::ExtensionSet::IsInitialized(ExtensionSet *this)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  ExtensionSet *pEVar4;
  long lVar5;
  
  puVar1 = PTR_kFieldTypeToCppTypeMap_007e7828;
                    /* try { // try from 005dd66c to 006dd6a7 has its CatchHandler @ 005dd66c
                       catch() { ... } // from try @ 005dd66c with catch @ 005dd66c
                       catch() { ... } // from try @ 005dd6fc with catch @ 005dd66c */
  pEVar4 = *(ExtensionSet **)(this + 0x18);
  do {
    if (pEVar4 == this + 8) {
      return 1;
    }
    if (*(int *)(puVar1 + (ulong)(byte)pEVar4[0x30] * 4) == 10) {
      if (pEVar4[0x31] == (ExtensionSet)0x0) {
        if ((pEVar4[0x32] == (ExtensionSet)0x0) &&
           (uVar2 = (**(code **)(**(long **)(pEVar4 + 0x28) + 0x28))(), (uVar2 & 1) == 0)) {
          return 0;
        }
      }
      else {
        plVar3 = *(long **)(pEVar4 + 0x28);
                    /* try { // try from 005dd6a8 to 006dd6bb has its CatchHandler @ 005dd7d8 */
        if (0 < (int)plVar3[1]) {
          lVar5 = 0;
          do {
                    /* try { // try from 005dd6bc to 006dd6fb has its CatchHandler @ 005dd7e0 */
            uVar2 = (**(code **)(**(long **)(*plVar3 + lVar5 * 8) + 0x28))();
            if ((uVar2 & 1) == 0) {
              return 0;
            }
            plVar3 = *(long **)(pEVar4 + 0x28);
            lVar5 = lVar5 + 1;
          } while (lVar5 < (int)plVar3[1]);
        }
      }
    }
                    /* try { // try from 005dd6fc to 006dd8ab has its CatchHandler @ 005dd66c */
    pEVar4 = (ExtensionSet *)FUN_0064c6a0(pEVar4);
  } while( true );
}


