/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a58ac
 * Function: std::_Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase_aux
 * Signature: undefined __thiscall _M_erase_aux(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>> * this, _Rb_tree_const_iterator param_1, _Rb_tree_const_iterator param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<unsigned long, std::pair<unsigned long const, boost::shared_ptr<Caver::GUIView> >,
   std::_Select1st<std::pair<unsigned long const, boost::shared_ptr<Caver::GUIView> > >,
   std::less<unsigned long>, std::allocator<std::pair<unsigned long const,
   boost::shared_ptr<Caver::GUIView> > >
   >::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<unsigned long const,
   boost::shared_ptr<Caver::GUIView> > >, std::_Rb_tree_const_iterator<std::pair<unsigned long
   const, boost::shared_ptr<Caver::GUIView> > >) */

void __thiscall
std::
_Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
::_M_erase_aux(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
               *this,_Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
                     *param_2,
              _Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
              *param_3)

{
  _Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
  *p_Var1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  
  if ((this + 8 == param_3) &&
     (*(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
        **)(this + 0x18) == param_2)) {
    _M_erase(this,*(_Rb_tree_node **)(this + 0x10));
    *(undefined8 *)(this + 0x10) = 0;
    *(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
      **)(this + 0x18) = param_3;
    *(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
      **)(this + 0x20) = param_3;
    *(undefined8 *)(this + 0x28) = 0;
  }
  else {
    while (param_2 != param_3) {
      p_Var1 = (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
                *)FUN_0064c6a0(param_2);
      pvVar2 = (void *)FUN_0064ca60(param_2,this + 8);
      plVar4 = *(long **)((long)pvVar2 + 0x30);
      if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar3 = plVar4[2];
                    /* catch() { ... } // from try @ 005a4ffc with catch @ 005a5954
                       catch() { ... } // from try @ 005a5090 with catch @ 005a5954 */
        plVar4[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      operator_delete(pvVar2);
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      param_2 = p_Var1;
    }
  }
  return;
}


