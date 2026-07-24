/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052963c
 * Function: Caver::MapViewNode::InitWithMapNode
 * Signature: undefined __thiscall InitWithMapNode(MapViewNode * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapViewNode::InitWithMapNode(boost::shared_ptr<Caver::MapNode> const&) */

void __thiscall Caver::MapViewNode::InitWithMapNode(MapViewNode *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = *(undefined8 *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 8);
  *(undefined8 *)this = uVar1;
  *(long *)(this + 8) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005296b0 with catch @ 00529680 */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* try { // try from 0052969c to 006296af has its CatchHandler @ 005296d4 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
                    /* try { // try from 005296b0 to 006296d7 has its CatchHandler @ 00529680 */
  *(undefined4 *)(this + 0x2c) = 0x41800000;
  return;
}


