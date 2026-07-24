/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dcdf8
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
  ~MapNode(this);
  operator_delete(this);
  return;
}


