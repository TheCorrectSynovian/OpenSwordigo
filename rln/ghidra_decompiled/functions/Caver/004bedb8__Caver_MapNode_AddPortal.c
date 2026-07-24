/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bedb8
 * Function: Caver::MapNode::AddPortal
 * Signature: undefined __thiscall AddPortal(MapNode * this, Portal * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapNode::AddPortal(Caver::MapNode::Portal const&) */

void __thiscall Caver::MapNode::AddPortal(MapNode *this,Portal *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x38);
  if (lVar1 != *(long *)(this + 0x40)) {
    FUN_0066a528(lVar1,param_1);
    *(undefined2 *)(lVar1 + 0x10) = *(undefined2 *)(param_1 + 0x10);
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 8);
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + 0x18;
    return;
  }
                    /* try { // try from 004bee20 to 005bee47 has its CatchHandler @ 004bef18 */
  std::vector<Caver::MapNode::Portal,std::allocator<Caver::MapNode::Portal>>::_M_insert_aux
            ((vector<Caver::MapNode::Portal,std::allocator<Caver::MapNode::Portal>> *)(this + 0x30),
             lVar1,param_1);
  return;
}


