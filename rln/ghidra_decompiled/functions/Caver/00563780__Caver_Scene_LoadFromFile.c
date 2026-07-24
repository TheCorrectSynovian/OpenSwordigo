/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00563780
 * Function: Caver::Scene::LoadFromFile
 * Signature: undefined __thiscall LoadFromFile(Scene * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::LoadFromFile(std::string const&) */

bool __thiscall Caver::Scene::LoadFromFile(Scene *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  Scene aSStack_d8 [160];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  Proto::Scene::Scene(aSStack_d8);
  uVar3 = LoadProtobufMessageFromFile((MessageLite *)aSStack_d8,param_1);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    LoadFromProtobufMessage(this,aSStack_d8);
  }
  Proto::Scene::~Scene(aSStack_d8);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0056382c with catch @ 005637f4
                       catch(type#1 @ 00000000) { ... } // from try @ 00563990 with catch @ 005637f4
                        */
  return bVar1;
}


