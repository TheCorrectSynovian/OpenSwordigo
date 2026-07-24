/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bc57c
 * Function: Caver::Map::FindPath
 * Signature: undefined __cdecl FindPath(string * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Map::FindPath(std::string const&, std::string const&) */

void Caver::Map::FindPath(string *param_1,string *param_2)

{
  map<std::string,boost::shared_ptr<Caver::MapNode>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapNode>>>>
  *this;
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  MapPath *pMVar9;
  long *plVar10;
  undefined8 uVar11;
  void *pvVar12;
  string *in_x2;
  undefined8 *in_x8;
  long lVar13;
  int *piVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined *puVar22;
  vector<std::string,std::allocator<std::string>> *pvVar23;
  size_t *psVar24;
  void *local_100;
  void *local_f8;
  long local_f0;
  long lStack_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long local_a8;
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  amStack_a0 [8];
  undefined8 local_98;
  _Rb_tree_node *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  this = (map<std::string,boost::shared_ptr<Caver::MapNode>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapNode>>>>
          *)(param_1 + 0x18);
  plVar7 = (long *)std::
                   map<std::string,boost::shared_ptr<Caver::MapNode>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapNode>>>>
                   ::operator[](this,param_2);
  lVar15 = *plVar7;
  plVar7 = (long *)plVar7[1];
  if (plVar7 != (long *)0x0) {
    plVar7[1] = plVar7[1] + 1;
  }
  plVar8 = (long *)std::
                   map<std::string,boost::shared_ptr<Caver::MapNode>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapNode>>>>
                   ::operator[](this,in_x2);
  lVar1 = *plVar8;
  plVar8 = (long *)plVar8[1];
  if (plVar8 != (long *)0x0) {
    plVar8[1] = plVar8[1] + 1;
  }
  if ((lVar15 == 0) || (lVar1 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    goto joined_r0x004bc6cc;
  }
  local_88 = &local_98;
  local_98 = 0;
  local_90 = (_Rb_tree_node *)0x0;
  uStack_78 = 0;
  local_80 = local_88;
  memset(&local_f0,0,0x50);
  std::
  _Deque_base<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::
  _M_initialize_map((_Deque_base<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>
                     *)&local_f0,0);
  plVar16 = *(long **)param_1;
  plVar10 = *(long **)(param_1 + 8);
  if (plVar16 != plVar10) {
                    /* try { // try from 004bc640 to 005bc647 has its CatchHandler @ 004bce3c */
    uVar21 = ((ulong)((long)plVar10 + (-0x10 - (long)plVar16)) >> 4) + 1;
    if (2 < uVar21) {
      uVar17 = uVar21 & 0x1ffffffffffffffe;
      plVar18 = plVar16 + 2;
      uVar19 = uVar17;
      do {
        lVar20 = *plVar18;
                    /* try { // try from 004bc66c to 005bc69f has its CatchHandler @ 004bcec4 */
        uVar19 = uVar19 - 2;
        *(undefined1 *)(plVar18[-2] + 0x5c) = 0;
        *(undefined1 *)(lVar20 + 0x5c) = 0;
        plVar18 = plVar18 + 4;
      } while (uVar19 != 0);
      plVar16 = plVar16 + uVar17 * 2;
      if (uVar21 == uVar17) goto LAB_004bc694;
    }
    do {
      plVar18 = plVar16 + 2;
      *(undefined1 *)(*plVar16 + 0x5c) = 0;
      plVar16 = plVar18;
    } while (plVar10 != plVar18);
  }
LAB_004bc694:
  if (local_c0 == local_b0 + -2) {
                    /* try { // try from 004bc6e4 to 005bc70b has its CatchHandler @ 004bce38 */
    if ((ulong)(lStack_e8 - (local_a8 - local_f0 >> 3)) < 2) {
      std::
      deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::
      _M_reallocate_map((deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>
                         *)&local_f0,1,false);
    }
    pvVar12 = operator_new(0x200);
    *(void **)(local_a8 + 8) = pvVar12;
    *local_c0 = lVar15;
    local_c0[1] = (long)plVar7;
    if (plVar7 != (long *)0x0) {
                    /* try { // try from 004bc718 to 005bc71f has its CatchHandler @ 004bcde0 */
      plVar7[1] = plVar7[1] + 1;
    }
                    /* try { // try from 004bc724 to 005bc72f has its CatchHandler @ 004bce34 */
                    /* try { // try from 004bc730 to 005bc73b has its CatchHandler @ 004bcde4 */
    local_c0 = *(long **)(local_a8 + 8);
    local_b0 = local_c0 + 0x40;
    local_b8 = local_c0;
    local_a8 = local_a8 + 8;
  }
  else {
    *local_c0 = lVar15;
    local_c0[1] = (long)plVar7;
    if (plVar7 != (long *)0x0) {
      plVar7[1] = plVar7[1] + 1;
    }
    local_c0 = local_c0 + 2;
  }
  *(undefined1 *)(lVar15 + 0x5c) = 1;
  if (local_c0 != local_e0) {
                    /* try { // try from 004bc75c to 005bc783 has its CatchHandler @ 004bce34 */
    do {
      lVar20 = *local_e0;
      plVar16 = (long *)local_e0[1];
      if (plVar16 != (long *)0x0) {
                    /* try { // try from 004bc7e4 to 005bc7fb has its CatchHandler @ 004bcd50 */
        plVar16[1] = plVar16[1] + 1;
      }
      if (local_e0 == local_d0 + -2) {
                    /* try { // try from 004bc85c to 005bc883 has its CatchHandler @ 004bcd78 */
        if ((plVar16 != (long *)0x0) &&
           (lVar13 = plVar16[1], plVar16[1] = lVar13 + -1, lVar13 + -1 == 0)) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          lVar13 = plVar16[2];
          plVar16[2] = lVar13 + -1;
          if (lVar13 + -1 == 0) {
            (**(code **)(*plVar16 + 0x18))(plVar16);
          }
        }
                    /* try { // try from 004bc890 to 005bc897 has its CatchHandler @ 004bcbd4 */
        operator_delete(local_d8);
                    /* try { // try from 004bc89c to 005bc8ab has its CatchHandler @ 004bccf0 */
        local_e0 = *(long **)(local_c8 + 8);
        local_d0 = local_e0 + 0x40;
                    /* try { // try from 004bc8ac to 005bc8b7 has its CatchHandler @ 004bcc00 */
        local_d8 = local_e0;
        local_c8 = local_c8 + 8;
      }
      else {
                    /* try { // try from 004bc7fc to 005bc807 has its CatchHandler @ 004bcc50 */
        if ((plVar16 != (long *)0x0) &&
           (lVar13 = plVar16[1], plVar16[1] = lVar13 + -1, lVar13 + -1 == 0)) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          lVar13 = plVar16[2];
                    /* try { // try from 004bc828 to 005bc84f has its CatchHandler @ 004bcd50 */
          plVar16[2] = lVar13 + -1;
          if (lVar13 + -1 == 0) {
            (**(code **)(*plVar16 + 0x18))(plVar16);
          }
        }
        local_e0 = local_e0 + 2;
      }
      if (lVar20 == lVar1) {
                    /* try { // try from 004bc8d8 to 005bc8ff has its CatchHandler @ 004bccf0 */
        pMVar9 = operator_new(0x18);
        *(undefined8 *)(pMVar9 + 8) = 0;
        *(undefined8 *)(pMVar9 + 0x10) = 0;
        *(undefined8 *)pMVar9 = 0;
        *in_x8 = pMVar9;
        boost::detail::shared_count::shared_count<Caver::MapPath>
                  ((shared_count *)(in_x8 + 1),pMVar9);
        boost::detail::sp_enable_shared_from_this();
        FUN_0066a528(&local_f8,lVar1 + 0x10);
        pvVar23 = (vector<std::string,std::allocator<std::string>> *)*in_x8;
        lVar20 = *(long *)(pvVar23 + 8);
        if (lVar20 == *(long *)(pvVar23 + 0x10)) {
          std::vector<std::string,std::allocator<std::string>>::_M_insert_aux
                    (pvVar23,lVar20,&local_f8);
          goto LAB_004bcc04;
        }
        FUN_0066a528(lVar20,&local_f8);
                    /* try { // try from 004bc938 to 005bc95f has its CatchHandler @ 004bcd78 */
LAB_004bcbf8:
                    /* catch() { ... } // from try @ 004bc7d0 with catch @ 004bcbfc */
                    /* catch() { ... } // from try @ 004bc8ac with catch @ 004bcc00 */
        *(long *)(pvVar23 + 8) = *(long *)(pvVar23 + 8) + 8;
LAB_004bcc04:
        FUN_0066a528(&local_100,lVar15 + 0x10);
        pvVar12 = local_100;
        psVar24 = (size_t *)((long)local_100 + -0x18);
                    /* try { // try from 004bcc24 to 005bcebb has its CatchHandler @ 004bcec0 */
        if (*(size_t *)((long)local_f8 + -0x18) == *psVar24) {
          iVar6 = memcmp(local_f8,local_100,*(size_t *)((long)local_f8 + -0x18));
          bVar5 = iVar6 != 0;
        }
        else {
          bVar5 = true;
        }
        if (psVar24 != (size_t *)PTR_DAT_007e5de8) goto LAB_004bcc9c;
LAB_004bcc50:
                    /* catch() { ... } // from try @ 004bc7fc with catch @ 004bcc50 */
        if (bVar5) goto LAB_004bcc54;
LAB_004bcce4:
                    /* catch() { ... } // from try @ 004bc89c with catch @ 004bccf0
                       catch() { ... } // from try @ 004bc8d8 with catch @ 004bccf0 */
        if ((undefined *)((long)local_f8 + -0x18) == PTR_DAT_007e5de8) goto LAB_004bcd00;
        piVar14 = (int *)((long)local_f8 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar6 = *piVar14;
          *piVar14 = iVar6 + -1;
        }
        else {
          do {
            iVar6 = *piVar14;
                    /* try { // try from 004bc79c to 005bc7c3 has its CatchHandler @ 004bcddc */
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar5) {
              *piVar14 = iVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (0 < iVar6) {
LAB_004bcd00:
          bVar5 = true;
          goto joined_r0x004bcd04;
        }
        operator_delete((undefined *)((long)local_f8 + -0x18));
        bVar5 = true;
                    /* try { // try from 004bc7d0 to 005bc7d7 has its CatchHandler @ 004bcbfc */
        goto joined_r0x004bcd04;
      }
      lVar13 = *(long *)(lVar20 + 0x30);
      if (*(long *)(lVar20 + 0x38) == lVar13) {
        bVar5 = false;
      }
      else {
        uVar21 = 0;
        do {
          iVar6 = *(int *)(lVar13 + uVar21 * 0x18 + 0xc);
          if (iVar6 == 2) {
            if (*(char *)(lVar13 + uVar21 * 0x18 + 0x11) != '\0') goto LAB_004bca34;
          }
          else {
                    /* try { // try from 004bca1c to 005bca27 has its CatchHandler @ 004bcca0 */
            if ((iVar6 != 1) || (*(char *)(lVar13 + uVar21 * 0x18 + 0x11) == '\0')) {
LAB_004bca34:
              plVar10 = (long *)std::
                                map<std::string,boost::shared_ptr<Caver::MapNode>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapNode>>>>
                                ::operator[](this,(string *)(lVar13 + uVar21 * 0x18));
              lVar13 = *plVar10;
              plVar10 = (long *)plVar10[1];
                    /* try { // try from 004bca48 to 005bca6f has its CatchHandler @ 004bcdd8 */
              if (plVar10 != (long *)0x0) {
                plVar10[1] = plVar10[1] + 1;
              }
              if ((lVar13 == 0) || (*(char *)(lVar13 + 0x5c) != '\0')) {
joined_r0x004bcbac:
                if (plVar10 == (long *)0x0) goto LAB_004bcbb0;
              }
              else {
                *(undefined1 *)(lVar13 + 0x5c) = 1;
                FUN_0066a528(&local_f8,lVar20 + 0x10);
                FUN_0066a528(&local_100,lVar13 + 0x10);
                uVar11 = std::
                         map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         ::operator[](amStack_a0,(string *)&local_100);
                FUN_0066a6a8(uVar11,&local_f8);
                    /* try { // try from 004bcae4 to 005bcb0b has its CatchHandler @ 004bce38 */
                puVar22 = PTR_DAT_007e5de8;
                if ((undefined *)((long)local_100 + -0x18) != PTR_DAT_007e5de8) {
                  piVar14 = (int *)((long)local_100 + -8);
                  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    iVar6 = *piVar14;
                    *piVar14 = iVar6 + -1;
                  }
                  else {
                    do {
                      iVar6 = *piVar14;
                      cVar2 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                      if (bVar5) {
                        *piVar14 = iVar6 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  puVar22 = PTR_DAT_007e5de8;
                  if (iVar6 < 1) {
                    operator_delete((undefined *)((long)local_100 + -0x18));
                    /* try { // try from 004bc9d0 to 005bc9d7 has its CatchHandler @ 004bcde0 */
                  }
                }
                if ((undefined *)((long)local_f8 + -0x18) != puVar22) {
                  piVar14 = (int *)((long)local_f8 + -8);
                  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    iVar6 = *piVar14;
                    *piVar14 = iVar6 + -1;
                  }
                  else {
                    do {
                    /* try { // try from 004bc998 to 005bc9bf has its CatchHandler @ 004bcddc */
                      iVar6 = *piVar14;
                      cVar2 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                      if (bVar5) {
                        *piVar14 = iVar6 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  if (iVar6 < 1) {
                    operator_delete((undefined *)((long)local_f8 + -0x18));
                    /* try { // try from 004bc9f0 to 005bca1b has its CatchHandler @ 004bcdd8 */
                  }
                }
                    /* try { // try from 004bcb0c to 005bcc23 has its CatchHandler @ 004bc4e8 */
                if (local_c0 == local_b0 + -2) {
                  if ((ulong)(lStack_e8 - (local_a8 - local_f0 >> 3)) < 2) {
                    std::
                    deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>
                    ::_M_reallocate_map((deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>
                                         *)&local_f0,1,false);
                  }
                  pvVar12 = operator_new(0x200);
                  *(void **)(local_a8 + 8) = pvVar12;
                  *local_c0 = lVar13;
                  local_c0[1] = (long)plVar10;
                  if (plVar10 != (long *)0x0) {
                    plVar10[1] = plVar10[1] + 1;
                  }
                  local_c0 = *(long **)(local_a8 + 8);
                  local_b0 = local_c0 + 0x40;
                  local_a8 = local_a8 + 8;
                  local_b8 = local_c0;
                  goto joined_r0x004bcbac;
                }
                *local_c0 = lVar13;
                local_c0[1] = (long)plVar10;
                plVar18 = local_c0 + 2;
                local_c0 = local_c0 + 2;
                if (plVar10 == (long *)0x0) goto LAB_004bcbb0;
                plVar10[1] = plVar10[1] + 1;
                local_c0 = plVar18;
              }
              lVar13 = plVar10[1];
              plVar10[1] = lVar13 + -1;
              if (lVar13 + -1 == 0) {
                    /* try { // try from 004bca7c to 005bca83 has its CatchHandler @ 004bcde0 */
                (**(code **)(*plVar10 + 0x10))(plVar10);
                    /* try { // try from 004bca88 to 005bcaa3 has its CatchHandler @ 004bce44 */
                lVar13 = plVar10[2];
                plVar10[2] = lVar13 + -1;
                if (lVar13 + -1 == 0) {
                  (**(code **)(*plVar10 + 0x18))(plVar10);
                }
              }
            }
          }
LAB_004bcbb0:
          lVar13 = *(long *)(lVar20 + 0x30);
          uVar21 = uVar21 + 1;
        } while (uVar21 < (ulong)((*(long *)(lVar20 + 0x38) - lVar13 >> 3) * -0x5555555555555555));
                    /* catch() { ... } // from try @ 004bc890 with catch @ 004bcbd4 */
        bVar5 = false;
      }
joined_r0x004bcd04:
      if ((plVar16 != (long *)0x0) &&
         (lVar20 = plVar16[1], plVar16[1] = lVar20 + -1, lVar20 + -1 == 0)) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        lVar20 = plVar16[2];
        plVar16[2] = lVar20 + -1;
        if (lVar20 + -1 == 0) {
          (**(code **)(*plVar16 + 0x18))(plVar16);
        }
      }
      if (bVar5) goto LAB_004bcd54;
    } while (local_c0 != local_e0);
  }
                    /* catch() { ... } // from try @ 004bc7e4 with catch @ 004bcd50
                       catch() { ... } // from try @ 004bc828 with catch @ 004bcd50 */
  *in_x8 = 0;
  in_x8[1] = 0;
LAB_004bcd54:
  std::deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::
  ~deque((deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>
          *)&local_f0);
  std::
  _Rb_tree<std::string,std::pair<std::string_const,std::string>,std::_Select1st<std::pair<std::string_const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,std::string>,std::_Select1st<std::pair<std::string_const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_a0,local_90);
joined_r0x004bc6cc:
                    /* catch() { ... } // from try @ 004bc85c with catch @ 004bcd78
                       catch() { ... } // from try @ 004bc938 with catch @ 004bcd78 */
  if ((plVar8 != (long *)0x0) && (lVar15 = plVar8[1], plVar8[1] = lVar15 + -1, lVar15 + -1 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar15 = plVar8[2];
    plVar8[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  if ((plVar7 != (long *)0x0) && (lVar15 = plVar7[1], plVar7[1] = lVar15 + -1, lVar15 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar15 = plVar7[2];
                    /* catch() { ... } // from try @ 004bc9f0 with catch @ 004bcdd8
                       catch() { ... } // from try @ 004bca48 with catch @ 004bcdd8 */
    plVar7[2] = lVar15 + -1;
                    /* catch() { ... } // from try @ 004bc79c with catch @ 004bcddc
                       catch() { ... } // from try @ 004bc998 with catch @ 004bcddc */
    if (lVar15 + -1 == 0) {
                    /* catch() { ... } // from try @ 004bc718 with catch @ 004bcde0
                       catch() { ... } // from try @ 004bc9d0 with catch @ 004bcde0
                       catch() { ... } // from try @ 004bca7c with catch @ 004bcde0 */
                    /* catch() { ... } // from try @ 004bc730 with catch @ 004bcde4 */
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_004bcc9c:
                    /* catch() { ... } // from try @ 004bca1c with catch @ 004bcca0 */
  piVar14 = (int *)((long)pvVar12 + -8);
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
    iVar6 = *piVar14;
    *piVar14 = iVar6 + -1;
  }
  else {
    do {
      iVar6 = *piVar14;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar3) {
        *piVar14 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (0 < iVar6) goto LAB_004bcc50;
  operator_delete(psVar24);
  if (!bVar5) goto LAB_004bcce4;
LAB_004bcc54:
  uVar11 = std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[](amStack_a0,(string *)&local_f8);
  FUN_0066a6a8(&local_f8,uVar11);
  pvVar23 = (vector<std::string,std::allocator<std::string>> *)*in_x8;
  lVar20 = *(long *)pvVar23;
  if ((*(long *)(pvVar23 + 8) != lVar20) || (*(long *)(pvVar23 + 8) == *(long *)(pvVar23 + 0x10)))
  goto LAB_004bcc88;
  FUN_0066a528(lVar20,&local_f8);
  goto LAB_004bcbf8;
LAB_004bcc88:
  std::vector<std::string,std::allocator<std::string>>::_M_insert_aux(pvVar23,lVar20,&local_f8);
  goto LAB_004bcc04;
}


