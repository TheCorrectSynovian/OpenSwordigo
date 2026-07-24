/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bde18
 * Function: boost::detail::sp_counted_impl_p<Caver::MapNode>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::MapNode> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::MapNode>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::MapNode>::dispose(sp_counted_impl_p<Caver::MapNode> *this)

{
  MapNode *this_00;
  
  this_00 = *(MapNode **)(this + 0x18);
  if (this_00 != (MapNode *)0x0) {
    Caver::MapNode::~MapNode(this_00);
                    /* catch() { ... } // from try @ 004bd0b0 with catch @ 004bde34 */
    operator_delete(this_00);
    return;
  }
  return;
}


