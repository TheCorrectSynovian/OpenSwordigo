/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bc240
 * Function: Caver::Map::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(Map * this, Map * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Map::SaveToProtobufMessage(Caver::Proto::Map*) const */

void __thiscall Caver::Map::SaveToProtobufMessage(Map *this,Map *param_1)

{
  int iVar1;
  MapZone *this_00;
  MapNode *this_01;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  Map *pMVar6;
  long lVar7;
  MapZone *this_02;
  long lVar8;
  MapNode *this_03;
  
  pMVar6 = *(Map **)(this + 0x60);
  if (this + 0x50 != pMVar6) {
    do {
      this_00 = *(MapZone **)(pMVar6 + 0x28);
      plVar2 = *(long **)(pMVar6 + 0x30);
      if (plVar2 != (long *)0x0) {
        plVar2[1] = plVar2[1] + 1;
      }
      iVar1 = *(int *)(param_1 + 0x18);
      iVar4 = *(int *)(param_1 + 0x1c);
      if (iVar1 < iVar4) {
        *(int *)(param_1 + 0x18) = iVar1 + 1;
        this_02 = *(MapZone **)(*(long *)(param_1 + 0x10) + (long)iVar1 * 8);
      }
      else {
        if (iVar4 == *(int *)(param_1 + 0x20)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0x10),iVar4 + 1);
          iVar4 = *(int *)(param_1 + 0x1c);
        }
        *(int *)(param_1 + 0x1c) = iVar4 + 1;
        this_02 = operator_new(0x70);
        Proto::MapZone::MapZone(this_02);
        iVar1 = *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar1 + 1;
        *(MapZone **)(*(long *)(param_1 + 0x10) + (long)iVar1 * 8) = this_02;
      }
      MapZone::SaveToProtobufMessage(this_00,this_02);
      lVar5 = *(long *)(this_00 + 0x10);
      if (0 < (int)((ulong)(*(long *)(this_00 + 0x18) - lVar5) >> 4)) {
        lVar7 = 0;
        lVar8 = 0;
        do {
          this_01 = *(MapNode **)(lVar5 + lVar7);
          plVar3 = (long *)((undefined8 *)(lVar5 + lVar7))[1];
          if (plVar3 != (long *)0x0) {
            plVar3[1] = plVar3[1] + 1;
          }
          iVar1 = *(int *)(this_02 + 0x28);
          iVar4 = *(int *)(this_02 + 0x2c);
          if (iVar1 < iVar4) {
            *(int *)(this_02 + 0x28) = iVar1 + 1;
            this_03 = *(MapNode **)(*(long *)(this_02 + 0x20) + (long)iVar1 * 8);
          }
          else {
            if (iVar4 == *(int *)(this_02 + 0x30)) {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                        ((RepeatedPtrFieldBase *)(this_02 + 0x20),iVar4 + 1);
              iVar4 = *(int *)(this_02 + 0x2c);
            }
            *(int *)(this_02 + 0x2c) = iVar4 + 1;
            this_03 = operator_new(0x88);
            Proto::MapNode::MapNode(this_03);
            iVar1 = *(int *)(this_02 + 0x28);
            *(int *)(this_02 + 0x28) = iVar1 + 1;
            *(MapNode **)(*(long *)(this_02 + 0x20) + (long)iVar1 * 8) = this_03;
          }
          MapNode::SaveToProtobufMessage(this_01,this_03);
          if ((plVar3 != (long *)0x0) &&
             (lVar5 = plVar3[1], plVar3[1] = lVar5 + -1, lVar5 + -1 == 0)) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            lVar5 = plVar3[2];
            plVar3[2] = lVar5 + -1;
            if (lVar5 + -1 == 0) {
              (**(code **)(*plVar3 + 0x18))(plVar3);
            }
          }
          lVar5 = *(long *)(this_00 + 0x10);
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 0x10;
        } while (lVar8 < (int)((ulong)(*(long *)(this_00 + 0x18) - lVar5) >> 4));
      }
      if ((plVar2 != (long *)0x0) && (lVar5 = plVar2[1], plVar2[1] = lVar5 + -1, lVar5 + -1 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar5 = plVar2[2];
        plVar2[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      pMVar6 = (Map *)FUN_0064c6a0(pMVar6);
    } while (this + 0x50 != pMVar6);
  }
  return;
}


