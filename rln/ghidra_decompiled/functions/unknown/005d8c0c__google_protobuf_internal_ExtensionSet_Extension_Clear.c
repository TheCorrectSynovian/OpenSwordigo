/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d8c0c
 * Function: google::protobuf::internal::ExtensionSet::Extension::Clear
 * Signature: undefined __thiscall Clear(Extension * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::Extension::Clear() */

void __thiscall google::protobuf::internal::ExtensionSet::Extension::Clear(Extension *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (this[9] == (Extension)0x0) {
    if (this[10] != (Extension)0x0) {
      return;
    }
                    /* try { // try from 005d8c6c to 006d8c93 has its CatchHandler @ 005d8c9c */
    if (*(int *)(PTR_kFieldTypeToCppTypeMap_007e7828 + (ulong)(byte)this[8] * 4) == 10) {
      (**(code **)(**(long **)this + 0x20))();
    }
    else if (*(int *)(PTR_kFieldTypeToCppTypeMap_007e7828 + (ulong)(byte)this[8] * 4) == 9) {
                    /* try { // try from 005d8c94 to 006d8c9f has its CatchHandler @ 005d8b80 */
                    /* catch() { ... } // from try @ 005d8c6c with catch @ 005d8c9c */
      FUN_00668cb8(*(long **)this,0,*(undefined8 *)(**(long **)this + -0x18),0);
    }
    this[10] = (Extension)0x1;
    return;
  }
                    /* catch() { ... } // from try @ 005d8bec with catch @ 005d8c4c */
  switch(*(undefined4 *)(PTR_kFieldTypeToCppTypeMap_007e7828 + (ulong)(byte)this[8] * 4)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    *(undefined4 *)(*(long *)this + 8) = 0;
    return;
  case 9:
    plVar2 = *(long **)this;
    if (0 < (int)plVar2[1]) {
      lVar3 = 0;
      do {
        plVar1 = *(long **)(*plVar2 + lVar3 * 8);
        FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)plVar2[1]);
    }
    break;
  case 10:
    plVar2 = *(long **)this;
    if (0 < (int)plVar2[1]) {
      lVar3 = 0;
      do {
        (**(code **)(**(long **)(*plVar2 + lVar3 * 8) + 0x20))();
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)plVar2[1]);
    }
    break;
  default:
    goto switchD_005d8c50_default;
  }
  *(undefined4 *)(plVar2 + 1) = 0;
switchD_005d8c50_default:
  return;
}


