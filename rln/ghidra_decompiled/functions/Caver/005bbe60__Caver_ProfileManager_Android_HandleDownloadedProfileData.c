/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bbe60
 * Function: Caver::ProfileManager_Android::HandleDownloadedProfileData
 * Signature: undefined __cdecl HandleDownloadedProfileData(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&) */

void Caver::ProfileManager_Android::HandleDownloadedProfileData(string *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  _Rb_tree_node *p_Var7;
  int iVar8;
  PlayerProfile *this;
  ulong uVar9;
  PlayerProfile *this_00;
  void *__dest;
  _Rb_tree_node *p_Var10;
  string *in_x1;
  shared_ptr *in_x8;
  long lVar11;
  void *pvVar12;
  long lVar13;
  _Rb_tree_node *p_Var14;
  int *piVar15;
  uchar *puVar16;
  void *__src;
  undefined8 uVar17;
  undefined8 local_d0;
  long *local_c8;
  _Rb_tree_node *local_c0;
  _Rb_tree_node *local_b8;
  _Rb_tree_node *local_b0;
  undefined8 local_a8;
  ProfileStats local_a0 [4];
  float local_9c;
  double local_98;
  void *local_90;
  PlayerProfile *local_88;
  long *local_80;
  long local_78;
  MessageLite *local_70;
  long *local_68;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  this = operator_new(0xb0);
  Proto::PlayerProfile::PlayerProfile(this);
                    /* catch() { ... } // from try @ 005bbc8c with catch @ 005bbeac */
  boost::shared_ptr<Caver::Proto::PlayerProfile>::shared_ptr<Caver::Proto::PlayerProfile>
            ((shared_ptr<Caver::Proto::PlayerProfile> *)&local_70,this);
                    /* catch() { ... } // from try @ 005bbc9c with catch @ 005bbeb8 */
                    /* try { // try from 005bbedc to 006bbf03 has its CatchHandler @ 005bbf70 */
  if (((*(long *)(*(long *)in_x1 + -0x18) != 0) &&
      (uVar9 = google::protobuf::MessageLite::ParseFromString(local_70,in_x1), (uVar9 & 1) != 0)) &&
     (*(long *)(**(long **)(local_70 + 0xa0) + -0x18) != 0)) {
    FUN_0066a528(&local_78);
    ProfileManager::ProfileWithIdentifier(param_1);
    puVar6 = PTR_DAT_007e5de8;
                    /* try { // try from 005bbf04 to 006bbfdf has its CatchHandler @ 005bbb9c */
    local_c0 = (_Rb_tree_node *)(PTR_DAT_007e5de8 + 0x18);
    local_c8 = (long *)0x0;
    local_d0 = (PlayerProfile *)(((ulong)local_d0 >> 8 & 0xffffff) << 8);
    FUN_0066918c(&local_c0,&DAT_0068fbeb,0);
    if (local_70 != (MessageLite *)0x0) {
      local_d0 = (PlayerProfile *)CONCAT71(local_d0._1_7_,1);
      local_d0 = (PlayerProfile *)CONCAT44(*(undefined4 *)(local_70 + 0x2c),(undefined4)local_d0);
      local_c8 = *(long **)(local_70 + 0x30);
      FUN_0066a6a8(&local_c0,*(undefined8 *)(local_70 + 0x10));
    }
    ProfileStats::ProfileStats(local_a0,local_88);
                    /* catch() { ... } // from try @ 005bbedc with catch @ 005bbf70 */
                    /* try { // try from 005bc2c8 to 006bc2e7 has its CatchHandler @ 005bc4c4 */
    if (((local_a0[0] == (ProfileStats)0x0) || (local_9c + DAT_00683734 < local_d0._4_4_)) ||
       ((local_9c + DAT_006837a4 < local_d0._4_4_ &&
        (((local_98 + DAT_00690348 < (double)local_c8 ||
          (*(size_t *)(local_c0 + -0x18) != *(size_t *)((long)local_90 + -0x18))) ||
         (iVar8 = memcmp(local_c0,local_90,*(size_t *)(local_c0 + -0x18)), iVar8 != 0)))))) {
      bVar4 = true;
    }
    else {
                    /* try { // try from 005bc2e8 to 006bc2ef has its CatchHandler @ 005bc4a4 */
      bVar4 = false;
    }
    if ((undefined *)((long)local_90 + -0x18) != puVar6) {
      piVar15 = (int *)((long)local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar15;
        *piVar15 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar15;
                    /* try { // try from 005bc304 to 006bc30f has its CatchHandler @ 005bc4c4 */
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar3) {
            *piVar15 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)((long)local_90 + -0x18));
      }
    }
    if (local_c0 + -0x18 != (_Rb_tree_node *)puVar6) {
      p_Var14 = local_c0 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *(int *)p_Var14;
                    /* try { // try from 005bc380 to 006bc39f has its CatchHandler @ 005bc4e4 */
        *(int *)p_Var14 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *(int *)p_Var14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(p_Var14,0x10);
          if (bVar3) {
            *(int *)p_Var14 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete(local_c0 + -0x18);
      }
    }
    if (bVar4) {
      this_00 = operator_new(200);
      PlayerProfile::PlayerProfile(this_00);
      local_d0 = this_00;
      boost::detail::shared_count::shared_count<Caver::PlayerProfile>
                ((shared_count *)&local_c8,this_00);
      boost::detail::sp_enable_shared_from_this(&local_d0,this_00,this_00);
      uVar9 = *(ulong *)in_x8;
      plVar1 = *(long **)(in_x8 + 8);
      *(PlayerProfile **)in_x8 = local_d0;
      *(long **)(in_x8 + 8) = local_c8;
      local_d0 = (PlayerProfile *)uVar9;
      local_c8 = plVar1;
      if ((plVar1 != (long *)0x0) && (lVar11 = plVar1[1], plVar1[1] = lVar11 + -1, lVar11 + -1 == 0)
         ) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        lVar11 = plVar1[2];
        plVar1[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      }
      PlayerProfile::InitWithIdentifier(*(string **)in_x8);
      __src = *(void **)in_x1;
      lVar11 = *(long *)in_x8;
      uVar9 = (ulong)*(uint *)((long)__src + -0x18);
      __dest = operator_new__(uVar9);
      pvVar12 = *(void **)(lVar11 + 8);
      *(void **)(lVar11 + 8) = __dest;
      if (pvVar12 != (void *)0x0) {
        operator_delete__(pvVar12);
        __dest = *(void **)(lVar11 + 8);
      }
      memcpy(__dest,__src,uVar9);
      puVar16 = *(uchar **)in_x1;
      uVar17 = *(undefined8 *)(puVar16 + -0x18);
      PlayerProfile::LocalFilePath(*(PlayerProfile **)in_x8);
      SaveByteBufferToFile(puVar16,(uint)uVar17,(string *)&local_d0);
      if ((undefined *)((long)local_d0 - 0x18U) != puVar6) {
                    /* try { // try from 005bc3a0 to 006bc3a7 has its CatchHandler @ 005bc4d0 */
        piVar15 = (int *)((long)local_d0 - 8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = *piVar15;
          *piVar15 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *piVar15;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar4) {
              *piVar15 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
                    /* try { // try from 005bc3bc to 006bc3c7 has its CatchHandler @ 005bc4e4 */
          } while (cVar2 != '\0');
        }
        if (iVar8 < 1) {
          operator_delete((undefined *)((long)local_d0 - 0x18U));
        }
      }
      PlayerProfile::Load(*(PlayerProfile **)in_x8);
      if (local_88 != (PlayerProfile *)0x0) {
        lVar11 = *(long *)(local_88 + 0x80);
        plVar1 = *(long **)(local_88 + 0x88);
        if ((plVar1 != (long *)0x0) && (plVar1[1] == 0)) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          lVar13 = plVar1[2];
          plVar1[2] = lVar13 + -1;
          if (lVar13 + -1 == 0) {
            (**(code **)(*plVar1 + 0x18))(plVar1);
          }
        }
        if (lVar11 != 0) {
          PlayerProfile::LoadGameState(*(PlayerProfile **)in_x8);
        }
      }
      ProfileManager::AddProfile((ProfileManager *)param_1,in_x8);
      local_c8 = (long *)0x0;
      local_c0 = (_Rb_tree_node *)0x0;
      local_a8 = 0;
      local_b8 = (_Rb_tree_node *)&local_c8;
      local_b0 = (_Rb_tree_node *)&local_c8;
      if (*(_Rb_tree_node **)(param_1 + 0x18) != (_Rb_tree_node *)0x0) {
        local_c0 = (_Rb_tree_node *)
                   std::
                   _Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
                   ::_M_copy((_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
                              *)&local_d0,*(_Rb_tree_node **)(param_1 + 0x18),
                             (_Rb_tree_node *)&local_c8);
        p_Var14 = local_c0;
        do {
          p_Var10 = p_Var14;
          p_Var14 = *(_Rb_tree_node **)(p_Var10 + 0x10);
          p_Var7 = local_c0;
        } while (*(_Rb_tree_node **)(p_Var10 + 0x10) != (_Rb_tree_node *)0x0);
        do {
          local_b0 = p_Var7;
          p_Var7 = *(_Rb_tree_node **)(local_b0 + 0x18);
        } while (*(_Rb_tree_node **)(local_b0 + 0x18) != (_Rb_tree_node *)0x0);
        local_a8 = *(undefined8 *)(param_1 + 0x30);
        local_b8 = p_Var10;
        for (; p_Var10 != (_Rb_tree_node *)&local_c8;
            p_Var10 = (_Rb_tree_node *)FUN_0064c6a0(p_Var10)) {
          (**(code **)**(undefined8 **)(p_Var10 + 0x20))
                    (*(undefined8 **)(p_Var10 + 0x20),param_1,&local_78);
        }
      }
      std::
      _Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
      ::_M_erase((_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
                  *)&local_d0,local_c0);
    }
    if ((local_80 != (long *)0x0) &&
       (lVar11 = local_80[1], local_80[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*local_80 + 0x10))(local_80);
      lVar11 = local_80[2];
      local_80[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*local_80 + 0x18))(local_80);
      }
    }
    if ((undefined *)(local_78 + -0x18) != puVar6) {
      piVar15 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar15;
        *piVar15 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar15;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar4) {
            *piVar15 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
                    /* try { // try from 005bc3e4 to 006bc40b has its CatchHandler @ 005bc4b8 */
      }
    }
  }
  if ((local_68 != (long *)0x0) &&
     (lVar11 = local_68[1], local_68[1] = lVar11 + -1, lVar11 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005bc40c with catch @ 005bc240
                       catch() { ... } // from try @ 005bc570 with catch @ 005bc240 */
    (**(code **)(*local_68 + 0x10))(local_68);
    lVar11 = local_68[2];
    local_68[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*local_68 + 0x18))(local_68);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005bc40c to 006bc503 has its CatchHandler @ 005bc240 */
    __stack_chk_fail();
  }
  return;
}


