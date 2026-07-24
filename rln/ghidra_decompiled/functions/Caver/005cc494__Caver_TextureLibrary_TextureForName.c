/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cc494
 * Function: Caver::TextureLibrary::TextureForName
 * Signature: undefined __cdecl TextureForName(string * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureLibrary::TextureForName(std::string const&, bool) */

void Caver::TextureLibrary::TextureForName(string *param_1,bool param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  string *psVar4;
  long *plVar5;
  ulong uVar6;
  Texture *pTVar7;
  string *psVar8;
  ulong in_x2;
  intrusive_ptr *in_x8;
  long lVar9;
  int *piVar10;
  int iVar11;
  long local_58 [2];
  long local_48;
  
  psVar8 = (string *)(ulong)param_2;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)in_x8 = 0;
  psVar4 = (string *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                   *)(param_1 + 8),psVar8);
  if (param_1 + 0x10 != psVar4) {
    plVar5 = (long *)std::
                     map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                     ::operator[]((map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                                   *)(param_1 + 8),psVar8);
    lVar9 = *plVar5;
    if (lVar9 != 0) {
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    }
    *(long *)in_x8 = lVar9;
    goto joined_r0x005cc5c0;
  }
  pTVar7 = operator_new(0xa8);
  Texture::Texture(pTVar7);
  iVar11 = *(int *)(pTVar7 + 8);
  *(Texture **)in_x8 = pTVar7;
  *(int *)(pTVar7 + 8) = iVar11 + 1;
  FUN_0066a6a8(pTVar7 + 0x30,psVar8);
  if (param_1[0x39] == (string)0x0) {
LAB_005cc59c:
    uVar6 = Texture::InitWithResource(pTVar7,psVar8,1.0);
    if ((uVar6 & 1) == 0) {
      *(undefined8 *)in_x8 = 0;
      if ((pTVar7 != (Texture *)0x0) &&
         (iVar11 = *(int *)(pTVar7 + 8), *(int *)(pTVar7 + 8) = iVar11 + -1, iVar11 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005cc3f4 with catch @ 005cc624 */
        (**(code **)(*(long *)pTVar7 + 8))(pTVar7);
      }
      goto joined_r0x005cc5c0;
    }
  }
  else {
    FUN_0066a528(local_58,psVar8);
    FUN_006677d4(local_58,&DAT_00697cf3,3);
    uVar6 = Texture::InitWithResource(pTVar7,(string *)local_58,2.0);
    if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar10 = (int *)(local_58[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_58[0] + -0x18));
      }
    }
    if ((uVar6 & 1) == 0) {
      pTVar7 = *(Texture **)in_x8;
      goto LAB_005cc59c;
    }
  }
  SetTextureForName((TextureLibrary *)param_1,psVar8,in_x8);
joined_r0x005cc5c0:
                    /* catch() { ... } // from try @ 005cc478 with catch @ 005cc5c0 */
  if ((((in_x2 & 1) != 0) && (pTVar7 = *(Texture **)in_x8, pTVar7 != (Texture *)0x0)) &&
     (*(int *)(pTVar7 + 0x38) == 0)) {
    Texture::Load(pTVar7);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


