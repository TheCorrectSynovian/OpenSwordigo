/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056be88
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_create_node
 * Signature: undefined __thiscall _M_create_node(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const,
   boost::intrusive_ptr<Caver::SceneObjectGroup> >, std::_Select1st<std::pair<std::string const,
   boost::intrusive_ptr<Caver::SceneObjectGroup> > >, std::less<std::string >,
   std::allocator<std::pair<std::string const, boost::intrusive_ptr<Caver::SceneObjectGroup> > >
   >::_M_create_node(std::pair<std::string const, boost::intrusive_ptr<Caver::SceneObjectGroup> >
   const&) */

void * __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
::_M_create_node(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                 *this,pair *param_1)

{
  void *pvVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 0056bb60 with catch @ 0056be8c
                       catch() { ... } // from try @ 0056bbe0 with catch @ 0056be8c
                       catch() { ... } // from try @ 0056be5c with catch @ 0056be8c */
                    /* try { // try from 0056be98 to 0066beeb has its CatchHandler @ 0056be98
                       catch() { ... } // from try @ 0056be98 with catch @ 0056be98
                       catch() { ... } // from try @ 0056bf10 with catch @ 0056be98 */
  pvVar1 = operator_new(0x30);
  FUN_0066a528((long)pvVar1 + 0x20,param_1);
  lVar2 = *(long *)(param_1 + 8);
  *(long *)((long)pvVar1 + 0x28) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  return pvVar1;
}


