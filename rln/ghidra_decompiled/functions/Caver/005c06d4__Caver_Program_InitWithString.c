/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c06d4
 * Function: Caver::Program::InitWithString
 * Signature: undefined __thiscall InitWithString(Program * this, string * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Program::InitWithString(std::string const&, std::string*) */

undefined4 __thiscall Caver::Program::InitWithString(Program *this,string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  string *psVar6;
  lua_State *plVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  undefined4 uVar11;
  long *plVar12;
  undefined *local_68;
  string *local_60;
  long *local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar12 = *(long **)(this + 0x10);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if ((plVar12 != (long *)0x0) && (lVar9 = plVar12[1], plVar12[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005c00a4 with catch @ 005c072c */
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar9 = plVar12[2];
    plVar12[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  plVar12 = *(long **)(this + 0x20);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if ((plVar12 != (long *)0x0) && (lVar9 = plVar12[1], plVar12[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar9 = plVar12[2];
    plVar12[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
                    /* catch() { ... } // from try @ 005c0090 with catch @ 005c078c */
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  if (*(long *)(*(long *)param_1 + -0x18) == 0) {
    uVar11 = 1;
  }
  else {
    psVar6 = operator_new(8);
    FUN_0066a528(psVar6,param_1);
    local_60 = psVar6;
    boost::detail::shared_count::shared_count<std::string>((shared_count *)local_58,psVar6);
    boost::detail::sp_enable_shared_from_this(&local_60,psVar6,psVar6);
    psVar6 = *(string **)(this + 8);
    plVar12 = *(long **)(this + 0x10);
    *(string **)(this + 8) = local_60;
    *(long **)(this + 0x10) = local_58[0];
                    /* catch() { ... } // from try @ 005c007c with catch @ 005c07f4 */
    local_60 = psVar6;
    local_58[0] = plVar12;
                    /* catch() { ... } // from try @ 005c0194 with catch @ 005c07fc
                       catch() { ... } // from try @ 005c03a4 with catch @ 005c07fc */
                    /* catch() { ... } // from try @ 005c00f8 with catch @ 005c0804
                       catch() { ... } // from try @ 005c0118 with catch @ 005c0804
                       catch() { ... } // from try @ 005c03dc with catch @ 005c0804 */
    if ((plVar12 != (long *)0x0) && (lVar9 = plVar12[1], plVar12[1] = lVar9 + -1, lVar9 + -1 == 0))
    {
                    /* catch() { ... } // from try @ 005c019c with catch @ 005c080c
                       catch() { ... } // from try @ 005c0218 with catch @ 005c080c
                       catch() { ... } // from try @ 005c0324 with catch @ 005c080c */
                    /* try { // try from 005c0810 to 006c08a7 has its CatchHandler @ 005c08c8 */
      (**(code **)(*plVar12 + 0x10))(plVar12);
      lVar9 = plVar12[2];
      plVar12[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    plVar7 = (lua_State *)luaL_newstate();
    iVar5 = luaL_loadstring(plVar7,*(char **)param_1);
    puVar4 = PTR_DAT_007e5de8;
    if (iVar5 == 0) {
                    /* try { // try from 005c08a8 to 006c08cb has its CatchHandler @ 005c0044 */
      local_68 = PTR_DAT_007e5de8 + 0x18;
                    /* catch() { ... } // from try @ 005c0810 with catch @ 005c08c8 */
      iVar5 = lua_dump(plVar7,FUN_005c0c50,&local_68);
                    /* try { // try from 005c08cc to 006c08fb has its CatchHandler @ 005c08cc
                       catch() { ... } // from try @ 005c08cc with catch @ 005c08cc
                       catch() { ... } // from try @ 005c0988 with catch @ 005c08cc
                       catch() { ... } // from try @ 005c0a20 with catch @ 005c08cc */
      if (iVar5 == 0) {
        psVar6 = operator_new(8);
        FUN_0066a528(psVar6,&local_68);
        local_60 = psVar6;
                    /* try { // try from 005c08fc to 006c0903 has its CatchHandler @ 005c0a0c */
        boost::detail::shared_count::shared_count<std::string>((shared_count *)local_58,psVar6);
                    /* try { // try from 005c0904 to 006c097f has its CatchHandler @ 005c0a14 */
        boost::detail::sp_enable_shared_from_this(&local_60,psVar6,psVar6);
        psVar6 = *(string **)(this + 0x18);
        plVar12 = *(long **)(this + 0x20);
        *(string **)(this + 0x18) = local_60;
        *(long **)(this + 0x20) = local_58[0];
        local_60 = psVar6;
        local_58[0] = plVar12;
        if ((plVar12 != (long *)0x0) &&
           (lVar9 = plVar12[1], plVar12[1] = lVar9 + -1, lVar9 + -1 == 0)) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          lVar9 = plVar12[2];
          plVar12[2] = lVar9 + -1;
          if (lVar9 + -1 == 0) {
            (**(code **)(*plVar12 + 0x18))(plVar12);
          }
        }
        uVar11 = 1;
      }
      else {
        uVar11 = 0;
      }
                    /* try { // try from 005c0980 to 006c0987 has its CatchHandler @ 005c0a0c */
      if (local_68 + -0x18 != puVar4) {
        piVar10 = (int *)(local_68 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 005c0a20 to 006c0a8b has its CatchHandler @ 005c08cc */
          iVar5 = *piVar10;
          *piVar10 = iVar5 + -1;
        }
        else {
          do {
            iVar5 = *piVar10;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar2) {
              *piVar10 = iVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar5 < 1) {
          operator_delete(local_68 + -0x18);
        }
      }
    }
    else {
      uVar8 = lua_tolstring(plVar7,1,(ulong *)0x0);
      FUN_00666bb8(&local_60,uVar8,&local_68);
      if (param_2 != (string *)0x0) {
        FUN_0066a6a8(param_2,&local_60);
      }
      if (local_60 + -0x18 != (string *)PTR_DAT_007e5de8) {
        psVar6 = local_60 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar5 = *(int *)psVar6;
          *(int *)psVar6 = iVar5 + -1;
        }
        else {
          do {
            iVar5 = *(int *)psVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(psVar6,0x10);
            if (bVar2) {
              *(int *)psVar6 = iVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
                    /* catch() { ... } // from try @ 005c08fc with catch @ 005c0a0c
                       catch() { ... } // from try @ 005c0980 with catch @ 005c0a0c */
        if (iVar5 < 1) {
                    /* catch() { ... } // from try @ 005c0904 with catch @ 005c0a14 */
                    /* try { // try from 005c0a18 to 006c0a1f has its CatchHandler @ 005c0a88 */
          operator_delete(local_60 + -0x18);
        }
      }
      uVar11 = 0;
    }
                    /* try { // try from 005c0988 to 006c0a17 has its CatchHandler @ 005c08cc */
    lua_close(plVar7);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}


