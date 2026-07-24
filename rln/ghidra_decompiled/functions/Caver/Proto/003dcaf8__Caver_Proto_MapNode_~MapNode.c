/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dcaf8
 * Function: Caver::Proto::MapNode::~MapNode
 * Signature: undefined __thiscall ~MapNode(MapNode * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapNode::~MapNode() */

void __thiscall Caver::Proto::MapNode::~MapNode(MapNode *this)

{
  MapNode *pMVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  *(undefined **)this = PTR_vtable_007e68a0 + 0x10;
  SharedDtor(this);
  iVar3 = *(int *)(this + 0x34);
  pMVar1 = *(MapNode **)(this + 0x28);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pMVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x34);
        pMVar1 = *(MapNode **)(this + 0x28);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pMVar1 != this + 0x40) && (pMVar1 != (MapNode *)0x0)) {
    operator_delete__(pMVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


