/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005853d0
 * Function: Caver::SoundLibrary::SetSharedLibrary
 * Signature: undefined __cdecl SetSharedLibrary(SoundLibrary * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundLibrary::SetSharedLibrary(Caver::SoundLibrary*) */

void Caver::SoundLibrary::SetSharedLibrary(SoundLibrary *param_1)

{
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
  *this;
  
  this = DAT_007e9db8;
  if (DAT_007e9db8 !=
      (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
       *)0x0) {
    std::
    _Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
    ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
                *)(DAT_007e9db8 + 0x30),*(_Rb_tree_node **)(DAT_007e9db8 + 0x40));
    std::
    _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
    ::_M_erase(this,*(_Rb_tree_node **)(this + 0x10));
    operator_delete(this);
  }
  DAT_007e9db8 = (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
                  *)param_1;
  return;
}


