/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005752d4
 * Function: Caver::SceneObjectGroup::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(SceneObjectGroup * this, SceneObjectGroup * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObjectGroup::SaveToProtobufMessage(Caver::Proto::SceneObjectGroup*) const */

void __thiscall
Caver::SceneObjectGroup::SaveToProtobufMessage(SceneObjectGroup *this,SceneObjectGroup *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  Program *this_00;
  Program *this_01;
  long lVar7;
  
                    /* catch() { ... } // from try @ 00575194 with catch @ 005752d4
                       catch() { ... } // from try @ 005752a4 with catch @ 005752d4 */
  puVar2 = PTR__default_identifier__007e5218;
  plVar3 = *(long **)(param_1 + 0x10);
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1;
  if (plVar3 == (long *)puVar2) {
    plVar3 = operator_new(8);
    *plVar3 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x10) = plVar3;
  }
  FUN_0066a6a8(plVar3,this + 0x20);
  if (0 < *(int *)(this + 0x38)) {
    lVar7 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x20);
      iVar5 = *(int *)(param_1 + 0x24);
      lVar6 = *(long *)(*(long *)(this + 0x40) + lVar7 * 8);
      if (iVar1 < iVar5) {
                    /* try { // try from 00575368 to 00675423 has its CatchHandler @ 00575368
                       catch(type#1 @ 00000000) { ... } // from try @ 00575368 with catch @ 00575368
                       catch(type#1 @ 00000000) { ... } // from try @ 00575460 with catch @ 00575368
                       catch(type#1 @ 00000000) { ... } // from try @ 00575520 with catch @ 00575368
                        */
        *(int *)(param_1 + 0x20) = iVar1 + 1;
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8);
      }
      else {
        if (iVar5 == *(int *)(param_1 + 0x28)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0x18),iVar5 + 1);
          iVar5 = *(int *)(param_1 + 0x24);
        }
        *(int *)(param_1 + 0x24) = iVar5 + 1;
        uVar4 = google::protobuf::internal::StringTypeHandlerBase::New();
        iVar1 = *(int *)(param_1 + 0x20);
        *(int *)(param_1 + 0x20) = iVar1 + 1;
        *(undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8) = uVar4;
      }
      FUN_0066a6a8(uVar4,lVar6 + 0x50);
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(this + 0x38));
  }
  if (this[0x48] != (SceneObjectGroup)0x0) {
    param_1[0x50] = (SceneObjectGroup)0x1;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 4;
  }
  if (this[0x49] != (SceneObjectGroup)0x0) {
    param_1[0x51] = (SceneObjectGroup)0x1;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 8;
  }
  if (this[0x4b] != (SceneObjectGroup)0x0) {
    param_1[0x52] = (SceneObjectGroup)0x1;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x10;
  }
                    /* try { // try from 00575424 to 0067545f has its CatchHandler @ 005754d4 */
  this_00 = *(Program **)(this + 0x28);
  if (this_00 != (Program *)0x0) {
    this_01 = *(Program **)(param_1 + 0x58);
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x20;
    if (this_01 == (Program *)0x0) {
      this_01 = operator_new(0x30);
      Proto::Program::Program(this_01);
      *(Program **)(param_1 + 0x58) = this_01;
    }
                    /* try { // try from 00575460 to 006754f7 has its CatchHandler @ 00575368 */
    Program::SaveToProtobufMessage(this_00,this_01);
    return;
  }
  return;
}


