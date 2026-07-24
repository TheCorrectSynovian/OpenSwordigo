/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ccb7c
 * Function: Caver::TextureLibrary::SetTextureForName
 * Signature: undefined __thiscall SetTextureForName(TextureLibrary * this, string * param_1, intrusive_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureLibrary::SetTextureForName(std::string const&, boost::intrusive_ptr<Caver::Texture>
   const&) */

void __thiscall
Caver::TextureLibrary::SetTextureForName
          (TextureLibrary *this,string *param_1,intrusive_ptr *param_2)

{
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
  *this_00;
  int iVar1;
  TextureLibrary *pTVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  this_00 = (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
             *)(this + 8);
  pTVar2 = (TextureLibrary *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
           ::find(this_00,param_1);
  if (this + 0x10 != pTVar2) {
    plVar5 = *(long **)(pTVar2 + 0x28);
    if (plVar5 != (long *)0x0) {
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    }
    if (plVar5[0xe] == 0) {
      *(int *)(this + 0x3c) = *(int *)(this + 0x3c) - (int)plVar5[9];
    }
    std::
    _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
    ::_M_erase_aux(this_00,pTVar2);
    iVar1 = (int)plVar5[1] + -1;
    *(int *)(plVar5 + 1) = iVar1;
    if (iVar1 == 0) {
                    /* try { // try from 005ccc9c to 006cccc3 has its CatchHandler @ 005cceec */
      (**(code **)(*plVar5 + 8))(plVar5);
      lVar4 = *(long *)param_2;
      goto joined_r0x005ccca8;
    }
  }
  lVar4 = *(long *)param_2;
joined_r0x005ccca8:
  if (lVar4 != 0) {
    plVar5 = (long *)std::
                     map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                     ::operator[]((map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                                   *)this_00,param_1);
    lVar4 = *(long *)param_2;
    if (lVar4 != 0) {
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    }
    plVar3 = (long *)*plVar5;
                    /* try { // try from 005ccc30 to 006ccc57 has its CatchHandler @ 005ccef8 */
    *plVar5 = lVar4;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar4 = *(long *)param_2;
    *(TextureLibrary **)(lVar4 + 0x18) = this;
    if ((*(int *)(lVar4 + 0x38) != 0) && (*(long *)(lVar4 + 0x70) == 0)) {
      *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + *(int *)(lVar4 + 0x48);
      PurgeTexturesIfNecessary(this);
      return;
    }
  }
  return;
}


