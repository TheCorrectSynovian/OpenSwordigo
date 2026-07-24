/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d86e0
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_copy
 * Signature: undefined __thiscall _M_copy(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>> * this, _Rb_tree_node * param_1, _Rb_tree_node * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::shared_ptr<Caver::GUIViewLayout>
   >, std::_Select1st<std::pair<std::string const, boost::shared_ptr<Caver::GUIViewLayout> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::shared_ptr<Caver::GUIViewLayout> > > >::_M_copy(std::_Rb_tree_node<std::pair<std::string
   const, boost::shared_ptr<Caver::GUIViewLayout> > > const*,
   std::_Rb_tree_node<std::pair<std::string const, boost::shared_ptr<Caver::GUIViewLayout> > >*) */

_Rb_tree_node * __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
::_M_copy(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
          *this,_Rb_tree_node *param_1,_Rb_tree_node *param_2)

{
  undefined4 uVar1;
  _Rb_tree_node *p_Var2;
  _Rb_tree_node *p_Var3;
  undefined8 uVar4;
  _Rb_tree_node *p_Var5;
  undefined4 *puVar6;
  
  p_Var3 = (_Rb_tree_node *)_M_create_node(this,(pair *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(p_Var3 + 0x10) = 0;
  *(undefined8 *)(p_Var3 + 0x18) = 0;
  *(_Rb_tree_node **)(p_Var3 + 8) = param_2;
  *(undefined4 *)p_Var3 = uVar1;
  if (*(_Rb_tree_node **)(param_1 + 0x18) != (_Rb_tree_node *)0x0) {
    uVar4 = _M_copy(this,*(_Rb_tree_node **)(param_1 + 0x18),p_Var3);
    *(undefined8 *)(p_Var3 + 0x18) = uVar4;
  }
  p_Var2 = p_Var3;
  for (puVar6 = *(undefined4 **)(param_1 + 0x10); puVar6 != (undefined4 *)0x0;
      puVar6 = *(undefined4 **)(puVar6 + 4)) {
    p_Var5 = (_Rb_tree_node *)_M_create_node(this,(pair *)(puVar6 + 8));
    uVar1 = *puVar6;
    *(undefined8 *)(p_Var5 + 0x10) = 0;
    *(undefined8 *)(p_Var5 + 0x18) = 0;
    *(undefined4 *)p_Var5 = uVar1;
    *(_Rb_tree_node **)(p_Var2 + 0x10) = p_Var5;
    *(_Rb_tree_node **)(p_Var5 + 8) = p_Var2;
    if (*(_Rb_tree_node **)(puVar6 + 6) != (_Rb_tree_node *)0x0) {
      uVar4 = _M_copy(this,*(_Rb_tree_node **)(puVar6 + 6),p_Var5);
      *(undefined8 *)(p_Var5 + 0x18) = uVar4;
    }
    p_Var2 = p_Var5;
  }
  return p_Var3;
}


