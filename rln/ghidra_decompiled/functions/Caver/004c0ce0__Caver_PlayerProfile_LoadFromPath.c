/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c0ce0
 * Function: Caver::PlayerProfile::LoadFromPath
 * Signature: undefined __thiscall LoadFromPath(PlayerProfile * this, string * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PlayerProfile::LoadFromPath(std::string const&, bool) */

undefined4 __thiscall
Caver::PlayerProfile::LoadFromPath(PlayerProfile *this,string *param_1,bool param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  PlayerProfile aPStack_f8 [176];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FileExistsAtPath(param_1);
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    Proto::PlayerProfile::PlayerProfile(aPStack_f8);
    pvVar3 = (void *)NewByteBufferFromFile(param_1,(uint *)(this + 0x10));
    pvVar4 = *(void **)(this + 8);
    *(void **)(this + 8) = pvVar3;
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
      pvVar3 = *(void **)(this + 8);
    }
    if ((pvVar3 == (void *)0x0) ||
       (uVar2 = google::protobuf::MessageLite::ParseFromArray
                          ((MessageLite *)aPStack_f8,pvVar3,*(uint *)(this + 0x10)),
       (uVar2 & 1) == 0)) {
      uVar5 = 0;
    }
    else {
      LoadFromProtobufMessage(this,aPStack_f8,param_2);
      uVar5 = 1;
    }
    Proto::PlayerProfile::~PlayerProfile(aPStack_f8);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


