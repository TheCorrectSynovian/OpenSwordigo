/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00343adc
 * Function: std::_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>::_M_create_node
 * Signature: undefined __thiscall _M_create_node(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<int, std::pair<int const, Caver::Component::OutletBinding>,
   std::_Select1st<std::pair<int const, Caver::Component::OutletBinding> >, std::less<int>,
   std::allocator<std::pair<int const, Caver::Component::OutletBinding> >
   >::_M_create_node(std::pair<int const, Caver::Component::OutletBinding> const&) */

void * __thiscall
std::
_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
::_M_create_node(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                 *this,pair *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x48);
  *(undefined4 *)((long)pvVar1 + 0x20) = *(undefined4 *)param_1;
  *(undefined4 *)((long)pvVar1 + 0x28) = *(undefined4 *)(param_1 + 8);
  FUN_0066a528((long)pvVar1 + 0x30,param_1 + 0x10);
  *(pair *)((long)pvVar1 + 0x40) = param_1[0x20];
  *(undefined8 *)((long)pvVar1 + 0x38) = *(undefined8 *)(param_1 + 0x18);
  return pvVar1;
}


