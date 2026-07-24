/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d6868
 * Function: google::protobuf::internal::VerifyVersion
 * Signature: undefined __cdecl VerifyVersion(int param_1, int param_2, char * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x005d6c14) */
/* WARNING: Removing unreachable block (ram,0x005d6c50) */
/* WARNING: Removing unreachable block (ram,0x005d6c78) */
/* WARNING: Removing unreachable block (ram,0x005d6d44) */
/* WARNING: Removing unreachable block (ram,0x005d6e18) */
/* WARNING: Removing unreachable block (ram,0x005d6d54) */
/* WARNING: Removing unreachable block (ram,0x005d6d5c) */
/* WARNING: Removing unreachable block (ram,0x005d6d64) */
/* WARNING: Removing unreachable block (ram,0x005d6e24) */
/* WARNING: Removing unreachable block (ram,0x005d6e2c) */
/* WARNING: Removing unreachable block (ram,0x005d6c88) */
/* WARNING: Removing unreachable block (ram,0x005d6d68) */
/* WARNING: Removing unreachable block (ram,0x005d6e38) */
/* WARNING: Removing unreachable block (ram,0x005d6d78) */
/* WARNING: Removing unreachable block (ram,0x005d6d80) */
/* WARNING: Removing unreachable block (ram,0x005d6d88) */
/* WARNING: Removing unreachable block (ram,0x005d6e44) */
/* WARNING: Removing unreachable block (ram,0x005d6e4c) */
/* WARNING: Removing unreachable block (ram,0x005d6c98) */
/* WARNING: Removing unreachable block (ram,0x005d6d8c) */
/* WARNING: Removing unreachable block (ram,0x005d6e58) */
/* WARNING: Removing unreachable block (ram,0x005d6d9c) */
/* WARNING: Removing unreachable block (ram,0x005d6da4) */
/* WARNING: Removing unreachable block (ram,0x005d6dac) */
/* WARNING: Removing unreachable block (ram,0x005d6e64) */
/* WARNING: Removing unreachable block (ram,0x005d6e6c) */
/* google::protobuf::internal::VerifyVersion(int, int, char const*) */

void google::protobuf::internal::VerifyVersion(int param_1,int param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  Mutex *this;
  int iVar5;
  size_t sVar6;
  int *piVar7;
  int iVar8;
  undefined *local_128;
  long local_120;
  long local_118;
  int local_110;
  char *local_108;
  undefined4 local_100;
  undefined *local_f8;
  undefined1 auStack_f0 [8];
  char acStack_e8 [127];
  undefined1 local_69;
  long local_68;
  
  puVar4 = PTR_DAT_007e5de8;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_2 < 0x1e9039) goto joined_r0x005d6e10;
  local_110 = 3;
  local_f8 = PTR_DAT_007e5de8 + 0x18;
  local_108 = "./../../../../Dependencies/protobuf/src/google/protobuf/stubs/common.cc";
  local_100 = 0x3d;
  FUN_006677d4(&local_f8,&DAT_006982c9,0x1e);
  snprintf(acStack_e8,0x80,"%d.%d.%d",(ulong)(uint)param_2 / 1000000,
           (ulong)((uint)param_2 / 1000 + ((uint)param_2 / 1000000) * -1000),
           (ulong)((uint)param_2 % 1000));
  local_69 = 0;
  FUN_00666bb8(&local_118,acStack_e8,&local_120);
  FUN_00667614(&local_f8,&local_118);
  FUN_006677d4(&local_f8," of the Protocol Buffer runtime library, but the installed version is ",
               0x46);
  snprintf(acStack_e8,0x80,"%d.%d.%d",2,3,0);
  local_69 = 0;
  FUN_00666bb8(&local_120,acStack_e8,auStack_f0);
  FUN_00667614(&local_f8,&local_120);
  FUN_006677d4(&local_f8,&DAT_0069832f,0xcd);
  sVar6 = strlen(param_3);
  FUN_006677d4(&local_f8,param_3,sVar6);
  FUN_006677d4(&local_f8,&DAT_006983fd,3);
  if (local_110 == 3) {
    iVar5 = 3;
LAB_005d6a48:
    (*(code *)PTR_DefaultLogHandler_007e8900)(iVar5,local_108,local_100,&local_f8);
  }
  else {
    pthread_once((pthread_once_t *)PTR_log_silencer_count_init__007e6800,
                 (__init_routine *)PTR_InitLogSilencerCount_007e5938);
    this = DAT_007ea058;
    Mutex::Lock(DAT_007ea058);
    iVar8 = DAT_007ea060;
                    /* try { // try from 005d6a38 to 006d6def has its CatchHandler @ 005d6a38
                       catch() { ... } // from try @ 005d6a38 with catch @ 005d6a38
                       catch() { ... } // from try @ 005d6e00 with catch @ 005d6a38
                       catch() { ... } // from try @ 005d711c with catch @ 005d6a38
                       catch() { ... } // from try @ 005d7220 with catch @ 005d6a38 */
    Mutex::Unlock(this);
    iVar5 = local_110;
    if (iVar8 < 1) goto LAB_005d6a48;
  }
  if (local_110 == 3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((undefined *)(local_120 + -0x18) != puVar4) {
    piVar7 = (int *)(local_120 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_120 + -0x18));
    }
  }
  if ((undefined *)(local_118 + -0x18) != puVar4) {
    piVar7 = (int *)(local_118 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_118 + -0x18));
    }
  }
  if (local_f8 + -0x18 != puVar4) {
    piVar7 = (int *)(local_f8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 005d6df0 to 006d6dff has its CatchHandler @ 005d71d0 */
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 005d6e00 to 006d70f3 has its CatchHandler @ 005d6a38 */
    if (iVar8 < 1) {
      operator_delete(local_f8 + -0x18);
    }
  }
joined_r0x005d6e10:
  if (param_1 < 0x1e9038) {
    local_128 = PTR_DAT_007e5de8 + 0x18;
    FUN_006677d4(&local_128,"This program was compiled against version ",0x2a);
    snprintf(acStack_e8,0x80,"%d.%d.%d",(ulong)(uint)(param_1 / 1000000),
             (ulong)(uint)((param_1 / 1000) % 1000),(ulong)(uint)(param_1 % 1000));
    local_69 = 0;
    FUN_00666bb8(&local_118,acStack_e8,&local_120);
    FUN_00667614(&local_128,&local_118);
    FUN_006677d4(&local_128,&DAT_0069842c,0x5d);
    snprintf(acStack_e8,0x80,"%d.%d.%d",2,3,0);
    local_69 = 0;
    FUN_00666bb8(&local_120,acStack_e8,auStack_f0);
    FUN_00667614(&local_128,&local_120);
    FUN_006677d4(&local_128,0x69848a,0xdc);
    sVar6 = strlen(param_3);
    FUN_006677d4(&local_128,param_3,sVar6);
    FUN_006677d4(&local_128,&DAT_006983fd,3);
    (*(code *)PTR_DefaultLogHandler_007e8900)
              (3,"./../../../../Dependencies/protobuf/src/google/protobuf/stubs/common.cc",0x48,
               &local_128);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


