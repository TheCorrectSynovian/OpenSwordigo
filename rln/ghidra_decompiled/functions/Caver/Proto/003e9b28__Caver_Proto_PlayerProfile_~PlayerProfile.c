/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e9b28
 * Function: Caver::Proto::PlayerProfile::~PlayerProfile
 * Signature: undefined __thiscall ~PlayerProfile(PlayerProfile * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PlayerProfile::~PlayerProfile() */

void __thiscall Caver::Proto::PlayerProfile::~PlayerProfile(PlayerProfile *this)

{
  PlayerProfile *pPVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  *(undefined **)this = PTR_vtable_007e54b8 + 0x10;
  SharedDtor(this);
  iVar3 = *(int *)(this + 0x6c);
  pPVar1 = *(PlayerProfile **)(this + 0x60);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pPVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x6c);
        pPVar1 = *(PlayerProfile **)(this + 0x60);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pPVar1 != this + 0x78) && (pPVar1 != (PlayerProfile *)0x0)) {
    operator_delete__(pPVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


