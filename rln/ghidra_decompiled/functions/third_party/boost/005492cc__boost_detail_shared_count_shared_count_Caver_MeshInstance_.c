/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005492cc
 * Function: boost::detail::shared_count::shared_count<Caver::MeshInstance>
 * Signature: undefined __thiscall shared_count<Caver::MeshInstance>(shared_count * this, MeshInstance * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::shared_count::shared_count<Caver::MeshInstance>(Caver::MeshInstance*) */

void __thiscall
boost::detail::shared_count::shared_count<Caver::MeshInstance>
          (shared_count *this,MeshInstance *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(undefined8 *)this = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e72b0;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)this = plVar2;
  return;
}


