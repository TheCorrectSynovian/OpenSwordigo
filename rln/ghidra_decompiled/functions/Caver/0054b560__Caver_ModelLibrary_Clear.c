/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054b560
 * Function: Caver::ModelLibrary::Clear
 * Signature: undefined __thiscall Clear(ModelLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelLibrary::Clear() */

void __thiscall Caver::ModelLibrary::Clear(ModelLibrary *this)

{
                    /* catch() { ... } // from try @ 0054b148 with catch @ 0054b57c */
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
              *)(this + 0x60),*(_Rb_tree_node **)(this + 0x70));
                    /* catch() { ... } // from try @ 0054b03c with catch @ 0054b580 */
  *(undefined8 *)(this + 0x70) = 0;
  *(ModelLibrary **)(this + 0x78) = this + 0x68;
  *(ModelLibrary **)(this + 0x80) = this + 0x68;
  *(undefined8 *)(this + 0x88) = 0;
  std::
  _Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
  ::_M_erase((_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
              *)(this + 0x30),*(_Rb_tree_node **)(this + 0x40));
  *(undefined8 *)(this + 0x40) = 0;
  *(ModelLibrary **)(this + 0x48) = this + 0x38;
                    /* try { // try from 0054b5a4 to 0064b7bf has its CatchHandler @ 0054bbb4 */
  *(ModelLibrary **)(this + 0x50) = this + 0x38;
  *(undefined8 *)(this + 0x58) = 0;
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
              *)this,*(_Rb_tree_node **)(this + 0x10));
                    /* catch() { ... } // from try @ 0054b014 with catch @ 0054b5b0 */
  *(undefined8 *)(this + 0x10) = 0;
  *(ModelLibrary **)(this + 0x18) = this + 8;
                    /* catch() { ... } // from try @ 0054aff8 with catch @ 0054b5b4 */
  *(ModelLibrary **)(this + 0x20) = this + 8;
  *(undefined8 *)(this + 0x28) = 0;
                    /* catch() { ... } // from try @ 0054b1cc with catch @ 0054b5b8 */
  return;
}


