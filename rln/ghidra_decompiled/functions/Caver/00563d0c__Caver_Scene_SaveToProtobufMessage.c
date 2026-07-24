/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00563d0c
 * Function: Caver::Scene::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(Scene * this, Scene * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::SaveToProtobufMessage(Caver::Proto::Scene*) const */

void __thiscall Caver::Scene::SaveToProtobufMessage(Scene *this,Scene *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Program *this_00;
  Rectangle *this_01;
  ObjectLibrary *this_02;
  Scene *pSVar4;
  Program *this_03;
  ObjectLibrary *this_04;
  SceneObject *this_05;
  SceneObjectGroup *this_06;
  SceneObject *this_07;
  SceneObjectGroup *this_08;
  
  this_01 = *(Rectangle **)(param_1 + 0x88);
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 8;
  if (this_01 == (Rectangle *)0x0) {
    this_01 = operator_new(0x20);
    Proto::Rectangle::Rectangle(this_01);
    *(Rectangle **)(param_1 + 0x88) = this_01;
  }
  *(undefined8 *)(this_01 + 0xc) = *(undefined8 *)(this + 0x90);
  uVar3 = *(undefined8 *)(this + 0x98);
  *(uint *)(this_01 + 0x1c) = *(uint *)(this_01 + 0x1c) | 0xf;
  *(undefined8 *)(this_01 + 0x14) = uVar3;
  this_04 = *(ObjectLibrary **)(param_1 + 0x80);
  this_02 = *(ObjectLibrary **)(this + 0xa0);
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 4;
  if (this_04 == (ObjectLibrary *)0x0) {
    this_04 = operator_new(0x100);
    Proto::ObjectLibrary::ObjectLibrary(this_04);
    *(ObjectLibrary **)(param_1 + 0x80) = this_04;
  }
  ObjectLibrary::SaveToProtobufMessage(this_02,this_04);
  pSVar4 = *(Scene **)(this + 200);
  if (this + 0xb8 != pSVar4) {
    do {
      this_05 = *(SceneObject **)(pSVar4 + 0x28);
      if (this_05 != (SceneObject *)0x0) {
        *(int *)(this_05 + 8) = *(int *)(this_05 + 8) + 1;
      }
      if (this_05[0x18] != (SceneObject)0x0) {
        iVar1 = *(int *)(param_1 + 0x18);
        iVar2 = *(int *)(param_1 + 0x1c);
        if (iVar1 < iVar2) {
          *(int *)(param_1 + 0x18) = iVar1 + 1;
          this_07 = *(SceneObject **)(*(long *)(param_1 + 0x10) + (long)iVar1 * 8);
        }
        else {
          if (iVar2 == *(int *)(param_1 + 0x20)) {
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                      ((RepeatedPtrFieldBase *)(param_1 + 0x10),iVar2 + 1);
            iVar2 = *(int *)(param_1 + 0x1c);
          }
          *(int *)(param_1 + 0x1c) = iVar2 + 1;
          this_07 = operator_new(0x90);
          Proto::SceneObject::SceneObject(this_07);
          iVar1 = *(int *)(param_1 + 0x18);
          *(int *)(param_1 + 0x18) = iVar1 + 1;
          *(SceneObject **)(*(long *)(param_1 + 0x10) + (long)iVar1 * 8) = this_07;
        }
        SceneObject::SaveToProtobufMessage(this_05,this_07);
      }
      iVar1 = *(int *)(this_05 + 8);
      *(int *)(this_05 + 8) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00563c18 with catch @ 00563e68
                        */
        (**(code **)(*(long *)this_05 + 8))(this_05);
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00563bac with catch @ 00563e74
                        */
      pSVar4 = (Scene *)FUN_0064c6a0(pSVar4);
    } while (this + 0xb8 != pSVar4);
  }
  pSVar4 = *(Scene **)(this + 0xf8);
                    /* try { // try from 00563e94 to 00663ebb has its CatchHandler @ 00563ec4 */
  if (this + 0xe8 != pSVar4) {
    do {
      this_06 = *(SceneObjectGroup **)(pSVar4 + 0x28);
      if (this_06 != (SceneObjectGroup *)0x0) {
        *(int *)(this_06 + 8) = *(int *)(this_06 + 8) + 1;
      }
      if (this_06[0x4a] != (SceneObjectGroup)0x0) {
        iVar1 = *(int *)(param_1 + 0x50);
        iVar2 = *(int *)(param_1 + 0x54);
                    /* try { // try from 00563ebc to 00663ec7 has its CatchHandler @ 00563aec */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00563e94 with catch @ 00563ec4
                        */
        if (iVar1 < iVar2) {
                    /* catch() { ... } // from try @ 00563f78 with catch @ 00563ec8 */
          *(int *)(param_1 + 0x50) = iVar1 + 1;
          this_08 = *(SceneObjectGroup **)(*(long *)(param_1 + 0x48) + (long)iVar1 * 8);
        }
        else {
                    /* try { // try from 00563ee0 to 00663ee7 has its CatchHandler @ 00563f84 */
          if (iVar2 == *(int *)(param_1 + 0x58)) {
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                      ((RepeatedPtrFieldBase *)(param_1 + 0x48),iVar2 + 1);
            iVar2 = *(int *)(param_1 + 0x54);
          }
          *(int *)(param_1 + 0x54) = iVar2 + 1;
          this_08 = operator_new(0x68);
          Proto::SceneObjectGroup::SceneObjectGroup(this_08);
                    /* try { // try from 00563f14 to 00663f1f has its CatchHandler @ 00563f2c */
          iVar1 = *(int *)(param_1 + 0x50);
          *(int *)(param_1 + 0x50) = iVar1 + 1;
          *(SceneObjectGroup **)(*(long *)(param_1 + 0x48) + (long)iVar1 * 8) = this_08;
        }
                    /* catch() { ... } // from try @ 00563f14 with catch @ 00563f2c */
        SceneObjectGroup::SaveToProtobufMessage(this_06,this_08);
      }
      iVar1 = *(int *)(this_06 + 8);
      *(int *)(this_06 + 8) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
                    /* try { // try from 00563f50 to 00663f77 has its CatchHandler @ 00563f80 */
        (**(code **)(*(long *)this_06 + 8))(this_06);
      }
      pSVar4 = (Scene *)FUN_0064c6a0(pSVar4);
    } while (this + 0xe8 != pSVar4);
  }
  this_00 = *(Program **)(this + 0x80);
  if (this_00 != (Program *)0x0) {
    this_03 = *(Program **)(param_1 + 0x90);
                    /* try { // try from 00563f78 to 00663f93 has its CatchHandler @ 00563ec8 */
    *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 0x10;
                    /* catch() { ... } // from try @ 00563f50 with catch @ 00563f80 */
    if (this_03 == (Program *)0x0) {
                    /* catch() { ... } // from try @ 00563ee0 with catch @ 00563f84 */
      this_03 = operator_new(0x30);
      Proto::Program::Program(this_03);
                    /* try { // try from 00563f94 to 00663f9f has its CatchHandler @ 00563fa0 */
      *(Program **)(param_1 + 0x90) = this_03;
    }
                    /* catch() { ... } // from try @ 00563f94 with catch @ 00563fa0 */
                    /* try { // try from 00563fa4 to 00663fa7 has its CatchHandler @ 00563fac */
                    /* catch() { ... } // from try @ 00563fa4 with catch @ 00563fac */
    Program::SaveToProtobufMessage(this_00,this_03);
    return;
  }
  return;
}


