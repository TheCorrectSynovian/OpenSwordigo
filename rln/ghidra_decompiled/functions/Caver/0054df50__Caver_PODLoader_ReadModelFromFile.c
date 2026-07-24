/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054df50
 * Function: Caver::PODLoader::ReadModelFromFile
 * Signature: undefined __thiscall ReadModelFromFile(PODLoader * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PODLoader::ReadModelFromFile(std::string const&) */

void __thiscall Caver::PODLoader::ReadModelFromFile(PODLoader *this,string *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  CPVRTModelPOD *pCVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  CPVRTModelPOD *local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pCVar4 = operator_new(0x88);
  CPVRTModelPOD::CPVRTModelPOD(pCVar4);
  local_48 = pCVar4;
  boost::detail::shared_count::shared_count<CPVRTModelPOD>((shared_count *)&local_40,pCVar4);
  boost::detail::sp_enable_shared_from_this(&local_48,pCVar4,pCVar4);
  pCVar4 = *(CPVRTModelPOD **)this;
  plVar1 = *(long **)(this + 8);
  *(CPVRTModelPOD **)this = local_48;
  *(long **)(this + 8) = local_40;
  local_48 = pCVar4;
  local_40 = plVar1;
  if ((plVar1 != (long *)0x0) && (lVar7 = plVar1[1], plVar1[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar7 = plVar1[2];
    plVar1[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  pCVar4 = *(CPVRTModelPOD **)this;
  pcVar5 = (char *)NewByteBufferFromAndroidAsset(param_1,(uint *)&local_48);
  if ((pcVar5 == (char *)0x0) ||
     (iVar3 = CPVRTModelPOD::ReadFromMemory
                        (pCVar4,pcVar5,(ulong)local_48 & 0xffffffff,(char *)0x0,0,(char *)0x0,0),
     iVar3 != 0)) {
    uVar6 = 0;
  }
  else {
    operator_delete__(pcVar5);
    uVar6 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


