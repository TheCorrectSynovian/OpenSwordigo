/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047f3ec
 * Function: std::_Deque_base<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_create_nodes
 * Signature: undefined __thiscall _M_create_nodes(_Deque_base<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>> * this, shared_ptr * * param_1, shared_ptr * * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Deque_base<boost::shared_ptr<Caver::Achievement>,
   std::allocator<boost::shared_ptr<Caver::Achievement> >
   >::_M_create_nodes(boost::shared_ptr<Caver::Achievement>**,
   boost::shared_ptr<Caver::Achievement>**) */

_Deque_base<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>
* __thiscall
std::
_Deque_base<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>
::_M_create_nodes(_Deque_base<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>
                  *this,shared_ptr **param_1,shared_ptr **param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    this = operator_new(0x200);
    *param_1 = (shared_ptr *)this;
  }
  return this;
}


