/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00563c74
 * Function: Caver::Scene::SaveToFile
 * Signature: undefined __thiscall SaveToFile(Scene * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::SaveToFile(std::string const&) const */

uint __thiscall Caver::Scene::SaveToFile(Scene *this,string *param_1)

{
  long lVar1;
  uint uVar2;
  Scene aSStack_d8 [160];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Proto::Scene::Scene(aSStack_d8);
  SaveToProtobufMessage(this,aSStack_d8);
  uVar2 = SaveProtobufMessageToFile((MessageLite *)aSStack_d8,param_1);
  Proto::Scene::~Scene(aSStack_d8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


