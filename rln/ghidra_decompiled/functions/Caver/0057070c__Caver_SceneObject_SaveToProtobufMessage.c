/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057070c
 * Function: Caver::SceneObject::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(SceneObject * this, SceneObject * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::SaveToProtobufMessage(Caver::Proto::SceneObject*) const */

void __thiscall Caver::SceneObject::SaveToProtobufMessage(SceneObject *this,SceneObject *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  SceneObject SVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  Program *this_00;
  Vector2 *this_01;
  Rectangle *this_02;
  Program *this_03;
  Component *this_04;
  undefined8 *puVar12;
  code *pcVar13;
  
  puVar6 = PTR__default_template_name__007e5070;
  lVar10 = *(long *)(this + 0x48);
  if (lVar10 != 0) {
    plVar7 = *(long **)(param_1 + 0x10);
                    /* try { // try from 00570748 to 00670777 has its CatchHandler @ 00570748
                       catch() { ... } // from try @ 00570748 with catch @ 00570748
                       catch() { ... } // from try @ 0057077c with catch @ 00570748
                       catch() { ... } // from try @ 0057085c with catch @ 00570748
                       catch() { ... } // from try @ 00570918 with catch @ 00570748
                       catch() { ... } // from try @ 005709a8 with catch @ 00570748
                       catch() { ... } // from try @ 00570a38 with catch @ 00570748
                       catch() { ... } // from try @ 00570aa0 with catch @ 00570748
                       catch() { ... } // from try @ 00570b50 with catch @ 00570748
                       catch() { ... } // from try @ 00570cec with catch @ 00570748
                       catch() { ... } // from try @ 00570d28 with catch @ 00570748
                       catch() { ... } // from try @ 00570d64 with catch @ 00570748
                       catch() { ... } // from try @ 00570dbc with catch @ 00570748 */
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
    if (plVar7 == (long *)puVar6) {
      plVar7 = operator_new(8);
      *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(param_1 + 0x10) = plVar7;
    }
                    /* try { // try from 00570778 to 0067077b has its CatchHandler @ 00570dc8 */
    FUN_0066a6a8(plVar7,lVar10 + 0x50);
  }
                    /* try { // try from 0057077c to 00670853 has its CatchHandler @ 00570748 */
  puVar6 = PTR__default_identifier__007e5320;
  if (*(long *)(*(long *)(this + 0x50) + -0x18) != 0) {
    plVar7 = *(long **)(param_1 + 0x18);
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 2;
    if (plVar7 == (long *)puVar6) {
      plVar7 = operator_new(8);
      *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(param_1 + 0x18) = plVar7;
    }
    FUN_0066a6a8(plVar7,this + 0x50);
  }
  puVar12 = *(undefined8 **)(this + 0xc0);
  puVar2 = *(undefined8 **)(this + 200);
  if (puVar12 != puVar2) {
    do {
      plVar7 = (long *)*puVar12;
      if (plVar7 != (long *)0x0) {
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      }
      if (((char)plVar7[6] == '\0') &&
         (uVar8 = (**(code **)(*plVar7 + 0x30))(plVar7), (uVar8 & 1) != 0)) {
        iVar1 = *(int *)(param_1 + 0x28);
        iVar9 = *(int *)(param_1 + 0x2c);
        pcVar13 = *(code **)(*plVar7 + 0x28);
        if (iVar1 < iVar9) {
          *(int *)(param_1 + 0x28) = iVar1 + 1;
          this_04 = *(Component **)(*(long *)(param_1 + 0x20) + (long)iVar1 * 8);
        }
        else {
          if (iVar9 == *(int *)(param_1 + 0x30)) {
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                      ((RepeatedPtrFieldBase *)(param_1 + 0x20),iVar9 + 1);
                    /* try { // try from 00570854 to 0067085b has its CatchHandler @ 00570d70 */
            iVar9 = *(int *)(param_1 + 0x2c);
          }
                    /* try { // try from 0057085c to 00670903 has its CatchHandler @ 00570748 */
          *(int *)(param_1 + 0x2c) = iVar9 + 1;
          this_04 = operator_new(0x60);
          Proto::Component::Component(this_04);
          iVar1 = *(int *)(param_1 + 0x28);
          *(int *)(param_1 + 0x28) = iVar1 + 1;
          *(Component **)(*(long *)(param_1 + 0x20) + (long)iVar1 * 8) = this_04;
        }
        (*pcVar13)(plVar7,this_04);
      }
      iVar1 = (int)plVar7[1] + -1;
      *(int *)(plVar7 + 1) = iVar1;
      if (iVar1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      puVar12 = puVar12 + 1;
    } while (puVar2 != puVar12);
  }
  this_01 = *(Vector2 **)(param_1 + 0x58);
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 8;
  if (this_01 == (Vector2 *)0x0) {
    this_01 = operator_new(0x18);
    Proto::Vector2::Vector2(this_01);
    *(Vector2 **)(param_1 + 0x58) = this_01;
  }
  *(undefined8 *)(this_01 + 0xc) = *(undefined8 *)(this + 0x70);
  *(uint *)(this_01 + 0x14) = *(uint *)(this_01 + 0x14) | 3;
                    /* try { // try from 00570904 to 00670917 has its CatchHandler @ 00570d34 */
  this_02 = *(Rectangle **)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(this + 0x78);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(this + 0x80);
                    /* try { // try from 00570918 to 00670993 has its CatchHandler @ 00570748 */
  uVar3 = *(undefined4 *)(this + 0x88);
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0xf0;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  if (this_02 == (Rectangle *)0x0) {
    this_02 = operator_new(0x20);
    Proto::Rectangle::Rectangle(this_02);
    *(Rectangle **)(param_1 + 0x70) = this_02;
  }
  *(undefined8 *)(this_02 + 0xc) = *(undefined8 *)(this + 0x94);
  uVar11 = *(undefined8 *)(this + 0x9c);
  *(uint *)(this_02 + 0x1c) = *(uint *)(this_02 + 0x1c) | 0xf;
  *(undefined8 *)(this_02 + 0x14) = uVar11;
  uVar4 = *(uint *)(param_1 + 0x88);
  SVar5 = this[0xf4];
  *(uint *)(param_1 + 0x88) = uVar4 | 0x100;
  *(SceneObject *)(param_1 + 0x78) = SVar5;
  this_00 = *(Program **)(this + 0x58);
  if (this_00 != (Program *)0x0) {
    this_03 = *(Program **)(param_1 + 0x80);
    *(uint *)(param_1 + 0x88) = uVar4 | 0x300;
    if (this_03 == (Program *)0x0) {
      this_03 = operator_new(0x30);
      Proto::Program::Program(this_03);
                    /* try { // try from 00570994 to 006709a7 has its CatchHandler @ 00570cf8 */
      *(Program **)(param_1 + 0x80) = this_03;
    }
                    /* try { // try from 005709a8 to 00670a23 has its CatchHandler @ 00570748 */
    Program::SaveToProtobufMessage(this_00,this_03);
    return;
  }
  return;
}


