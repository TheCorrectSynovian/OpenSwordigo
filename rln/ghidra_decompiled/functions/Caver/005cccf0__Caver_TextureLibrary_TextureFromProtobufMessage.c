/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cccf0
 * Function: Caver::TextureLibrary::TextureFromProtobufMessage
 * Signature: undefined __cdecl TextureFromProtobufMessage(Texture * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureLibrary::TextureFromProtobufMessage(Caver::Proto::Texture const&, bool) */

void Caver::TextureLibrary::TextureFromProtobufMessage(Texture *param_1,bool param_2)

{
  int iVar1;
  long lVar2;
  Texture *pTVar3;
  undefined8 *puVar4;
  ulong uVar5;
  Texture *pTVar6;
  ulong in_x2;
  undefined8 *in_x8;
  long lVar7;
  Texture *this;
  long *plVar8;
  long lVar9;
  long *local_68;
  Texture *local_60;
  long local_58;
  
  pTVar6 = (Texture *)(ulong)param_2;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_60 = (Texture *)0x0;
  pTVar3 = (Texture *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                   *)(param_1 + 8),*(string **)(pTVar6 + 0x10));
  if (param_1 + 0x10 == pTVar3) {
    this = operator_new(0xa8);
    Texture::Texture(this);
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    local_60 = this;
    uVar5 = Texture::LoadFromProtobufMessage(this,pTVar6);
    if ((uVar5 & 1) != 0) {
      SetTextureForName((TextureLibrary *)param_1,(string *)(this + 0x30),(intrusive_ptr *)&local_60
                       );
      lVar7 = *(long *)(this + 0x78);
      if (0 < (int)((ulong)(*(long *)(this + 0x80) - lVar7) >> 3)) {
        lVar9 = 0;
        do {
          plVar8 = *(long **)(lVar7 + lVar9 * 8);
          if (plVar8 != (long *)0x0) {
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          }
          local_68 = plVar8;
          SetTextureForName((TextureLibrary *)param_1,(string *)(plVar8 + 6),
                            (intrusive_ptr *)&local_68);
          if ((plVar8 != (long *)0x0) &&
             (iVar1 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar1, iVar1 == 0)) {
            (**(code **)(*plVar8 + 8))(plVar8);
          }
          lVar7 = *(long *)(this + 0x78);
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)((ulong)(*(long *)(this + 0x80) - lVar7) >> 3));
      }
      goto LAB_005ccd6c;
    }
    *in_x8 = 0;
  }
  else {
    puVar4 = (undefined8 *)
             std::
             map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
             ::operator[]((map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                           *)(param_1 + 8),*(string **)(pTVar6 + 0x10));
    this = (Texture *)*puVar4;
    local_60 = this;
    if (this != (Texture *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
LAB_005ccd6c:
    if ((in_x2 & 1) == 0) {
      *in_x8 = this;
      if (this == (Texture *)0x0) goto LAB_005cce8c;
    }
    else {
      if (*(int *)(this + 0x38) == 0) {
        Texture::Load(this);
      }
      *in_x8 = this;
    }
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    if (this == (Texture *)0x0) goto LAB_005cce8c;
  }
  iVar1 = *(int *)(this + 8);
  *(int *)(this + 8) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    (**(code **)(*(long *)this + 8))(this);
  }
LAB_005cce8c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


