/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cd580
 * Function: Caver::TextureLibrary::Clear
 * Signature: undefined __thiscall Clear(TextureLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureLibrary::Clear() */

void __thiscall Caver::TextureLibrary::Clear(TextureLibrary *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
              *)(this + 8),*(_Rb_tree_node **)(this + 0x18));
  plVar2 = *(long **)(this + 0x48);
  plVar3 = *(long **)(this + 0x50);
  *(undefined8 *)(this + 0x18) = 0;
  *(TextureLibrary **)(this + 0x20) = this + 0x10;
  *(TextureLibrary **)(this + 0x28) = this + 0x10;
  *(undefined8 *)(this + 0x30) = 0;
  for (plVar1 = plVar2; plVar3 != plVar1; plVar1 = plVar1 + 1) {
    plVar5 = (long *)*plVar1;
    if ((plVar5 != (long *)0x0) &&
       (iVar4 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar4, iVar4 == 0)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  *(long **)(this + 0x50) = plVar2;
  *(undefined4 *)(this + 0x3c) = 0;
  this[0x38] = (TextureLibrary)0x0;
  return;
}


