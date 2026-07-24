/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a512c
 * Function: std::_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>::_M_erase
 * Signature: undefined __thiscall _M_erase(_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>> * this, _Rb_tree_node * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<unsigned int, unsigned int, std::_Identity<unsigned int>, std::less<unsigned int>,
   std::allocator<unsigned int> >::_M_erase(std::_Rb_tree_node<unsigned int>*) */

void __thiscall
std::
_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
::_M_erase(_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
           *this,_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  
                    /* try { // try from 005a5144 to 006a514b has its CatchHandler @ 005a5758 */
  while (param_1 != (_Rb_tree_node *)0x0) {
                    /* try { // try from 005a514c to 006a515f has its CatchHandler @ 005a5754 */
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
    p_Var1 = *(_Rb_tree_node **)(param_1 + 0x10);
    operator_delete(param_1);
                    /* try { // try from 005a5160 to 006a5173 has its CatchHandler @ 005a5800 */
    param_1 = p_Var1;
  }
                    /* try { // try from 005a5174 to 006a517b has its CatchHandler @ 005a5744 */
  return;
}


