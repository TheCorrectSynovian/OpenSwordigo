/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b040c
 * Function: Caver::GameData::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(GameData * this, GameData * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameData::SaveToProtobufMessage(Caver::Proto::GameData*) const */

void __thiscall Caver::GameData::SaveToProtobufMessage(GameData *this,GameData *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  GameData *pGVar4;
  GuideTarget *this_00;
  Skill *this_01;
  Quest *this_02;
  GuideTarget *this_03;
  Item *this_04;
  Skill *this_05;
  Quest *this_06;
  EntityClass *this_07;
  undefined8 *puVar5;
  Item *this_08;
  EntityClass *this_09;
  
  pGVar4 = *(GameData **)(this + 0x18);
                    /* catch() { ... } // from try @ 004afd9c with catch @ 004b0434 */
  if (this + 8 != pGVar4) {
    do {
      iVar1 = *(int *)(param_1 + 0x18);
      iVar3 = *(int *)(param_1 + 0x1c);
      this_04 = *(Item **)(pGVar4 + 0x28);
      if (iVar1 < iVar3) {
        *(int *)(param_1 + 0x18) = iVar1 + 1;
        this_08 = *(Item **)(*(long *)(param_1 + 0x10) + (long)iVar1 * 8);
      }
      else {
                    /* catch() { ... } // from try @ 004afd78 with catch @ 004b046c */
                    /* catch() { ... } // from try @ 004afd1c with catch @ 004b0470 */
        if (iVar3 == *(int *)(param_1 + 0x20)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0x10),iVar3 + 1);
          iVar3 = *(int *)(param_1 + 0x1c);
        }
        *(int *)(param_1 + 0x1c) = iVar3 + 1;
        this_08 = operator_new(0x48);
        Proto::Item::Item(this_08);
        iVar1 = *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar1 + 1;
        *(Item **)(*(long *)(param_1 + 0x10) + (long)iVar1 * 8) = this_08;
      }
      Item::SaveToProtobufMessage(this_04,this_08);
      pGVar4 = (GameData *)FUN_0064c6a0(pGVar4);
                    /* catch() { ... } // from try @ 004afcf0 with catch @ 004b04cc */
    } while (this + 8 != pGVar4);
  }
  puVar5 = *(undefined8 **)(this + 0x30);
  puVar2 = *(undefined8 **)(this + 0x38);
  if (puVar5 != puVar2) {
    do {
      iVar1 = *(int *)(param_1 + 0x50);
      iVar3 = *(int *)(param_1 + 0x54);
      this_01 = (Skill *)*puVar5;
      if (iVar1 < iVar3) {
        *(int *)(param_1 + 0x50) = iVar1 + 1;
        this_05 = *(Skill **)(*(long *)(param_1 + 0x48) + (long)iVar1 * 8);
                    /* catch() { ... } // from try @ 004afccc with catch @ 004b0504 */
      }
      else {
                    /* catch() { ... } // from try @ 004afc70 with catch @ 004b0508 */
        if (iVar3 == *(int *)(param_1 + 0x58)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0x48),iVar3 + 1);
          iVar3 = *(int *)(param_1 + 0x54);
        }
        *(int *)(param_1 + 0x54) = iVar3 + 1;
        this_05 = operator_new(0x38);
        Proto::Skill::Skill(this_05);
        iVar1 = *(int *)(param_1 + 0x50);
        *(int *)(param_1 + 0x50) = iVar1 + 1;
        *(Skill **)(*(long *)(param_1 + 0x48) + (long)iVar1 * 8) = this_05;
      }
      Skill::SaveToProtobufMessage(this_01,this_05);
      puVar5 = puVar5 + 2;
                    /* catch() { ... } // from try @ 004afc44 with catch @ 004b0564 */
    } while (puVar2 != puVar5);
  }
  puVar5 = *(undefined8 **)(this + 0x88);
  puVar2 = *(undefined8 **)(this + 0x90);
  if (puVar5 != puVar2) {
    do {
      iVar1 = *(int *)(param_1 + 0x88);
      iVar3 = *(int *)(param_1 + 0x8c);
      this_02 = (Quest *)*puVar5;
      if (iVar1 < iVar3) {
        *(int *)(param_1 + 0x88) = iVar1 + 1;
        this_06 = *(Quest **)(*(long *)(param_1 + 0x80) + (long)iVar1 * 8);
                    /* catch() { ... } // from try @ 004afc20 with catch @ 004b059c */
      }
      else {
                    /* catch() { ... } // from try @ 004afbc4 with catch @ 004b05a0 */
        if (iVar3 == *(int *)(param_1 + 0x90)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0x80),iVar3 + 1);
          iVar3 = *(int *)(param_1 + 0x8c);
        }
        *(int *)(param_1 + 0x8c) = iVar3 + 1;
        this_06 = operator_new(0x38);
        Proto::Quest::Quest(this_06);
        iVar1 = *(int *)(param_1 + 0x88);
        *(int *)(param_1 + 0x88) = iVar1 + 1;
        *(Quest **)(*(long *)(param_1 + 0x80) + (long)iVar1 * 8) = this_06;
      }
      Quest::SaveToProtobufMessage(this_02,this_06);
      puVar5 = puVar5 + 2;
                    /* catch() { ... } // from try @ 004afb98 with catch @ 004b05fc */
    } while (puVar2 != puVar5);
  }
  pGVar4 = *(GameData **)(this + 0xb8);
  if (this + 0xa8 != pGVar4) {
    do {
      iVar1 = *(int *)(param_1 + 0xc0);
      iVar3 = *(int *)(param_1 + 0xc4);
      this_07 = *(EntityClass **)(pGVar4 + 0x28);
      if (iVar1 < iVar3) {
        *(int *)(param_1 + 0xc0) = iVar1 + 1;
                    /* catch() { ... } // from try @ 004afb74 with catch @ 004b0634 */
        this_09 = *(EntityClass **)(*(long *)(param_1 + 0xb8) + (long)iVar1 * 8);
                    /* catch() { ... } // from try @ 004afb18 with catch @ 004b0638 */
      }
      else {
        if (iVar3 == *(int *)(param_1 + 200)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0xb8),iVar3 + 1);
          iVar3 = *(int *)(param_1 + 0xc4);
        }
        *(int *)(param_1 + 0xc4) = iVar3 + 1;
        this_09 = operator_new(0x30);
        Proto::EntityClass::EntityClass(this_09);
        iVar1 = *(int *)(param_1 + 0xc0);
        *(int *)(param_1 + 0xc0) = iVar1 + 1;
        *(EntityClass **)(*(long *)(param_1 + 0xb8) + (long)iVar1 * 8) = this_09;
      }
      EntityClass::SaveToProtobufMessage(this_07,this_09);
                    /* catch() { ... } // from try @ 004afae4 with catch @ 004b0694 */
      pGVar4 = (GameData *)FUN_0064c6a0(pGVar4);
    } while (this + 0xa8 != pGVar4);
  }
  puVar5 = *(undefined8 **)(this + 0xd0);
  puVar2 = *(undefined8 **)(this + 0xd8);
  if (puVar5 != puVar2) {
    do {
      iVar1 = *(int *)(param_1 + 0xf8);
      iVar3 = *(int *)(param_1 + 0xfc);
      this_00 = (GuideTarget *)*puVar5;
      if (iVar1 < iVar3) {
                    /* catch() { ... } // from try @ 004afac0 with catch @ 004b06cc */
                    /* catch() { ... } // from try @ 004afa64 with catch @ 004b06d0 */
        *(int *)(param_1 + 0xf8) = iVar1 + 1;
        this_03 = *(GuideTarget **)(*(long *)(param_1 + 0xf0) + (long)iVar1 * 8);
      }
      else {
        if (iVar3 == *(int *)(param_1 + 0x100)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0xf0),iVar3 + 1);
          iVar3 = *(int *)(param_1 + 0xfc);
        }
        *(int *)(param_1 + 0xfc) = iVar3 + 1;
        this_03 = operator_new(0x78);
        Proto::GuideTarget::GuideTarget(this_03);
        iVar1 = *(int *)(param_1 + 0xf8);
        *(int *)(param_1 + 0xf8) = iVar1 + 1;
        *(GuideTarget **)(*(long *)(param_1 + 0xf0) + (long)iVar1 * 8) = this_03;
      }
                    /* catch() { ... } // from try @ 004afa30 with catch @ 004b072c */
      GuideTarget::SaveToProtobufMessage(this_00,this_03);
      puVar5 = puVar5 + 2;
    } while (puVar2 != puVar5);
  }
  return;
}


