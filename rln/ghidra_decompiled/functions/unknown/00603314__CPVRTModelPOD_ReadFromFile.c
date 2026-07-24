/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00603314
 * Function: CPVRTModelPOD::ReadFromFile
 * Signature: undefined __thiscall ReadFromFile(CPVRTModelPOD * this, char * param_1, char * param_2, ulong param_3, char * param_4, ulong param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::ReadFromFile(char const*, char*, unsigned long, char*, unsigned long) */

undefined4 __thiscall
CPVRTModelPOD::ReadFromFile
          (CPVRTModelPOD *this,char *param_1,char *param_2,ulong param_3,char *param_4,ulong param_5
          )

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  CPVRTResourceFile *this_00;
  ulong uVar4;
  undefined *local_80;
  CPVRTResourceFile *local_78;
  undefined8 local_70;
  long local_68;
  
  puVar2 = PTR_vtable_007e72f0;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_80 = PTR_vtable_007e72f0 + 0x10;
  local_78 = (CPVRTResourceFile *)0x0;
  local_70 = 0;
  this_00 = operator_new(0x20);
  CPVRTResourceFile::CPVRTResourceFile(this_00,param_1);
  local_78 = this_00;
  uVar4 = CPVRTResourceFile::IsOpen(this_00);
  if ((uVar4 & 1) == 0) {
    (**(code **)(*(long *)this_00 + 8))(this_00);
    local_80 = puVar2 + 0x10;
    local_78 = (CPVRTResourceFile *)0x0;
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_0060346c(this,&local_80,param_2,param_3,param_4,param_5);
    local_80 = puVar2 + 0x10;
    if (local_78 != (CPVRTResourceFile *)0x0) {
      (**(code **)(*(long *)local_78 + 8))();
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


