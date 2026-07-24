/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042d0fc
 * Function: Caver::Proto::PortalComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalComponent::New() const */

void Caver::Proto::PortalComponent::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  plVar4 = operator_new(0x28);
  puVar2 = PTR_vtable_007e6f58;
  plVar4[1] = 0;
  puVar3 = PTR__default_spawn_point_name__007e72a0;
  puVar1 = PTR__default_destination_scene_name__007e6a68;
  *(undefined1 *)(plVar4 + 4) = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[3] = (long)puVar3;
  plVar4[2] = (long)puVar1;
  *(undefined4 *)((long)plVar4 + 0x24) = 0;
  return;
}


