/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dd59c
 * Function: google::protobuf::internal::ExtensionSet::Swap
 * Signature: undefined __thiscall Swap(ExtensionSet * this, ExtensionSet * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::Swap(google::protobuf::internal::ExtensionSet*) */

void __thiscall
google::protobuf::internal::ExtensionSet::Swap(ExtensionSet *this,ExtensionSet *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(this + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    if (lVar1 != 0) {
      *(long *)(this + 0x10) = lVar1;
      *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
                    /* try { // try from 005dd60c to 006dd633 has its CatchHandler @ 005dd650 */
      *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
      *(ExtensionSet **)(lVar1 + 8) = this + 8;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(ExtensionSet **)(param_1 + 0x18) = param_1 + 8;
      *(ExtensionSet **)(param_1 + 0x20) = param_1 + 8;
    }
  }
  else if (lVar1 == 0) {
    *(long *)(param_1 + 0x10) = lVar2;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(this + 0x20);
    *(ExtensionSet **)(lVar2 + 8) = param_1 + 8;
    *(undefined8 *)(this + 0x10) = 0;
    *(ExtensionSet **)(this + 0x18) = this + 8;
    *(ExtensionSet **)(this + 0x20) = this + 8;
  }
  else {
    *(long *)(this + 0x10) = lVar1;
    *(long *)(param_1 + 0x10) = lVar2;
    uVar3 = *(undefined8 *)(this + 0x18);
                    /* catch() { ... } // from try @ 005dd4e8 with catch @ 005dd5bc */
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
                    /* catch() { ... } // from try @ 005dd550 with catch @ 005dd5c0 */
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x20);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
                    /* catch() { ... } // from try @ 005dd500 with catch @ 005dd5dc */
    *(ExtensionSet **)(*(long *)(this + 0x10) + 8) = this + 8;
    *(ExtensionSet **)(*(long *)(param_1 + 0x10) + 8) = param_1 + 8;
  }
  uVar3 = *(undefined8 *)(this + 0x28);
                    /* catch() { ... } // from try @ 005dd60c with catch @ 005dd650 */
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  return;
}


