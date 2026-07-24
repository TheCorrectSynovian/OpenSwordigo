/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00564844
 * Function: Caver::Scene::MakeUniqueObjectIdentifier
 * Signature: undefined __cdecl MakeUniqueObjectIdentifier(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::MakeUniqueObjectIdentifier(std::string const&) */

void Caver::Scene::MakeUniqueObjectIdentifier(string *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  string *psVar7;
  long *plVar8;
  long lVar9;
  char *pcVar10;
  undefined *puVar11;
  string *in_x1;
  string *in_x8;
  int *piVar12;
  int iVar13;
  undefined *local_a0;
  long local_98;
  undefined *local_90;
  undefined1 auStack_84 [4];
  long local_80 [2];
  char acStack_6c [4];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 00564884 to 00664887 has its CatchHandler @ 0056493c */
  psVar7 = (string *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
                   *)(param_1 + 0xb0),in_x1);
  if ((param_1 + 0xb8 == psVar7) || (plVar8 = *(long **)(psVar7 + 0x28), plVar8 == (long *)0x0)) {
    FUN_0066a528();
  }
  else {
    if ((int)plVar8[1] == 0) {
      (**(code **)(*plVar8 + 8))();
    }
    lVar9 = FUN_00668098();
    puVar5 = PTR_DAT_007e5de8;
                    /* try { // try from 005648c4 to 006648c7 has its CatchHandler @ 0056492c */
                    /* try { // try from 005648c8 to 0066496f has its CatchHandler @ 005647f8 */
    local_90 = PTR_DAT_007e5de8 + 0x18;
    if (lVar9 << 0x20 == -0x100000000) {
      FUN_0066a6a8(&local_90);
      uVar6 = 2;
    }
    else {
                    /* catch() { ... } // from try @ 00564884 with catch @ 0056493c */
      if (*(ulong *)(*(long *)in_x1 + -0x18) < (ulong)((lVar9 << 0x20) + 0x100000000 >> 0x20)) {
                    /* WARNING: Subroutine does not return */
        FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)",&DAT_00695c42);
      }
      FUN_00666784(local_80);
      uVar6 = boost::detail::lexical_cast<int,std::string,false,char>(local_80,auStack_84,1);
                    /* try { // try from 00564970 to 006649bb has its CatchHandler @ 005649c4 */
      if ((undefined *)(local_80[0] + -0x18) != puVar5) {
        piVar12 = (int *)(local_80[0] + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar13 = *piVar12;
          *piVar12 = iVar13 + -1;
        }
        else {
          do {
            iVar13 = *piVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar3) {
              *piVar12 = iVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
                    /* try { // try from 00564bcc to 00664bcf has its CatchHandler @ 00564c2c */
          } while (cVar2 != '\0');
        }
        if (iVar13 < 1) {
          operator_delete((undefined *)(local_80[0] + -0x18));
        }
      }
      FUN_00666784(local_80);
      FUN_0066a6a8(&local_90,local_80);
      if ((undefined *)(local_80[0] + -0x18) != puVar5) {
        piVar12 = (int *)(local_80[0] + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar13 = *piVar12;
          *piVar12 = iVar13 + -1;
        }
        else {
          do {
            iVar13 = *piVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar3) {
              *piVar12 = iVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar13 < 1) {
                    /* catch() { ... } // from try @ 00564bcc with catch @ 00564c2c */
          operator_delete((undefined *)(local_80[0] + -0x18));
        }
      }
    }
                    /* try { // try from 005649bc to 00664a0f has its CatchHandler @ 005647f8 */
                    /* catch() { ... } // from try @ 00564970 with catch @ 005649c4 */
                    /* catch() { ... } // from try @ 00564838 with catch @ 005649d0 */
    while( true ) {
      FUN_0066a528(&local_98,&local_90);
      FUN_006677d4(&local_98,&DAT_00695bf0,1);
      uVar1 = -uVar6;
      if (-1 < (int)uVar6) {
        uVar1 = uVar6;
      }
      local_a0 = puVar5 + 0x18;
      pcVar10 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                          (uVar1,acStack_6c);
      if ((int)uVar6 < 0) {
        pcVar10 = pcVar10 + -1;
        *pcVar10 = '-';
        puVar11 = local_a0;
      }
      else {
                    /* try { // try from 00564a10 to 00664a13 has its CatchHandler @ 00564a30 */
        puVar11 = puVar5 + 0x18;
      }
                    /* catch() { ... } // from try @ 00564a10 with catch @ 00564a30 */
      FUN_00669e1c(&local_a0,0,*(undefined8 *)(puVar11 + -0x18),pcVar10,
                   (long)acStack_6c - (long)pcVar10);
      FUN_0066a528();
      FUN_00667614();
                    /* catch() { ... } // from try @ 00564b04 with catch @ 00564a54 */
      if (local_a0 + -0x18 != puVar5) {
                    /* try { // try from 00564adc to 00664b03 has its CatchHandler @ 00564b0c */
        piVar12 = (int *)(local_a0 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar13 = *piVar12;
                    /* try { // try from 00564b20 to 00664b2b has its CatchHandler @ 00564b2c */
          *piVar12 = iVar13 + -1;
        }
        else {
          do {
            iVar13 = *piVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar3) {
              *piVar12 = iVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
                    /* catch() { ... } // from try @ 00564b20 with catch @ 00564b2c */
        if (iVar13 < 1) {
                    /* try { // try from 00564b30 to 00664b33 has its CatchHandler @ 00564b38 */
          operator_delete(local_a0 + -0x18);
                    /* catch() { ... } // from try @ 00564b30 with catch @ 00564b38 */
        }
      }
                    /* try { // try from 00564a6c to 00664a73 has its CatchHandler @ 00564b10 */
      if ((undefined *)(local_98 + -0x18) != puVar5) {
        piVar12 = (int *)(local_98 + -8);
                    /* try { // try from 00564b04 to 00664b1f has its CatchHandler @ 00564a54 */
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar13 = *piVar12;
          *piVar12 = iVar13 + -1;
        }
        else {
          do {
            iVar13 = *piVar12;
                    /* catch() { ... } // from try @ 00564adc with catch @ 00564b0c */
                    /* catch() { ... } // from try @ 00564a6c with catch @ 00564b10 */
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar3) {
              *piVar12 = iVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar13 < 1) {
          operator_delete((undefined *)(local_98 + -0x18));
        }
      }
      psVar7 = (string *)
               std::
               _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
               ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
                       *)(param_1 + 0xb0),in_x8);
      if ((param_1 + 0xb8 == psVar7) || (plVar8 = *(long **)(psVar7 + 0x28), plVar8 == (long *)0x0))
      break;
      if ((int)plVar8[1] == 0) {
        (**(code **)(*plVar8 + 8))();
      }
                    /* try { // try from 00564aa0 to 00664aab has its CatchHandler @ 00564ab8 */
      puVar11 = (undefined *)(*(long *)in_x8 + -0x18);
      if (puVar11 != puVar5) {
                    /* catch() { ... } // from try @ 00564aa0 with catch @ 00564ab8 */
        piVar12 = (int *)(*(long *)in_x8 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar13 = *piVar12;
                    /* catch() { ... } // from try @ 00564bd0 with catch @ 00564b60
                       catch() { ... } // from try @ 00564c74 with catch @ 00564b60 */
          *piVar12 = iVar13 + -1;
        }
        else {
          do {
            iVar13 = *piVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar3) {
              *piVar12 = iVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar13 < 1) {
          operator_delete(puVar11);
        }
      }
      uVar6 = uVar6 + 1;
    }
    if (local_90 + -0x18 != puVar5) {
      piVar12 = (int *)(local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar13 = *piVar12;
        *piVar12 = iVar13 + -1;
      }
      else {
        do {
          iVar13 = *piVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar3) {
            *piVar12 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar13 < 1) {
                    /* try { // try from 00564c4c to 00664c73 has its CatchHandler @ 00564c7c */
        operator_delete(local_90 + -0x18);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 005648c4 with catch @ 0056492c */
  return;
}


