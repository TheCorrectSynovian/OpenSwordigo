/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055cab0
 * Function: Caver::ObjectLibrary::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(ObjectLibrary * this, ObjectLibrary * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::SaveToProtobufMessage(Caver::Proto::ObjectLibrary*) const */

void __thiscall
Caver::ObjectLibrary::SaveToProtobufMessage(ObjectLibrary *this,ObjectLibrary *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  ObjectLibrary *pOVar7;
  Program *this_00;
  undefined8 *puVar8;
  Program *this_01;
  ObjectTemplate *this_02;
  ObjectTemplate *pOVar9;
  ObjectTemplate *this_03;
  
  puVar3 = PTR__default_name__007e6d40;
  if (*(long *)(*(long *)this + -0x18) != 0) {
    plVar4 = *(long **)(param_1 + 0x10);
    *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) | 1;
                    /* catch() { ... } // from try @ 0055c3a4 with catch @ 0055caf4 */
    if (plVar4 == (long *)puVar3) {
      plVar4 = operator_new(8);
      *plVar4 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(param_1 + 0x10) = plVar4;
    }
                    /* try { // try from 0055cb1c to 0065cb53 has its CatchHandler @ 0055c2e4 */
    FUN_0066a6a8(plVar4,this);
  }
                    /* catch() { ... } // from try @ 0055c384 with catch @ 0055cb20 */
  puVar8 = *(undefined8 **)(this + 0x68);
  puVar2 = *(undefined8 **)(this + 0x70);
  if (puVar8 != puVar2) {
    do {
      iVar1 = *(int *)(param_1 + 200);
      iVar6 = *(int *)(param_1 + 0xcc);
                    /* catch() { ... } // from try @ 0055c328 with catch @ 0055cb34 */
      this_00 = (Program *)*puVar8;
      if (iVar1 < iVar6) {
        *(int *)(param_1 + 200) = iVar1 + 1;
        this_01 = *(Program **)(*(long *)(param_1 + 0xc0) + (long)iVar1 * 8);
                    /* try { // try from 0055cb54 to 0065cc37 has its CatchHandler @ 0055cc40 */
      }
      else {
        if (iVar6 == *(int *)(param_1 + 0xd0)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0xc0),iVar6 + 1);
          iVar6 = *(int *)(param_1 + 0xcc);
        }
        *(int *)(param_1 + 0xcc) = iVar6 + 1;
                    /* catch() { ... } // from try @ 0055c474 with catch @ 0055cb80 */
        this_01 = operator_new(0x30);
        Proto::Program::Program(this_01);
        iVar1 = *(int *)(param_1 + 200);
        *(int *)(param_1 + 200) = iVar1 + 1;
        *(Program **)(*(long *)(param_1 + 0xc0) + (long)iVar1 * 8) = this_01;
      }
      Program::SaveToProtobufMessage(this_00,this_01);
      puVar8 = puVar8 + 2;
    } while (puVar2 != puVar8);
  }
  pOVar7 = *(ObjectLibrary **)(this + 0x20);
  if (pOVar7 != this + 0x10) {
    do {
      this_02 = *(ObjectTemplate **)(pOVar7 + 0x38);
      if (this_02 == (ObjectTemplate *)0x0) {
        iVar1 = *(int *)(param_1 + 0x20);
        iVar6 = *(int *)(param_1 + 0x24);
        pOVar9 = *(ObjectTemplate **)(pOVar7 + 0x28);
        if (iVar1 < iVar6) {
          *(int *)(param_1 + 0x20) = iVar1 + 1;
          this_03 = *(ObjectTemplate **)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8);
        }
        else {
          if (iVar6 == *(int *)(param_1 + 0x28)) {
                    /* try { // try from 0055cc88 to 0065cc93 has its CatchHandler @ 0055ce5c */
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                      ((RepeatedPtrFieldBase *)(param_1 + 0x18),iVar6 + 1);
            iVar6 = *(int *)(param_1 + 0x24);
          }
                    /* try { // try from 0055cc94 to 0065ccdf has its CatchHandler @ 0055cc44 */
          *(int *)(param_1 + 0x24) = iVar6 + 1;
          this_03 = operator_new(0x20);
          Proto::ObjectTemplate::ObjectTemplate(this_03);
          iVar1 = *(int *)(param_1 + 0x20);
          *(int *)(param_1 + 0x20) = iVar1 + 1;
          *(ObjectTemplate **)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8) = this_03;
        }
        Proto::ObjectTemplate::CopyFrom(this_03,pOVar9);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x20);
        iVar6 = *(int *)(param_1 + 0x24);
        if (iVar1 < iVar6) {
                    /* catch() { ... } // from try @ 0055c450 with catch @ 0055cbec
                       catch() { ... } // from try @ 0055c4c8 with catch @ 0055cbec
                       catch() { ... } // from try @ 0055c588 with catch @ 0055cbec
                       catch() { ... } // from try @ 0055c644 with catch @ 0055cbec */
          *(int *)(param_1 + 0x20) = iVar1 + 1;
          pOVar9 = *(ObjectTemplate **)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8);
        }
        else {
          if (iVar6 == *(int *)(param_1 + 0x28)) {
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                      ((RepeatedPtrFieldBase *)(param_1 + 0x18),iVar6 + 1);
                    /* try { // try from 0055cc38 to 0065cc43 has its CatchHandler @ 0055c2e4 */
            iVar6 = *(int *)(param_1 + 0x24);
          }
                    /* catch() { ... } // from try @ 0055c8c4 with catch @ 0055cc40
                       catch() { ... } // from try @ 0055cb54 with catch @ 0055cc40 */
                    /* try { // try from 0055cc44 to 0065cc6f has its CatchHandler @ 0055cc44
                       catch() { ... } // from try @ 0055cc44 with catch @ 0055cc44
                       catch() { ... } // from try @ 0055cc94 with catch @ 0055cc44
                       catch() { ... } // from try @ 0055cd44 with catch @ 0055cc44
                       catch() { ... } // from try @ 0055ce54 with catch @ 0055cc44 */
          *(int *)(param_1 + 0x24) = iVar6 + 1;
          pOVar9 = operator_new(0x20);
          Proto::ObjectTemplate::ObjectTemplate(pOVar9);
          iVar1 = *(int *)(param_1 + 0x20);
          *(int *)(param_1 + 0x20) = iVar1 + 1;
          *(ObjectTemplate **)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8) = pOVar9;
        }
                    /* try { // try from 0055cc70 to 0065cc83 has its CatchHandler @ 0055cec4 */
        ObjectTemplate::SaveToProtobufMessage(this_02,pOVar9);
      }
      pOVar7 = (ObjectLibrary *)FUN_0064c6a0(pOVar7);
    } while (pOVar7 != this + 0x10);
  }
                    /* try { // try from 0055cce0 to 0065cceb has its CatchHandler @ 0055ce0c */
  puVar8 = *(undefined8 **)(this + 0x38);
  puVar2 = *(undefined8 **)(this + 0x40);
  if (puVar8 != puVar2) {
    do {
      plVar4 = (long *)*puVar8;
      if (*(long *)(*plVar4 + -0x18) != 0) {
        iVar1 = *(int *)(param_1 + 0x58);
        iVar6 = *(int *)(param_1 + 0x5c);
                    /* try { // try from 0055cd08 to 0065cd43 has its CatchHandler @ 0055cec8 */
        if (iVar1 < iVar6) {
          *(int *)(param_1 + 0x58) = iVar1 + 1;
          uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x50) + (long)iVar1 * 8);
        }
        else {
          if (iVar6 == *(int *)(param_1 + 0x60)) {
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                      ((RepeatedPtrFieldBase *)(param_1 + 0x50),iVar6 + 1);
            iVar6 = *(int *)(param_1 + 0x5c);
          }
                    /* try { // try from 0055cd44 to 0065ce2b has its CatchHandler @ 0055cc44 */
          *(int *)(param_1 + 0x5c) = iVar6 + 1;
          uVar5 = google::protobuf::internal::StringTypeHandlerBase::New();
          iVar1 = *(int *)(param_1 + 0x58);
          *(int *)(param_1 + 0x58) = iVar1 + 1;
          *(undefined8 *)(*(long *)(param_1 + 0x50) + (long)iVar1 * 8) = uVar5;
        }
        FUN_0066a6a8(uVar5,plVar4);
      }
      puVar8 = puVar8 + 2;
    } while (puVar2 != puVar8);
  }
  return;
}


