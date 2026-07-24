/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c173c
 * Function: Caver::PlayerProfile::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(PlayerProfile * this, PlayerProfile * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PlayerProfile::LoadFromProtobufMessage(Caver::Proto::PlayerProfile const&, bool) */

void __thiscall
Caver::PlayerProfile::LoadFromProtobufMessage
          (PlayerProfile *this,PlayerProfile *param_1,bool param_2)

{
  PlayerProfile *pPVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  
  FUN_0066a6a8(this + 0x20,*(undefined8 *)(param_1 + 0x10));
  if (((byte)param_1[0xa8] >> 1 & 1) != 0) {
    pPVar1 = *(PlayerProfile **)PTR_default_instance__007e7368;
    if (*(long *)(param_1 + 0x18) != 0) {
      pPVar1 = param_1;
    }
    DateTime::LoadFromProtobufMessage((DateTime *)(this + 0x28),*(DateTime **)(pPVar1 + 0x18));
  }
  FUN_0066a6a8(this + 0x30,*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x30);
  FUN_0066a6a8(this + 0x48,*(undefined8 *)(param_1 + 0x40));
  FUN_0066a6a8(this + 0x50,*(undefined8 *)(param_1 + 0x48));
  FUN_0066a6a8(this + 0x58,*(undefined8 *)(param_1 + 0x50));
  FUN_0066a6a8(this + 0x60,*(undefined8 *)(param_1 + 0x58));
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar5 = 0;
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x60) + lVar5 * 8);
      uVar2 = *(undefined4 *)(lVar4 + 0x18);
      puVar3 = (undefined4 *)
               std::
               map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                             *)(this + 0x90),*(string **)(lVar4 + 0x10));
      *puVar3 = uVar2;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x68));
  }
  this[0xc0] = *(PlayerProfile *)(param_1 + 0x98);
  if (param_2) {
    pPVar1 = *(PlayerProfile **)PTR_default_instance__007e7368;
    if (*(long *)(param_1 + 0x38) != 0) {
      pPVar1 = param_1;
    }
    LoadGameStateFromProtobufMessage(this,*(GameState **)(pPVar1 + 0x38));
  }
  this[0x68] = (PlayerProfile)0x1;
  return;
}


