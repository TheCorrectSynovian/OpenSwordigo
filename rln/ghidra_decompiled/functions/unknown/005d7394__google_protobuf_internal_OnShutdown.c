/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d7394
 * Function: google::protobuf::internal::OnShutdown
 * Signature: undefined __cdecl OnShutdown(_func_void * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::OnShutdown(void (*)()) */

void google::protobuf::internal::OnShutdown(_func_void *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  vector<void(*)(),std::allocator<void(*)()>> *pvVar3;
  Mutex *this;
  _func_void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = param_1;
  pthread_once((pthread_once_t *)PTR_shutdown_functions_init_007e6518,
               (__init_routine *)PTR_InitShutdownFunctions_007e7e68);
  this = *(Mutex **)PTR_shutdown_functions_mutex_007e6de8;
  Mutex::Lock(this);
                    /* catch() { ... } // from try @ 005d732c with catch @ 005d73ec */
  pvVar3 = *(vector<void(*)(),std::allocator<void(*)()>> **)PTR_shutdown_functions_007e7ad8;
  puVar1 = *(undefined8 **)(pvVar3 + 8);
                    /* catch() { ... } // from try @ 005d7334 with catch @ 005d73f4 */
  if (puVar1 == *(undefined8 **)(pvVar3 + 0x10)) {
    std::vector<void(*)(),std::allocator<void(*)()>>::_M_insert_aux(pvVar3,puVar1,&local_40);
  }
  else {
    *puVar1 = param_1;
    *(long *)(pvVar3 + 8) = *(long *)(pvVar3 + 8) + 8;
  }
  Mutex::Unlock(this);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005d7444 to 006d744b has its CatchHandler @ 005d746c */
  __stack_chk_fail();
}


