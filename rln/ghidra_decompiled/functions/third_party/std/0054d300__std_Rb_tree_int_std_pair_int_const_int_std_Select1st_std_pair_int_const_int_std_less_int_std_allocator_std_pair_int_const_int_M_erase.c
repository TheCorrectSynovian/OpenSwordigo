/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054d300
 * Function: std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>::_M_erase
 * Signature: undefined __thiscall _M_erase(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>> * this, _Rb_tree_node * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_erase(std::_Rb_tree_node<std::pair<int const, int> >*) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_erase(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this,_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  
                    /* try { // try from 0054d318 to 0064d44b has its CatchHandler @ 0054d22c */
  while (param_1 != (_Rb_tree_node *)0x0) {
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
    p_Var1 = *(_Rb_tree_node **)(param_1 + 0x10);
    operator_delete(param_1);
    param_1 = p_Var1;
  }
  return;
}


