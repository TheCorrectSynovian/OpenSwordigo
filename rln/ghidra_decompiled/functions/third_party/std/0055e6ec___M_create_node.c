/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055e6ec
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_create_node
 * Signature: undefined __thiscall _M_create_node(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::weak_ptr<Caver::ObjectLibrary> >,
   std::_Select1st<std::pair<std::string const, boost::weak_ptr<Caver::ObjectLibrary> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::weak_ptr<Caver::ObjectLibrary> > > >::_M_create_node(std::pair<std::string const,
   boost::weak_ptr<Caver::ObjectLibrary> > const&) */

void * __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
::_M_create_node(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
                 *this,pair *param_1)

{
  void *pvVar1;
  long lVar2;
  
                    /* try { // try from 0055e6f8 to 0065e723 has its CatchHandler @ 0055e838 */
  pvVar1 = operator_new(0x38);
  FUN_0066a528((long)pvVar1 + 0x20,param_1);
  *(undefined8 *)((long)pvVar1 + 0x28) = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *(long *)((long)pvVar1 + 0x30) = lVar2;
                    /* try { // try from 0055e724 to 0065e89f has its CatchHandler @ 0055e640 */
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
  }
  return pvVar1;
}


