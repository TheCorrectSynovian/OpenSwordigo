/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bf768
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>>>::_M_create_node
 * Signature: undefined __thiscall _M_create_node(_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, Caver::TargetAction<void (std::string
   const&, boost::shared_ptr<Caver::StoreProduct> const&, std::string const&)> >,
   std::_Select1st<std::pair<std::string const, Caver::TargetAction<void (std::string const&,
   boost::shared_ptr<Caver::StoreProduct> const&, std::string const&)> > >, std::less<std::string >,
   std::allocator<std::pair<std::string const, Caver::TargetAction<void (std::string const&,
   boost::shared_ptr<Caver::StoreProduct> const&, std::string const&)> > >
   >::_M_create_node(std::pair<std::string const, Caver::TargetAction<void (std::string const&,
   boost::shared_ptr<Caver::StoreProduct> const&, std::string const&)> > const&) */

void * __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>>>
::_M_create_node(_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>>>
                 *this,pair *param_1)

{
  void *pvVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005bf7b4 with catch @ 005bf76c
                       catch(type#1 @ 00000000) { ... } // from try @ 005bf898 with catch @ 005bf76c
                        */
  pvVar1 = operator_new(0x58);
  pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>
  ::pair((pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>
          *)((long)pvVar1 + 0x20),param_1);
  return pvVar1;
}


