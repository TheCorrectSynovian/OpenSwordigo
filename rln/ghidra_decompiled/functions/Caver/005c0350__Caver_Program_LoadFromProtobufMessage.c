/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c0350
 * Function: Caver::Program::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(Program * this, Program * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Program::LoadFromProtobufMessage(Caver::Proto::Program const&) */

void __thiscall Caver::Program::LoadFromProtobufMessage(Program *this,Program *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  long local_68 [2];
  string *local_58;
  long *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar6 = *(uint *)(param_1 + 0x28);
  if ((uVar6 & 1) != 0) {
    FUN_0066a6a8(this,*(undefined8 *)(param_1 + 0x10));
    uVar6 = *(uint *)(param_1 + 0x28);
  }
                    /* try { // try from 005c03a4 to 006c03ab has its CatchHandler @ 005c07fc */
  if (((uVar6 >> 1 & 1) != 0) &&
     (plVar10 = *(long **)(param_1 + 0x18), *(long *)(*plVar10 + -0x18) != 0)) {
    psVar5 = operator_new(8);
    FUN_0066a528(psVar5,plVar10);
    local_58 = psVar5;
    boost::detail::shared_count::shared_count<std::string>((shared_count *)&local_50,psVar5);
                    /* try { // try from 005c03dc to 006c0403 has its CatchHandler @ 005c0804 */
    boost::detail::sp_enable_shared_from_this(&local_58,psVar5,psVar5);
    psVar5 = *(string **)(this + 8);
    plVar10 = *(long **)(this + 0x10);
    *(string **)(this + 8) = local_58;
    *(long **)(this + 0x10) = local_50;
    local_58 = psVar5;
    local_50 = plVar10;
                    /* try { // try from 005c0404 to 006c080f has its CatchHandler @ 005c0044 */
    if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar7 = plVar10[2];
      plVar10[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    uVar6 = *(uint *)(param_1 + 0x28);
  }
  if (((uVar6 >> 2 & 1) != 0) &&
     (plVar10 = *(long **)(param_1 + 0x20), *(long *)(*plVar10 + -0x18) != 0)) {
    psVar5 = operator_new(8);
    FUN_0066a528(psVar5,plVar10);
    local_58 = psVar5;
    boost::detail::shared_count::shared_count<std::string>((shared_count *)&local_50,psVar5);
    boost::detail::sp_enable_shared_from_this(&local_58,psVar5,psVar5);
    psVar5 = *(string **)(this + 0x18);
    plVar10 = *(long **)(this + 0x20);
    *(string **)(this + 0x18) = local_58;
    *(long **)(this + 0x20) = local_50;
    local_58 = psVar5;
    local_50 = plVar10;
    if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar7 = plVar10[2];
      plVar10[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
  }
  puVar4 = PTR_DAT_007e5de8;
  if (*(long *)(this + 8) != 0) {
    local_58 = (string *)(PTR_DAT_007e5de8 + 0x18);
    FUN_0066a528(local_68);
    InitWithString(this,(string *)local_68,(string *)&local_58);
    if ((undefined *)(local_68[0] + -0x18) != puVar4) {
      piVar8 = (int *)(local_68[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_68[0] + -0x18));
      }
    }
    if (local_58 + -0x18 != (string *)puVar4) {
      psVar5 = local_58 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *(int *)psVar5;
        *(int *)psVar5 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *(int *)psVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar2) {
            *(int *)psVar5 = iVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar9 < 1) {
                    /* catch() { ... } // from try @ 005c030c with catch @ 005c05dc */
        operator_delete(local_58 + -0x18);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


