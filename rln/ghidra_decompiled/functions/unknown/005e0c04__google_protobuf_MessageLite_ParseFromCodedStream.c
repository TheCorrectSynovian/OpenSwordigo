/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e0c04
 * Function: google::protobuf::MessageLite::ParseFromCodedStream
 * Signature: undefined __thiscall ParseFromCodedStream(MessageLite * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::MessageLite::ParseFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
google::protobuf::MessageLite::ParseFromCodedStream(MessageLite *this,CodedInputStream *param_1)

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
  
                    /* try { // try from 005e0c04 to 006e0c0b has its CatchHandler @ 005e0c40 */
                    /* try { // try from 005e0c0c to 006e0c2f has its CatchHandler @ 005e0a34 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 005e0bdc with catch @ 005e0c2c */
                    /* try { // try from 005e0c30 to 006e0c37 has its CatchHandler @ 005e0c3c */
  (**(code **)(*(long *)this + 0x20))();
                    /* catch() { ... } // from try @ 005e0c30 with catch @ 005e0c3c */
                    /* catch() { ... } // from try @ 005e0af4 with catch @ 005e0c40
                       catch() { ... } // from try @ 005e0c04 with catch @ 005e0c40 */
  uVar5 = (**(code **)(*(long *)this + 0x40))(this,param_1);
                    /* try { // try from 005e0c4c to 006e0c97 has its CatchHandler @ 005e0c4c
                       catch() { ... } // from try @ 005e0c4c with catch @ 005e0c4c
                       catch() { ... } // from try @ 005e0cd0 with catch @ 005e0c4c
                       catch() { ... } // from try @ 005e0d8c with catch @ 005e0c4c */
  if ((uVar5 & 1) != 0) {
    uVar5 = (**(code **)(*(long *)this + 0x28))(this);
    if ((uVar5 & 1) != 0) {
      uVar6 = 1;
      goto LAB_005e0d78;
    }
    internal::LogMessage::LogMessage(aLStack_68,2,&DAT_00698d03,0x7b);
    puVar4 = PTR_DAT_007e5de8;
    local_70 = PTR_DAT_007e5de8 + 0x18;
                    /* try { // try from 005e0c98 to 006e0cab has its CatchHandler @ 005e0d94 */
    FUN_006677d4(&local_70,"Can\'t ",6);
    FUN_006677d4(&local_70,"parse",5);
                    /* try { // try from 005e0cc4 to 006e0ccf has its CatchHandler @ 005e0d60 */
    FUN_006677d4(&local_70,&DAT_00698d7e,0x12);
                    /* try { // try from 005e0cd0 to 006e0d83 has its CatchHandler @ 005e0c4c */
    (**(code **)(*(long *)this + 0x10))(&local_48,this);
    FUN_00667614(&local_70,&local_48);
    if ((undefined *)(local_48 + -0x18) != puVar4) {
      piVar8 = (int *)(local_48 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 005e0e08 to 006e0e47 has its CatchHandler @ 005e0e08
                       catch() { ... } // from try @ 005e0e08 with catch @ 005e0e08
                       catch() { ... } // from try @ 005e0e4c with catch @ 005e0e08
                       catch() { ... } // from try @ 005e0f54 with catch @ 005e0e08
                       catch() { ... } // from try @ 005e0f7c with catch @ 005e0e08
                       catch() { ... } // from try @ 005e1054 with catch @ 005e0e08
                       catch() { ... } // from try @ 005e1568 with catch @ 005e0e08 */
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
    FUN_006677d4(&local_70,"\" because it is missing required fields: ",0x29);
    (**(code **)(*(long *)this + 0x30))(&local_48,this);
    FUN_00667614(&local_70,&local_48);
    if ((undefined *)(local_48 + -0x18) != puVar4) {
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
    pLVar7 = (LogMessage *)internal::LogMessage::operator<<(aLStack_68,(string *)&local_70);
    internal::LogFinisher::operator=(aLStack_40,pLVar7);
                    /* catch() { ... } // from try @ 005e0cc4 with catch @ 005e0d60 */
    if (local_70 + -0x18 != puVar4) {
      piVar8 = (int *)(local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 005e0e48 to 006e0e4b has its CatchHandler @ 005e1574 */
        iVar9 = *piVar8;
                    /* try { // try from 005e0e4c to 006e0eeb has its CatchHandler @ 005e0e08 */
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
        operator_delete(local_70 + -0x18);
      }
    }
    internal::LogMessage::~LogMessage(aLStack_68);
  }
  uVar6 = 0;
LAB_005e0d78:
                    /* try { // try from 005e0d84 to 006e0d8b has its CatchHandler @ 005e0d90 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
                    /* try { // try from 005e0d8c to 006e0e07 has its CatchHandler @ 005e0c4c */
                    /* catch() { ... } // from try @ 005e0d84 with catch @ 005e0d90 */
                    /* catch() { ... } // from try @ 005e0c98 with catch @ 005e0d94 */
  return;
}


