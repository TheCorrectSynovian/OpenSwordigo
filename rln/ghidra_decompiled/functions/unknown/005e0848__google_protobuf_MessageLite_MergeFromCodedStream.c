/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e0848
 * Function: google::protobuf::MessageLite::MergeFromCodedStream
 * Signature: undefined __cdecl MergeFromCodedStream(CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::MessageLite::MergeFromCodedStream(google::protobuf::io::CodedInputStream*) */

void google::protobuf::MessageLite::MergeFromCodedStream(CodedInputStream *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  LogMessage *pLVar7;
  int *piVar8;
  int iVar9;
  undefined *local_70;
  LogMessage aLStack_68 [32];
  long local_48;
  LogFinisher aLStack_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar5 = (**(code **)(*(long *)param_1 + 0x40))();
  if ((uVar5 & 1) != 0) {
    uVar5 = (**(code **)(*(long *)param_1 + 0x28))(param_1);
    if ((uVar5 & 1) != 0) {
      uVar6 = 1;
      goto LAB_005e09a4;
    }
    internal::LogMessage::LogMessage(aLStack_68,2,&DAT_00698d03,0x7b);
    puVar4 = PTR_DAT_007e5de8;
    local_70 = PTR_DAT_007e5de8 + 0x18;
    FUN_006677d4(&local_70,"Can\'t ",6);
    FUN_006677d4(&local_70,"parse",5);
    FUN_006677d4(&local_70,&DAT_00698d7e,0x12);
                    /* catch() { ... } // from try @ 005e0964 with catch @ 005e08fc
                       catch() { ... } // from try @ 005e0980 with catch @ 005e08fc */
    (**(code **)(*(long *)param_1 + 0x10))(&local_48,param_1);
    FUN_00667614(&local_70,&local_48);
    if ((undefined *)(local_48 + -0x18) != puVar4) {
                    /* try { // try from 005e09cc to 006e09f3 has its CatchHandler @ 005e0a0c */
      piVar8 = (int *)(local_48 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 005e0a34 to 006e0a9b has its CatchHandler @ 005e0a34
                       catch() { ... } // from try @ 005e0a34 with catch @ 005e0a34
                       catch() { ... } // from try @ 005e0aa8 with catch @ 005e0a34
                       catch() { ... } // from try @ 005e0c0c with catch @ 005e0a34 */
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
        operator_delete((undefined *)(local_48 + -0x18));
      }
    }
                    /* try { // try from 005e093c to 006e0963 has its CatchHandler @ 005e0974 */
    FUN_006677d4(&local_70,"\" because it is missing required fields: ",0x29);
    (**(code **)(*(long *)param_1 + 0x30))(&local_48,param_1);
    FUN_00667614(&local_70,&local_48);
                    /* try { // try from 005e0964 to 006e0977 has its CatchHandler @ 005e08fc */
    if ((undefined *)(local_48 + -0x18) != puVar4) {
                    /* try { // try from 005e09f4 to 006e09fb has its CatchHandler @ 005e0a20 */
      piVar8 = (int *)(local_48 + -8);
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
        operator_delete((undefined *)(local_48 + -0x18));
      }
    }
                    /* catch() { ... } // from try @ 005e093c with catch @ 005e0974 */
                    /* try { // try from 005e0978 to 006e097f has its CatchHandler @ 005e0988 */
    pLVar7 = (LogMessage *)internal::LogMessage::operator<<(aLStack_68,(string *)&local_70);
                    /* try { // try from 005e0980 to 006e098b has its CatchHandler @ 005e08fc */
    internal::LogFinisher::operator=(aLStack_40,pLVar7);
                    /* catch() { ... } // from try @ 005e0978 with catch @ 005e0988 */
                    /* catch() { ... } // from try @ 005e0a18 with catch @ 005e098c */
    if (local_70 + -0x18 != puVar4) {
                    /* try { // try from 005e0a10 to 006e0a17 has its CatchHandler @ 005e0a1c */
                    /* try { // try from 005e0a18 to 006e0a33 has its CatchHandler @ 005e098c */
      piVar8 = (int *)(local_70 + -8);
                    /* catch() { ... } // from try @ 005e0a10 with catch @ 005e0a1c */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
                    /* catch() { ... } // from try @ 005e09f4 with catch @ 005e0a20 */
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
        operator_delete(local_70 + -0x18);
      }
    }
    internal::LogMessage::~LogMessage(aLStack_68);
  }
  uVar6 = 0;
LAB_005e09a4:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


