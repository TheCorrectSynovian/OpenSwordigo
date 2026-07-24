/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bdd08
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>::_M_create_node
 * Signature: undefined __thiscall _M_create_node(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::shared_ptr<Caver::MapZone> >,
   std::_Select1st<std::pair<std::string const, boost::shared_ptr<Caver::MapZone> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::shared_ptr<Caver::MapZone> > > >::_M_create_node(std::pair<std::string const,
   boost::shared_ptr<Caver::MapZone> > const&) */

void * __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
::_M_create_node(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
                 *this,pair *param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = operator_new(0x38);
  FUN_0066a528((long)pvVar1 + 0x20,param_1);
  *(undefined8 *)((long)pvVar1 + 0x28) = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 004bd3f4 with catch @ 004bdd3c */
  *(long *)((long)pvVar1 + 0x30) = lVar2;
                    /* catch() { ... } // from try @ 004bd188 with catch @ 004bdd40 */
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  return pvVar1;
}


