/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c08cc
 * Function: Caver::PlayerProfile::Save
 * Signature: undefined __thiscall Save(PlayerProfile * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PlayerProfile::Save(bool) */

void __thiscall Caver::PlayerProfile::Save(PlayerProfile *this,bool param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 *puVar7;
  int *piVar8;
  int iVar9;
  long local_f0;
  PlayerProfile aPStack_e8 [176];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  LocalFilePath(this);
  Proto::PlayerProfile::PlayerProfile(aPStack_e8);
  SaveToProtobufMessage(this,aPStack_e8);
  uVar4 = Proto::PlayerProfile::ByteSize(aPStack_e8);
  *(uint *)(this + 0x10) = uVar4;
  pvVar5 = operator_new__((ulong)uVar4);
  pvVar6 = *(void **)(this + 8);
  *(void **)(this + 8) = pvVar5;
  if (pvVar6 != (void *)0x0) {
    operator_delete__(pvVar6);
    pvVar5 = *(void **)(this + 8);
    uVar4 = *(uint *)(this + 0x10);
  }
  google::protobuf::MessageLite::SerializeToArray((MessageLite *)aPStack_e8,pvVar5,uVar4);
  SaveByteBufferToFile(*(uchar **)(this + 8),*(uint *)(this + 0x10),(string *)&local_f0);
  puVar7 = *(undefined8 **)this;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,this,param_1);
  }
  Proto::PlayerProfile::~PlayerProfile(aPStack_e8);
  if ((undefined *)(local_f0 + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_f0 + -8);
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
      operator_delete((undefined *)(local_f0 + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


