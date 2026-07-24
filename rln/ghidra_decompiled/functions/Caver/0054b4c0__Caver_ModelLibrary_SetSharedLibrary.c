/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054b4c0
 * Function: Caver::ModelLibrary::SetSharedLibrary
 * Signature: undefined __cdecl SetSharedLibrary(ModelLibrary * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelLibrary::SetSharedLibrary(Caver::ModelLibrary*) */

void Caver::ModelLibrary::SetSharedLibrary(ModelLibrary *param_1)

{
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
  *this;
  
  this = DAT_007e9a38;
  if (DAT_007e9a38 !=
      (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
       *)0x0) {
    std::
    _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
    ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
                *)(DAT_007e9a38 + 0x60),*(_Rb_tree_node **)(DAT_007e9a38 + 0x70));
    std::
    _Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
    ::_M_erase((_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                *)(this + 0x30),*(_Rb_tree_node **)(this + 0x40));
    std::
    _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
    ::_M_erase(this,*(_Rb_tree_node **)(this + 0x10));
    operator_delete(this);
  }
  DAT_007e9a38 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
                  *)param_1;
  return;
}


