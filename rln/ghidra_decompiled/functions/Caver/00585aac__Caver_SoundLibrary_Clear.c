/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00585aac
 * Function: Caver::SoundLibrary::Clear
 * Signature: undefined __thiscall Clear(SoundLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundLibrary::Clear() */

void __thiscall Caver::SoundLibrary::Clear(SoundLibrary *this)

{
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
              *)this,*(_Rb_tree_node **)(this + 0x10));
  *(undefined8 *)(this + 0x10) = 0;
  *(SoundLibrary **)(this + 0x18) = this + 8;
  *(SoundLibrary **)(this + 0x20) = this + 8;
  *(undefined8 *)(this + 0x28) = 0;
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
              *)(this + 0x30),*(_Rb_tree_node **)(this + 0x40));
  *(undefined8 *)(this + 0x40) = 0;
  *(SoundLibrary **)(this + 0x48) = this + 0x38;
  *(SoundLibrary **)(this + 0x50) = this + 0x38;
  *(undefined8 *)(this + 0x58) = 0;
  return;
}


