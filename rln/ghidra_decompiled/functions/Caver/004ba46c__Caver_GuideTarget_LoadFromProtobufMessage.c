/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ba46c
 * Function: Caver::GuideTarget::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(GuideTarget * this, GuideTarget * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuideTarget::LoadFromProtobufMessage(Caver::Proto::GuideTarget const&) */

void __thiscall Caver::GuideTarget::LoadFromProtobufMessage(GuideTarget *this,GuideTarget *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  GuideTarget_LevelObject aGStack_70 [16];
  string *local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0xc) - 1U < 4) {
    *(int *)this = *(int *)(param_1 + 0xc);
  }
  FUN_0066a6a8(this + 8,*(undefined8 *)(param_1 + 0x10));
  FUN_0066a6a8(this + 0x10,*(undefined8 *)(param_1 + 0x18));
  FUN_0066a6a8(this + 0x18,*(undefined8 *)(param_1 + 0x20));
  FUN_0066a6a8(this + 0x20,*(undefined8 *)(param_1 + 0x28));
  this[0x28] = *(GuideTarget *)(param_1 + 0x30);
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar4 = 0;
    do {
      Proto::GuideTarget_LevelObject::GuideTarget_LevelObject
                (aGStack_70,*(GuideTarget_LevelObject **)(*(long *)(param_1 + 0x38) + lVar4 * 8));
      uVar2 = uStack_58;
      uVar3 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)(this + 0x30),local_60);
      FUN_0066a6a8(uVar3,uVar2);
      Proto::GuideTarget_LevelObject::~GuideTarget_LevelObject(aGStack_70);
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x40));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


