/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e18f4
 * Function: google::protobuf::MessageLite::ParseFromArray
 * Signature: undefined __thiscall ParseFromArray(MessageLite * this, void * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* google::protobuf::MessageLite::ParseFromArray(void const*, int) */

bool __thiscall
google::protobuf::MessageLite::ParseFromArray(MessageLite *this,void *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  LogMessage *pLVar6;
  int *piVar7;
  int iVar8;
  long local_c8;
  void *pvStack_c0;
  long local_b8;
  int local_b0;
  undefined8 local_ac;
  undefined2 local_a4;
  int local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  LogFinisher aLStack_78 [8];
  undefined *local_70;
  LogMessage aLStack_68 [32];
  long local_48 [2];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_b8 = (long)param_1 + (long)param_2;
  local_c8 = 0;
  local_a4 = 0;
  local_ac = 0;
  uStack_94 = _DAT_006987e8;
  local_9c = _DAT_006987e0;
  local_8c = 0x40;
  local_88 = 0;
  uStack_80 = 0;
  pvStack_c0 = param_1;
  local_b0 = param_2;
  local_a0 = param_2;
  (**(code **)(*(long *)this + 0x20))();
  uVar5 = (**(code **)(*(long *)this + 0x40))(this,&local_c8);
  if ((uVar5 & 1) != 0) {
    uVar5 = (**(code **)(*(long *)this + 0x28))(this);
    if ((uVar5 & 1) != 0) {
      bVar4 = (char)local_a4 != '\0';
      goto joined_r0x005e1aac;
    }
                    /* try { // try from 005e19ac to 006e19b3 has its CatchHandler @ 005e1c24 */
    internal::LogMessage::LogMessage(aLStack_68,2,&DAT_00698d03,0x7b);
    puVar3 = PTR_DAT_007e5de8;
    local_70 = PTR_DAT_007e5de8 + 0x18;
    FUN_006677d4(&local_70,"Can\'t ",6);
    FUN_006677d4(&local_70,"parse",5);
    FUN_006677d4(&local_70,&DAT_00698d7e,0x12);
                    /* try { // try from 005e1a0c to 006e1a23 has its CatchHandler @ 005e1d1c */
    (**(code **)(*(long *)this + 0x10))(local_48,this);
    FUN_00667614(&local_70,local_48);
    if ((undefined *)(local_48[0] + -0x18) != puVar3) {
      piVar7 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
    FUN_006677d4(&local_70,"\" because it is missing required fields: ",0x29);
                    /* try { // try from 005e1a44 to 006e1a4f has its CatchHandler @ 005e1be0 */
    (**(code **)(*(long *)this + 0x30))(local_48,this);
    FUN_00667614(&local_70,local_48);
    if ((undefined *)(local_48[0] + -0x18) != puVar3) {
      piVar7 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
                    /* try { // try from 005e1a74 to 006e1a77 has its CatchHandler @ 005e1c14 */
    pLVar6 = (LogMessage *)internal::LogMessage::operator<<(aLStack_68,(string *)&local_70);
    internal::LogFinisher::operator=(aLStack_78,pLVar6);
                    /* try { // try from 005e1a98 to 006e1aa3 has its CatchHandler @ 005e1bd8 */
    if (local_70 + -0x18 != puVar3) {
                    /* try { // try from 005e1b28 to 006e1b33 has its CatchHandler @ 005e1d04 */
      piVar7 = (int *)(local_70 + -8);
                    /* try { // try from 005e1b34 to 006e1bb3 has its CatchHandler @ 005e1704 */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete(local_70 + -0x18);
      }
    }
    internal::LogMessage::~LogMessage(aLStack_68);
  }
  bVar4 = false;
joined_r0x005e1aac:
  if (local_c8 != 0) {
    io::CodedInputStream::BackUpInputToCurrentPosition((CodedInputStream *)&local_c8);
  }
                    /* try { // try from 005e1ac0 to 006e1ae7 has its CatchHandler @ 005e1cfc */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


