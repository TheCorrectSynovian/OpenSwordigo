/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004dd8ac
 * Function: Caver::ItemOverlay::UpdateItemCount
 * Signature: undefined __thiscall UpdateItemCount(ItemOverlay * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemOverlay::UpdateItemCount(boost::shared_ptr<Caver::Item> const&) */

void __thiscall Caver::ItemOverlay::UpdateItemCount(ItemOverlay *this,shared_ptr *param_1)

{
  _Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
  *this_00;
  vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>> *pvVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  ItemOverlay *pIVar8;
  long *plVar9;
  undefined *puVar10;
  ulong *puVar11;
  undefined *puVar12;
  int *piVar13;
  int *piVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined4 local_88;
  float fStack_84;
  undefined4 local_80;
  float local_7c;
  int *local_70;
  long *local_68;
  int local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  iVar7 = CharacterState::ItemCount((CharacterState *)(*(long *)(this + 0xf0) + 0x10),param_1);
  this_00 = (_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
             *)(this + 0x120);
  if (iVar7 < 1) {
    FUN_0066a528(&local_70,*(long *)param_1 + 8);
    pIVar8 = (ItemOverlay *)
             std::
             _Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
             ::find(this_00,(string *)&local_70);
    puVar6 = PTR_DAT_007e5de8;
    if (local_70 + -6 != (int *)PTR_DAT_007e5de8) {
      piVar14 = local_70 + -2;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar14;
        *piVar14 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar4) {
            *piVar14 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete(local_70 + -6);
      }
    }
    if (this + 0x128 == pIVar8) goto LAB_004ddde0;
    FUN_0066a528(&local_70,*(long *)param_1 + 8);
    plVar9 = (long *)std::
                     map<std::string,unsigned_long,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                     ::operator[]((map<std::string,unsigned_long,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                                   *)this_00,(string *)&local_70);
    lVar19 = *plVar9;
    if (local_70 + -6 != (int *)puVar6) {
      piVar14 = local_70 + -2;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar14;
                    /* try { // try from 004ddea8 to 005ddebb has its CatchHandler @ 004ddee0 */
        *piVar14 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar4) {
            *piVar14 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar7 < 1) {
                    /* try { // try from 004ddebc to 005ddee3 has its CatchHandler @ 004dde8c */
        operator_delete(local_70 + -6);
      }
    }
    std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>::_M_erase
              ((vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>> *)
               (this + 0x108),*(long *)(this + 0x108) + lVar19 * 0x18);
    FUN_0066a528(&local_70,*(long *)param_1 + 8);
    auVar20 = std::
              _Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
              ::equal_range(this_00,(string *)&local_70);
    std::
    _Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
    ::_M_erase_aux(this_00,auVar20._0_8_,auVar20._8_8_);
    piVar14 = local_70 + -6;
    if (piVar14 == (int *)puVar6) goto LAB_004ddde0;
    piVar13 = local_70 + -2;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_004dde14;
    do {
      iVar7 = *piVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    FUN_0066a528(&local_70,*(long *)param_1 + 8);
    pIVar8 = (ItemOverlay *)
             std::
             _Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
             ::find(this_00,(string *)&local_70);
    puVar6 = PTR_DAT_007e5de8;
    if (local_70 + -6 != (int *)PTR_DAT_007e5de8) {
      piVar14 = local_70 + -2;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar18 = *piVar14;
        *piVar14 = iVar18 + -1;
      }
      else {
        do {
          iVar18 = *piVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar4) {
            *piVar14 = iVar18 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar18 < 1) {
        operator_delete(local_70 + -6);
      }
    }
    if (this + 0x128 == pIVar8) {
      local_70 = *(int **)param_1;
      local_68 = *(long **)(param_1 + 8);
      if (local_68 != (long *)0x0) {
        local_68[1] = local_68[1] + 1;
      }
      plVar9 = *(long **)(this + 0x108);
      plVar2 = *(long **)(this + 0x110);
      pvVar1 = (vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>> *)
               (this + 0x108);
      lVar19 = ((long)plVar2 - (long)plVar9 >> 3) * -0x5555555555555555;
      local_60 = iVar7;
      if (*local_70 == 0) {
        iVar18 = (int)lVar19;
        if (-1 < iVar18) {
          plVar16 = plVar9 + (long)iVar18 * 3;
          lVar19 = lVar19 << 0x20;
          lVar15 = (long)iVar18 + 1;
          do {
            plVar16 = plVar16 + -3;
            lVar15 = lVar15 + -1;
            if (lVar15 == 0) {
              if ((plVar2 == plVar9) && (*(long **)(this + 0x118) != plVar2)) {
                *plVar9 = (long)local_70;
                plVar9[1] = (long)local_68;
                if (local_68 != (long *)0x0) {
                  local_68[1] = local_68[1] + 1;
                }
                *(int *)(plVar9 + 2) = iVar7;
                *(long **)(this + 0x110) = plVar9 + 3;
              }
              else {
                std::
                vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>::
                _M_insert_aux(pvVar1,plVar9,&local_70);
              }
              break;
            }
            if (*(int *)*plVar16 == 0) {
              if ((plVar9 + (lVar19 >> 0x20) * 3 == plVar2) && (*(long **)(this + 0x118) != plVar2))
              {
                *plVar2 = (long)local_70;
                plVar2[1] = (long)local_68;
                if (local_68 != (long *)0x0) {
                  local_68[1] = local_68[1] + 1;
                }
                *(int *)(plVar2 + 2) = iVar7;
                *(long **)(this + 0x110) = plVar2 + 3;
              }
              else {
                std::
                vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>::
                _M_insert_aux(pvVar1,plVar9 + (lVar19 >> 0x20) * 3,&local_70);
              }
              break;
            }
            lVar19 = lVar19 + -0x100000000;
          } while (0 < lVar15);
        }
        puVar10 = PTR_pthread_create_007e4e78;
        lVar19 = *(long *)(this + 0x108);
        if (*(long *)(this + 0x110) != lVar19) {
          uVar17 = 0;
          do {
            FUN_0066a528(&local_88,*(long *)(lVar19 + uVar17 * 0x18) + 8);
            puVar11 = (ulong *)std::
                               map<std::string,unsigned_long,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                               ::operator[]((map<std::string,unsigned_long,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                                             *)this_00,(string *)&local_88);
            *puVar11 = uVar17;
            puVar12 = (undefined *)(CONCAT44(fStack_84,local_88) + -0x18);
            if (puVar12 != puVar6) {
              piVar14 = (int *)(CONCAT44(fStack_84,local_88) + -8);
              if (puVar10 == (undefined *)0x0) {
                iVar7 = *piVar14;
                *piVar14 = iVar7 + -1;
              }
              else {
                do {
                  iVar7 = *piVar14;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                  if (bVar4) {
                    *piVar14 = iVar7 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              if (iVar7 < 1) {
                operator_delete(puVar12);
              }
            }
            lVar19 = *(long *)(this + 0x108);
            uVar17 = uVar17 + 1;
          } while (uVar17 < (ulong)((*(long *)(this + 0x110) - lVar19 >> 3) * -0x5555555555555555));
        }
      }
      else {
        FUN_0066a528(&local_88,local_70 + 2);
        plVar9 = (long *)std::
                         map<std::string,unsigned_long,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                         ::operator[]((map<std::string,unsigned_long,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                                       *)this_00,(string *)&local_88);
        *plVar9 = lVar19;
        puVar10 = (undefined *)(CONCAT44(fStack_84,local_88) + -0x18);
        if (puVar10 != puVar6) {
          piVar14 = (int *)(CONCAT44(fStack_84,local_88) + -8);
                    /* catch() { ... } // from try @ 004ddebc with catch @ 004dde8c */
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar14;
            *piVar14 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar14;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar4) {
                *piVar14 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete(puVar10);
                    /* catch() { ... } // from try @ 004ddea8 with catch @ 004ddee0 */
          }
        }
        plVar9 = *(long **)(this + 0x110);
        if (plVar9 == *(long **)(this + 0x118)) {
          std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>::
          _M_insert_aux(pvVar1,plVar9,&local_70);
        }
        else {
          *plVar9 = (long)local_70;
          plVar9[1] = (long)local_68;
          if (local_68 != (long *)0x0) {
            local_68[1] = local_68[1] + 1;
          }
          *(int *)(plVar9 + 2) = local_60;
          *(long **)(this + 0x110) = plVar9 + 3;
        }
      }
      local_88 = *(undefined4 *)(this + 0x74);
      local_80 = *(undefined4 *)(this + 0x7c);
      fStack_84 = *(float *)(this + 0x78) + DAT_00684324;
      local_7c = (*(float *)(this + 0x78) + *(float *)(this + 0x80)) - fStack_84;
      GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_88);
      plVar9 = local_68;
      if ((local_68 != (long *)0x0) &&
         (lVar19 = local_68[1], local_68[1] = lVar19 + -1, lVar19 + -1 == 0)) {
        (**(code **)(*local_68 + 0x10))(local_68);
        lVar19 = plVar9[2];
        plVar9[2] = lVar19 + -1;
        if (lVar19 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
      }
      goto LAB_004ddde0;
    }
    FUN_0066a528(&local_70,*(long *)param_1 + 8);
    plVar9 = (long *)std::
                     map<std::string,unsigned_long,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                     ::operator[]((map<std::string,unsigned_long,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                                   *)this_00,(string *)&local_70);
    *(int *)(*(long *)(this + 0x108) + *plVar9 * 0x18 + 0x10) = iVar7;
    piVar14 = local_70 + -6;
    if (piVar14 == (int *)puVar6) goto LAB_004ddde0;
    piVar13 = local_70 + -2;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_004dde14:
      iVar7 = *piVar13;
      *piVar13 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  if (iVar7 < 1) {
    operator_delete(piVar14);
  }
LAB_004ddde0:
  this[0x100] = (ItemOverlay)0x1;
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


