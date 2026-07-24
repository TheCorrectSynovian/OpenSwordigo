/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004be510
 * Function: std::_Deque_base<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_create_nodes
 * Signature: undefined __thiscall _M_create_nodes(_Deque_base<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>> * this, shared_ptr * * param_1, shared_ptr * * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Deque_base<boost::shared_ptr<Caver::MapNode>,
   std::allocator<boost::shared_ptr<Caver::MapNode> >
   >::_M_create_nodes(boost::shared_ptr<Caver::MapNode>**, boost::shared_ptr<Caver::MapNode>**) */

_Deque_base<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>> *
__thiscall
std::
_Deque_base<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::
_M_create_nodes(_Deque_base<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>
                *this,shared_ptr **param_1,shared_ptr **param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    this = operator_new(0x200);
    *param_1 = (shared_ptr *)this;
                    /* try { // try from 004be540 to 005be543 has its CatchHandler @ 004be5d0 */
  }
  return this;
}


